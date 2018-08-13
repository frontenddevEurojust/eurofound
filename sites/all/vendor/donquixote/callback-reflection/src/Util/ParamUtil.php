<?php

namespace Donquixote\CallbackReflection\Util;

final class ParamUtil extends UtilBase {

  /**
   * @param \ReflectionParameter[] $params
   * @param mixed[] $args
   *
   * @return bool
   */
  static function paramsValidateArgs(array $params, array $args) {

    // Check that $args is a regular numerically indexed array.
    if ($args !== array_values($args)) {
      return FALSE;
    }

    $nArgs = count($args);
    $nParams = count($params);

    // Check that not too many arguments are given.
    if ($nArgs > $nParams) {
      return FALSE;
    }

    // Check that all required arguments are given.
    if ($nArgs < $nParams && !$params[$nArgs]->isOptional()) {
      return FALSE;
    }

    // Validate each argument separately.
    foreach ($args as $i => $arg) {
      if (!self::paramValidateArg($params[$i], $arg)) {
        return FALSE;
      }
    }

    return TRUE;
  }

  /**
   * @param \ReflectionParameter $param
   * @param mixed $arg
   *
   * @return bool
   */
  static function paramValidateArg(\ReflectionParameter $param, $arg) {
    if (NULL !== $expectedClassLike = $param->getClass()) {
      $expectedClassLikeName = $expectedClassLike->getName();
      if ($arg instanceof $expectedClassLikeName) {
        return TRUE;
      }
    }
    elseif ($param->isArray()) {
      if (is_array($arg)) {
        return TRUE;
      }
    }
    else {
      return TRUE;
    }
    if ($param->isOptional()) {
      if ($arg === $param->getDefaultValue()) {
        return TRUE;
      }
    }
    return FALSE;
  }

}
