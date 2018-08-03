<?php

namespace Donquixote\CallbackReflection\Callback;

use Donquixote\CallbackReflection\CodegenHelper\CodegenHelperInterface;
use Donquixote\CallbackReflection\Util\CodegenUtil;

class CallbackReflection_StaticMethod implements CallbackReflectionInterface {

  /**
   * @var \ReflectionMethod
   */
  private $reflMethod;

  /**
   * @param string $className
   * @param string $methodName
   *
   * @return \Donquixote\CallbackReflection\Callback\CallbackReflection_StaticMethod
   */
  static function create($className, $methodName) {
    $reflectionMethod = new \ReflectionMethod($className, $methodName);
    return new self($reflectionMethod);
  }

  /**
   * @param \ReflectionMethod $reflMethod
   */
  function __construct(\ReflectionMethod $reflMethod) {
    $this->reflMethod = $reflMethod;
  }

  /**
   * @return \ReflectionParameter[]
   */
  function getReflectionParameters() {
    return $this->reflMethod->getParameters();
  }

  /**
   * @param mixed[] $args
   *
   * @return mixed|null
   */
  function invokeArgs(array $args) {
    return $this->reflMethod->invokeArgs(NULL, $args);
  }

  /**
   * @param string[] $argsPhp
   *   PHP statements for each parameter.
   * @param \Donquixote\CallbackReflection\CodegenHelper\CodegenHelperInterface $helper
   *
   * @return string
   *   PHP statement.
   */
  public function argsPhpGetPhp(array $argsPhp, CodegenHelperInterface $helper) {
    $arglistPhp = CodegenUtil::argsPhpGetArglistPhp($argsPhp);
    return '\\' . $this->reflMethod->getDeclaringClass()->getName() . '::' . $this->reflMethod->getName() . '(' . $arglistPhp . ')';
  }
}
