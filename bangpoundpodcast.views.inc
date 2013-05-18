<?php

/**
 * Implements hook_views_plugins().
 */
function bangpoundpodcast_views_plugins() {
  return array(
    'row' => array(
      'podcast_rss' => array(
        'title' => t('Podcast'),
        'help' => t('Display the content with standard node view.'),
        'handler' => 'bangpoundpodcast_plugin_row_node_rss',
        'theme' => 'views_view_row_rss',
        'base' => array('node'),
        'uses options' => TRUE,
        'type' => 'feed',
      ),
    ),
  );
}
