<?php
/**
 * @file
 * lullablog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lullablog_user_default_permissions() {
  $permissions = array();

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'Lulla Blogger',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'Lulla Blogger',
      1 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: create blog_post content
  $permissions['create blog_post content'] = array(
    'name' => 'create blog_post content',
    'roles' => array(
      0 => 'Lulla Blogger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog_post content
  $permissions['delete any blog_post content'] = array(
    'name' => 'delete any blog_post content',
    'roles' => array(
      0 => 'Lulla Blogger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog_post content
  $permissions['delete own blog_post content'] = array(
    'name' => 'delete own blog_post content',
    'roles' => array(
      0 => 'Lulla Blogger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any blog_post content
  $permissions['edit any blog_post content'] = array(
    'name' => 'edit any blog_post content',
    'roles' => array(
      0 => 'Lulla Blogger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog_post content
  $permissions['edit own blog_post content'] = array(
    'name' => 'edit own blog_post content',
    'roles' => array(
      0 => 'Lulla Blogger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'Lulla Blogger',
      1 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'Lulla Blogger',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: skip comment approval
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'Lulla Blogger',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Lulla Blogger',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
