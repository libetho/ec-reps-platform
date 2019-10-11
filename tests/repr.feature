Feature: Custom tests for repr

  @api
  Scenario Outline: REPR-1739 check that anonymous do not have access 
  at all to the detail page for some content types. 

  Given I am an anonymous user
  Given I am viewing a "<node>" with the title "REPR-1739" 

  Examples: 
  | node |
    | Contact point |
    | Slide footer |
    | Slide homepage |
    | Homepage additional block |
    | Video |
 
  Then I should not see the text "REPR-1739"

  @api
  Scenario Outline: REPR-1739 check that anonymous do not have access
  at all to the detail page for vocabularies.

  Given I am an anonymous user
  Given I am viewing a "<vocabulary>" term with the name "REPR-1739"

  Examples:
  | vocabulary |
    | classification |
    | Media Folders |
    | Metatags ESS GF |
    | REPS Contact point categories |
    | Tags |
    | REPS News Categories |

  Then I should not see the text "REPR-1739"

  @api
  Scenario Outline: Editors can create necessary content type
    Given I am logged in as a user with the "editor" role
    Then I visit "<path>"

    Examples:
    | path |
    | node/add/reps-news |
    | node/add/reps-event |
    | node/add/reps-video |
    | node/add/page |
    | node/add/reps-homepage-additional-block |
    | node/add/reps-publication |
    | node/add/reps-slide-footer |
    | node/add/reps-slide-homepage |
