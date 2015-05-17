<?php
/**
 * @file
 * esdportal_str.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function esdportal_str_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'schools';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api/1.0';
  $endpoint->authentication = array();
  $endpoint->server_settings = array(
    'formatters' => array(
      'bencode' => TRUE,
      'json' => TRUE,
      'jsonp' => TRUE,
      'php' => TRUE,
      'xml' => TRUE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/xml' => TRUE,
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
      'application/x-www-form-urlencoded' => FALSE,
    ),
    'docs' => array(
      'ec_state_ratings' => array(
        'operations' => array(
          'retrieve' => array(
            'enable' => 1,
            'description' => '',
            'request_url' => '',
            'response' => '{
    "PublishedRating": "4", 
    "esd_ec_id": "820021087", 
    "ptsAdmin": "6", 
    "ptsCurr": "12", 
    "ptsEnv": "6", 
    "ptsFamily": "2", 
    "ptsStaff": "12", 
    "ptsTotal": "38", 
    "rating_id": "4158", 
    "source": "google sheet", 
    "timestamp": "1429388310"
}',
            'auth' => 0,
          ),
          'index' => array(
            'enable' => 1,
            'description' => '',
            'request_url' => '',
            'response' => '{
    "ec_state_ratings": [
        {
            "PublishedRating": "Empty Star", 
            "esd_ec_id": "630295306", 
            "ptsAdmin": null, 
            "ptsCurr": null, 
            "ptsEnv": null, 
            "ptsFamily": null, 
            "ptsStaff": null, 
            "ptsTotal": null, 
            "rating_id": "4096", 
            "source": "google sheet", 
            "timestamp": "1429388310"
        },
        {
            "PublishedRating": "4", 
            "esd_ec_id": "820021087", 
            "ptsAdmin": "6", 
            "ptsCurr": "12", 
            "ptsEnv": "6", 
            "ptsFamily": "2", 
            "ptsStaff": "12", 
            "ptsTotal": "38", 
            "rating_id": "4158", 
            "source": "google sheet", 
            "timestamp": "1429388310"
        }, 
        {
            "PublishedRating": "Empty Star", 
            "esd_ec_id": "630347309", 
            "ptsAdmin": null, 
            "ptsCurr": null, 
            "ptsEnv": null, 
            "ptsFamily": null, 
            "ptsStaff": null, 
            "ptsTotal": null, 
            "rating_id": "4097", 
            "source": "google sheet", 
            "timestamp": "1429388310"
        }
        // etc
    ]
}',
            'auth' => 0,
          ),
        ),
      ),
      'ecs' => array(
        'operations' => array(
          'retrieve' => array(
            'enable' => 1,
            'description' => '',
            'request_url' => '',
            'response' => '',
            'auth' => 0,
          ),
          'index' => array(
            'enable' => 1,
            'description' => 'List early childhood centers',
            'request_url' => '',
            'response' => '',
            'auth' => 0,
          ),
        ),
      ),
      'node' => array(
        'operations' => array(
          'retrieve' => array(
            'enable' => 1,
            'description' => 'retrieve a single node',
            'request_url' => '',
            'response' => '',
            'auth' => 0,
          ),
        ),
      ),
      'schools' => array(
        'operations' => array(
          'retrieve' => array(
            'enable' => 1,
            'description' => '',
            'request_url' => '',
            'response' => '',
            'auth' => 0,
          ),
          'index' => array(
            'enable' => 1,
            'description' => '',
            'request_url' => '',
            'response' => '',
            'auth' => 0,
          ),
        ),
      ),
    ),
  );
  $endpoint->resources = array(
    'ec_state_ratings' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'ecs' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'node' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'schools' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'taxonomy_term' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'index' => array(
          'enabled' => '1',
        ),
      ),
      'actions' => array(
        'selectNodes' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'taxonomy_vocabulary' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'index' => array(
          'enabled' => '1',
        ),
      ),
      'actions' => array(
        'getTree' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'views' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['schools'] = $endpoint;

  return $export;
}
