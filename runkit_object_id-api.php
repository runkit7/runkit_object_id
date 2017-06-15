<?php

/**
 * Gets a unique integer identifier (Will be reused when the object is garbage collected) for an object.
 * This is similar to `spl_object_hash`, but returns an int instead of a string.
 *
 * @param object $obj - The object
 * @return ?int - Returns null if given a non-object.
 */
function runkit_object_id($obj) {
    // Stub implementation if this extension isn't installed, for php 7.0 and 7.1:
    $hash = spl_object_hash($object);
    if ($hash !== null) {
        // Fit this into a php long (32-bit or 64-bit signed int).
        if (PHP_INT_SIZE === 8) {
            // The first 16 hex digits (64 bytes) vary, the last 16 don't.
            // Values are usually padded with 0s at the front.
            return intval(substr($hash, 1, 15), 16);
        } else {
            return intval(substr($hash, 9, 7), 16);
        }
    }
    return null;
}
