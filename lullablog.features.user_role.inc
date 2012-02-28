<?php
/**
 * @file
 * lullablog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function lullablog_user_default_roles() {
  $roles = array();

  // Exported role: Lulla Blogger
  $roles['Lulla Blogger'] = array(
    'name' => 'Lulla Blogger',
    'weight' => '3',
  );

  return $roles;
}
