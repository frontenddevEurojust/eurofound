<?php

namespace Drupal\cfrreflection\ValueToCallback;

/**
 * Turns a value into a callback.
 * The value could be e.g. a class name or method name from a definition array.
 *
 * @see \Drupal\cfrreflection\CfrGen\ArgDefToConfigurator\ArgDefToConfigurator_Callback
 */
interface ValueToCallbackInterface {

  /**
   * @param mixed $value
   *   A value that specifies a callback, typically from a plugin definition.
   *
   * @return \Donquixote\CallbackReflection\Callback\CallbackReflectionInterface|null
   */
  public function valueGetCallback($value);

}
