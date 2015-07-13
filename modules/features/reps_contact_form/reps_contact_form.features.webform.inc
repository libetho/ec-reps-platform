<?php
/**
 * @file
 * reps_contact_form.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function reps_contact_form_webform_defaults() {
  $webforms = array();
  $webforms['reps_contact_form'] = (object) array(
    'title' => 'Online enquiry',
    'log' => '',
    'status' => 1,
    'comment' => 2,
    'promote' => 1,
    'sticky' => 0,
    'vuuid' => 'a10bb4c7-4c2f-43dc-8f69-1a4782bfaf12',
    'type' => 'webform',
    'language' => 'en',
    'tnid' => 0,
    'translate' => 0,
    'uuid' => '409a791f-aa95-4c24-a1ba-f0ef2a0ead57',
    'body' => array(),
    'title_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Online enquiry',
          'format' => NULL,
          'safe_value' => 'Online enquiry',
        ),
      ),
    ),
    'title_original' => 'Online enquiry',
    'entity_translation_handler_id' => 'node-eid-6-6',
    'translations' => (object) array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'node',
          'entity_id' => 6,
          'revision_id' => 6,
          'language' => 'en',
          'source' => '',
          'uid' => 0,
          'status' => 1,
          'translate' => 0,
          'created' => 1434619543,
          'changed' => 1434619543,
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'translations' => (object) array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'node',
          'entity_id' => 6,
          'revision_id' => 6,
          'language' => 'en',
          'source' => '',
          'uid' => 0,
          'status' => 1,
          'translate' => 0,
          'created' => 1434619543,
          'changed' => 1434619543,
        ),
      ),
    ),
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'machine_name' => 'reps_contact_form',
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        'reps_contact_form__heading' => array(
          'form_key' => 'heading',
          'name' => 'Heading',
          'type' => 'markup',
          'value' => '<h3 class="reps_title_contact">Please submit your enquiry by completing the form below:</h3>
            <p>Please read the privacy_policy statement</p>
            <p class="reps_required">(*)= required information</p>',
          'extra' => array(
            'conditional_operator' => '=',
            'format' => 'full_html',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 0,
          'machine_name' => 'reps_contact_form__heading',
          'page_num' => 1,
        ),
        'reps_contact_form__first_name' => array(
          'form_key' => 'first_name',
          'name' => 'First name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 1,
          'machine_name' => 'reps_contact_form__first_name',
          'page_num' => 1,
        ),
        'reps_contact_form__last_name' => array(
          'form_key' => 'last_name',
          'name' => 'Last name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 2,
          'machine_name' => 'reps_contact_form__last_name',
          'page_num' => 1,
        ),
        'reps_contact_form__email_address' => array(
          'form_key' => 'email_address',
          'name' => 'Email address',
          'type' => 'email',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 3,
          'machine_name' => 'reps_contact_form__email_address',
          'page_num' => 1,
        ),
        'reps_contact_form__subject' => array(
          'form_key' => 'subject',
          'name' => 'Subject',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 4,
          'machine_name' => 'reps_contact_form__subject',
          'page_num' => 1,
        ),
      ),
    ),
    'cid' => 0,
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'comment_count' => 0,
    'name' => 'admin',
    'picture' => 0,
    'data' => 'a:1:{s:7:"contact";i:1;}',
    'print_html_display' => 1,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 1,
    'print_mail_display' => 1,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 1,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => NULL,
    'print_pdf_orientation' => NULL,
    'webform_features_author' => 'admin',
    'webform_features_revision_author' => '',
  );
  return $webforms;
}
