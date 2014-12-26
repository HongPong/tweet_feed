<?php

/**
 * Implements hook_drush_command
 */
function tweet_feed_drush_command() {
  $items = array();
  $items['tf-import-tweets'] = array(
    'description' => t('Import All Tweets'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'options' => array(
      'fid' => array(
        'description' => 'The numberic ID of the feed you wish to process. Omit to process all feeds.',
      ),
    ),
    'examples' => array(
      'tf-import-tweets' => 'Load the tweets for all configured feeds.',
      'tf-import-tweets --fid=1' => 'Load the tweets for feed ID 1',
    ),
  );
  return $items;
}

/**
 * Import Tweets
 *
 * Drush command to import all tweets from all feeds or just the one specified. 
 * TODO: Allow specifying import by machine name
 *
 * Implements drush_HOOK_COMMAND
 */
function drush_tweet_feed_tf_import_tweets() {
  $fid = drush_get_option('fid');
  $fid = (!empty($fid)) ? $fid : NULL;
  tweet_feed_process_feed($fid);
}