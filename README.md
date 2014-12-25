Tweet Feed 3.0
==========

NOTE THAT THE CURRENT WORKING DEFAULT BRANCH IS FOR THE VERY NEW v2.0 OF TWEET FEED. TO GET THE CODE FOR THE 1.x BRANCH PLEASE OBTAIN FROM DRUPAL.ORG OR BE SURE TO SWITCH BRANCHES USING THE PULLDOWN ABOVE.

A module to integrate Twitter feeds using Views. Works with Twitter API v1.1 - all you need are the access tokens from a created application. You can specify to pull tweets by timeline or search. These are then presented using Views (sample view template provided) where you can display imported information and filter by criteria. A new feature is a contextual filter which can be added to filter tweets by hashtag.

This module is specifically geared toward Drupal 8. There is no planned port of version 3.x to Drupal 7 or Drupal 6. Version 3.x stores tweets and tweet portfolio data in separate entities outside the standard node/content system and has its own CRUD system by which to view and work with these entities. They can also be referenced by nodes using Entity References.

This module also creates linked URLs from URLs, Hash Tags and Usernames inside the feed itself.

You will need to provide an API Key, API Secret Key, Access Token and Access Token Secret that you get from your API on Twitter. Once those have been provided you will also want to enter a term by which to search twitter. This should contain the criteria by which you wish to extract data from Twitter.

Tweets can be imported using cron commands, manually via the UI or using a variety of drush commands. Documentation on these is forthcoming in this README.
