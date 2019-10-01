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
    | video |
 
  Then I should not see the text "REPR-1739"
	