#include "wxAwesomeSolidArt.hpp" 
#include <wx/regex.h> 

// Return SVG for the current ID as a string 
wxString SolidAwesomeArtSVGByID(const wxArtID& id)
{
  if (wxASCII_STR(id) == wxASCII_STR(wxART_0))  
      return wxString(SVG_AWESOME_SOLID_0);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_1))  
      return wxString(SVG_AWESOME_SOLID_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_2))  
      return wxString(SVG_AWESOME_SOLID_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_3))  
      return wxString(SVG_AWESOME_SOLID_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_4))  
      return wxString(SVG_AWESOME_SOLID_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_5))  
      return wxString(SVG_AWESOME_SOLID_5);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_6))  
      return wxString(SVG_AWESOME_SOLID_6);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_7))  
      return wxString(SVG_AWESOME_SOLID_7);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_8))  
      return wxString(SVG_AWESOME_SOLID_8);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_9))  
      return wxString(SVG_AWESOME_SOLID_9);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_A))  
      return wxString(SVG_AWESOME_SOLID_A);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADDRESS_BOOK))  
      return wxString(SVG_AWESOME_SOLID_ADDRESS_BOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADDRESS_CARD))  
      return wxString(SVG_AWESOME_SOLID_ADDRESS_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_CENTER))  
      return wxString(SVG_AWESOME_SOLID_ALIGN_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_JUSTIFY))  
      return wxString(SVG_AWESOME_SOLID_ALIGN_JUSTIFY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_LEFT))  
      return wxString(SVG_AWESOME_SOLID_ALIGN_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_ALIGN_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANCHOR_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_ANCHOR_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANCHOR_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_ANCHOR_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANCHOR_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_ANCHOR_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANCHOR_LOCK))  
      return wxString(SVG_AWESOME_SOLID_ANCHOR_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANCHOR))  
      return wxString(SVG_AWESOME_SOLID_ANCHOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGLE_DOWN))  
      return wxString(SVG_AWESOME_SOLID_ANGLE_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGLE_LEFT))  
      return wxString(SVG_AWESOME_SOLID_ANGLE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGLE_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_ANGLE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGLE_UP))  
      return wxString(SVG_AWESOME_SOLID_ANGLE_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGLES_DOWN))  
      return wxString(SVG_AWESOME_SOLID_ANGLES_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGLES_LEFT))  
      return wxString(SVG_AWESOME_SOLID_ANGLES_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGLES_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_ANGLES_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGLES_UP))  
      return wxString(SVG_AWESOME_SOLID_ANGLES_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANKH))  
      return wxString(SVG_AWESOME_SOLID_ANKH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APPLE_WHOLE))  
      return wxString(SVG_AWESOME_SOLID_APPLE_WHOLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARCHWAY))  
      return wxString(SVG_AWESOME_SOLID_ARCHWAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN_1_9))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_1_9);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN_9_1))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_9_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN_A_Z))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_A_Z);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN_LONG))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_LONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN_SHORT_WIDE))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_SHORT_WIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN_UP_ACROSS_LINE))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_UP_ACROSS_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN_UP_LOCK))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_UP_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN_WIDE_SHORT))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_WIDE_SHORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN_Z_A))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_Z_A);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWN))  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_LEFT_LONG))  
      return wxString(SVG_AWESOME_SOLID_ARROW_LEFT_LONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_LEFT))  
      return wxString(SVG_AWESOME_SOLID_ARROW_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_POINTER))  
      return wxString(SVG_AWESOME_SOLID_ARROW_POINTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_RIGHT_ARROW_LEFT))  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_ARROW_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_RIGHT_FROM_BRACKET))  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_FROM_BRACKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_RIGHT_LONG))  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_LONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_RIGHT_TO_BRACKET))  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_TO_BRACKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_RIGHT_TO_CITY))  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_TO_CITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_ROTATE_LEFT))  
      return wxString(SVG_AWESOME_SOLID_ARROW_ROTATE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_ROTATE_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_ARROW_ROTATE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_TREND_DOWN))  
      return wxString(SVG_AWESOME_SOLID_ARROW_TREND_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_TREND_UP))  
      return wxString(SVG_AWESOME_SOLID_ARROW_TREND_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_TURN_DOWN))  
      return wxString(SVG_AWESOME_SOLID_ARROW_TURN_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_TURN_UP))  
      return wxString(SVG_AWESOME_SOLID_ARROW_TURN_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_1_9))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_1_9);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_9_1))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_9_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_A_Z))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_A_Z);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_FROM_BRACKET))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_FROM_BRACKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_FROM_GROUND_WATER))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_FROM_GROUND_WATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_FROM_WATER_PUMP))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_FROM_WATER_PUMP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_LONG))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_LONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_RIGHT_DOTS))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_RIGHT_DOTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_RIGHT_FROM_SQUARE))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_RIGHT_FROM_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_SHORT_WIDE))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_SHORT_WIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_WIDE_SHORT))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_WIDE_SHORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP_Z_A))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_Z_A);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UP))  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_DOWN_TO_LINE))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_DOWN_TO_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_DOWN_TO_PEOPLE))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_DOWN_TO_PEOPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_LEFT_RIGHT_TO_LINE))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_LEFT_RIGHT_TO_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_LEFT_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_LEFT_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_ROTATE))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_ROTATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_SPIN))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_SPIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_SPLIT_UP_AND_LEFT))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_SPLIT_UP_AND_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_TO_CIRCLE))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TO_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_TO_DOT))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TO_DOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_TO_EYE))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TO_EYE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_TURN_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TURN_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_TURN_TO_DOTS))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TURN_TO_DOTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_UP_DOWN_LEFT_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_UP_DOWN_LEFT_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_UP_DOWN))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_UP_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROWS_UP_TO_LINE))  
      return wxString(SVG_AWESOME_SOLID_ARROWS_UP_TO_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASTERISK))  
      return wxString(SVG_AWESOME_SOLID_ASTERISK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AT))  
      return wxString(SVG_AWESOME_SOLID_AT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ATOM))  
      return wxString(SVG_AWESOME_SOLID_ATOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUDIO_DESCRIPTION))  
      return wxString(SVG_AWESOME_SOLID_AUDIO_DESCRIPTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUSTRAL_SIGN))  
      return wxString(SVG_AWESOME_SOLID_AUSTRAL_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AWARD))  
      return wxString(SVG_AWESOME_SOLID_AWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_B))  
      return wxString(SVG_AWESOME_SOLID_B);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BABY_CARRIAGE))  
      return wxString(SVG_AWESOME_SOLID_BABY_CARRIAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BABY))  
      return wxString(SVG_AWESOME_SOLID_BABY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACKWARD_FAST))  
      return wxString(SVG_AWESOME_SOLID_BACKWARD_FAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACKWARD_STEP))  
      return wxString(SVG_AWESOME_SOLID_BACKWARD_STEP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACKWARD))  
      return wxString(SVG_AWESOME_SOLID_BACKWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACON))  
      return wxString(SVG_AWESOME_SOLID_BACON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACTERIA))  
      return wxString(SVG_AWESOME_SOLID_BACTERIA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACTERIUM))  
      return wxString(SVG_AWESOME_SOLID_BACTERIUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BAG_SHOPPING))  
      return wxString(SVG_AWESOME_SOLID_BAG_SHOPPING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BAHAI))  
      return wxString(SVG_AWESOME_SOLID_BAHAI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BAHT_SIGN))  
      return wxString(SVG_AWESOME_SOLID_BAHT_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BAN_SMOKING))  
      return wxString(SVG_AWESOME_SOLID_BAN_SMOKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BAN))  
      return wxString(SVG_AWESOME_SOLID_BAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BANDAGE))  
      return wxString(SVG_AWESOME_SOLID_BANDAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BANGLADESHI_TAKA_SIGN))  
      return wxString(SVG_AWESOME_SOLID_BANGLADESHI_TAKA_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BARCODE))  
      return wxString(SVG_AWESOME_SOLID_BARCODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BARS_PROGRESS))  
      return wxString(SVG_AWESOME_SOLID_BARS_PROGRESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BARS_STAGGERED))  
      return wxString(SVG_AWESOME_SOLID_BARS_STAGGERED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BARS))  
      return wxString(SVG_AWESOME_SOLID_BARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BASEBALL_BAT_BALL))  
      return wxString(SVG_AWESOME_SOLID_BASEBALL_BAT_BALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BASEBALL))  
      return wxString(SVG_AWESOME_SOLID_BASEBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BASKET_SHOPPING))  
      return wxString(SVG_AWESOME_SOLID_BASKET_SHOPPING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BASKETBALL))  
      return wxString(SVG_AWESOME_SOLID_BASKETBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATH))  
      return wxString(SVG_AWESOME_SOLID_BATH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_EMPTY))  
      return wxString(SVG_AWESOME_SOLID_BATTERY_EMPTY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_FULL))  
      return wxString(SVG_AWESOME_SOLID_BATTERY_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_HALF))  
      return wxString(SVG_AWESOME_SOLID_BATTERY_HALF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_QUARTER))  
      return wxString(SVG_AWESOME_SOLID_BATTERY_QUARTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_THREE_QUARTERS))  
      return wxString(SVG_AWESOME_SOLID_BATTERY_THREE_QUARTERS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BED_PULSE))  
      return wxString(SVG_AWESOME_SOLID_BED_PULSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BED))  
      return wxString(SVG_AWESOME_SOLID_BED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEER_MUG_EMPTY))  
      return wxString(SVG_AWESOME_SOLID_BEER_MUG_EMPTY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BELL_CONCIERGE))  
      return wxString(SVG_AWESOME_SOLID_BELL_CONCIERGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BELL_SLASH))  
      return wxString(SVG_AWESOME_SOLID_BELL_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BELL))  
      return wxString(SVG_AWESOME_SOLID_BELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEZIER_CURVE))  
      return wxString(SVG_AWESOME_SOLID_BEZIER_CURVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BICYCLE))  
      return wxString(SVG_AWESOME_SOLID_BICYCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BINOCULARS))  
      return wxString(SVG_AWESOME_SOLID_BINOCULARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BIOHAZARD))  
      return wxString(SVG_AWESOME_SOLID_BIOHAZARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BITCOIN_SIGN))  
      return wxString(SVG_AWESOME_SOLID_BITCOIN_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLENDER_PHONE))  
      return wxString(SVG_AWESOME_SOLID_BLENDER_PHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLENDER))  
      return wxString(SVG_AWESOME_SOLID_BLENDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLOG))  
      return wxString(SVG_AWESOME_SOLID_BLOG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOLD))  
      return wxString(SVG_AWESOME_SOLID_BOLD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOLT_LIGHTNING))  
      return wxString(SVG_AWESOME_SOLID_BOLT_LIGHTNING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOLT))  
      return wxString(SVG_AWESOME_SOLID_BOLT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOMB))  
      return wxString(SVG_AWESOME_SOLID_BOMB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BONE))  
      return wxString(SVG_AWESOME_SOLID_BONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BONG))  
      return wxString(SVG_AWESOME_SOLID_BONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_ATLAS))  
      return wxString(SVG_AWESOME_SOLID_BOOK_ATLAS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_BIBLE))  
      return wxString(SVG_AWESOME_SOLID_BOOK_BIBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_BOOKMARK))  
      return wxString(SVG_AWESOME_SOLID_BOOK_BOOKMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_JOURNAL_WHILLS))  
      return wxString(SVG_AWESOME_SOLID_BOOK_JOURNAL_WHILLS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_BOOK_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_OPEN_READER))  
      return wxString(SVG_AWESOME_SOLID_BOOK_OPEN_READER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_OPEN))  
      return wxString(SVG_AWESOME_SOLID_BOOK_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_QURAN))  
      return wxString(SVG_AWESOME_SOLID_BOOK_QURAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_SKULL))  
      return wxString(SVG_AWESOME_SOLID_BOOK_SKULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_TANAKH))  
      return wxString(SVG_AWESOME_SOLID_BOOK_TANAKH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK))  
      return wxString(SVG_AWESOME_SOLID_BOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOKMARK))  
      return wxString(SVG_AWESOME_SOLID_BOOKMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_ALL))  
      return wxString(SVG_AWESOME_SOLID_BORDER_ALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_NONE))  
      return wxString(SVG_AWESOME_SOLID_BORDER_NONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_TOP_LEFT))  
      return wxString(SVG_AWESOME_SOLID_BORDER_TOP_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORE_HOLE))  
      return wxString(SVG_AWESOME_SOLID_BORE_HOLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOTTLE_DROPLET))  
      return wxString(SVG_AWESOME_SOLID_BOTTLE_DROPLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOTTLE_WATER))  
      return wxString(SVG_AWESOME_SOLID_BOTTLE_WATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOWL_FOOD))  
      return wxString(SVG_AWESOME_SOLID_BOWL_FOOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOWL_RICE))  
      return wxString(SVG_AWESOME_SOLID_BOWL_RICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOWLING_BALL))  
      return wxString(SVG_AWESOME_SOLID_BOWLING_BALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOX_ARCHIVE))  
      return wxString(SVG_AWESOME_SOLID_BOX_ARCHIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOX_OPEN))  
      return wxString(SVG_AWESOME_SOLID_BOX_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOX_TISSUE))  
      return wxString(SVG_AWESOME_SOLID_BOX_TISSUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOX))  
      return wxString(SVG_AWESOME_SOLID_BOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOXES_PACKING))  
      return wxString(SVG_AWESOME_SOLID_BOXES_PACKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOXES_STACKED))  
      return wxString(SVG_AWESOME_SOLID_BOXES_STACKED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRAILLE))  
      return wxString(SVG_AWESOME_SOLID_BRAILLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRAIN))  
      return wxString(SVG_AWESOME_SOLID_BRAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRAZILIAN_REAL_SIGN))  
      return wxString(SVG_AWESOME_SOLID_BRAZILIAN_REAL_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BREAD_SLICE))  
      return wxString(SVG_AWESOME_SOLID_BREAD_SLICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIDGE_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIDGE_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIDGE_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIDGE_LOCK))  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIDGE_WATER))  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_WATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIDGE))  
      return wxString(SVG_AWESOME_SOLID_BRIDGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIEFCASE_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_BRIEFCASE_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIEFCASE))  
      return wxString(SVG_AWESOME_SOLID_BRIEFCASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BROOM_BALL))  
      return wxString(SVG_AWESOME_SOLID_BROOM_BALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BROOM))  
      return wxString(SVG_AWESOME_SOLID_BROOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRUSH))  
      return wxString(SVG_AWESOME_SOLID_BRUSH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUCKET))  
      return wxString(SVG_AWESOME_SOLID_BUCKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUG_SLASH))  
      return wxString(SVG_AWESOME_SOLID_BUG_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUG))  
      return wxString(SVG_AWESOME_SOLID_BUG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUGS))  
      return wxString(SVG_AWESOME_SOLID_BUGS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_CIRCLE_ARROW_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_CIRCLE_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_COLUMNS))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_COLUMNS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_FLAG))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_FLAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_LOCK))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_NGO))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_NGO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_SHIELD))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_SHIELD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_UN))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_UN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_USER))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING_WHEAT))  
      return wxString(SVG_AWESOME_SOLID_BUILDING_WHEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING))  
      return wxString(SVG_AWESOME_SOLID_BUILDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BULLHORN))  
      return wxString(SVG_AWESOME_SOLID_BULLHORN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BULLSEYE))  
      return wxString(SVG_AWESOME_SOLID_BULLSEYE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BURGER))  
      return wxString(SVG_AWESOME_SOLID_BURGER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BURST))  
      return wxString(SVG_AWESOME_SOLID_BURST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUS_SIMPLE))  
      return wxString(SVG_AWESOME_SOLID_BUS_SIMPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUS))  
      return wxString(SVG_AWESOME_SOLID_BUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUSINESS_TIME))  
      return wxString(SVG_AWESOME_SOLID_BUSINESS_TIME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_C))  
      return wxString(SVG_AWESOME_SOLID_C);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CABLE_CAR))  
      return wxString(SVG_AWESOME_SOLID_CABLE_CAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAKE_CANDLES))  
      return wxString(SVG_AWESOME_SOLID_CAKE_CANDLES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALCULATOR))  
      return wxString(SVG_AWESOME_SOLID_CALCULATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_CHECK))  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_DAY))  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_DAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_DAYS))  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_DAYS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_MINUS))  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_PLUS))  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_WEEK))  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_WEEK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_XMARK))  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR))  
      return wxString(SVG_AWESOME_SOLID_CALENDAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA_RETRO))  
      return wxString(SVG_AWESOME_SOLID_CAMERA_RETRO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA_ROTATE))  
      return wxString(SVG_AWESOME_SOLID_CAMERA_ROTATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA))  
      return wxString(SVG_AWESOME_SOLID_CAMERA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMPGROUND))  
      return wxString(SVG_AWESOME_SOLID_CAMPGROUND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CANDY_CANE))  
      return wxString(SVG_AWESOME_SOLID_CANDY_CANE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CANNABIS))  
      return wxString(SVG_AWESOME_SOLID_CANNABIS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAPSULES))  
      return wxString(SVG_AWESOME_SOLID_CAPSULES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR_BATTERY))  
      return wxString(SVG_AWESOME_SOLID_CAR_BATTERY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR_BURST))  
      return wxString(SVG_AWESOME_SOLID_CAR_BURST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR_ON))  
      return wxString(SVG_AWESOME_SOLID_CAR_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR_REAR))  
      return wxString(SVG_AWESOME_SOLID_CAR_REAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR_SIDE))  
      return wxString(SVG_AWESOME_SOLID_CAR_SIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR_TUNNEL))  
      return wxString(SVG_AWESOME_SOLID_CAR_TUNNEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR))  
      return wxString(SVG_AWESOME_SOLID_CAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARAVAN))  
      return wxString(SVG_AWESOME_SOLID_CARAVAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARET_DOWN))  
      return wxString(SVG_AWESOME_SOLID_CARET_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARET_LEFT))  
      return wxString(SVG_AWESOME_SOLID_CARET_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARET_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_CARET_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARET_UP))  
      return wxString(SVG_AWESOME_SOLID_CARET_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARROT))  
      return wxString(SVG_AWESOME_SOLID_CARROT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CART_ARROW_DOWN))  
      return wxString(SVG_AWESOME_SOLID_CART_ARROW_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CART_FLATBED_SUITCASE))  
      return wxString(SVG_AWESOME_SOLID_CART_FLATBED_SUITCASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CART_FLATBED))  
      return wxString(SVG_AWESOME_SOLID_CART_FLATBED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CART_PLUS))  
      return wxString(SVG_AWESOME_SOLID_CART_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CART_SHOPPING))  
      return wxString(SVG_AWESOME_SOLID_CART_SHOPPING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CASH_REGISTER))  
      return wxString(SVG_AWESOME_SOLID_CASH_REGISTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAT))  
      return wxString(SVG_AWESOME_SOLID_CAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CEDI_SIGN))  
      return wxString(SVG_AWESOME_SOLID_CEDI_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CENT_SIGN))  
      return wxString(SVG_AWESOME_SOLID_CENT_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CERTIFICATE))  
      return wxString(SVG_AWESOME_SOLID_CERTIFICATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHAIR))  
      return wxString(SVG_AWESOME_SOLID_CHAIR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHALKBOARD_USER))  
      return wxString(SVG_AWESOME_SOLID_CHALKBOARD_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHALKBOARD))  
      return wxString(SVG_AWESOME_SOLID_CHALKBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHAMPAGNE_GLASSES))  
      return wxString(SVG_AWESOME_SOLID_CHAMPAGNE_GLASSES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHARGING_STATION))  
      return wxString(SVG_AWESOME_SOLID_CHARGING_STATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHART_AREA))  
      return wxString(SVG_AWESOME_SOLID_CHART_AREA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHART_BAR))  
      return wxString(SVG_AWESOME_SOLID_CHART_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHART_COLUMN))  
      return wxString(SVG_AWESOME_SOLID_CHART_COLUMN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHART_GANTT))  
      return wxString(SVG_AWESOME_SOLID_CHART_GANTT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHART_LINE))  
      return wxString(SVG_AWESOME_SOLID_CHART_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHART_PIE))  
      return wxString(SVG_AWESOME_SOLID_CHART_PIE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHART_SIMPLE))  
      return wxString(SVG_AWESOME_SOLID_CHART_SIMPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECK_DOUBLE))  
      return wxString(SVG_AWESOME_SOLID_CHECK_DOUBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECK_TO_SLOT))  
      return wxString(SVG_AWESOME_SOLID_CHECK_TO_SLOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECK))  
      return wxString(SVG_AWESOME_SOLID_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHEESE))  
      return wxString(SVG_AWESOME_SOLID_CHEESE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_BISHOP))  
      return wxString(SVG_AWESOME_SOLID_CHESS_BISHOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_BOARD))  
      return wxString(SVG_AWESOME_SOLID_CHESS_BOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_KING))  
      return wxString(SVG_AWESOME_SOLID_CHESS_KING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_KNIGHT))  
      return wxString(SVG_AWESOME_SOLID_CHESS_KNIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_PAWN))  
      return wxString(SVG_AWESOME_SOLID_CHESS_PAWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_QUEEN))  
      return wxString(SVG_AWESOME_SOLID_CHESS_QUEEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_ROOK))  
      return wxString(SVG_AWESOME_SOLID_CHESS_ROOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS))  
      return wxString(SVG_AWESOME_SOLID_CHESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHEVRON_DOWN))  
      return wxString(SVG_AWESOME_SOLID_CHEVRON_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHEVRON_LEFT))  
      return wxString(SVG_AWESOME_SOLID_CHEVRON_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHEVRON_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_CHEVRON_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHEVRON_UP))  
      return wxString(SVG_AWESOME_SOLID_CHEVRON_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHILD_COMBATANT))  
      return wxString(SVG_AWESOME_SOLID_CHILD_COMBATANT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHILD_DRESS))  
      return wxString(SVG_AWESOME_SOLID_CHILD_DRESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHILD_REACHING))  
      return wxString(SVG_AWESOME_SOLID_CHILD_REACHING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHILD))  
      return wxString(SVG_AWESOME_SOLID_CHILD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHILDREN))  
      return wxString(SVG_AWESOME_SOLID_CHILDREN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHURCH))  
      return wxString(SVG_AWESOME_SOLID_CHURCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_ARROW_DOWN))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_ARROW_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_ARROW_LEFT))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_ARROW_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_ARROW_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_ARROW_UP))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_ARROW_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_CHEVRON_DOWN))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHEVRON_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_CHEVRON_LEFT))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHEVRON_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_CHEVRON_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHEVRON_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_CHEVRON_UP))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHEVRON_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_DOLLAR_TO_SLOT))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_DOLLAR_TO_SLOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_DOT))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_DOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_DOWN))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_H))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_H);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_HALF_STROKE))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_HALF_STROKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_INFO))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_INFO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_LEFT))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_MINUS))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_NODES))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_NODES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_NOTCH))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_NOTCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_PAUSE))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_PAUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_PLAY))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_PLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_PLUS))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_QUESTION))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_QUESTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_RADIATION))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_RADIATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_STOP))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_STOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_UP))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_USER))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE))  
      return wxString(SVG_AWESOME_SOLID_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CITY))  
      return wxString(SVG_AWESOME_SOLID_CITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLAPPERBOARD))  
      return wxString(SVG_AWESOME_SOLID_CLAPPERBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLIPBOARD_CHECK))  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLIPBOARD_LIST))  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD_LIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLIPBOARD_QUESTION))  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD_QUESTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLIPBOARD_USER))  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLIPBOARD))  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOCK_ROTATE_LEFT))  
      return wxString(SVG_AWESOME_SOLID_CLOCK_ROTATE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOCK))  
      return wxString(SVG_AWESOME_SOLID_CLOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLONE))  
      return wxString(SVG_AWESOME_SOLID_CLONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOSED_CAPTIONING))  
      return wxString(SVG_AWESOME_SOLID_CLOSED_CAPTIONING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_ARROW_DOWN))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_ARROW_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_ARROW_UP))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_ARROW_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_BOLT))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_BOLT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_MEATBALL))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_MEATBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_MOON_RAIN))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_MOON_RAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_MOON))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_MOON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_RAIN))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_RAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_SHOWERS_HEAVY))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_SHOWERS_HEAVY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_SHOWERS_WATER))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_SHOWERS_WATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_SUN_RAIN))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_SUN_RAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_SUN))  
      return wxString(SVG_AWESOME_SOLID_CLOUD_SUN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD))  
      return wxString(SVG_AWESOME_SOLID_CLOUD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOVER))  
      return wxString(SVG_AWESOME_SOLID_CLOVER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODE_BRANCH))  
      return wxString(SVG_AWESOME_SOLID_CODE_BRANCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODE_COMMIT))  
      return wxString(SVG_AWESOME_SOLID_CODE_COMMIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODE_COMPARE))  
      return wxString(SVG_AWESOME_SOLID_CODE_COMPARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODE_FORK))  
      return wxString(SVG_AWESOME_SOLID_CODE_FORK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODE_MERGE))  
      return wxString(SVG_AWESOME_SOLID_CODE_MERGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODE_PULL_REQUEST))  
      return wxString(SVG_AWESOME_SOLID_CODE_PULL_REQUEST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODE))  
      return wxString(SVG_AWESOME_SOLID_CODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COINS))  
      return wxString(SVG_AWESOME_SOLID_COINS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COLON_SIGN))  
      return wxString(SVG_AWESOME_SOLID_COLON_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT_DOLLAR))  
      return wxString(SVG_AWESOME_SOLID_COMMENT_DOLLAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT_DOTS))  
      return wxString(SVG_AWESOME_SOLID_COMMENT_DOTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_COMMENT_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT_SLASH))  
      return wxString(SVG_AWESOME_SOLID_COMMENT_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT_SMS))  
      return wxString(SVG_AWESOME_SOLID_COMMENT_SMS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT))  
      return wxString(SVG_AWESOME_SOLID_COMMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENTS_DOLLAR))  
      return wxString(SVG_AWESOME_SOLID_COMMENTS_DOLLAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENTS))  
      return wxString(SVG_AWESOME_SOLID_COMMENTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPACT_DISC))  
      return wxString(SVG_AWESOME_SOLID_COMPACT_DISC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPASS_DRAFTING))  
      return wxString(SVG_AWESOME_SOLID_COMPASS_DRAFTING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPASS))  
      return wxString(SVG_AWESOME_SOLID_COMPASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPRESS))  
      return wxString(SVG_AWESOME_SOLID_COMPRESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPUTER_MOUSE))  
      return wxString(SVG_AWESOME_SOLID_COMPUTER_MOUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPUTER))  
      return wxString(SVG_AWESOME_SOLID_COMPUTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COOKIE_BITE))  
      return wxString(SVG_AWESOME_SOLID_COOKIE_BITE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COOKIE))  
      return wxString(SVG_AWESOME_SOLID_COOKIE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COPY))  
      return wxString(SVG_AWESOME_SOLID_COPY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COPYRIGHT))  
      return wxString(SVG_AWESOME_SOLID_COPYRIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COUCH))  
      return wxString(SVG_AWESOME_SOLID_COUCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COW))  
      return wxString(SVG_AWESOME_SOLID_COW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREDIT_CARD))  
      return wxString(SVG_AWESOME_SOLID_CREDIT_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_SIMPLE))  
      return wxString(SVG_AWESOME_SOLID_CROP_SIMPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP))  
      return wxString(SVG_AWESOME_SOLID_CROP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROSS))  
      return wxString(SVG_AWESOME_SOLID_CROSS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROSSHAIRS))  
      return wxString(SVG_AWESOME_SOLID_CROSSHAIRS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROW))  
      return wxString(SVG_AWESOME_SOLID_CROW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROWN))  
      return wxString(SVG_AWESOME_SOLID_CROWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CRUTCH))  
      return wxString(SVG_AWESOME_SOLID_CRUTCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CRUZEIRO_SIGN))  
      return wxString(SVG_AWESOME_SOLID_CRUZEIRO_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CUBE))  
      return wxString(SVG_AWESOME_SOLID_CUBE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CUBES_STACKED))  
      return wxString(SVG_AWESOME_SOLID_CUBES_STACKED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CUBES))  
      return wxString(SVG_AWESOME_SOLID_CUBES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_D))  
      return wxString(SVG_AWESOME_SOLID_D);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATABASE))  
      return wxString(SVG_AWESOME_SOLID_DATABASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DELETE_LEFT))  
      return wxString(SVG_AWESOME_SOLID_DELETE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEMOCRAT))  
      return wxString(SVG_AWESOME_SOLID_DEMOCRAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DESKTOP))  
      return wxString(SVG_AWESOME_SOLID_DESKTOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DHARMACHAKRA))  
      return wxString(SVG_AWESOME_SOLID_DHARMACHAKRA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIAGRAM_NEXT))  
      return wxString(SVG_AWESOME_SOLID_DIAGRAM_NEXT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIAGRAM_PREDECESSOR))  
      return wxString(SVG_AWESOME_SOLID_DIAGRAM_PREDECESSOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIAGRAM_PROJECT))  
      return wxString(SVG_AWESOME_SOLID_DIAGRAM_PROJECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIAGRAM_SUCCESSOR))  
      return wxString(SVG_AWESOME_SOLID_DIAGRAM_SUCCESSOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIAMOND_TURN_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_DIAMOND_TURN_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIAMOND))  
      return wxString(SVG_AWESOME_SOLID_DIAMOND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DICE_D20))  
      return wxString(SVG_AWESOME_SOLID_DICE_D20);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DICE_D6))  
      return wxString(SVG_AWESOME_SOLID_DICE_D6);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DICE_FIVE))  
      return wxString(SVG_AWESOME_SOLID_DICE_FIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DICE_FOUR))  
      return wxString(SVG_AWESOME_SOLID_DICE_FOUR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DICE_ONE))  
      return wxString(SVG_AWESOME_SOLID_DICE_ONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DICE_SIX))  
      return wxString(SVG_AWESOME_SOLID_DICE_SIX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DICE_THREE))  
      return wxString(SVG_AWESOME_SOLID_DICE_THREE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DICE_TWO))  
      return wxString(SVG_AWESOME_SOLID_DICE_TWO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DICE))  
      return wxString(SVG_AWESOME_SOLID_DICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DISEASE))  
      return wxString(SVG_AWESOME_SOLID_DISEASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DISPLAY))  
      return wxString(SVG_AWESOME_SOLID_DISPLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIVIDE))  
      return wxString(SVG_AWESOME_SOLID_DIVIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DNA))  
      return wxString(SVG_AWESOME_SOLID_DNA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOG))  
      return wxString(SVG_AWESOME_SOLID_DOG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOLLAR_SIGN))  
      return wxString(SVG_AWESOME_SOLID_DOLLAR_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOLLY))  
      return wxString(SVG_AWESOME_SOLID_DOLLY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DONG_SIGN))  
      return wxString(SVG_AWESOME_SOLID_DONG_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOOR_CLOSED))  
      return wxString(SVG_AWESOME_SOLID_DOOR_CLOSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOOR_OPEN))  
      return wxString(SVG_AWESOME_SOLID_DOOR_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOVE))  
      return wxString(SVG_AWESOME_SOLID_DOVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOWN_LEFT_AND_UP_RIGHT_TO_CENTER))  
      return wxString(SVG_AWESOME_SOLID_DOWN_LEFT_AND_UP_RIGHT_TO_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOWN_LONG))  
      return wxString(SVG_AWESOME_SOLID_DOWN_LONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOWNLOAD))  
      return wxString(SVG_AWESOME_SOLID_DOWNLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRAGON))  
      return wxString(SVG_AWESOME_SOLID_DRAGON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRAW_POLYGON))  
      return wxString(SVG_AWESOME_SOLID_DRAW_POLYGON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DROPLET_SLASH))  
      return wxString(SVG_AWESOME_SOLID_DROPLET_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DROPLET))  
      return wxString(SVG_AWESOME_SOLID_DROPLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRUM_STEELPAN))  
      return wxString(SVG_AWESOME_SOLID_DRUM_STEELPAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRUM))  
      return wxString(SVG_AWESOME_SOLID_DRUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRUMSTICK_BITE))  
      return wxString(SVG_AWESOME_SOLID_DRUMSTICK_BITE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DUMBBELL))  
      return wxString(SVG_AWESOME_SOLID_DUMBBELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DUMPSTER_FIRE))  
      return wxString(SVG_AWESOME_SOLID_DUMPSTER_FIRE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DUMPSTER))  
      return wxString(SVG_AWESOME_SOLID_DUMPSTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DUNGEON))  
      return wxString(SVG_AWESOME_SOLID_DUNGEON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_E))  
      return wxString(SVG_AWESOME_SOLID_E);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EAR_DEAF))  
      return wxString(SVG_AWESOME_SOLID_EAR_DEAF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EAR_LISTEN))  
      return wxString(SVG_AWESOME_SOLID_EAR_LISTEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EARTH_AFRICA))  
      return wxString(SVG_AWESOME_SOLID_EARTH_AFRICA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EARTH_AMERICAS))  
      return wxString(SVG_AWESOME_SOLID_EARTH_AMERICAS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EARTH_ASIA))  
      return wxString(SVG_AWESOME_SOLID_EARTH_ASIA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EARTH_EUROPE))  
      return wxString(SVG_AWESOME_SOLID_EARTH_EUROPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EARTH_OCEANIA))  
      return wxString(SVG_AWESOME_SOLID_EARTH_OCEANIA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EGG))  
      return wxString(SVG_AWESOME_SOLID_EGG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EJECT))  
      return wxString(SVG_AWESOME_SOLID_EJECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELEVATOR))  
      return wxString(SVG_AWESOME_SOLID_ELEVATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELLIPSIS_VERTICAL))  
      return wxString(SVG_AWESOME_SOLID_ELLIPSIS_VERTICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELLIPSIS))  
      return wxString(SVG_AWESOME_SOLID_ELLIPSIS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENVELOPE_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_ENVELOPE_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENVELOPE_OPEN_TEXT))  
      return wxString(SVG_AWESOME_SOLID_ENVELOPE_OPEN_TEXT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENVELOPE_OPEN))  
      return wxString(SVG_AWESOME_SOLID_ENVELOPE_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENVELOPE))  
      return wxString(SVG_AWESOME_SOLID_ENVELOPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENVELOPES_BULK))  
      return wxString(SVG_AWESOME_SOLID_ENVELOPES_BULK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EQUALS))  
      return wxString(SVG_AWESOME_SOLID_EQUALS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ERASER))  
      return wxString(SVG_AWESOME_SOLID_ERASER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ETHERNET))  
      return wxString(SVG_AWESOME_SOLID_ETHERNET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EURO_SIGN))  
      return wxString(SVG_AWESOME_SOLID_EURO_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPAND))  
      return wxString(SVG_AWESOME_SOLID_EXPAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPLOSION))  
      return wxString(SVG_AWESOME_SOLID_EXPLOSION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EYE_DROPPER))  
      return wxString(SVG_AWESOME_SOLID_EYE_DROPPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EYE_LOW_VISION))  
      return wxString(SVG_AWESOME_SOLID_EYE_LOW_VISION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EYE_SLASH))  
      return wxString(SVG_AWESOME_SOLID_EYE_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EYE))  
      return wxString(SVG_AWESOME_SOLID_EYE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_F))  
      return wxString(SVG_AWESOME_SOLID_F);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_ANGRY))  
      return wxString(SVG_AWESOME_SOLID_FACE_ANGRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_DIZZY))  
      return wxString(SVG_AWESOME_SOLID_FACE_DIZZY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_FLUSHED))  
      return wxString(SVG_AWESOME_SOLID_FACE_FLUSHED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_FROWN_OPEN))  
      return wxString(SVG_AWESOME_SOLID_FACE_FROWN_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_FROWN))  
      return wxString(SVG_AWESOME_SOLID_FACE_FROWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIMACE))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIMACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_BEAM_SWEAT))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_BEAM_SWEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_BEAM))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_BEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_HEARTS))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_HEARTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_SQUINT_TEARS))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_SQUINT_TEARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_SQUINT))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_SQUINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_STARS))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_STARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_TEARS))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_TEARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_TONGUE_SQUINT))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_TONGUE_SQUINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_TONGUE_WINK))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_TONGUE_WINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_TONGUE))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_TONGUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_WIDE))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_WIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_WINK))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_WINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN))  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_KISS_BEAM))  
      return wxString(SVG_AWESOME_SOLID_FACE_KISS_BEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_KISS_WINK_HEART))  
      return wxString(SVG_AWESOME_SOLID_FACE_KISS_WINK_HEART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_KISS))  
      return wxString(SVG_AWESOME_SOLID_FACE_KISS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_LAUGH_BEAM))  
      return wxString(SVG_AWESOME_SOLID_FACE_LAUGH_BEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_LAUGH_SQUINT))  
      return wxString(SVG_AWESOME_SOLID_FACE_LAUGH_SQUINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_LAUGH_WINK))  
      return wxString(SVG_AWESOME_SOLID_FACE_LAUGH_WINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_LAUGH))  
      return wxString(SVG_AWESOME_SOLID_FACE_LAUGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_MEH_BLANK))  
      return wxString(SVG_AWESOME_SOLID_FACE_MEH_BLANK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_MEH))  
      return wxString(SVG_AWESOME_SOLID_FACE_MEH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_ROLLING_EYES))  
      return wxString(SVG_AWESOME_SOLID_FACE_ROLLING_EYES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SAD_CRY))  
      return wxString(SVG_AWESOME_SOLID_FACE_SAD_CRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SAD_TEAR))  
      return wxString(SVG_AWESOME_SOLID_FACE_SAD_TEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SMILE_BEAM))  
      return wxString(SVG_AWESOME_SOLID_FACE_SMILE_BEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SMILE_WINK))  
      return wxString(SVG_AWESOME_SOLID_FACE_SMILE_WINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SMILE))  
      return wxString(SVG_AWESOME_SOLID_FACE_SMILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SURPRISE))  
      return wxString(SVG_AWESOME_SOLID_FACE_SURPRISE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_TIRED))  
      return wxString(SVG_AWESOME_SOLID_FACE_TIRED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAN))  
      return wxString(SVG_AWESOME_SOLID_FAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAUCET_DRIP))  
      return wxString(SVG_AWESOME_SOLID_FAUCET_DRIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAUCET))  
      return wxString(SVG_AWESOME_SOLID_FAUCET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAX))  
      return wxString(SVG_AWESOME_SOLID_FAX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FEATHER_POINTED))  
      return wxString(SVG_AWESOME_SOLID_FEATHER_POINTED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FEATHER))  
      return wxString(SVG_AWESOME_SOLID_FEATHER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FERRY))  
      return wxString(SVG_AWESOME_SOLID_FERRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_ARROW_DOWN))  
      return wxString(SVG_AWESOME_SOLID_FILE_ARROW_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_ARROW_UP))  
      return wxString(SVG_AWESOME_SOLID_FILE_ARROW_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_AUDIO))  
      return wxString(SVG_AWESOME_SOLID_FILE_AUDIO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CIRCLE_MINUS))  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CIRCLE_PLUS))  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CIRCLE_QUESTION))  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_QUESTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CODE))  
      return wxString(SVG_AWESOME_SOLID_FILE_CODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CONTRACT))  
      return wxString(SVG_AWESOME_SOLID_FILE_CONTRACT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CSV))  
      return wxString(SVG_AWESOME_SOLID_FILE_CSV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_EXCEL))  
      return wxString(SVG_AWESOME_SOLID_FILE_EXCEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_EXPORT))  
      return wxString(SVG_AWESOME_SOLID_FILE_EXPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_IMAGE))  
      return wxString(SVG_AWESOME_SOLID_FILE_IMAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_IMPORT))  
      return wxString(SVG_AWESOME_SOLID_FILE_IMPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_INVOICE_DOLLAR))  
      return wxString(SVG_AWESOME_SOLID_FILE_INVOICE_DOLLAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_INVOICE))  
      return wxString(SVG_AWESOME_SOLID_FILE_INVOICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_LINES))  
      return wxString(SVG_AWESOME_SOLID_FILE_LINES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_FILE_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_PDF))  
      return wxString(SVG_AWESOME_SOLID_FILE_PDF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_PEN))  
      return wxString(SVG_AWESOME_SOLID_FILE_PEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_POWERPOINT))  
      return wxString(SVG_AWESOME_SOLID_FILE_POWERPOINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_PRESCRIPTION))  
      return wxString(SVG_AWESOME_SOLID_FILE_PRESCRIPTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_SHIELD))  
      return wxString(SVG_AWESOME_SOLID_FILE_SHIELD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_SIGNATURE))  
      return wxString(SVG_AWESOME_SOLID_FILE_SIGNATURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_VIDEO))  
      return wxString(SVG_AWESOME_SOLID_FILE_VIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_WAVEFORM))  
      return wxString(SVG_AWESOME_SOLID_FILE_WAVEFORM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_WORD))  
      return wxString(SVG_AWESOME_SOLID_FILE_WORD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_ZIPPER))  
      return wxString(SVG_AWESOME_SOLID_FILE_ZIPPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE))  
      return wxString(SVG_AWESOME_SOLID_FILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILL_DRIP))  
      return wxString(SVG_AWESOME_SOLID_FILL_DRIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILL))  
      return wxString(SVG_AWESOME_SOLID_FILL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILM))  
      return wxString(SVG_AWESOME_SOLID_FILM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_CIRCLE_DOLLAR))  
      return wxString(SVG_AWESOME_SOLID_FILTER_CIRCLE_DOLLAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_FILTER_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER))  
      return wxString(SVG_AWESOME_SOLID_FILTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FINGERPRINT))  
      return wxString(SVG_AWESOME_SOLID_FINGERPRINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRE_BURNER))  
      return wxString(SVG_AWESOME_SOLID_FIRE_BURNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRE_EXTINGUISHER))  
      return wxString(SVG_AWESOME_SOLID_FIRE_EXTINGUISHER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRE_FLAME_CURVED))  
      return wxString(SVG_AWESOME_SOLID_FIRE_FLAME_CURVED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRE_FLAME_SIMPLE))  
      return wxString(SVG_AWESOME_SOLID_FIRE_FLAME_SIMPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRE))  
      return wxString(SVG_AWESOME_SOLID_FIRE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FISH_FINS))  
      return wxString(SVG_AWESOME_SOLID_FISH_FINS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FISH))  
      return wxString(SVG_AWESOME_SOLID_FISH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLAG_CHECKERED))  
      return wxString(SVG_AWESOME_SOLID_FLAG_CHECKERED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLAG_USA))  
      return wxString(SVG_AWESOME_SOLID_FLAG_USA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLAG))  
      return wxString(SVG_AWESOME_SOLID_FLAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLASK_VIAL))  
      return wxString(SVG_AWESOME_SOLID_FLASK_VIAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLASK))  
      return wxString(SVG_AWESOME_SOLID_FLASK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLOPPY_DISK))  
      return wxString(SVG_AWESOME_SOLID_FLOPPY_DISK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLORIN_SIGN))  
      return wxString(SVG_AWESOME_SOLID_FLORIN_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_CLOSED))  
      return wxString(SVG_AWESOME_SOLID_FOLDER_CLOSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_MINUS))  
      return wxString(SVG_AWESOME_SOLID_FOLDER_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_OPEN))  
      return wxString(SVG_AWESOME_SOLID_FOLDER_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_PLUS))  
      return wxString(SVG_AWESOME_SOLID_FOLDER_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_TREE))  
      return wxString(SVG_AWESOME_SOLID_FOLDER_TREE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER))  
      return wxString(SVG_AWESOME_SOLID_FOLDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FONT_AWESOME))  
      return wxString(SVG_AWESOME_SOLID_FONT_AWESOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FONT))  
      return wxString(SVG_AWESOME_SOLID_FONT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOOTBALL))  
      return wxString(SVG_AWESOME_SOLID_FOOTBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORWARD_FAST))  
      return wxString(SVG_AWESOME_SOLID_FORWARD_FAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORWARD_STEP))  
      return wxString(SVG_AWESOME_SOLID_FORWARD_STEP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORWARD))  
      return wxString(SVG_AWESOME_SOLID_FORWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FRANC_SIGN))  
      return wxString(SVG_AWESOME_SOLID_FRANC_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FROG))  
      return wxString(SVG_AWESOME_SOLID_FROG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FUTBOL))  
      return wxString(SVG_AWESOME_SOLID_FUTBOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_G))  
      return wxString(SVG_AWESOME_SOLID_G);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAMEPAD))  
      return wxString(SVG_AWESOME_SOLID_GAMEPAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAS_PUMP))  
      return wxString(SVG_AWESOME_SOLID_GAS_PUMP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAUGE_HIGH))  
      return wxString(SVG_AWESOME_SOLID_GAUGE_HIGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAUGE_SIMPLE_HIGH))  
      return wxString(SVG_AWESOME_SOLID_GAUGE_SIMPLE_HIGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAUGE_SIMPLE))  
      return wxString(SVG_AWESOME_SOLID_GAUGE_SIMPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAUGE))  
      return wxString(SVG_AWESOME_SOLID_GAUGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAVEL))  
      return wxString(SVG_AWESOME_SOLID_GAVEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GEAR))  
      return wxString(SVG_AWESOME_SOLID_GEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GEARS))  
      return wxString(SVG_AWESOME_SOLID_GEARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GEM))  
      return wxString(SVG_AWESOME_SOLID_GEM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GENDERLESS))  
      return wxString(SVG_AWESOME_SOLID_GENDERLESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GHOST))  
      return wxString(SVG_AWESOME_SOLID_GHOST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GIFT))  
      return wxString(SVG_AWESOME_SOLID_GIFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GIFTS))  
      return wxString(SVG_AWESOME_SOLID_GIFTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GLASS_WATER_DROPLET))  
      return wxString(SVG_AWESOME_SOLID_GLASS_WATER_DROPLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GLASS_WATER))  
      return wxString(SVG_AWESOME_SOLID_GLASS_WATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GLASSES))  
      return wxString(SVG_AWESOME_SOLID_GLASSES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GLOBE))  
      return wxString(SVG_AWESOME_SOLID_GLOBE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOLF_BALL_TEE))  
      return wxString(SVG_AWESOME_SOLID_GOLF_BALL_TEE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOPURAM))  
      return wxString(SVG_AWESOME_SOLID_GOPURAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRADUATION_CAP))  
      return wxString(SVG_AWESOME_SOLID_GRADUATION_CAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GREATER_THAN_EQUAL))  
      return wxString(SVG_AWESOME_SOLID_GREATER_THAN_EQUAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GREATER_THAN))  
      return wxString(SVG_AWESOME_SOLID_GREATER_THAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRIP_LINES_VERTICAL))  
      return wxString(SVG_AWESOME_SOLID_GRIP_LINES_VERTICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRIP_LINES))  
      return wxString(SVG_AWESOME_SOLID_GRIP_LINES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRIP_VERTICAL))  
      return wxString(SVG_AWESOME_SOLID_GRIP_VERTICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRIP))  
      return wxString(SVG_AWESOME_SOLID_GRIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GROUP_ARROWS_ROTATE))  
      return wxString(SVG_AWESOME_SOLID_GROUP_ARROWS_ROTATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GUARANI_SIGN))  
      return wxString(SVG_AWESOME_SOLID_GUARANI_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GUITAR))  
      return wxString(SVG_AWESOME_SOLID_GUITAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GUN))  
      return wxString(SVG_AWESOME_SOLID_GUN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_H))  
      return wxString(SVG_AWESOME_SOLID_H);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAMMER))  
      return wxString(SVG_AWESOME_SOLID_HAMMER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAMSA))  
      return wxString(SVG_AWESOME_SOLID_HAMSA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_BACK_FIST))  
      return wxString(SVG_AWESOME_SOLID_HAND_BACK_FIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_DOTS))  
      return wxString(SVG_AWESOME_SOLID_HAND_DOTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_FIST))  
      return wxString(SVG_AWESOME_SOLID_HAND_FIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_HOLDING_DOLLAR))  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_DOLLAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_HOLDING_DROPLET))  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_DROPLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_HOLDING_HAND))  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_HAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_HOLDING_HEART))  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_HEART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_HOLDING_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_HOLDING))  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_LIZARD))  
      return wxString(SVG_AWESOME_SOLID_HAND_LIZARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_MIDDLE_FINGER))  
      return wxString(SVG_AWESOME_SOLID_HAND_MIDDLE_FINGER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_PEACE))  
      return wxString(SVG_AWESOME_SOLID_HAND_PEACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINT_DOWN))  
      return wxString(SVG_AWESOME_SOLID_HAND_POINT_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINT_LEFT))  
      return wxString(SVG_AWESOME_SOLID_HAND_POINT_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINT_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_HAND_POINT_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINT_UP))  
      return wxString(SVG_AWESOME_SOLID_HAND_POINT_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINTER))  
      return wxString(SVG_AWESOME_SOLID_HAND_POINTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_SCISSORS))  
      return wxString(SVG_AWESOME_SOLID_HAND_SCISSORS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_SPARKLES))  
      return wxString(SVG_AWESOME_SOLID_HAND_SPARKLES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_SPOCK))  
      return wxString(SVG_AWESOME_SOLID_HAND_SPOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND))  
      return wxString(SVG_AWESOME_SOLID_HAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDCUFFS))  
      return wxString(SVG_AWESOME_SOLID_HANDCUFFS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDS_ASL_INTERPRETING))  
      return wxString(SVG_AWESOME_SOLID_HANDS_ASL_INTERPRETING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDS_BOUND))  
      return wxString(SVG_AWESOME_SOLID_HANDS_BOUND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDS_BUBBLES))  
      return wxString(SVG_AWESOME_SOLID_HANDS_BUBBLES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDS_CLAPPING))  
      return wxString(SVG_AWESOME_SOLID_HANDS_CLAPPING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDS_HOLDING_CHILD))  
      return wxString(SVG_AWESOME_SOLID_HANDS_HOLDING_CHILD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDS_HOLDING_CIRCLE))  
      return wxString(SVG_AWESOME_SOLID_HANDS_HOLDING_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDS_HOLDING))  
      return wxString(SVG_AWESOME_SOLID_HANDS_HOLDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDS_PRAYING))  
      return wxString(SVG_AWESOME_SOLID_HANDS_PRAYING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDS))  
      return wxString(SVG_AWESOME_SOLID_HANDS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDSHAKE_ANGLE))  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE_ANGLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDSHAKE_SIMPLE_SLASH))  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE_SIMPLE_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDSHAKE_SIMPLE))  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE_SIMPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDSHAKE_SLASH))  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDSHAKE))  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANUKIAH))  
      return wxString(SVG_AWESOME_SOLID_HANUKIAH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HARD_DRIVE))  
      return wxString(SVG_AWESOME_SOLID_HARD_DRIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HASHTAG))  
      return wxString(SVG_AWESOME_SOLID_HASHTAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAT_COWBOY_SIDE))  
      return wxString(SVG_AWESOME_SOLID_HAT_COWBOY_SIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAT_COWBOY))  
      return wxString(SVG_AWESOME_SOLID_HAT_COWBOY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAT_WIZARD))  
      return wxString(SVG_AWESOME_SOLID_HAT_WIZARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEAD_SIDE_COUGH_SLASH))  
      return wxString(SVG_AWESOME_SOLID_HEAD_SIDE_COUGH_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEAD_SIDE_COUGH))  
      return wxString(SVG_AWESOME_SOLID_HEAD_SIDE_COUGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEAD_SIDE_MASK))  
      return wxString(SVG_AWESOME_SOLID_HEAD_SIDE_MASK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEAD_SIDE_VIRUS))  
      return wxString(SVG_AWESOME_SOLID_HEAD_SIDE_VIRUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEADING))  
      return wxString(SVG_AWESOME_SOLID_HEADING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEADPHONES_SIMPLE))  
      return wxString(SVG_AWESOME_SOLID_HEADPHONES_SIMPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEADPHONES))  
      return wxString(SVG_AWESOME_SOLID_HEADPHONES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEADSET))  
      return wxString(SVG_AWESOME_SOLID_HEADSET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART_CIRCLE_BOLT))  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_BOLT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART_CIRCLE_MINUS))  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART_CIRCLE_PLUS))  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART_CRACK))  
      return wxString(SVG_AWESOME_SOLID_HEART_CRACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART_PULSE))  
      return wxString(SVG_AWESOME_SOLID_HEART_PULSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART))  
      return wxString(SVG_AWESOME_SOLID_HEART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HELICOPTER_SYMBOL))  
      return wxString(SVG_AWESOME_SOLID_HELICOPTER_SYMBOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HELICOPTER))  
      return wxString(SVG_AWESOME_SOLID_HELICOPTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HELMET_SAFETY))  
      return wxString(SVG_AWESOME_SOLID_HELMET_SAFETY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HELMET_UN))  
      return wxString(SVG_AWESOME_SOLID_HELMET_UN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIGHLIGHTER))  
      return wxString(SVG_AWESOME_SOLID_HIGHLIGHTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HILL_AVALANCHE))  
      return wxString(SVG_AWESOME_SOLID_HILL_AVALANCHE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HILL_ROCKSLIDE))  
      return wxString(SVG_AWESOME_SOLID_HILL_ROCKSLIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIPPO))  
      return wxString(SVG_AWESOME_SOLID_HIPPO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOCKEY_PUCK))  
      return wxString(SVG_AWESOME_SOLID_HOCKEY_PUCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOLLY_BERRY))  
      return wxString(SVG_AWESOME_SOLID_HOLLY_BERRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HORSE_HEAD))  
      return wxString(SVG_AWESOME_SOLID_HORSE_HEAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HORSE))  
      return wxString(SVG_AWESOME_SOLID_HORSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOSPITAL_USER))  
      return wxString(SVG_AWESOME_SOLID_HOSPITAL_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOSPITAL))  
      return wxString(SVG_AWESOME_SOLID_HOSPITAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOT_TUB_PERSON))  
      return wxString(SVG_AWESOME_SOLID_HOT_TUB_PERSON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOTDOG))  
      return wxString(SVG_AWESOME_SOLID_HOTDOG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOTEL))  
      return wxString(SVG_AWESOME_SOLID_HOTEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS_END))  
      return wxString(SVG_AWESOME_SOLID_HOURGLASS_END);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS_HALF))  
      return wxString(SVG_AWESOME_SOLID_HOURGLASS_HALF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS_START))  
      return wxString(SVG_AWESOME_SOLID_HOURGLASS_START);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS))  
      return wxString(SVG_AWESOME_SOLID_HOURGLASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_CHIMNEY_CRACK))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY_CRACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_CHIMNEY_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_CHIMNEY_USER))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_CHIMNEY_WINDOW))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY_WINDOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_CHIMNEY))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_CRACK))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CRACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_FIRE))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_FIRE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_FLAG))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_FLAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_FLOOD_WATER_CIRCLE_ARROW_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_FLOOD_WATER_CIRCLE_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_FLOOD_WATER))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_FLOOD_WATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_LAPTOP))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_LAPTOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_LOCK))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_MEDICAL_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_MEDICAL_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_MEDICAL_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_MEDICAL_FLAG))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL_FLAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_SIGNAL))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_SIGNAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_TSUNAMI))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_TSUNAMI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_USER))  
      return wxString(SVG_AWESOME_SOLID_HOUSE_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE))  
      return wxString(SVG_AWESOME_SOLID_HOUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HRYVNIA_SIGN))  
      return wxString(SVG_AWESOME_SOLID_HRYVNIA_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HURRICANE))  
      return wxString(SVG_AWESOME_SOLID_HURRICANE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_I_CURSOR))  
      return wxString(SVG_AWESOME_SOLID_I_CURSOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_I))  
      return wxString(SVG_AWESOME_SOLID_I);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ICE_CREAM))  
      return wxString(SVG_AWESOME_SOLID_ICE_CREAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ICICLES))  
      return wxString(SVG_AWESOME_SOLID_ICICLES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ICONS))  
      return wxString(SVG_AWESOME_SOLID_ICONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ID_BADGE))  
      return wxString(SVG_AWESOME_SOLID_ID_BADGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ID_CARD_CLIP))  
      return wxString(SVG_AWESOME_SOLID_ID_CARD_CLIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ID_CARD))  
      return wxString(SVG_AWESOME_SOLID_ID_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IGLOO))  
      return wxString(SVG_AWESOME_SOLID_IGLOO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGE_PORTRAIT))  
      return wxString(SVG_AWESOME_SOLID_IMAGE_PORTRAIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGE))  
      return wxString(SVG_AWESOME_SOLID_IMAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGES))  
      return wxString(SVG_AWESOME_SOLID_IMAGES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INBOX))  
      return wxString(SVG_AWESOME_SOLID_INBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INDENT))  
      return wxString(SVG_AWESOME_SOLID_INDENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INDIAN_RUPEE_SIGN))  
      return wxString(SVG_AWESOME_SOLID_INDIAN_RUPEE_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INDUSTRY))  
      return wxString(SVG_AWESOME_SOLID_INDUSTRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INFINITY))  
      return wxString(SVG_AWESOME_SOLID_INFINITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INFO))  
      return wxString(SVG_AWESOME_SOLID_INFO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ITALIC))  
      return wxString(SVG_AWESOME_SOLID_ITALIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_J))  
      return wxString(SVG_AWESOME_SOLID_J);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JAR_WHEAT))  
      return wxString(SVG_AWESOME_SOLID_JAR_WHEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JAR))  
      return wxString(SVG_AWESOME_SOLID_JAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JEDI))  
      return wxString(SVG_AWESOME_SOLID_JEDI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JET_FIGHTER_UP))  
      return wxString(SVG_AWESOME_SOLID_JET_FIGHTER_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JET_FIGHTER))  
      return wxString(SVG_AWESOME_SOLID_JET_FIGHTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JOINT))  
      return wxString(SVG_AWESOME_SOLID_JOINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JUG_DETERGENT))  
      return wxString(SVG_AWESOME_SOLID_JUG_DETERGENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_K))  
      return wxString(SVG_AWESOME_SOLID_K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KAABA))  
      return wxString(SVG_AWESOME_SOLID_KAABA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEY))  
      return wxString(SVG_AWESOME_SOLID_KEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD))  
      return wxString(SVG_AWESOME_SOLID_KEYBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KHANDA))  
      return wxString(SVG_AWESOME_SOLID_KHANDA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KIP_SIGN))  
      return wxString(SVG_AWESOME_SOLID_KIP_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KIT_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_KIT_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KITCHEN_SET))  
      return wxString(SVG_AWESOME_SOLID_KITCHEN_SET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KIWI_BIRD))  
      return wxString(SVG_AWESOME_SOLID_KIWI_BIRD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_L))  
      return wxString(SVG_AWESOME_SOLID_L);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAND_MINE_ON))  
      return wxString(SVG_AWESOME_SOLID_LAND_MINE_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LANDMARK_DOME))  
      return wxString(SVG_AWESOME_SOLID_LANDMARK_DOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LANDMARK_FLAG))  
      return wxString(SVG_AWESOME_SOLID_LANDMARK_FLAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LANDMARK))  
      return wxString(SVG_AWESOME_SOLID_LANDMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LANGUAGE))  
      return wxString(SVG_AWESOME_SOLID_LANGUAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAPTOP_CODE))  
      return wxString(SVG_AWESOME_SOLID_LAPTOP_CODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAPTOP_FILE))  
      return wxString(SVG_AWESOME_SOLID_LAPTOP_FILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAPTOP_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_LAPTOP_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAPTOP))  
      return wxString(SVG_AWESOME_SOLID_LAPTOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LARI_SIGN))  
      return wxString(SVG_AWESOME_SOLID_LARI_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAYER_GROUP))  
      return wxString(SVG_AWESOME_SOLID_LAYER_GROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEAF))  
      return wxString(SVG_AWESOME_SOLID_LEAF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEFT_LONG))  
      return wxString(SVG_AWESOME_SOLID_LEFT_LONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEFT_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_LEFT_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEMON))  
      return wxString(SVG_AWESOME_SOLID_LEMON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LESS_THAN_EQUAL))  
      return wxString(SVG_AWESOME_SOLID_LESS_THAN_EQUAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LESS_THAN))  
      return wxString(SVG_AWESOME_SOLID_LESS_THAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIFE_RING))  
      return wxString(SVG_AWESOME_SOLID_LIFE_RING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIGHTBULB))  
      return wxString(SVG_AWESOME_SOLID_LIGHTBULB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINES_LEANING))  
      return wxString(SVG_AWESOME_SOLID_LINES_LEANING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINK_SLASH))  
      return wxString(SVG_AWESOME_SOLID_LINK_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINK))  
      return wxString(SVG_AWESOME_SOLID_LINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIRA_SIGN))  
      return wxString(SVG_AWESOME_SOLID_LIRA_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIST_CHECK))  
      return wxString(SVG_AWESOME_SOLID_LIST_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIST_OL))  
      return wxString(SVG_AWESOME_SOLID_LIST_OL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIST_UL))  
      return wxString(SVG_AWESOME_SOLID_LIST_UL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIST))  
      return wxString(SVG_AWESOME_SOLID_LIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LITECOIN_SIGN))  
      return wxString(SVG_AWESOME_SOLID_LITECOIN_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_ARROW))  
      return wxString(SVG_AWESOME_SOLID_LOCATION_ARROW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_CROSSHAIRS))  
      return wxString(SVG_AWESOME_SOLID_LOCATION_CROSSHAIRS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_DOT))  
      return wxString(SVG_AWESOME_SOLID_LOCATION_DOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_PIN_LOCK))  
      return wxString(SVG_AWESOME_SOLID_LOCATION_PIN_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_PIN))  
      return wxString(SVG_AWESOME_SOLID_LOCATION_PIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCK_OPEN))  
      return wxString(SVG_AWESOME_SOLID_LOCK_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCK))  
      return wxString(SVG_AWESOME_SOLID_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCUST))  
      return wxString(SVG_AWESOME_SOLID_LOCUST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LUNGS_VIRUS))  
      return wxString(SVG_AWESOME_SOLID_LUNGS_VIRUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LUNGS))  
      return wxString(SVG_AWESOME_SOLID_LUNGS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_M))  
      return wxString(SVG_AWESOME_SOLID_M);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAGNET))  
      return wxString(SVG_AWESOME_SOLID_MAGNET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAGNIFYING_GLASS_ARROW_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAGNIFYING_GLASS_CHART))  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAGNIFYING_GLASS_DOLLAR))  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_DOLLAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAGNIFYING_GLASS_LOCATION))  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_LOCATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAGNIFYING_GLASS_MINUS))  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAGNIFYING_GLASS_PLUS))  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAGNIFYING_GLASS))  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MANAT_SIGN))  
      return wxString(SVG_AWESOME_SOLID_MANAT_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAP_LOCATION_DOT))  
      return wxString(SVG_AWESOME_SOLID_MAP_LOCATION_DOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAP_LOCATION))  
      return wxString(SVG_AWESOME_SOLID_MAP_LOCATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAP_PIN))  
      return wxString(SVG_AWESOME_SOLID_MAP_PIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAP))  
      return wxString(SVG_AWESOME_SOLID_MAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARKER))  
      return wxString(SVG_AWESOME_SOLID_MARKER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARS_AND_VENUS_BURST))  
      return wxString(SVG_AWESOME_SOLID_MARS_AND_VENUS_BURST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARS_AND_VENUS))  
      return wxString(SVG_AWESOME_SOLID_MARS_AND_VENUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARS_DOUBLE))  
      return wxString(SVG_AWESOME_SOLID_MARS_DOUBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARS_STROKE_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_MARS_STROKE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARS_STROKE_UP))  
      return wxString(SVG_AWESOME_SOLID_MARS_STROKE_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARS_STROKE))  
      return wxString(SVG_AWESOME_SOLID_MARS_STROKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARS))  
      return wxString(SVG_AWESOME_SOLID_MARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARTINI_GLASS_CITRUS))  
      return wxString(SVG_AWESOME_SOLID_MARTINI_GLASS_CITRUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARTINI_GLASS_EMPTY))  
      return wxString(SVG_AWESOME_SOLID_MARTINI_GLASS_EMPTY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARTINI_GLASS))  
      return wxString(SVG_AWESOME_SOLID_MARTINI_GLASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MASK_FACE))  
      return wxString(SVG_AWESOME_SOLID_MASK_FACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MASK_VENTILATOR))  
      return wxString(SVG_AWESOME_SOLID_MASK_VENTILATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MASK))  
      return wxString(SVG_AWESOME_SOLID_MASK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MASKS_THEATER))  
      return wxString(SVG_AWESOME_SOLID_MASKS_THEATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MATTRESS_PILLOW))  
      return wxString(SVG_AWESOME_SOLID_MATTRESS_PILLOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAXIMIZE))  
      return wxString(SVG_AWESOME_SOLID_MAXIMIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDAL))  
      return wxString(SVG_AWESOME_SOLID_MEDAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEMORY))  
      return wxString(SVG_AWESOME_SOLID_MEMORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MENORAH))  
      return wxString(SVG_AWESOME_SOLID_MENORAH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MERCURY))  
      return wxString(SVG_AWESOME_SOLID_MERCURY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MESSAGE))  
      return wxString(SVG_AWESOME_SOLID_MESSAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_METEOR))  
      return wxString(SVG_AWESOME_SOLID_METEOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MICROCHIP))  
      return wxString(SVG_AWESOME_SOLID_MICROCHIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MICROPHONE_LINES_SLASH))  
      return wxString(SVG_AWESOME_SOLID_MICROPHONE_LINES_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MICROPHONE_LINES))  
      return wxString(SVG_AWESOME_SOLID_MICROPHONE_LINES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MICROPHONE_SLASH))  
      return wxString(SVG_AWESOME_SOLID_MICROPHONE_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MICROPHONE))  
      return wxString(SVG_AWESOME_SOLID_MICROPHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MICROSCOPE))  
      return wxString(SVG_AWESOME_SOLID_MICROSCOPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MILL_SIGN))  
      return wxString(SVG_AWESOME_SOLID_MILL_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MINIMIZE))  
      return wxString(SVG_AWESOME_SOLID_MINIMIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MINUS))  
      return wxString(SVG_AWESOME_SOLID_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MITTEN))  
      return wxString(SVG_AWESOME_SOLID_MITTEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOBILE_BUTTON))  
      return wxString(SVG_AWESOME_SOLID_MOBILE_BUTTON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOBILE_RETRO))  
      return wxString(SVG_AWESOME_SOLID_MOBILE_RETRO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOBILE_SCREEN_BUTTON))  
      return wxString(SVG_AWESOME_SOLID_MOBILE_SCREEN_BUTTON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOBILE_SCREEN))  
      return wxString(SVG_AWESOME_SOLID_MOBILE_SCREEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOBILE))  
      return wxString(SVG_AWESOME_SOLID_MOBILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_BILL_1_WAVE))  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_1_WAVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_BILL_1))  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_BILL_TRANSFER))  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_TRANSFER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_BILL_TREND_UP))  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_TREND_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_BILL_WAVE))  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_WAVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_BILL_WHEAT))  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_WHEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_BILL))  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_BILLS))  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILLS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_CHECK_DOLLAR))  
      return wxString(SVG_AWESOME_SOLID_MONEY_CHECK_DOLLAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_CHECK))  
      return wxString(SVG_AWESOME_SOLID_MONEY_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONUMENT))  
      return wxString(SVG_AWESOME_SOLID_MONUMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOON))  
      return wxString(SVG_AWESOME_SOLID_MOON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MORTAR_PESTLE))  
      return wxString(SVG_AWESOME_SOLID_MORTAR_PESTLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOSQUE))  
      return wxString(SVG_AWESOME_SOLID_MOSQUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOSQUITO_NET))  
      return wxString(SVG_AWESOME_SOLID_MOSQUITO_NET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOSQUITO))  
      return wxString(SVG_AWESOME_SOLID_MOSQUITO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOTORCYCLE))  
      return wxString(SVG_AWESOME_SOLID_MOTORCYCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOUND))  
      return wxString(SVG_AWESOME_SOLID_MOUND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOUNTAIN_CITY))  
      return wxString(SVG_AWESOME_SOLID_MOUNTAIN_CITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOUNTAIN_SUN))  
      return wxString(SVG_AWESOME_SOLID_MOUNTAIN_SUN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOUNTAIN))  
      return wxString(SVG_AWESOME_SOLID_MOUNTAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MUG_HOT))  
      return wxString(SVG_AWESOME_SOLID_MUG_HOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MUG_SAUCER))  
      return wxString(SVG_AWESOME_SOLID_MUG_SAUCER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MUSIC))  
      return wxString(SVG_AWESOME_SOLID_MUSIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_N))  
      return wxString(SVG_AWESOME_SOLID_N);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NAIRA_SIGN))  
      return wxString(SVG_AWESOME_SOLID_NAIRA_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NETWORK_WIRED))  
      return wxString(SVG_AWESOME_SOLID_NETWORK_WIRED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEUTER))  
      return wxString(SVG_AWESOME_SOLID_NEUTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEWSPAPER))  
      return wxString(SVG_AWESOME_SOLID_NEWSPAPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOT_EQUAL))  
      return wxString(SVG_AWESOME_SOLID_NOT_EQUAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTDEF))  
      return wxString(SVG_AWESOME_SOLID_NOTDEF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTE_STICKY))  
      return wxString(SVG_AWESOME_SOLID_NOTE_STICKY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTES_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_NOTES_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_O))  
      return wxString(SVG_AWESOME_SOLID_O);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OBJECT_GROUP))  
      return wxString(SVG_AWESOME_SOLID_OBJECT_GROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OBJECT_UNGROUP))  
      return wxString(SVG_AWESOME_SOLID_OBJECT_UNGROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OIL_CAN))  
      return wxString(SVG_AWESOME_SOLID_OIL_CAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OIL_WELL))  
      return wxString(SVG_AWESOME_SOLID_OIL_WELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OM))  
      return wxString(SVG_AWESOME_SOLID_OM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OTTER))  
      return wxString(SVG_AWESOME_SOLID_OTTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OUTDENT))  
      return wxString(SVG_AWESOME_SOLID_OUTDENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_P))  
      return wxString(SVG_AWESOME_SOLID_P);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAGER))  
      return wxString(SVG_AWESOME_SOLID_PAGER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAINT_ROLLER))  
      return wxString(SVG_AWESOME_SOLID_PAINT_ROLLER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAINTBRUSH))  
      return wxString(SVG_AWESOME_SOLID_PAINTBRUSH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PALETTE))  
      return wxString(SVG_AWESOME_SOLID_PALETTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PALLET))  
      return wxString(SVG_AWESOME_SOLID_PALLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA))  
      return wxString(SVG_AWESOME_SOLID_PANORAMA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAPER_PLANE))  
      return wxString(SVG_AWESOME_SOLID_PAPER_PLANE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAPERCLIP))  
      return wxString(SVG_AWESOME_SOLID_PAPERCLIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PARACHUTE_BOX))  
      return wxString(SVG_AWESOME_SOLID_PARACHUTE_BOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PARAGRAPH))  
      return wxString(SVG_AWESOME_SOLID_PARAGRAPH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PASSPORT))  
      return wxString(SVG_AWESOME_SOLID_PASSPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PASTE))  
      return wxString(SVG_AWESOME_SOLID_PASTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAUSE))  
      return wxString(SVG_AWESOME_SOLID_PAUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAW))  
      return wxString(SVG_AWESOME_SOLID_PAW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEACE))  
      return wxString(SVG_AWESOME_SOLID_PEACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEN_CLIP))  
      return wxString(SVG_AWESOME_SOLID_PEN_CLIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEN_FANCY))  
      return wxString(SVG_AWESOME_SOLID_PEN_FANCY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEN_NIB))  
      return wxString(SVG_AWESOME_SOLID_PEN_NIB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEN_RULER))  
      return wxString(SVG_AWESOME_SOLID_PEN_RULER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEN_TO_SQUARE))  
      return wxString(SVG_AWESOME_SOLID_PEN_TO_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEN))  
      return wxString(SVG_AWESOME_SOLID_PEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PENCIL))  
      return wxString(SVG_AWESOME_SOLID_PENCIL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE_ARROWS))  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_ARROWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE_CARRY_BOX))  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_CARRY_BOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE_GROUP))  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_GROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE_LINE))  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE_PULLING))  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_PULLING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE_ROBBERY))  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_ROBBERY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE_ROOF))  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_ROOF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEPPER_HOT))  
      return wxString(SVG_AWESOME_SOLID_PEPPER_HOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERCENT))  
      return wxString(SVG_AWESOME_SOLID_PERCENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_ARROW_DOWN_TO_LINE))  
      return wxString(SVG_AWESOME_SOLID_PERSON_ARROW_DOWN_TO_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_ARROW_UP_FROM_LINE))  
      return wxString(SVG_AWESOME_SOLID_PERSON_ARROW_UP_FROM_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_BIKING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_BIKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_BOOTH))  
      return wxString(SVG_AWESOME_SOLID_PERSON_BOOTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_BREASTFEEDING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_BREASTFEEDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_BURST))  
      return wxString(SVG_AWESOME_SOLID_PERSON_BURST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_CANE))  
      return wxString(SVG_AWESOME_SOLID_PERSON_CANE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_CHALKBOARD))  
      return wxString(SVG_AWESOME_SOLID_PERSON_CHALKBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_CIRCLE_MINUS))  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_CIRCLE_PLUS))  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_CIRCLE_QUESTION))  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_QUESTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_DIGGING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_DIGGING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_DOTS_FROM_LINE))  
      return wxString(SVG_AWESOME_SOLID_PERSON_DOTS_FROM_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_DRESS_BURST))  
      return wxString(SVG_AWESOME_SOLID_PERSON_DRESS_BURST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_DRESS))  
      return wxString(SVG_AWESOME_SOLID_PERSON_DRESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_DROWNING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_DROWNING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_FALLING_BURST))  
      return wxString(SVG_AWESOME_SOLID_PERSON_FALLING_BURST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_FALLING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_FALLING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_HALF_DRESS))  
      return wxString(SVG_AWESOME_SOLID_PERSON_HALF_DRESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_HARASSING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_HARASSING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_HIKING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_HIKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_MILITARY_POINTING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_MILITARY_POINTING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_MILITARY_RIFLE))  
      return wxString(SVG_AWESOME_SOLID_PERSON_MILITARY_RIFLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_MILITARY_TO_PERSON))  
      return wxString(SVG_AWESOME_SOLID_PERSON_MILITARY_TO_PERSON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_PRAYING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_PRAYING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_PREGNANT))  
      return wxString(SVG_AWESOME_SOLID_PERSON_PREGNANT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_RAYS))  
      return wxString(SVG_AWESOME_SOLID_PERSON_RAYS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_RIFLE))  
      return wxString(SVG_AWESOME_SOLID_PERSON_RIFLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_RUNNING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_RUNNING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_SHELTER))  
      return wxString(SVG_AWESOME_SOLID_PERSON_SHELTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_SKATING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_SKATING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_SKIING_NORDIC))  
      return wxString(SVG_AWESOME_SOLID_PERSON_SKIING_NORDIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_SKIING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_SKIING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_SNOWBOARDING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_SNOWBOARDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_SWIMMING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_SWIMMING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_THROUGH_WINDOW))  
      return wxString(SVG_AWESOME_SOLID_PERSON_THROUGH_WINDOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_WALKING_ARROW_LOOP_LEFT))  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_ARROW_LOOP_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_WALKING_ARROW_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_WALKING_DASHED_LINE_ARROW_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_DASHED_LINE_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_WALKING_LUGGAGE))  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_LUGGAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_WALKING_WITH_CANE))  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_WITH_CANE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_WALKING))  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON))  
      return wxString(SVG_AWESOME_SOLID_PERSON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PESETA_SIGN))  
      return wxString(SVG_AWESOME_SOLID_PESETA_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PESO_SIGN))  
      return wxString(SVG_AWESOME_SOLID_PESO_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_FLIP))  
      return wxString(SVG_AWESOME_SOLID_PHONE_FLIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_SLASH))  
      return wxString(SVG_AWESOME_SOLID_PHONE_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_VOLUME))  
      return wxString(SVG_AWESOME_SOLID_PHONE_VOLUME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE))  
      return wxString(SVG_AWESOME_SOLID_PHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_FILM))  
      return wxString(SVG_AWESOME_SOLID_PHOTO_FILM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIGGY_BANK))  
      return wxString(SVG_AWESOME_SOLID_PIGGY_BANK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PILLS))  
      return wxString(SVG_AWESOME_SOLID_PILLS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIZZA_SLICE))  
      return wxString(SVG_AWESOME_SOLID_PIZZA_SLICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLACE_OF_WORSHIP))  
      return wxString(SVG_AWESOME_SOLID_PLACE_OF_WORSHIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANE_ARRIVAL))  
      return wxString(SVG_AWESOME_SOLID_PLANE_ARRIVAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANE_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_PLANE_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANE_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_PLANE_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANE_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_PLANE_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANE_DEPARTURE))  
      return wxString(SVG_AWESOME_SOLID_PLANE_DEPARTURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANE_LOCK))  
      return wxString(SVG_AWESOME_SOLID_PLANE_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANE_SLASH))  
      return wxString(SVG_AWESOME_SOLID_PLANE_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANE_UP))  
      return wxString(SVG_AWESOME_SOLID_PLANE_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANE))  
      return wxString(SVG_AWESOME_SOLID_PLANE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLANT_WILT))  
      return wxString(SVG_AWESOME_SOLID_PLANT_WILT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLATE_WHEAT))  
      return wxString(SVG_AWESOME_SOLID_PLATE_WHEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAY))  
      return wxString(SVG_AWESOME_SOLID_PLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUG_CIRCLE_BOLT))  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_BOLT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUG_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUG_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUG_CIRCLE_MINUS))  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUG_CIRCLE_PLUS))  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUG_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUG))  
      return wxString(SVG_AWESOME_SOLID_PLUG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUS_MINUS))  
      return wxString(SVG_AWESOME_SOLID_PLUS_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUS))  
      return wxString(SVG_AWESOME_SOLID_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PODCAST))  
      return wxString(SVG_AWESOME_SOLID_PODCAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POO_STORM))  
      return wxString(SVG_AWESOME_SOLID_POO_STORM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POO))  
      return wxString(SVG_AWESOME_SOLID_POO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POOP))  
      return wxString(SVG_AWESOME_SOLID_POOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POWER_OFF))  
      return wxString(SVG_AWESOME_SOLID_POWER_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRESCRIPTION_BOTTLE_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_PRESCRIPTION_BOTTLE_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRESCRIPTION_BOTTLE))  
      return wxString(SVG_AWESOME_SOLID_PRESCRIPTION_BOTTLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRESCRIPTION))  
      return wxString(SVG_AWESOME_SOLID_PRESCRIPTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRINT))  
      return wxString(SVG_AWESOME_SOLID_PRINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUMP_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_PUMP_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUMP_SOAP))  
      return wxString(SVG_AWESOME_SOLID_PUMP_SOAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUZZLE_PIECE))  
      return wxString(SVG_AWESOME_SOLID_PUZZLE_PIECE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_Q))  
      return wxString(SVG_AWESOME_SOLID_Q);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QRCODE))  
      return wxString(SVG_AWESOME_SOLID_QRCODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUESTION))  
      return wxString(SVG_AWESOME_SOLID_QUESTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUOTE_LEFT))  
      return wxString(SVG_AWESOME_SOLID_QUOTE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUOTE_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_QUOTE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_R))  
      return wxString(SVG_AWESOME_SOLID_R);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RADIATION))  
      return wxString(SVG_AWESOME_SOLID_RADIATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RADIO))  
      return wxString(SVG_AWESOME_SOLID_RADIO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RAINBOW))  
      return wxString(SVG_AWESOME_SOLID_RAINBOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RANKING_STAR))  
      return wxString(SVG_AWESOME_SOLID_RANKING_STAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECEIPT))  
      return wxString(SVG_AWESOME_SOLID_RECEIPT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECORD_VINYL))  
      return wxString(SVG_AWESOME_SOLID_RECORD_VINYL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECTANGLE_AD))  
      return wxString(SVG_AWESOME_SOLID_RECTANGLE_AD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECTANGLE_LIST))  
      return wxString(SVG_AWESOME_SOLID_RECTANGLE_LIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECTANGLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_RECTANGLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECYCLE))  
      return wxString(SVG_AWESOME_SOLID_RECYCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REGISTERED))  
      return wxString(SVG_AWESOME_SOLID_REGISTERED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPEAT))  
      return wxString(SVG_AWESOME_SOLID_REPEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLY_ALL))  
      return wxString(SVG_AWESOME_SOLID_REPLY_ALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLY))  
      return wxString(SVG_AWESOME_SOLID_REPLY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPUBLICAN))  
      return wxString(SVG_AWESOME_SOLID_REPUBLICAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESTROOM))  
      return wxString(SVG_AWESOME_SOLID_RESTROOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RETWEET))  
      return wxString(SVG_AWESOME_SOLID_RETWEET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RIBBON))  
      return wxString(SVG_AWESOME_SOLID_RIBBON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RIGHT_FROM_BRACKET))  
      return wxString(SVG_AWESOME_SOLID_RIGHT_FROM_BRACKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RIGHT_LEFT))  
      return wxString(SVG_AWESOME_SOLID_RIGHT_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RIGHT_LONG))  
      return wxString(SVG_AWESOME_SOLID_RIGHT_LONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RIGHT_TO_BRACKET))  
      return wxString(SVG_AWESOME_SOLID_RIGHT_TO_BRACKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RING))  
      return wxString(SVG_AWESOME_SOLID_RING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROAD_BARRIER))  
      return wxString(SVG_AWESOME_SOLID_ROAD_BARRIER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROAD_BRIDGE))  
      return wxString(SVG_AWESOME_SOLID_ROAD_BRIDGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROAD_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_ROAD_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROAD_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_ROAD_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROAD_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_ROAD_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROAD_LOCK))  
      return wxString(SVG_AWESOME_SOLID_ROAD_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROAD_SPIKES))  
      return wxString(SVG_AWESOME_SOLID_ROAD_SPIKES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROAD))  
      return wxString(SVG_AWESOME_SOLID_ROAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROBOT))  
      return wxString(SVG_AWESOME_SOLID_ROBOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROCKET))  
      return wxString(SVG_AWESOME_SOLID_ROCKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROTATE_LEFT))  
      return wxString(SVG_AWESOME_SOLID_ROTATE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROTATE_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_ROTATE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROTATE))  
      return wxString(SVG_AWESOME_SOLID_ROTATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROUTE))  
      return wxString(SVG_AWESOME_SOLID_ROUTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RSS))  
      return wxString(SVG_AWESOME_SOLID_RSS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RUBLE_SIGN))  
      return wxString(SVG_AWESOME_SOLID_RUBLE_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RUG))  
      return wxString(SVG_AWESOME_SOLID_RUG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RULER_COMBINED))  
      return wxString(SVG_AWESOME_SOLID_RULER_COMBINED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RULER_HORIZONTAL))  
      return wxString(SVG_AWESOME_SOLID_RULER_HORIZONTAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RULER_VERTICAL))  
      return wxString(SVG_AWESOME_SOLID_RULER_VERTICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RULER))  
      return wxString(SVG_AWESOME_SOLID_RULER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RUPEE_SIGN))  
      return wxString(SVG_AWESOME_SOLID_RUPEE_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RUPIAH_SIGN))  
      return wxString(SVG_AWESOME_SOLID_RUPIAH_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_S))  
      return wxString(SVG_AWESOME_SOLID_S);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SACK_DOLLAR))  
      return wxString(SVG_AWESOME_SOLID_SACK_DOLLAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SACK_XMARK))  
      return wxString(SVG_AWESOME_SOLID_SACK_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAILBOAT))  
      return wxString(SVG_AWESOME_SOLID_SAILBOAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SATELLITE_DISH))  
      return wxString(SVG_AWESOME_SOLID_SATELLITE_DISH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SATELLITE))  
      return wxString(SVG_AWESOME_SOLID_SATELLITE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCALE_BALANCED))  
      return wxString(SVG_AWESOME_SOLID_SCALE_BALANCED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCALE_UNBALANCED_FLIP))  
      return wxString(SVG_AWESOME_SOLID_SCALE_UNBALANCED_FLIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCALE_UNBALANCED))  
      return wxString(SVG_AWESOME_SOLID_SCALE_UNBALANCED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHOOL_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHOOL_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHOOL_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHOOL_FLAG))  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_FLAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHOOL_LOCK))  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHOOL))  
      return wxString(SVG_AWESOME_SOLID_SCHOOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCISSORS))  
      return wxString(SVG_AWESOME_SOLID_SCISSORS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREWDRIVER_WRENCH))  
      return wxString(SVG_AWESOME_SOLID_SCREWDRIVER_WRENCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREWDRIVER))  
      return wxString(SVG_AWESOME_SOLID_SCREWDRIVER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCROLL_TORAH))  
      return wxString(SVG_AWESOME_SOLID_SCROLL_TORAH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCROLL))  
      return wxString(SVG_AWESOME_SOLID_SCROLL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SD_CARD))  
      return wxString(SVG_AWESOME_SOLID_SD_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SECTION))  
      return wxString(SVG_AWESOME_SOLID_SECTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEEDLING))  
      return wxString(SVG_AWESOME_SOLID_SEEDLING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SERVER))  
      return wxString(SVG_AWESOME_SOLID_SERVER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHAPES))  
      return wxString(SVG_AWESOME_SOLID_SHAPES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHARE_FROM_SQUARE))  
      return wxString(SVG_AWESOME_SOLID_SHARE_FROM_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHARE_NODES))  
      return wxString(SVG_AWESOME_SOLID_SHARE_NODES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHARE))  
      return wxString(SVG_AWESOME_SOLID_SHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHEET_PLASTIC))  
      return wxString(SVG_AWESOME_SOLID_SHEET_PLASTIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHEKEL_SIGN))  
      return wxString(SVG_AWESOME_SOLID_SHEKEL_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIELD_CAT))  
      return wxString(SVG_AWESOME_SOLID_SHIELD_CAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIELD_DOG))  
      return wxString(SVG_AWESOME_SOLID_SHIELD_DOG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIELD_HALVED))  
      return wxString(SVG_AWESOME_SOLID_SHIELD_HALVED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIELD_HEART))  
      return wxString(SVG_AWESOME_SOLID_SHIELD_HEART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIELD_VIRUS))  
      return wxString(SVG_AWESOME_SOLID_SHIELD_VIRUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIELD))  
      return wxString(SVG_AWESOME_SOLID_SHIELD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIP))  
      return wxString(SVG_AWESOME_SOLID_SHIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIRT))  
      return wxString(SVG_AWESOME_SOLID_SHIRT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOE_PRINTS))  
      return wxString(SVG_AWESOME_SOLID_SHOE_PRINTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOP_LOCK))  
      return wxString(SVG_AWESOME_SOLID_SHOP_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOP_SLASH))  
      return wxString(SVG_AWESOME_SOLID_SHOP_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOP))  
      return wxString(SVG_AWESOME_SOLID_SHOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOWER))  
      return wxString(SVG_AWESOME_SOLID_SHOWER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHRIMP))  
      return wxString(SVG_AWESOME_SOLID_SHRIMP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHUFFLE))  
      return wxString(SVG_AWESOME_SOLID_SHUFFLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHUTTLE_SPACE))  
      return wxString(SVG_AWESOME_SOLID_SHUTTLE_SPACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGN_HANGING))  
      return wxString(SVG_AWESOME_SOLID_SIGN_HANGING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL))  
      return wxString(SVG_AWESOME_SOLID_SIGNAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNATURE))  
      return wxString(SVG_AWESOME_SOLID_SIGNATURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNS_POST))  
      return wxString(SVG_AWESOME_SOLID_SIGNS_POST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIM_CARD))  
      return wxString(SVG_AWESOME_SOLID_SIM_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SINK))  
      return wxString(SVG_AWESOME_SOLID_SINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SITEMAP))  
      return wxString(SVG_AWESOME_SOLID_SITEMAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SKULL_CROSSBONES))  
      return wxString(SVG_AWESOME_SOLID_SKULL_CROSSBONES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SKULL))  
      return wxString(SVG_AWESOME_SOLID_SKULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SLASH))  
      return wxString(SVG_AWESOME_SOLID_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SLEIGH))  
      return wxString(SVG_AWESOME_SOLID_SLEIGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SLIDERS))  
      return wxString(SVG_AWESOME_SOLID_SLIDERS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMOG))  
      return wxString(SVG_AWESOME_SOLID_SMOG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMOKING))  
      return wxString(SVG_AWESOME_SOLID_SMOKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNOWFLAKE))  
      return wxString(SVG_AWESOME_SOLID_SNOWFLAKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNOWMAN))  
      return wxString(SVG_AWESOME_SOLID_SNOWMAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNOWPLOW))  
      return wxString(SVG_AWESOME_SOLID_SNOWPLOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOAP))  
      return wxString(SVG_AWESOME_SOLID_SOAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOCKS))  
      return wxString(SVG_AWESOME_SOLID_SOCKS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOLAR_PANEL))  
      return wxString(SVG_AWESOME_SOLID_SOLAR_PANEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SORT_DOWN))  
      return wxString(SVG_AWESOME_SOLID_SORT_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SORT_UP))  
      return wxString(SVG_AWESOME_SOLID_SORT_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SORT))  
      return wxString(SVG_AWESOME_SOLID_SORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPA))  
      return wxString(SVG_AWESOME_SOLID_SPA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPAGHETTI_MONSTER_FLYING))  
      return wxString(SVG_AWESOME_SOLID_SPAGHETTI_MONSTER_FLYING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPELL_CHECK))  
      return wxString(SVG_AWESOME_SOLID_SPELL_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPIDER))  
      return wxString(SVG_AWESOME_SOLID_SPIDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPINNER))  
      return wxString(SVG_AWESOME_SOLID_SPINNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPLOTCH))  
      return wxString(SVG_AWESOME_SOLID_SPLOTCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPOON))  
      return wxString(SVG_AWESOME_SOLID_SPOON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPRAY_CAN_SPARKLES))  
      return wxString(SVG_AWESOME_SOLID_SPRAY_CAN_SPARKLES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPRAY_CAN))  
      return wxString(SVG_AWESOME_SOLID_SPRAY_CAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_ARROW_UP_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_ARROW_UP_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CARET_DOWN))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CARET_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CARET_LEFT))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CARET_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CARET_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CARET_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CARET_UP))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CARET_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_ENVELOPE))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_ENVELOPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_FULL))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_H))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_H);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_MINUS))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_NFI))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_NFI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_PARKING))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PARKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_PEN))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_PERSON_CONFINED))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PERSON_CONFINED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_PHONE_FLIP))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PHONE_FLIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_PHONE))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_PLUS))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_POLL_HORIZONTAL))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_POLL_HORIZONTAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_POLL_VERTICAL))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_POLL_VERTICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_ROOT_VARIABLE))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_ROOT_VARIABLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_RSS))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_RSS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_SHARE_NODES))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_SHARE_NODES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_UP_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_UP_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_VIRUS))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_VIRUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_XMARK))  
      return wxString(SVG_AWESOME_SOLID_SQUARE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE))  
      return wxString(SVG_AWESOME_SOLID_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAFF_SNAKE))  
      return wxString(SVG_AWESOME_SOLID_STAFF_SNAKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAIRS))  
      return wxString(SVG_AWESOME_SOLID_STAIRS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAMP))  
      return wxString(SVG_AWESOME_SOLID_STAMP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAPLER))  
      return wxString(SVG_AWESOME_SOLID_STAPLER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_AND_CRESCENT))  
      return wxString(SVG_AWESOME_SOLID_STAR_AND_CRESCENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_HALF_STROKE))  
      return wxString(SVG_AWESOME_SOLID_STAR_HALF_STROKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_HALF))  
      return wxString(SVG_AWESOME_SOLID_STAR_HALF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_OF_DAVID))  
      return wxString(SVG_AWESOME_SOLID_STAR_OF_DAVID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_OF_LIFE))  
      return wxString(SVG_AWESOME_SOLID_STAR_OF_LIFE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR))  
      return wxString(SVG_AWESOME_SOLID_STAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STERLING_SIGN))  
      return wxString(SVG_AWESOME_SOLID_STERLING_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STETHOSCOPE))  
      return wxString(SVG_AWESOME_SOLID_STETHOSCOPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STOP))  
      return wxString(SVG_AWESOME_SOLID_STOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STOPWATCH_20))  
      return wxString(SVG_AWESOME_SOLID_STOPWATCH_20);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STOPWATCH))  
      return wxString(SVG_AWESOME_SOLID_STOPWATCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STORE_SLASH))  
      return wxString(SVG_AWESOME_SOLID_STORE_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STORE))  
      return wxString(SVG_AWESOME_SOLID_STORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STREET_VIEW))  
      return wxString(SVG_AWESOME_SOLID_STREET_VIEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STRIKETHROUGH))  
      return wxString(SVG_AWESOME_SOLID_STRIKETHROUGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STROOPWAFEL))  
      return wxString(SVG_AWESOME_SOLID_STROOPWAFEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUBSCRIPT))  
      return wxString(SVG_AWESOME_SOLID_SUBSCRIPT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUITCASE_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_SUITCASE_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUITCASE_ROLLING))  
      return wxString(SVG_AWESOME_SOLID_SUITCASE_ROLLING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUITCASE))  
      return wxString(SVG_AWESOME_SOLID_SUITCASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUN_PLANT_WILT))  
      return wxString(SVG_AWESOME_SOLID_SUN_PLANT_WILT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUN))  
      return wxString(SVG_AWESOME_SOLID_SUN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUPERSCRIPT))  
      return wxString(SVG_AWESOME_SOLID_SUPERSCRIPT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWATCHBOOK))  
      return wxString(SVG_AWESOME_SOLID_SWATCHBOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYNAGOGUE))  
      return wxString(SVG_AWESOME_SOLID_SYNAGOGUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYRINGE))  
      return wxString(SVG_AWESOME_SOLID_SYRINGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_T))  
      return wxString(SVG_AWESOME_SOLID_T);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_CELLS_LARGE))  
      return wxString(SVG_AWESOME_SOLID_TABLE_CELLS_LARGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_CELLS))  
      return wxString(SVG_AWESOME_SOLID_TABLE_CELLS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_COLUMNS))  
      return wxString(SVG_AWESOME_SOLID_TABLE_COLUMNS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_LIST))  
      return wxString(SVG_AWESOME_SOLID_TABLE_LIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_TENNIS_PADDLE_BALL))  
      return wxString(SVG_AWESOME_SOLID_TABLE_TENNIS_PADDLE_BALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE))  
      return wxString(SVG_AWESOME_SOLID_TABLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLET_BUTTON))  
      return wxString(SVG_AWESOME_SOLID_TABLET_BUTTON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLET_SCREEN_BUTTON))  
      return wxString(SVG_AWESOME_SOLID_TABLET_SCREEN_BUTTON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLET))  
      return wxString(SVG_AWESOME_SOLID_TABLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLETS))  
      return wxString(SVG_AWESOME_SOLID_TABLETS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TACHOGRAPH_DIGITAL))  
      return wxString(SVG_AWESOME_SOLID_TACHOGRAPH_DIGITAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAG))  
      return wxString(SVG_AWESOME_SOLID_TAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAGS))  
      return wxString(SVG_AWESOME_SOLID_TAGS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAPE))  
      return wxString(SVG_AWESOME_SOLID_TAPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TARP_DROPLET))  
      return wxString(SVG_AWESOME_SOLID_TARP_DROPLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TARP))  
      return wxString(SVG_AWESOME_SOLID_TARP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAXI))  
      return wxString(SVG_AWESOME_SOLID_TAXI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEETH_OPEN))  
      return wxString(SVG_AWESOME_SOLID_TEETH_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEETH))  
      return wxString(SVG_AWESOME_SOLID_TEETH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPERATURE_ARROW_DOWN))  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_ARROW_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPERATURE_ARROW_UP))  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_ARROW_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPERATURE_EMPTY))  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_EMPTY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPERATURE_FULL))  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPERATURE_HALF))  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_HALF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPERATURE_HIGH))  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_HIGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPERATURE_LOW))  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_LOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPERATURE_QUARTER))  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_QUARTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPERATURE_THREE_QUARTERS))  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_THREE_QUARTERS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TENGE_SIGN))  
      return wxString(SVG_AWESOME_SOLID_TENGE_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TENT_ARROW_DOWN_TO_LINE))  
      return wxString(SVG_AWESOME_SOLID_TENT_ARROW_DOWN_TO_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TENT_ARROW_LEFT_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_TENT_ARROW_LEFT_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TENT_ARROW_TURN_LEFT))  
      return wxString(SVG_AWESOME_SOLID_TENT_ARROW_TURN_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TENT_ARROWS_DOWN))  
      return wxString(SVG_AWESOME_SOLID_TENT_ARROWS_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TENT))  
      return wxString(SVG_AWESOME_SOLID_TENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TENTS))  
      return wxString(SVG_AWESOME_SOLID_TENTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TERMINAL))  
      return wxString(SVG_AWESOME_SOLID_TERMINAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_HEIGHT))  
      return wxString(SVG_AWESOME_SOLID_TEXT_HEIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_SLASH))  
      return wxString(SVG_AWESOME_SOLID_TEXT_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_WIDTH))  
      return wxString(SVG_AWESOME_SOLID_TEXT_WIDTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THERMOMETER))  
      return wxString(SVG_AWESOME_SOLID_THERMOMETER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMBS_DOWN))  
      return wxString(SVG_AWESOME_SOLID_THUMBS_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMBS_UP))  
      return wxString(SVG_AWESOME_SOLID_THUMBS_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMBTACK))  
      return wxString(SVG_AWESOME_SOLID_THUMBTACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TICKET_SIMPLE))  
      return wxString(SVG_AWESOME_SOLID_TICKET_SIMPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TICKET))  
      return wxString(SVG_AWESOME_SOLID_TICKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIMELINE))  
      return wxString(SVG_AWESOME_SOLID_TIMELINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOGGLE_OFF))  
      return wxString(SVG_AWESOME_SOLID_TOGGLE_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOGGLE_ON))  
      return wxString(SVG_AWESOME_SOLID_TOGGLE_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOILET_PAPER_SLASH))  
      return wxString(SVG_AWESOME_SOLID_TOILET_PAPER_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOILET_PAPER))  
      return wxString(SVG_AWESOME_SOLID_TOILET_PAPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOILET_PORTABLE))  
      return wxString(SVG_AWESOME_SOLID_TOILET_PORTABLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOILET))  
      return wxString(SVG_AWESOME_SOLID_TOILET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOILETS_PORTABLE))  
      return wxString(SVG_AWESOME_SOLID_TOILETS_PORTABLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOOLBOX))  
      return wxString(SVG_AWESOME_SOLID_TOOLBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOOTH))  
      return wxString(SVG_AWESOME_SOLID_TOOTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TORII_GATE))  
      return wxString(SVG_AWESOME_SOLID_TORII_GATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TORNADO))  
      return wxString(SVG_AWESOME_SOLID_TORNADO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOWER_BROADCAST))  
      return wxString(SVG_AWESOME_SOLID_TOWER_BROADCAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOWER_CELL))  
      return wxString(SVG_AWESOME_SOLID_TOWER_CELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOWER_OBSERVATION))  
      return wxString(SVG_AWESOME_SOLID_TOWER_OBSERVATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRACTOR))  
      return wxString(SVG_AWESOME_SOLID_TRACTOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRADEMARK))  
      return wxString(SVG_AWESOME_SOLID_TRADEMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRAFFIC_LIGHT))  
      return wxString(SVG_AWESOME_SOLID_TRAFFIC_LIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRAILER))  
      return wxString(SVG_AWESOME_SOLID_TRAILER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRAIN_SUBWAY))  
      return wxString(SVG_AWESOME_SOLID_TRAIN_SUBWAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRAIN_TRAM))  
      return wxString(SVG_AWESOME_SOLID_TRAIN_TRAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRAIN))  
      return wxString(SVG_AWESOME_SOLID_TRAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRANSGENDER))  
      return wxString(SVG_AWESOME_SOLID_TRANSGENDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRASH_ARROW_UP))  
      return wxString(SVG_AWESOME_SOLID_TRASH_ARROW_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRASH_CAN_ARROW_UP))  
      return wxString(SVG_AWESOME_SOLID_TRASH_CAN_ARROW_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRASH_CAN))  
      return wxString(SVG_AWESOME_SOLID_TRASH_CAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRASH))  
      return wxString(SVG_AWESOME_SOLID_TRASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TREE_CITY))  
      return wxString(SVG_AWESOME_SOLID_TREE_CITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TREE))  
      return wxString(SVG_AWESOME_SOLID_TREE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRIANGLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_TRIANGLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TROPHY))  
      return wxString(SVG_AWESOME_SOLID_TROPHY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TROWEL_BRICKS))  
      return wxString(SVG_AWESOME_SOLID_TROWEL_BRICKS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TROWEL))  
      return wxString(SVG_AWESOME_SOLID_TROWEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_ARROW_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_DROPLET))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_DROPLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_FAST))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_FAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_FIELD_UN))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_FIELD_UN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_FIELD))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_FIELD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_FRONT))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_FRONT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_MEDICAL))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_MEDICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_MONSTER))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_MONSTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_MOVING))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_MOVING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_PICKUP))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_PICKUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_PLANE))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_PLANE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK_RAMP_BOX))  
      return wxString(SVG_AWESOME_SOLID_TRUCK_RAMP_BOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRUCK))  
      return wxString(SVG_AWESOME_SOLID_TRUCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TTY))  
      return wxString(SVG_AWESOME_SOLID_TTY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURKISH_LIRA_SIGN))  
      return wxString(SVG_AWESOME_SOLID_TURKISH_LIRA_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURN_DOWN))  
      return wxString(SVG_AWESOME_SOLID_TURN_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURN_UP))  
      return wxString(SVG_AWESOME_SOLID_TURN_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TV))  
      return wxString(SVG_AWESOME_SOLID_TV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_U))  
      return wxString(SVG_AWESOME_SOLID_U);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UMBRELLA_BEACH))  
      return wxString(SVG_AWESOME_SOLID_UMBRELLA_BEACH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UMBRELLA))  
      return wxString(SVG_AWESOME_SOLID_UMBRELLA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNDERLINE))  
      return wxString(SVG_AWESOME_SOLID_UNDERLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNIVERSAL_ACCESS))  
      return wxString(SVG_AWESOME_SOLID_UNIVERSAL_ACCESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNLOCK_KEYHOLE))  
      return wxString(SVG_AWESOME_SOLID_UNLOCK_KEYHOLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNLOCK))  
      return wxString(SVG_AWESOME_SOLID_UNLOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UP_DOWN_LEFT_RIGHT))  
      return wxString(SVG_AWESOME_SOLID_UP_DOWN_LEFT_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UP_DOWN))  
      return wxString(SVG_AWESOME_SOLID_UP_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UP_LONG))  
      return wxString(SVG_AWESOME_SOLID_UP_LONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UP_RIGHT_AND_DOWN_LEFT_FROM_CENTER))  
      return wxString(SVG_AWESOME_SOLID_UP_RIGHT_AND_DOWN_LEFT_FROM_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UP_RIGHT_FROM_SQUARE))  
      return wxString(SVG_AWESOME_SOLID_UP_RIGHT_FROM_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UPLOAD))  
      return wxString(SVG_AWESOME_SOLID_UPLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_ASTRONAUT))  
      return wxString(SVG_AWESOME_SOLID_USER_ASTRONAUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_CHECK))  
      return wxString(SVG_AWESOME_SOLID_USER_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_CLOCK))  
      return wxString(SVG_AWESOME_SOLID_USER_CLOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_DOCTOR))  
      return wxString(SVG_AWESOME_SOLID_USER_DOCTOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_GEAR))  
      return wxString(SVG_AWESOME_SOLID_USER_GEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_GRADUATE))  
      return wxString(SVG_AWESOME_SOLID_USER_GRADUATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_GROUP))  
      return wxString(SVG_AWESOME_SOLID_USER_GROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_INJURED))  
      return wxString(SVG_AWESOME_SOLID_USER_INJURED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_LARGE_SLASH))  
      return wxString(SVG_AWESOME_SOLID_USER_LARGE_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_LARGE))  
      return wxString(SVG_AWESOME_SOLID_USER_LARGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_LOCK))  
      return wxString(SVG_AWESOME_SOLID_USER_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_MINUS))  
      return wxString(SVG_AWESOME_SOLID_USER_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_NINJA))  
      return wxString(SVG_AWESOME_SOLID_USER_NINJA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_NURSE))  
      return wxString(SVG_AWESOME_SOLID_USER_NURSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_PEN))  
      return wxString(SVG_AWESOME_SOLID_USER_PEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_PLUS))  
      return wxString(SVG_AWESOME_SOLID_USER_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_SECRET))  
      return wxString(SVG_AWESOME_SOLID_USER_SECRET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_SHIELD))  
      return wxString(SVG_AWESOME_SOLID_USER_SHIELD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_SLASH))  
      return wxString(SVG_AWESOME_SOLID_USER_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_TAG))  
      return wxString(SVG_AWESOME_SOLID_USER_TAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_TIE))  
      return wxString(SVG_AWESOME_SOLID_USER_TIE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER_XMARK))  
      return wxString(SVG_AWESOME_SOLID_USER_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER))  
      return wxString(SVG_AWESOME_SOLID_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USERS_BETWEEN_LINES))  
      return wxString(SVG_AWESOME_SOLID_USERS_BETWEEN_LINES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USERS_GEAR))  
      return wxString(SVG_AWESOME_SOLID_USERS_GEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USERS_LINE))  
      return wxString(SVG_AWESOME_SOLID_USERS_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USERS_RAYS))  
      return wxString(SVG_AWESOME_SOLID_USERS_RAYS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USERS_RECTANGLE))  
      return wxString(SVG_AWESOME_SOLID_USERS_RECTANGLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USERS_SLASH))  
      return wxString(SVG_AWESOME_SOLID_USERS_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USERS_VIEWFINDER))  
      return wxString(SVG_AWESOME_SOLID_USERS_VIEWFINDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USERS))  
      return wxString(SVG_AWESOME_SOLID_USERS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UTENSILS))  
      return wxString(SVG_AWESOME_SOLID_UTENSILS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_V))  
      return wxString(SVG_AWESOME_SOLID_V);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VAN_SHUTTLE))  
      return wxString(SVG_AWESOME_SOLID_VAN_SHUTTLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VAULT))  
      return wxString(SVG_AWESOME_SOLID_VAULT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VECTOR_SQUARE))  
      return wxString(SVG_AWESOME_SOLID_VECTOR_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VENUS_DOUBLE))  
      return wxString(SVG_AWESOME_SOLID_VENUS_DOUBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VENUS_MARS))  
      return wxString(SVG_AWESOME_SOLID_VENUS_MARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VENUS))  
      return wxString(SVG_AWESOME_SOLID_VENUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VEST_PATCHES))  
      return wxString(SVG_AWESOME_SOLID_VEST_PATCHES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VEST))  
      return wxString(SVG_AWESOME_SOLID_VEST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIAL_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_SOLID_VIAL_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIAL_VIRUS))  
      return wxString(SVG_AWESOME_SOLID_VIAL_VIRUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIAL))  
      return wxString(SVG_AWESOME_SOLID_VIAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIALS))  
      return wxString(SVG_AWESOME_SOLID_VIALS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_SLASH))  
      return wxString(SVG_AWESOME_SOLID_VIDEO_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO))  
      return wxString(SVG_AWESOME_SOLID_VIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIHARA))  
      return wxString(SVG_AWESOME_SOLID_VIHARA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIRUS_COVID_SLASH))  
      return wxString(SVG_AWESOME_SOLID_VIRUS_COVID_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIRUS_COVID))  
      return wxString(SVG_AWESOME_SOLID_VIRUS_COVID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIRUS_SLASH))  
      return wxString(SVG_AWESOME_SOLID_VIRUS_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIRUS))  
      return wxString(SVG_AWESOME_SOLID_VIRUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIRUSES))  
      return wxString(SVG_AWESOME_SOLID_VIRUSES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOICEMAIL))  
      return wxString(SVG_AWESOME_SOLID_VOICEMAIL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLCANO))  
      return wxString(SVG_AWESOME_SOLID_VOLCANO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLLEYBALL))  
      return wxString(SVG_AWESOME_SOLID_VOLLEYBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLUME_HIGH))  
      return wxString(SVG_AWESOME_SOLID_VOLUME_HIGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLUME_LOW))  
      return wxString(SVG_AWESOME_SOLID_VOLUME_LOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLUME_OFF))  
      return wxString(SVG_AWESOME_SOLID_VOLUME_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLUME_XMARK))  
      return wxString(SVG_AWESOME_SOLID_VOLUME_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VR_CARDBOARD))  
      return wxString(SVG_AWESOME_SOLID_VR_CARDBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_W))  
      return wxString(SVG_AWESOME_SOLID_W);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WALKIE_TALKIE))  
      return wxString(SVG_AWESOME_SOLID_WALKIE_TALKIE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WALLET))  
      return wxString(SVG_AWESOME_SOLID_WALLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WAND_MAGIC_SPARKLES))  
      return wxString(SVG_AWESOME_SOLID_WAND_MAGIC_SPARKLES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WAND_MAGIC))  
      return wxString(SVG_AWESOME_SOLID_WAND_MAGIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WAND_SPARKLES))  
      return wxString(SVG_AWESOME_SOLID_WAND_SPARKLES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WAREHOUSE))  
      return wxString(SVG_AWESOME_SOLID_WAREHOUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATER_LADDER))  
      return wxString(SVG_AWESOME_SOLID_WATER_LADDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATER))  
      return wxString(SVG_AWESOME_SOLID_WATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WAVE_SQUARE))  
      return wxString(SVG_AWESOME_SOLID_WAVE_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEIGHT_HANGING))  
      return wxString(SVG_AWESOME_SOLID_WEIGHT_HANGING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEIGHT_SCALE))  
      return wxString(SVG_AWESOME_SOLID_WEIGHT_SCALE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHEAT_AWN_CIRCLE_EXCLAMATION))  
      return wxString(SVG_AWESOME_SOLID_WHEAT_AWN_CIRCLE_EXCLAMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHEAT_AWN))  
      return wxString(SVG_AWESOME_SOLID_WHEAT_AWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHEELCHAIR_MOVE))  
      return wxString(SVG_AWESOME_SOLID_WHEELCHAIR_MOVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHEELCHAIR))  
      return wxString(SVG_AWESOME_SOLID_WHEELCHAIR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHISKEY_GLASS))  
      return wxString(SVG_AWESOME_SOLID_WHISKEY_GLASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI))  
      return wxString(SVG_AWESOME_SOLID_WIFI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIND))  
      return wxString(SVG_AWESOME_SOLID_WIND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINDOW_MAXIMIZE))  
      return wxString(SVG_AWESOME_SOLID_WINDOW_MAXIMIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINDOW_MINIMIZE))  
      return wxString(SVG_AWESOME_SOLID_WINDOW_MINIMIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINDOW_RESTORE))  
      return wxString(SVG_AWESOME_SOLID_WINDOW_RESTORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINE_BOTTLE))  
      return wxString(SVG_AWESOME_SOLID_WINE_BOTTLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINE_GLASS_EMPTY))  
      return wxString(SVG_AWESOME_SOLID_WINE_GLASS_EMPTY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINE_GLASS))  
      return wxString(SVG_AWESOME_SOLID_WINE_GLASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WON_SIGN))  
      return wxString(SVG_AWESOME_SOLID_WON_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WORM))  
      return wxString(SVG_AWESOME_SOLID_WORM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WRENCH))  
      return wxString(SVG_AWESOME_SOLID_WRENCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_X_RAY))  
      return wxString(SVG_AWESOME_SOLID_X_RAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_X))  
      return wxString(SVG_AWESOME_SOLID_X);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_XMARK))  
      return wxString(SVG_AWESOME_SOLID_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_XMARKS_LINES))  
      return wxString(SVG_AWESOME_SOLID_XMARKS_LINES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_Y))  
      return wxString(SVG_AWESOME_SOLID_Y);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YEN_SIGN))  
      return wxString(SVG_AWESOME_SOLID_YEN_SIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YIN_YANG))  
      return wxString(SVG_AWESOME_SOLID_YIN_YANG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_Z))  
      return wxString(SVG_AWESOME_SOLID_Z);


// Any IDs not implemented here will return a null string 
return wxString(); 
}


// Return SVG for the current ID as a string, with given color
wxString SolidAwesomeArtColorSVGByID(const wxArtID& id, const wxColour& color)
{
wxString svg = SolidAwesomeArtSVGByID(id); 
if (svg.IsEmpty() || (color==wxNullColour)) return svg; 
static constexpr const char FILL_REGEX[36] = "fill=\"#(?:[0-9a-fA-F]{3,4}){1,2}\""; 
static constexpr const char NEW_PATH[7] = "<path ";  
static constexpr const size_t NPSIZE = 7;  
// Replace existing fills, if any   
wxString newFill("fill=\"" + color.GetAsString(wxC2S_HTML_SYNTAX) + "\"");
wxRegEx reFill(FILL_REGEX);
size_t count = reFill.ReplaceAll(&svg, newFill);
if (count>0) return svg; 

// Set color to the first path  
int ifirst = svg.Find(NEW_PATH);  
wxString tmp;  
while (!(ifirst==wxNOT_FOUND)) {  
   // Add color to the current fill  
   tmp.append(svg.substr(0,(size_t)ifirst+NPSIZE-1)  
              + "fill=\""  
              + color.GetAsString(wxC2S_HTML_SYNTAX)  
              + "\" ");  
   svg = svg.substr((size_t)ifirst+NPSIZE-1,svg.Length()-NPSIZE-1-ifirst);  
   // Find another path  
   ifirst = svg.Find(NEW_PATH);  
}  
tmp.append(svg);  
svg = tmp;  
return svg; 
}


// Return list of all IDs present in the current client 
wxArrayString SolidAwesomeArtIDs()
{
    wxArrayString list; 

    list.Add(wxART_0); 
    list.Add(wxART_1); 
    list.Add(wxART_2); 
    list.Add(wxART_3); 
    list.Add(wxART_4); 
    list.Add(wxART_5); 
    list.Add(wxART_6); 
    list.Add(wxART_7); 
    list.Add(wxART_8); 
    list.Add(wxART_9); 
    list.Add(wxART_A); 
    list.Add(wxART_ADDRESS_BOOK); 
    list.Add(wxART_ADDRESS_CARD); 
    list.Add(wxART_ALIGN_CENTER); 
    list.Add(wxART_ALIGN_JUSTIFY); 
    list.Add(wxART_ALIGN_LEFT); 
    list.Add(wxART_ALIGN_RIGHT); 
    list.Add(wxART_ANCHOR_CIRCLE_CHECK); 
    list.Add(wxART_ANCHOR_CIRCLE_EXCLAMATION); 
    list.Add(wxART_ANCHOR_CIRCLE_XMARK); 
    list.Add(wxART_ANCHOR_LOCK); 
    list.Add(wxART_ANCHOR); 
    list.Add(wxART_ANGLE_DOWN); 
    list.Add(wxART_ANGLE_LEFT); 
    list.Add(wxART_ANGLE_RIGHT); 
    list.Add(wxART_ANGLE_UP); 
    list.Add(wxART_ANGLES_DOWN); 
    list.Add(wxART_ANGLES_LEFT); 
    list.Add(wxART_ANGLES_RIGHT); 
    list.Add(wxART_ANGLES_UP); 
    list.Add(wxART_ANKH); 
    list.Add(wxART_APPLE_WHOLE); 
    list.Add(wxART_ARCHWAY); 
    list.Add(wxART_ARROW_DOWN_1_9); 
    list.Add(wxART_ARROW_DOWN_9_1); 
    list.Add(wxART_ARROW_DOWN_A_Z); 
    list.Add(wxART_ARROW_DOWN_LONG); 
    list.Add(wxART_ARROW_DOWN_SHORT_WIDE); 
    list.Add(wxART_ARROW_DOWN_UP_ACROSS_LINE); 
    list.Add(wxART_ARROW_DOWN_UP_LOCK); 
    list.Add(wxART_ARROW_DOWN_WIDE_SHORT); 
    list.Add(wxART_ARROW_DOWN_Z_A); 
    list.Add(wxART_ARROW_DOWN); 
    list.Add(wxART_ARROW_LEFT_LONG); 
    list.Add(wxART_ARROW_LEFT); 
    list.Add(wxART_ARROW_POINTER); 
    list.Add(wxART_ARROW_RIGHT_ARROW_LEFT); 
    list.Add(wxART_ARROW_RIGHT_FROM_BRACKET); 
    list.Add(wxART_ARROW_RIGHT_LONG); 
    list.Add(wxART_ARROW_RIGHT_TO_BRACKET); 
    list.Add(wxART_ARROW_RIGHT_TO_CITY); 
    list.Add(wxART_ARROW_RIGHT); 
    list.Add(wxART_ARROW_ROTATE_LEFT); 
    list.Add(wxART_ARROW_ROTATE_RIGHT); 
    list.Add(wxART_ARROW_TREND_DOWN); 
    list.Add(wxART_ARROW_TREND_UP); 
    list.Add(wxART_ARROW_TURN_DOWN); 
    list.Add(wxART_ARROW_TURN_UP); 
    list.Add(wxART_ARROW_UP_1_9); 
    list.Add(wxART_ARROW_UP_9_1); 
    list.Add(wxART_ARROW_UP_A_Z); 
    list.Add(wxART_ARROW_UP_FROM_BRACKET); 
    list.Add(wxART_ARROW_UP_FROM_GROUND_WATER); 
    list.Add(wxART_ARROW_UP_FROM_WATER_PUMP); 
    list.Add(wxART_ARROW_UP_LONG); 
    list.Add(wxART_ARROW_UP_RIGHT_DOTS); 
    list.Add(wxART_ARROW_UP_RIGHT_FROM_SQUARE); 
    list.Add(wxART_ARROW_UP_SHORT_WIDE); 
    list.Add(wxART_ARROW_UP_WIDE_SHORT); 
    list.Add(wxART_ARROW_UP_Z_A); 
    list.Add(wxART_ARROW_UP); 
    list.Add(wxART_ARROWS_DOWN_TO_LINE); 
    list.Add(wxART_ARROWS_DOWN_TO_PEOPLE); 
    list.Add(wxART_ARROWS_LEFT_RIGHT_TO_LINE); 
    list.Add(wxART_ARROWS_LEFT_RIGHT); 
    list.Add(wxART_ARROWS_ROTATE); 
    list.Add(wxART_ARROWS_SPIN); 
    list.Add(wxART_ARROWS_SPLIT_UP_AND_LEFT); 
    list.Add(wxART_ARROWS_TO_CIRCLE); 
    list.Add(wxART_ARROWS_TO_DOT); 
    list.Add(wxART_ARROWS_TO_EYE); 
    list.Add(wxART_ARROWS_TURN_RIGHT); 
    list.Add(wxART_ARROWS_TURN_TO_DOTS); 
    list.Add(wxART_ARROWS_UP_DOWN_LEFT_RIGHT); 
    list.Add(wxART_ARROWS_UP_DOWN); 
    list.Add(wxART_ARROWS_UP_TO_LINE); 
    list.Add(wxART_ASTERISK); 
    list.Add(wxART_AT); 
    list.Add(wxART_ATOM); 
    list.Add(wxART_AUDIO_DESCRIPTION); 
    list.Add(wxART_AUSTRAL_SIGN); 
    list.Add(wxART_AWARD); 
    list.Add(wxART_B); 
    list.Add(wxART_BABY_CARRIAGE); 
    list.Add(wxART_BABY); 
    list.Add(wxART_BACKWARD_FAST); 
    list.Add(wxART_BACKWARD_STEP); 
    list.Add(wxART_BACKWARD); 
    list.Add(wxART_BACON); 
    list.Add(wxART_BACTERIA); 
    list.Add(wxART_BACTERIUM); 
    list.Add(wxART_BAG_SHOPPING); 
    list.Add(wxART_BAHAI); 
    list.Add(wxART_BAHT_SIGN); 
    list.Add(wxART_BAN_SMOKING); 
    list.Add(wxART_BAN); 
    list.Add(wxART_BANDAGE); 
    list.Add(wxART_BANGLADESHI_TAKA_SIGN); 
    list.Add(wxART_BARCODE); 
    list.Add(wxART_BARS_PROGRESS); 
    list.Add(wxART_BARS_STAGGERED); 
    list.Add(wxART_BARS); 
    list.Add(wxART_BASEBALL_BAT_BALL); 
    list.Add(wxART_BASEBALL); 
    list.Add(wxART_BASKET_SHOPPING); 
    list.Add(wxART_BASKETBALL); 
    list.Add(wxART_BATH); 
    list.Add(wxART_BATTERY_EMPTY); 
    list.Add(wxART_BATTERY_FULL); 
    list.Add(wxART_BATTERY_HALF); 
    list.Add(wxART_BATTERY_QUARTER); 
    list.Add(wxART_BATTERY_THREE_QUARTERS); 
    list.Add(wxART_BED_PULSE); 
    list.Add(wxART_BED); 
    list.Add(wxART_BEER_MUG_EMPTY); 
    list.Add(wxART_BELL_CONCIERGE); 
    list.Add(wxART_BELL_SLASH); 
    list.Add(wxART_BELL); 
    list.Add(wxART_BEZIER_CURVE); 
    list.Add(wxART_BICYCLE); 
    list.Add(wxART_BINOCULARS); 
    list.Add(wxART_BIOHAZARD); 
    list.Add(wxART_BITCOIN_SIGN); 
    list.Add(wxART_BLENDER_PHONE); 
    list.Add(wxART_BLENDER); 
    list.Add(wxART_BLOG); 
    list.Add(wxART_BOLD); 
    list.Add(wxART_BOLT_LIGHTNING); 
    list.Add(wxART_BOLT); 
    list.Add(wxART_BOMB); 
    list.Add(wxART_BONE); 
    list.Add(wxART_BONG); 
    list.Add(wxART_BOOK_ATLAS); 
    list.Add(wxART_BOOK_BIBLE); 
    list.Add(wxART_BOOK_BOOKMARK); 
    list.Add(wxART_BOOK_JOURNAL_WHILLS); 
    list.Add(wxART_BOOK_MEDICAL); 
    list.Add(wxART_BOOK_OPEN_READER); 
    list.Add(wxART_BOOK_OPEN); 
    list.Add(wxART_BOOK_QURAN); 
    list.Add(wxART_BOOK_SKULL); 
    list.Add(wxART_BOOK_TANAKH); 
    list.Add(wxART_BOOK); 
    list.Add(wxART_BOOKMARK); 
    list.Add(wxART_BORDER_ALL); 
    list.Add(wxART_BORDER_NONE); 
    list.Add(wxART_BORDER_TOP_LEFT); 
    list.Add(wxART_BORE_HOLE); 
    list.Add(wxART_BOTTLE_DROPLET); 
    list.Add(wxART_BOTTLE_WATER); 
    list.Add(wxART_BOWL_FOOD); 
    list.Add(wxART_BOWL_RICE); 
    list.Add(wxART_BOWLING_BALL); 
    list.Add(wxART_BOX_ARCHIVE); 
    list.Add(wxART_BOX_OPEN); 
    list.Add(wxART_BOX_TISSUE); 
    list.Add(wxART_BOX); 
    list.Add(wxART_BOXES_PACKING); 
    list.Add(wxART_BOXES_STACKED); 
    list.Add(wxART_BRAILLE); 
    list.Add(wxART_BRAIN); 
    list.Add(wxART_BRAZILIAN_REAL_SIGN); 
    list.Add(wxART_BREAD_SLICE); 
    list.Add(wxART_BRIDGE_CIRCLE_CHECK); 
    list.Add(wxART_BRIDGE_CIRCLE_EXCLAMATION); 
    list.Add(wxART_BRIDGE_CIRCLE_XMARK); 
    list.Add(wxART_BRIDGE_LOCK); 
    list.Add(wxART_BRIDGE_WATER); 
    list.Add(wxART_BRIDGE); 
    list.Add(wxART_BRIEFCASE_MEDICAL); 
    list.Add(wxART_BRIEFCASE); 
    list.Add(wxART_BROOM_BALL); 
    list.Add(wxART_BROOM); 
    list.Add(wxART_BRUSH); 
    list.Add(wxART_BUCKET); 
    list.Add(wxART_BUG_SLASH); 
    list.Add(wxART_BUG); 
    list.Add(wxART_BUGS); 
    list.Add(wxART_BUILDING_CIRCLE_ARROW_RIGHT); 
    list.Add(wxART_BUILDING_CIRCLE_CHECK); 
    list.Add(wxART_BUILDING_CIRCLE_EXCLAMATION); 
    list.Add(wxART_BUILDING_CIRCLE_XMARK); 
    list.Add(wxART_BUILDING_COLUMNS); 
    list.Add(wxART_BUILDING_FLAG); 
    list.Add(wxART_BUILDING_LOCK); 
    list.Add(wxART_BUILDING_NGO); 
    list.Add(wxART_BUILDING_SHIELD); 
    list.Add(wxART_BUILDING_UN); 
    list.Add(wxART_BUILDING_USER); 
    list.Add(wxART_BUILDING_WHEAT); 
    list.Add(wxART_BUILDING); 
    list.Add(wxART_BULLHORN); 
    list.Add(wxART_BULLSEYE); 
    list.Add(wxART_BURGER); 
    list.Add(wxART_BURST); 
    list.Add(wxART_BUS_SIMPLE); 
    list.Add(wxART_BUS); 
    list.Add(wxART_BUSINESS_TIME); 
    list.Add(wxART_C); 
    list.Add(wxART_CABLE_CAR); 
    list.Add(wxART_CAKE_CANDLES); 
    list.Add(wxART_CALCULATOR); 
    list.Add(wxART_CALENDAR_CHECK); 
    list.Add(wxART_CALENDAR_DAY); 
    list.Add(wxART_CALENDAR_DAYS); 
    list.Add(wxART_CALENDAR_MINUS); 
    list.Add(wxART_CALENDAR_PLUS); 
    list.Add(wxART_CALENDAR_WEEK); 
    list.Add(wxART_CALENDAR_XMARK); 
    list.Add(wxART_CALENDAR); 
    list.Add(wxART_CAMERA_RETRO); 
    list.Add(wxART_CAMERA_ROTATE); 
    list.Add(wxART_CAMERA); 
    list.Add(wxART_CAMPGROUND); 
    list.Add(wxART_CANDY_CANE); 
    list.Add(wxART_CANNABIS); 
    list.Add(wxART_CAPSULES); 
    list.Add(wxART_CAR_BATTERY); 
    list.Add(wxART_CAR_BURST); 
    list.Add(wxART_CAR_ON); 
    list.Add(wxART_CAR_REAR); 
    list.Add(wxART_CAR_SIDE); 
    list.Add(wxART_CAR_TUNNEL); 
    list.Add(wxART_CAR); 
    list.Add(wxART_CARAVAN); 
    list.Add(wxART_CARET_DOWN); 
    list.Add(wxART_CARET_LEFT); 
    list.Add(wxART_CARET_RIGHT); 
    list.Add(wxART_CARET_UP); 
    list.Add(wxART_CARROT); 
    list.Add(wxART_CART_ARROW_DOWN); 
    list.Add(wxART_CART_FLATBED_SUITCASE); 
    list.Add(wxART_CART_FLATBED); 
    list.Add(wxART_CART_PLUS); 
    list.Add(wxART_CART_SHOPPING); 
    list.Add(wxART_CASH_REGISTER); 
    list.Add(wxART_CAT); 
    list.Add(wxART_CEDI_SIGN); 
    list.Add(wxART_CENT_SIGN); 
    list.Add(wxART_CERTIFICATE); 
    list.Add(wxART_CHAIR); 
    list.Add(wxART_CHALKBOARD_USER); 
    list.Add(wxART_CHALKBOARD); 
    list.Add(wxART_CHAMPAGNE_GLASSES); 
    list.Add(wxART_CHARGING_STATION); 
    list.Add(wxART_CHART_AREA); 
    list.Add(wxART_CHART_BAR); 
    list.Add(wxART_CHART_COLUMN); 
    list.Add(wxART_CHART_GANTT); 
    list.Add(wxART_CHART_LINE); 
    list.Add(wxART_CHART_PIE); 
    list.Add(wxART_CHART_SIMPLE); 
    list.Add(wxART_CHECK_DOUBLE); 
    list.Add(wxART_CHECK_TO_SLOT); 
    list.Add(wxART_CHECK); 
    list.Add(wxART_CHEESE); 
    list.Add(wxART_CHESS_BISHOP); 
    list.Add(wxART_CHESS_BOARD); 
    list.Add(wxART_CHESS_KING); 
    list.Add(wxART_CHESS_KNIGHT); 
    list.Add(wxART_CHESS_PAWN); 
    list.Add(wxART_CHESS_QUEEN); 
    list.Add(wxART_CHESS_ROOK); 
    list.Add(wxART_CHESS); 
    list.Add(wxART_CHEVRON_DOWN); 
    list.Add(wxART_CHEVRON_LEFT); 
    list.Add(wxART_CHEVRON_RIGHT); 
    list.Add(wxART_CHEVRON_UP); 
    list.Add(wxART_CHILD_COMBATANT); 
    list.Add(wxART_CHILD_DRESS); 
    list.Add(wxART_CHILD_REACHING); 
    list.Add(wxART_CHILD); 
    list.Add(wxART_CHILDREN); 
    list.Add(wxART_CHURCH); 
    list.Add(wxART_CIRCLE_ARROW_DOWN); 
    list.Add(wxART_CIRCLE_ARROW_LEFT); 
    list.Add(wxART_CIRCLE_ARROW_RIGHT); 
    list.Add(wxART_CIRCLE_ARROW_UP); 
    list.Add(wxART_CIRCLE_CHECK); 
    list.Add(wxART_CIRCLE_CHEVRON_DOWN); 
    list.Add(wxART_CIRCLE_CHEVRON_LEFT); 
    list.Add(wxART_CIRCLE_CHEVRON_RIGHT); 
    list.Add(wxART_CIRCLE_CHEVRON_UP); 
    list.Add(wxART_CIRCLE_DOLLAR_TO_SLOT); 
    list.Add(wxART_CIRCLE_DOT); 
    list.Add(wxART_CIRCLE_DOWN); 
    list.Add(wxART_CIRCLE_EXCLAMATION); 
    list.Add(wxART_CIRCLE_H); 
    list.Add(wxART_CIRCLE_HALF_STROKE); 
    list.Add(wxART_CIRCLE_INFO); 
    list.Add(wxART_CIRCLE_LEFT); 
    list.Add(wxART_CIRCLE_MINUS); 
    list.Add(wxART_CIRCLE_NODES); 
    list.Add(wxART_CIRCLE_NOTCH); 
    list.Add(wxART_CIRCLE_PAUSE); 
    list.Add(wxART_CIRCLE_PLAY); 
    list.Add(wxART_CIRCLE_PLUS); 
    list.Add(wxART_CIRCLE_QUESTION); 
    list.Add(wxART_CIRCLE_RADIATION); 
    list.Add(wxART_CIRCLE_RIGHT); 
    list.Add(wxART_CIRCLE_STOP); 
    list.Add(wxART_CIRCLE_UP); 
    list.Add(wxART_CIRCLE_USER); 
    list.Add(wxART_CIRCLE_XMARK); 
    list.Add(wxART_CIRCLE); 
    list.Add(wxART_CITY); 
    list.Add(wxART_CLAPPERBOARD); 
    list.Add(wxART_CLIPBOARD_CHECK); 
    list.Add(wxART_CLIPBOARD_LIST); 
    list.Add(wxART_CLIPBOARD_QUESTION); 
    list.Add(wxART_CLIPBOARD_USER); 
    list.Add(wxART_CLIPBOARD); 
    list.Add(wxART_CLOCK_ROTATE_LEFT); 
    list.Add(wxART_CLOCK); 
    list.Add(wxART_CLONE); 
    list.Add(wxART_CLOSED_CAPTIONING); 
    list.Add(wxART_CLOUD_ARROW_DOWN); 
    list.Add(wxART_CLOUD_ARROW_UP); 
    list.Add(wxART_CLOUD_BOLT); 
    list.Add(wxART_CLOUD_MEATBALL); 
    list.Add(wxART_CLOUD_MOON_RAIN); 
    list.Add(wxART_CLOUD_MOON); 
    list.Add(wxART_CLOUD_RAIN); 
    list.Add(wxART_CLOUD_SHOWERS_HEAVY); 
    list.Add(wxART_CLOUD_SHOWERS_WATER); 
    list.Add(wxART_CLOUD_SUN_RAIN); 
    list.Add(wxART_CLOUD_SUN); 
    list.Add(wxART_CLOUD); 
    list.Add(wxART_CLOVER); 
    list.Add(wxART_CODE_BRANCH); 
    list.Add(wxART_CODE_COMMIT); 
    list.Add(wxART_CODE_COMPARE); 
    list.Add(wxART_CODE_FORK); 
    list.Add(wxART_CODE_MERGE); 
    list.Add(wxART_CODE_PULL_REQUEST); 
    list.Add(wxART_CODE); 
    list.Add(wxART_COINS); 
    list.Add(wxART_COLON_SIGN); 
    list.Add(wxART_COMMENT_DOLLAR); 
    list.Add(wxART_COMMENT_DOTS); 
    list.Add(wxART_COMMENT_MEDICAL); 
    list.Add(wxART_COMMENT_SLASH); 
    list.Add(wxART_COMMENT_SMS); 
    list.Add(wxART_COMMENT); 
    list.Add(wxART_COMMENTS_DOLLAR); 
    list.Add(wxART_COMMENTS); 
    list.Add(wxART_COMPACT_DISC); 
    list.Add(wxART_COMPASS_DRAFTING); 
    list.Add(wxART_COMPASS); 
    list.Add(wxART_COMPRESS); 
    list.Add(wxART_COMPUTER_MOUSE); 
    list.Add(wxART_COMPUTER); 
    list.Add(wxART_COOKIE_BITE); 
    list.Add(wxART_COOKIE); 
    list.Add(wxART_COPY); 
    list.Add(wxART_COPYRIGHT); 
    list.Add(wxART_COUCH); 
    list.Add(wxART_COW); 
    list.Add(wxART_CREDIT_CARD); 
    list.Add(wxART_CROP_SIMPLE); 
    list.Add(wxART_CROP); 
    list.Add(wxART_CROSS); 
    list.Add(wxART_CROSSHAIRS); 
    list.Add(wxART_CROW); 
    list.Add(wxART_CROWN); 
    list.Add(wxART_CRUTCH); 
    list.Add(wxART_CRUZEIRO_SIGN); 
    list.Add(wxART_CUBE); 
    list.Add(wxART_CUBES_STACKED); 
    list.Add(wxART_CUBES); 
    list.Add(wxART_D); 
    list.Add(wxART_DATABASE); 
    list.Add(wxART_DELETE_LEFT); 
    list.Add(wxART_DEMOCRAT); 
    list.Add(wxART_DESKTOP); 
    list.Add(wxART_DHARMACHAKRA); 
    list.Add(wxART_DIAGRAM_NEXT); 
    list.Add(wxART_DIAGRAM_PREDECESSOR); 
    list.Add(wxART_DIAGRAM_PROJECT); 
    list.Add(wxART_DIAGRAM_SUCCESSOR); 
    list.Add(wxART_DIAMOND_TURN_RIGHT); 
    list.Add(wxART_DIAMOND); 
    list.Add(wxART_DICE_D20); 
    list.Add(wxART_DICE_D6); 
    list.Add(wxART_DICE_FIVE); 
    list.Add(wxART_DICE_FOUR); 
    list.Add(wxART_DICE_ONE); 
    list.Add(wxART_DICE_SIX); 
    list.Add(wxART_DICE_THREE); 
    list.Add(wxART_DICE_TWO); 
    list.Add(wxART_DICE); 
    list.Add(wxART_DISEASE); 
    list.Add(wxART_DISPLAY); 
    list.Add(wxART_DIVIDE); 
    list.Add(wxART_DNA); 
    list.Add(wxART_DOG); 
    list.Add(wxART_DOLLAR_SIGN); 
    list.Add(wxART_DOLLY); 
    list.Add(wxART_DONG_SIGN); 
    list.Add(wxART_DOOR_CLOSED); 
    list.Add(wxART_DOOR_OPEN); 
    list.Add(wxART_DOVE); 
    list.Add(wxART_DOWN_LEFT_AND_UP_RIGHT_TO_CENTER); 
    list.Add(wxART_DOWN_LONG); 
    list.Add(wxART_DOWNLOAD); 
    list.Add(wxART_DRAGON); 
    list.Add(wxART_DRAW_POLYGON); 
    list.Add(wxART_DROPLET_SLASH); 
    list.Add(wxART_DROPLET); 
    list.Add(wxART_DRUM_STEELPAN); 
    list.Add(wxART_DRUM); 
    list.Add(wxART_DRUMSTICK_BITE); 
    list.Add(wxART_DUMBBELL); 
    list.Add(wxART_DUMPSTER_FIRE); 
    list.Add(wxART_DUMPSTER); 
    list.Add(wxART_DUNGEON); 
    list.Add(wxART_E); 
    list.Add(wxART_EAR_DEAF); 
    list.Add(wxART_EAR_LISTEN); 
    list.Add(wxART_EARTH_AFRICA); 
    list.Add(wxART_EARTH_AMERICAS); 
    list.Add(wxART_EARTH_ASIA); 
    list.Add(wxART_EARTH_EUROPE); 
    list.Add(wxART_EARTH_OCEANIA); 
    list.Add(wxART_EGG); 
    list.Add(wxART_EJECT); 
    list.Add(wxART_ELEVATOR); 
    list.Add(wxART_ELLIPSIS_VERTICAL); 
    list.Add(wxART_ELLIPSIS); 
    list.Add(wxART_ENVELOPE_CIRCLE_CHECK); 
    list.Add(wxART_ENVELOPE_OPEN_TEXT); 
    list.Add(wxART_ENVELOPE_OPEN); 
    list.Add(wxART_ENVELOPE); 
    list.Add(wxART_ENVELOPES_BULK); 
    list.Add(wxART_EQUALS); 
    list.Add(wxART_ERASER); 
    list.Add(wxART_ETHERNET); 
    list.Add(wxART_EURO_SIGN); 
    list.Add(wxART_EXCLAMATION); 
    list.Add(wxART_EXPAND); 
    list.Add(wxART_EXPLOSION); 
    list.Add(wxART_EYE_DROPPER); 
    list.Add(wxART_EYE_LOW_VISION); 
    list.Add(wxART_EYE_SLASH); 
    list.Add(wxART_EYE); 
    list.Add(wxART_F); 
    list.Add(wxART_FACE_ANGRY); 
    list.Add(wxART_FACE_DIZZY); 
    list.Add(wxART_FACE_FLUSHED); 
    list.Add(wxART_FACE_FROWN_OPEN); 
    list.Add(wxART_FACE_FROWN); 
    list.Add(wxART_FACE_GRIMACE); 
    list.Add(wxART_FACE_GRIN_BEAM_SWEAT); 
    list.Add(wxART_FACE_GRIN_BEAM); 
    list.Add(wxART_FACE_GRIN_HEARTS); 
    list.Add(wxART_FACE_GRIN_SQUINT_TEARS); 
    list.Add(wxART_FACE_GRIN_SQUINT); 
    list.Add(wxART_FACE_GRIN_STARS); 
    list.Add(wxART_FACE_GRIN_TEARS); 
    list.Add(wxART_FACE_GRIN_TONGUE_SQUINT); 
    list.Add(wxART_FACE_GRIN_TONGUE_WINK); 
    list.Add(wxART_FACE_GRIN_TONGUE); 
    list.Add(wxART_FACE_GRIN_WIDE); 
    list.Add(wxART_FACE_GRIN_WINK); 
    list.Add(wxART_FACE_GRIN); 
    list.Add(wxART_FACE_KISS_BEAM); 
    list.Add(wxART_FACE_KISS_WINK_HEART); 
    list.Add(wxART_FACE_KISS); 
    list.Add(wxART_FACE_LAUGH_BEAM); 
    list.Add(wxART_FACE_LAUGH_SQUINT); 
    list.Add(wxART_FACE_LAUGH_WINK); 
    list.Add(wxART_FACE_LAUGH); 
    list.Add(wxART_FACE_MEH_BLANK); 
    list.Add(wxART_FACE_MEH); 
    list.Add(wxART_FACE_ROLLING_EYES); 
    list.Add(wxART_FACE_SAD_CRY); 
    list.Add(wxART_FACE_SAD_TEAR); 
    list.Add(wxART_FACE_SMILE_BEAM); 
    list.Add(wxART_FACE_SMILE_WINK); 
    list.Add(wxART_FACE_SMILE); 
    list.Add(wxART_FACE_SURPRISE); 
    list.Add(wxART_FACE_TIRED); 
    list.Add(wxART_FAN); 
    list.Add(wxART_FAUCET_DRIP); 
    list.Add(wxART_FAUCET); 
    list.Add(wxART_FAX); 
    list.Add(wxART_FEATHER_POINTED); 
    list.Add(wxART_FEATHER); 
    list.Add(wxART_FERRY); 
    list.Add(wxART_FILE_ARROW_DOWN); 
    list.Add(wxART_FILE_ARROW_UP); 
    list.Add(wxART_FILE_AUDIO); 
    list.Add(wxART_FILE_CIRCLE_CHECK); 
    list.Add(wxART_FILE_CIRCLE_EXCLAMATION); 
    list.Add(wxART_FILE_CIRCLE_MINUS); 
    list.Add(wxART_FILE_CIRCLE_PLUS); 
    list.Add(wxART_FILE_CIRCLE_QUESTION); 
    list.Add(wxART_FILE_CIRCLE_XMARK); 
    list.Add(wxART_FILE_CODE); 
    list.Add(wxART_FILE_CONTRACT); 
    list.Add(wxART_FILE_CSV); 
    list.Add(wxART_FILE_EXCEL); 
    list.Add(wxART_FILE_EXPORT); 
    list.Add(wxART_FILE_IMAGE); 
    list.Add(wxART_FILE_IMPORT); 
    list.Add(wxART_FILE_INVOICE_DOLLAR); 
    list.Add(wxART_FILE_INVOICE); 
    list.Add(wxART_FILE_LINES); 
    list.Add(wxART_FILE_MEDICAL); 
    list.Add(wxART_FILE_PDF); 
    list.Add(wxART_FILE_PEN); 
    list.Add(wxART_FILE_POWERPOINT); 
    list.Add(wxART_FILE_PRESCRIPTION); 
    list.Add(wxART_FILE_SHIELD); 
    list.Add(wxART_FILE_SIGNATURE); 
    list.Add(wxART_FILE_VIDEO); 
    list.Add(wxART_FILE_WAVEFORM); 
    list.Add(wxART_FILE_WORD); 
    list.Add(wxART_FILE_ZIPPER); 
    list.Add(wxART_FILE); 
    list.Add(wxART_FILL_DRIP); 
    list.Add(wxART_FILL); 
    list.Add(wxART_FILM); 
    list.Add(wxART_FILTER_CIRCLE_DOLLAR); 
    list.Add(wxART_FILTER_CIRCLE_XMARK); 
    list.Add(wxART_FILTER); 
    list.Add(wxART_FINGERPRINT); 
    list.Add(wxART_FIRE_BURNER); 
    list.Add(wxART_FIRE_EXTINGUISHER); 
    list.Add(wxART_FIRE_FLAME_CURVED); 
    list.Add(wxART_FIRE_FLAME_SIMPLE); 
    list.Add(wxART_FIRE); 
    list.Add(wxART_FISH_FINS); 
    list.Add(wxART_FISH); 
    list.Add(wxART_FLAG_CHECKERED); 
    list.Add(wxART_FLAG_USA); 
    list.Add(wxART_FLAG); 
    list.Add(wxART_FLASK_VIAL); 
    list.Add(wxART_FLASK); 
    list.Add(wxART_FLOPPY_DISK); 
    list.Add(wxART_FLORIN_SIGN); 
    list.Add(wxART_FOLDER_CLOSED); 
    list.Add(wxART_FOLDER_MINUS); 
    list.Add(wxART_FOLDER_OPEN); 
    list.Add(wxART_FOLDER_PLUS); 
    list.Add(wxART_FOLDER_TREE); 
    list.Add(wxART_FOLDER); 
    list.Add(wxART_FONT_AWESOME); 
    list.Add(wxART_FONT); 
    list.Add(wxART_FOOTBALL); 
    list.Add(wxART_FORWARD_FAST); 
    list.Add(wxART_FORWARD_STEP); 
    list.Add(wxART_FORWARD); 
    list.Add(wxART_FRANC_SIGN); 
    list.Add(wxART_FROG); 
    list.Add(wxART_FUTBOL); 
    list.Add(wxART_G); 
    list.Add(wxART_GAMEPAD); 
    list.Add(wxART_GAS_PUMP); 
    list.Add(wxART_GAUGE_HIGH); 
    list.Add(wxART_GAUGE_SIMPLE_HIGH); 
    list.Add(wxART_GAUGE_SIMPLE); 
    list.Add(wxART_GAUGE); 
    list.Add(wxART_GAVEL); 
    list.Add(wxART_GEAR); 
    list.Add(wxART_GEARS); 
    list.Add(wxART_GEM); 
    list.Add(wxART_GENDERLESS); 
    list.Add(wxART_GHOST); 
    list.Add(wxART_GIFT); 
    list.Add(wxART_GIFTS); 
    list.Add(wxART_GLASS_WATER_DROPLET); 
    list.Add(wxART_GLASS_WATER); 
    list.Add(wxART_GLASSES); 
    list.Add(wxART_GLOBE); 
    list.Add(wxART_GOLF_BALL_TEE); 
    list.Add(wxART_GOPURAM); 
    list.Add(wxART_GRADUATION_CAP); 
    list.Add(wxART_GREATER_THAN_EQUAL); 
    list.Add(wxART_GREATER_THAN); 
    list.Add(wxART_GRIP_LINES_VERTICAL); 
    list.Add(wxART_GRIP_LINES); 
    list.Add(wxART_GRIP_VERTICAL); 
    list.Add(wxART_GRIP); 
    list.Add(wxART_GROUP_ARROWS_ROTATE); 
    list.Add(wxART_GUARANI_SIGN); 
    list.Add(wxART_GUITAR); 
    list.Add(wxART_GUN); 
    list.Add(wxART_H); 
    list.Add(wxART_HAMMER); 
    list.Add(wxART_HAMSA); 
    list.Add(wxART_HAND_BACK_FIST); 
    list.Add(wxART_HAND_DOTS); 
    list.Add(wxART_HAND_FIST); 
    list.Add(wxART_HAND_HOLDING_DOLLAR); 
    list.Add(wxART_HAND_HOLDING_DROPLET); 
    list.Add(wxART_HAND_HOLDING_HAND); 
    list.Add(wxART_HAND_HOLDING_HEART); 
    list.Add(wxART_HAND_HOLDING_MEDICAL); 
    list.Add(wxART_HAND_HOLDING); 
    list.Add(wxART_HAND_LIZARD); 
    list.Add(wxART_HAND_MIDDLE_FINGER); 
    list.Add(wxART_HAND_PEACE); 
    list.Add(wxART_HAND_POINT_DOWN); 
    list.Add(wxART_HAND_POINT_LEFT); 
    list.Add(wxART_HAND_POINT_RIGHT); 
    list.Add(wxART_HAND_POINT_UP); 
    list.Add(wxART_HAND_POINTER); 
    list.Add(wxART_HAND_SCISSORS); 
    list.Add(wxART_HAND_SPARKLES); 
    list.Add(wxART_HAND_SPOCK); 
    list.Add(wxART_HAND); 
    list.Add(wxART_HANDCUFFS); 
    list.Add(wxART_HANDS_ASL_INTERPRETING); 
    list.Add(wxART_HANDS_BOUND); 
    list.Add(wxART_HANDS_BUBBLES); 
    list.Add(wxART_HANDS_CLAPPING); 
    list.Add(wxART_HANDS_HOLDING_CHILD); 
    list.Add(wxART_HANDS_HOLDING_CIRCLE); 
    list.Add(wxART_HANDS_HOLDING); 
    list.Add(wxART_HANDS_PRAYING); 
    list.Add(wxART_HANDS); 
    list.Add(wxART_HANDSHAKE_ANGLE); 
    list.Add(wxART_HANDSHAKE_SIMPLE_SLASH); 
    list.Add(wxART_HANDSHAKE_SIMPLE); 
    list.Add(wxART_HANDSHAKE_SLASH); 
    list.Add(wxART_HANDSHAKE); 
    list.Add(wxART_HANUKIAH); 
    list.Add(wxART_HARD_DRIVE); 
    list.Add(wxART_HASHTAG); 
    list.Add(wxART_HAT_COWBOY_SIDE); 
    list.Add(wxART_HAT_COWBOY); 
    list.Add(wxART_HAT_WIZARD); 
    list.Add(wxART_HEAD_SIDE_COUGH_SLASH); 
    list.Add(wxART_HEAD_SIDE_COUGH); 
    list.Add(wxART_HEAD_SIDE_MASK); 
    list.Add(wxART_HEAD_SIDE_VIRUS); 
    list.Add(wxART_HEADING); 
    list.Add(wxART_HEADPHONES_SIMPLE); 
    list.Add(wxART_HEADPHONES); 
    list.Add(wxART_HEADSET); 
    list.Add(wxART_HEART_CIRCLE_BOLT); 
    list.Add(wxART_HEART_CIRCLE_CHECK); 
    list.Add(wxART_HEART_CIRCLE_EXCLAMATION); 
    list.Add(wxART_HEART_CIRCLE_MINUS); 
    list.Add(wxART_HEART_CIRCLE_PLUS); 
    list.Add(wxART_HEART_CIRCLE_XMARK); 
    list.Add(wxART_HEART_CRACK); 
    list.Add(wxART_HEART_PULSE); 
    list.Add(wxART_HEART); 
    list.Add(wxART_HELICOPTER_SYMBOL); 
    list.Add(wxART_HELICOPTER); 
    list.Add(wxART_HELMET_SAFETY); 
    list.Add(wxART_HELMET_UN); 
    list.Add(wxART_HIGHLIGHTER); 
    list.Add(wxART_HILL_AVALANCHE); 
    list.Add(wxART_HILL_ROCKSLIDE); 
    list.Add(wxART_HIPPO); 
    list.Add(wxART_HOCKEY_PUCK); 
    list.Add(wxART_HOLLY_BERRY); 
    list.Add(wxART_HORSE_HEAD); 
    list.Add(wxART_HORSE); 
    list.Add(wxART_HOSPITAL_USER); 
    list.Add(wxART_HOSPITAL); 
    list.Add(wxART_HOT_TUB_PERSON); 
    list.Add(wxART_HOTDOG); 
    list.Add(wxART_HOTEL); 
    list.Add(wxART_HOURGLASS_END); 
    list.Add(wxART_HOURGLASS_HALF); 
    list.Add(wxART_HOURGLASS_START); 
    list.Add(wxART_HOURGLASS); 
    list.Add(wxART_HOUSE_CHIMNEY_CRACK); 
    list.Add(wxART_HOUSE_CHIMNEY_MEDICAL); 
    list.Add(wxART_HOUSE_CHIMNEY_USER); 
    list.Add(wxART_HOUSE_CHIMNEY_WINDOW); 
    list.Add(wxART_HOUSE_CHIMNEY); 
    list.Add(wxART_HOUSE_CIRCLE_CHECK); 
    list.Add(wxART_HOUSE_CIRCLE_EXCLAMATION); 
    list.Add(wxART_HOUSE_CIRCLE_XMARK); 
    list.Add(wxART_HOUSE_CRACK); 
    list.Add(wxART_HOUSE_FIRE); 
    list.Add(wxART_HOUSE_FLAG); 
    list.Add(wxART_HOUSE_FLOOD_WATER_CIRCLE_ARROW_RIGHT); 
    list.Add(wxART_HOUSE_FLOOD_WATER); 
    list.Add(wxART_HOUSE_LAPTOP); 
    list.Add(wxART_HOUSE_LOCK); 
    list.Add(wxART_HOUSE_MEDICAL_CIRCLE_CHECK); 
    list.Add(wxART_HOUSE_MEDICAL_CIRCLE_EXCLAMATION); 
    list.Add(wxART_HOUSE_MEDICAL_CIRCLE_XMARK); 
    list.Add(wxART_HOUSE_MEDICAL_FLAG); 
    list.Add(wxART_HOUSE_MEDICAL); 
    list.Add(wxART_HOUSE_SIGNAL); 
    list.Add(wxART_HOUSE_TSUNAMI); 
    list.Add(wxART_HOUSE_USER); 
    list.Add(wxART_HOUSE); 
    list.Add(wxART_HRYVNIA_SIGN); 
    list.Add(wxART_HURRICANE); 
    list.Add(wxART_I_CURSOR); 
    list.Add(wxART_I); 
    list.Add(wxART_ICE_CREAM); 
    list.Add(wxART_ICICLES); 
    list.Add(wxART_ICONS); 
    list.Add(wxART_ID_BADGE); 
    list.Add(wxART_ID_CARD_CLIP); 
    list.Add(wxART_ID_CARD); 
    list.Add(wxART_IGLOO); 
    list.Add(wxART_IMAGE_PORTRAIT); 
    list.Add(wxART_IMAGE); 
    list.Add(wxART_IMAGES); 
    list.Add(wxART_INBOX); 
    list.Add(wxART_INDENT); 
    list.Add(wxART_INDIAN_RUPEE_SIGN); 
    list.Add(wxART_INDUSTRY); 
    list.Add(wxART_INFINITY); 
    list.Add(wxART_INFO); 
    list.Add(wxART_ITALIC); 
    list.Add(wxART_J); 
    list.Add(wxART_JAR_WHEAT); 
    list.Add(wxART_JAR); 
    list.Add(wxART_JEDI); 
    list.Add(wxART_JET_FIGHTER_UP); 
    list.Add(wxART_JET_FIGHTER); 
    list.Add(wxART_JOINT); 
    list.Add(wxART_JUG_DETERGENT); 
    list.Add(wxART_K); 
    list.Add(wxART_KAABA); 
    list.Add(wxART_KEY); 
    list.Add(wxART_KEYBOARD); 
    list.Add(wxART_KHANDA); 
    list.Add(wxART_KIP_SIGN); 
    list.Add(wxART_KIT_MEDICAL); 
    list.Add(wxART_KITCHEN_SET); 
    list.Add(wxART_KIWI_BIRD); 
    list.Add(wxART_L); 
    list.Add(wxART_LAND_MINE_ON); 
    list.Add(wxART_LANDMARK_DOME); 
    list.Add(wxART_LANDMARK_FLAG); 
    list.Add(wxART_LANDMARK); 
    list.Add(wxART_LANGUAGE); 
    list.Add(wxART_LAPTOP_CODE); 
    list.Add(wxART_LAPTOP_FILE); 
    list.Add(wxART_LAPTOP_MEDICAL); 
    list.Add(wxART_LAPTOP); 
    list.Add(wxART_LARI_SIGN); 
    list.Add(wxART_LAYER_GROUP); 
    list.Add(wxART_LEAF); 
    list.Add(wxART_LEFT_LONG); 
    list.Add(wxART_LEFT_RIGHT); 
    list.Add(wxART_LEMON); 
    list.Add(wxART_LESS_THAN_EQUAL); 
    list.Add(wxART_LESS_THAN); 
    list.Add(wxART_LIFE_RING); 
    list.Add(wxART_LIGHTBULB); 
    list.Add(wxART_LINES_LEANING); 
    list.Add(wxART_LINK_SLASH); 
    list.Add(wxART_LINK); 
    list.Add(wxART_LIRA_SIGN); 
    list.Add(wxART_LIST_CHECK); 
    list.Add(wxART_LIST_OL); 
    list.Add(wxART_LIST_UL); 
    list.Add(wxART_LIST); 
    list.Add(wxART_LITECOIN_SIGN); 
    list.Add(wxART_LOCATION_ARROW); 
    list.Add(wxART_LOCATION_CROSSHAIRS); 
    list.Add(wxART_LOCATION_DOT); 
    list.Add(wxART_LOCATION_PIN_LOCK); 
    list.Add(wxART_LOCATION_PIN); 
    list.Add(wxART_LOCK_OPEN); 
    list.Add(wxART_LOCK); 
    list.Add(wxART_LOCUST); 
    list.Add(wxART_LUNGS_VIRUS); 
    list.Add(wxART_LUNGS); 
    list.Add(wxART_M); 
    list.Add(wxART_MAGNET); 
    list.Add(wxART_MAGNIFYING_GLASS_ARROW_RIGHT); 
    list.Add(wxART_MAGNIFYING_GLASS_CHART); 
    list.Add(wxART_MAGNIFYING_GLASS_DOLLAR); 
    list.Add(wxART_MAGNIFYING_GLASS_LOCATION); 
    list.Add(wxART_MAGNIFYING_GLASS_MINUS); 
    list.Add(wxART_MAGNIFYING_GLASS_PLUS); 
    list.Add(wxART_MAGNIFYING_GLASS); 
    list.Add(wxART_MANAT_SIGN); 
    list.Add(wxART_MAP_LOCATION_DOT); 
    list.Add(wxART_MAP_LOCATION); 
    list.Add(wxART_MAP_PIN); 
    list.Add(wxART_MAP); 
    list.Add(wxART_MARKER); 
    list.Add(wxART_MARS_AND_VENUS_BURST); 
    list.Add(wxART_MARS_AND_VENUS); 
    list.Add(wxART_MARS_DOUBLE); 
    list.Add(wxART_MARS_STROKE_RIGHT); 
    list.Add(wxART_MARS_STROKE_UP); 
    list.Add(wxART_MARS_STROKE); 
    list.Add(wxART_MARS); 
    list.Add(wxART_MARTINI_GLASS_CITRUS); 
    list.Add(wxART_MARTINI_GLASS_EMPTY); 
    list.Add(wxART_MARTINI_GLASS); 
    list.Add(wxART_MASK_FACE); 
    list.Add(wxART_MASK_VENTILATOR); 
    list.Add(wxART_MASK); 
    list.Add(wxART_MASKS_THEATER); 
    list.Add(wxART_MATTRESS_PILLOW); 
    list.Add(wxART_MAXIMIZE); 
    list.Add(wxART_MEDAL); 
    list.Add(wxART_MEMORY); 
    list.Add(wxART_MENORAH); 
    list.Add(wxART_MERCURY); 
    list.Add(wxART_MESSAGE); 
    list.Add(wxART_METEOR); 
    list.Add(wxART_MICROCHIP); 
    list.Add(wxART_MICROPHONE_LINES_SLASH); 
    list.Add(wxART_MICROPHONE_LINES); 
    list.Add(wxART_MICROPHONE_SLASH); 
    list.Add(wxART_MICROPHONE); 
    list.Add(wxART_MICROSCOPE); 
    list.Add(wxART_MILL_SIGN); 
    list.Add(wxART_MINIMIZE); 
    list.Add(wxART_MINUS); 
    list.Add(wxART_MITTEN); 
    list.Add(wxART_MOBILE_BUTTON); 
    list.Add(wxART_MOBILE_RETRO); 
    list.Add(wxART_MOBILE_SCREEN_BUTTON); 
    list.Add(wxART_MOBILE_SCREEN); 
    list.Add(wxART_MOBILE); 
    list.Add(wxART_MONEY_BILL_1_WAVE); 
    list.Add(wxART_MONEY_BILL_1); 
    list.Add(wxART_MONEY_BILL_TRANSFER); 
    list.Add(wxART_MONEY_BILL_TREND_UP); 
    list.Add(wxART_MONEY_BILL_WAVE); 
    list.Add(wxART_MONEY_BILL_WHEAT); 
    list.Add(wxART_MONEY_BILL); 
    list.Add(wxART_MONEY_BILLS); 
    list.Add(wxART_MONEY_CHECK_DOLLAR); 
    list.Add(wxART_MONEY_CHECK); 
    list.Add(wxART_MONUMENT); 
    list.Add(wxART_MOON); 
    list.Add(wxART_MORTAR_PESTLE); 
    list.Add(wxART_MOSQUE); 
    list.Add(wxART_MOSQUITO_NET); 
    list.Add(wxART_MOSQUITO); 
    list.Add(wxART_MOTORCYCLE); 
    list.Add(wxART_MOUND); 
    list.Add(wxART_MOUNTAIN_CITY); 
    list.Add(wxART_MOUNTAIN_SUN); 
    list.Add(wxART_MOUNTAIN); 
    list.Add(wxART_MUG_HOT); 
    list.Add(wxART_MUG_SAUCER); 
    list.Add(wxART_MUSIC); 
    list.Add(wxART_N); 
    list.Add(wxART_NAIRA_SIGN); 
    list.Add(wxART_NETWORK_WIRED); 
    list.Add(wxART_NEUTER); 
    list.Add(wxART_NEWSPAPER); 
    list.Add(wxART_NOT_EQUAL); 
    list.Add(wxART_NOTDEF); 
    list.Add(wxART_NOTE_STICKY); 
    list.Add(wxART_NOTES_MEDICAL); 
    list.Add(wxART_O); 
    list.Add(wxART_OBJECT_GROUP); 
    list.Add(wxART_OBJECT_UNGROUP); 
    list.Add(wxART_OIL_CAN); 
    list.Add(wxART_OIL_WELL); 
    list.Add(wxART_OM); 
    list.Add(wxART_OTTER); 
    list.Add(wxART_OUTDENT); 
    list.Add(wxART_P); 
    list.Add(wxART_PAGER); 
    list.Add(wxART_PAINT_ROLLER); 
    list.Add(wxART_PAINTBRUSH); 
    list.Add(wxART_PALETTE); 
    list.Add(wxART_PALLET); 
    list.Add(wxART_PANORAMA); 
    list.Add(wxART_PAPER_PLANE); 
    list.Add(wxART_PAPERCLIP); 
    list.Add(wxART_PARACHUTE_BOX); 
    list.Add(wxART_PARAGRAPH); 
    list.Add(wxART_PASSPORT); 
    list.Add(wxART_PASTE); 
    list.Add(wxART_PAUSE); 
    list.Add(wxART_PAW); 
    list.Add(wxART_PEACE); 
    list.Add(wxART_PEN_CLIP); 
    list.Add(wxART_PEN_FANCY); 
    list.Add(wxART_PEN_NIB); 
    list.Add(wxART_PEN_RULER); 
    list.Add(wxART_PEN_TO_SQUARE); 
    list.Add(wxART_PEN); 
    list.Add(wxART_PENCIL); 
    list.Add(wxART_PEOPLE_ARROWS); 
    list.Add(wxART_PEOPLE_CARRY_BOX); 
    list.Add(wxART_PEOPLE_GROUP); 
    list.Add(wxART_PEOPLE_LINE); 
    list.Add(wxART_PEOPLE_PULLING); 
    list.Add(wxART_PEOPLE_ROBBERY); 
    list.Add(wxART_PEOPLE_ROOF); 
    list.Add(wxART_PEPPER_HOT); 
    list.Add(wxART_PERCENT); 
    list.Add(wxART_PERSON_ARROW_DOWN_TO_LINE); 
    list.Add(wxART_PERSON_ARROW_UP_FROM_LINE); 
    list.Add(wxART_PERSON_BIKING); 
    list.Add(wxART_PERSON_BOOTH); 
    list.Add(wxART_PERSON_BREASTFEEDING); 
    list.Add(wxART_PERSON_BURST); 
    list.Add(wxART_PERSON_CANE); 
    list.Add(wxART_PERSON_CHALKBOARD); 
    list.Add(wxART_PERSON_CIRCLE_CHECK); 
    list.Add(wxART_PERSON_CIRCLE_EXCLAMATION); 
    list.Add(wxART_PERSON_CIRCLE_MINUS); 
    list.Add(wxART_PERSON_CIRCLE_PLUS); 
    list.Add(wxART_PERSON_CIRCLE_QUESTION); 
    list.Add(wxART_PERSON_CIRCLE_XMARK); 
    list.Add(wxART_PERSON_DIGGING); 
    list.Add(wxART_PERSON_DOTS_FROM_LINE); 
    list.Add(wxART_PERSON_DRESS_BURST); 
    list.Add(wxART_PERSON_DRESS); 
    list.Add(wxART_PERSON_DROWNING); 
    list.Add(wxART_PERSON_FALLING_BURST); 
    list.Add(wxART_PERSON_FALLING); 
    list.Add(wxART_PERSON_HALF_DRESS); 
    list.Add(wxART_PERSON_HARASSING); 
    list.Add(wxART_PERSON_HIKING); 
    list.Add(wxART_PERSON_MILITARY_POINTING); 
    list.Add(wxART_PERSON_MILITARY_RIFLE); 
    list.Add(wxART_PERSON_MILITARY_TO_PERSON); 
    list.Add(wxART_PERSON_PRAYING); 
    list.Add(wxART_PERSON_PREGNANT); 
    list.Add(wxART_PERSON_RAYS); 
    list.Add(wxART_PERSON_RIFLE); 
    list.Add(wxART_PERSON_RUNNING); 
    list.Add(wxART_PERSON_SHELTER); 
    list.Add(wxART_PERSON_SKATING); 
    list.Add(wxART_PERSON_SKIING_NORDIC); 
    list.Add(wxART_PERSON_SKIING); 
    list.Add(wxART_PERSON_SNOWBOARDING); 
    list.Add(wxART_PERSON_SWIMMING); 
    list.Add(wxART_PERSON_THROUGH_WINDOW); 
    list.Add(wxART_PERSON_WALKING_ARROW_LOOP_LEFT); 
    list.Add(wxART_PERSON_WALKING_ARROW_RIGHT); 
    list.Add(wxART_PERSON_WALKING_DASHED_LINE_ARROW_RIGHT); 
    list.Add(wxART_PERSON_WALKING_LUGGAGE); 
    list.Add(wxART_PERSON_WALKING_WITH_CANE); 
    list.Add(wxART_PERSON_WALKING); 
    list.Add(wxART_PERSON); 
    list.Add(wxART_PESETA_SIGN); 
    list.Add(wxART_PESO_SIGN); 
    list.Add(wxART_PHONE_FLIP); 
    list.Add(wxART_PHONE_SLASH); 
    list.Add(wxART_PHONE_VOLUME); 
    list.Add(wxART_PHONE); 
    list.Add(wxART_PHOTO_FILM); 
    list.Add(wxART_PIGGY_BANK); 
    list.Add(wxART_PILLS); 
    list.Add(wxART_PIZZA_SLICE); 
    list.Add(wxART_PLACE_OF_WORSHIP); 
    list.Add(wxART_PLANE_ARRIVAL); 
    list.Add(wxART_PLANE_CIRCLE_CHECK); 
    list.Add(wxART_PLANE_CIRCLE_EXCLAMATION); 
    list.Add(wxART_PLANE_CIRCLE_XMARK); 
    list.Add(wxART_PLANE_DEPARTURE); 
    list.Add(wxART_PLANE_LOCK); 
    list.Add(wxART_PLANE_SLASH); 
    list.Add(wxART_PLANE_UP); 
    list.Add(wxART_PLANE); 
    list.Add(wxART_PLANT_WILT); 
    list.Add(wxART_PLATE_WHEAT); 
    list.Add(wxART_PLAY); 
    list.Add(wxART_PLUG_CIRCLE_BOLT); 
    list.Add(wxART_PLUG_CIRCLE_CHECK); 
    list.Add(wxART_PLUG_CIRCLE_EXCLAMATION); 
    list.Add(wxART_PLUG_CIRCLE_MINUS); 
    list.Add(wxART_PLUG_CIRCLE_PLUS); 
    list.Add(wxART_PLUG_CIRCLE_XMARK); 
    list.Add(wxART_PLUG); 
    list.Add(wxART_PLUS_MINUS); 
    list.Add(wxART_PLUS); 
    list.Add(wxART_PODCAST); 
    list.Add(wxART_POO_STORM); 
    list.Add(wxART_POO); 
    list.Add(wxART_POOP); 
    list.Add(wxART_POWER_OFF); 
    list.Add(wxART_PRESCRIPTION_BOTTLE_MEDICAL); 
    list.Add(wxART_PRESCRIPTION_BOTTLE); 
    list.Add(wxART_PRESCRIPTION); 
    list.Add(wxART_PRINT); 
    list.Add(wxART_PUMP_MEDICAL); 
    list.Add(wxART_PUMP_SOAP); 
    list.Add(wxART_PUZZLE_PIECE); 
    list.Add(wxART_Q); 
    list.Add(wxART_QRCODE); 
    list.Add(wxART_QUESTION); 
    list.Add(wxART_QUOTE_LEFT); 
    list.Add(wxART_QUOTE_RIGHT); 
    list.Add(wxART_R); 
    list.Add(wxART_RADIATION); 
    list.Add(wxART_RADIO); 
    list.Add(wxART_RAINBOW); 
    list.Add(wxART_RANKING_STAR); 
    list.Add(wxART_RECEIPT); 
    list.Add(wxART_RECORD_VINYL); 
    list.Add(wxART_RECTANGLE_AD); 
    list.Add(wxART_RECTANGLE_LIST); 
    list.Add(wxART_RECTANGLE_XMARK); 
    list.Add(wxART_RECYCLE); 
    list.Add(wxART_REGISTERED); 
    list.Add(wxART_REPEAT); 
    list.Add(wxART_REPLY_ALL); 
    list.Add(wxART_REPLY); 
    list.Add(wxART_REPUBLICAN); 
    list.Add(wxART_RESTROOM); 
    list.Add(wxART_RETWEET); 
    list.Add(wxART_RIBBON); 
    list.Add(wxART_RIGHT_FROM_BRACKET); 
    list.Add(wxART_RIGHT_LEFT); 
    list.Add(wxART_RIGHT_LONG); 
    list.Add(wxART_RIGHT_TO_BRACKET); 
    list.Add(wxART_RING); 
    list.Add(wxART_ROAD_BARRIER); 
    list.Add(wxART_ROAD_BRIDGE); 
    list.Add(wxART_ROAD_CIRCLE_CHECK); 
    list.Add(wxART_ROAD_CIRCLE_EXCLAMATION); 
    list.Add(wxART_ROAD_CIRCLE_XMARK); 
    list.Add(wxART_ROAD_LOCK); 
    list.Add(wxART_ROAD_SPIKES); 
    list.Add(wxART_ROAD); 
    list.Add(wxART_ROBOT); 
    list.Add(wxART_ROCKET); 
    list.Add(wxART_ROTATE_LEFT); 
    list.Add(wxART_ROTATE_RIGHT); 
    list.Add(wxART_ROTATE); 
    list.Add(wxART_ROUTE); 
    list.Add(wxART_RSS); 
    list.Add(wxART_RUBLE_SIGN); 
    list.Add(wxART_RUG); 
    list.Add(wxART_RULER_COMBINED); 
    list.Add(wxART_RULER_HORIZONTAL); 
    list.Add(wxART_RULER_VERTICAL); 
    list.Add(wxART_RULER); 
    list.Add(wxART_RUPEE_SIGN); 
    list.Add(wxART_RUPIAH_SIGN); 
    list.Add(wxART_S); 
    list.Add(wxART_SACK_DOLLAR); 
    list.Add(wxART_SACK_XMARK); 
    list.Add(wxART_SAILBOAT); 
    list.Add(wxART_SATELLITE_DISH); 
    list.Add(wxART_SATELLITE); 
    list.Add(wxART_SCALE_BALANCED); 
    list.Add(wxART_SCALE_UNBALANCED_FLIP); 
    list.Add(wxART_SCALE_UNBALANCED); 
    list.Add(wxART_SCHOOL_CIRCLE_CHECK); 
    list.Add(wxART_SCHOOL_CIRCLE_EXCLAMATION); 
    list.Add(wxART_SCHOOL_CIRCLE_XMARK); 
    list.Add(wxART_SCHOOL_FLAG); 
    list.Add(wxART_SCHOOL_LOCK); 
    list.Add(wxART_SCHOOL); 
    list.Add(wxART_SCISSORS); 
    list.Add(wxART_SCREWDRIVER_WRENCH); 
    list.Add(wxART_SCREWDRIVER); 
    list.Add(wxART_SCROLL_TORAH); 
    list.Add(wxART_SCROLL); 
    list.Add(wxART_SD_CARD); 
    list.Add(wxART_SECTION); 
    list.Add(wxART_SEEDLING); 
    list.Add(wxART_SERVER); 
    list.Add(wxART_SHAPES); 
    list.Add(wxART_SHARE_FROM_SQUARE); 
    list.Add(wxART_SHARE_NODES); 
    list.Add(wxART_SHARE); 
    list.Add(wxART_SHEET_PLASTIC); 
    list.Add(wxART_SHEKEL_SIGN); 
    list.Add(wxART_SHIELD_CAT); 
    list.Add(wxART_SHIELD_DOG); 
    list.Add(wxART_SHIELD_HALVED); 
    list.Add(wxART_SHIELD_HEART); 
    list.Add(wxART_SHIELD_VIRUS); 
    list.Add(wxART_SHIELD); 
    list.Add(wxART_SHIP); 
    list.Add(wxART_SHIRT); 
    list.Add(wxART_SHOE_PRINTS); 
    list.Add(wxART_SHOP_LOCK); 
    list.Add(wxART_SHOP_SLASH); 
    list.Add(wxART_SHOP); 
    list.Add(wxART_SHOWER); 
    list.Add(wxART_SHRIMP); 
    list.Add(wxART_SHUFFLE); 
    list.Add(wxART_SHUTTLE_SPACE); 
    list.Add(wxART_SIGN_HANGING); 
    list.Add(wxART_SIGNAL); 
    list.Add(wxART_SIGNATURE); 
    list.Add(wxART_SIGNS_POST); 
    list.Add(wxART_SIM_CARD); 
    list.Add(wxART_SINK); 
    list.Add(wxART_SITEMAP); 
    list.Add(wxART_SKULL_CROSSBONES); 
    list.Add(wxART_SKULL); 
    list.Add(wxART_SLASH); 
    list.Add(wxART_SLEIGH); 
    list.Add(wxART_SLIDERS); 
    list.Add(wxART_SMOG); 
    list.Add(wxART_SMOKING); 
    list.Add(wxART_SNOWFLAKE); 
    list.Add(wxART_SNOWMAN); 
    list.Add(wxART_SNOWPLOW); 
    list.Add(wxART_SOAP); 
    list.Add(wxART_SOCKS); 
    list.Add(wxART_SOLAR_PANEL); 
    list.Add(wxART_SORT_DOWN); 
    list.Add(wxART_SORT_UP); 
    list.Add(wxART_SORT); 
    list.Add(wxART_SPA); 
    list.Add(wxART_SPAGHETTI_MONSTER_FLYING); 
    list.Add(wxART_SPELL_CHECK); 
    list.Add(wxART_SPIDER); 
    list.Add(wxART_SPINNER); 
    list.Add(wxART_SPLOTCH); 
    list.Add(wxART_SPOON); 
    list.Add(wxART_SPRAY_CAN_SPARKLES); 
    list.Add(wxART_SPRAY_CAN); 
    list.Add(wxART_SQUARE_ARROW_UP_RIGHT); 
    list.Add(wxART_SQUARE_CARET_DOWN); 
    list.Add(wxART_SQUARE_CARET_LEFT); 
    list.Add(wxART_SQUARE_CARET_RIGHT); 
    list.Add(wxART_SQUARE_CARET_UP); 
    list.Add(wxART_SQUARE_CHECK); 
    list.Add(wxART_SQUARE_ENVELOPE); 
    list.Add(wxART_SQUARE_FULL); 
    list.Add(wxART_SQUARE_H); 
    list.Add(wxART_SQUARE_MINUS); 
    list.Add(wxART_SQUARE_NFI); 
    list.Add(wxART_SQUARE_PARKING); 
    list.Add(wxART_SQUARE_PEN); 
    list.Add(wxART_SQUARE_PERSON_CONFINED); 
    list.Add(wxART_SQUARE_PHONE_FLIP); 
    list.Add(wxART_SQUARE_PHONE); 
    list.Add(wxART_SQUARE_PLUS); 
    list.Add(wxART_SQUARE_POLL_HORIZONTAL); 
    list.Add(wxART_SQUARE_POLL_VERTICAL); 
    list.Add(wxART_SQUARE_ROOT_VARIABLE); 
    list.Add(wxART_SQUARE_RSS); 
    list.Add(wxART_SQUARE_SHARE_NODES); 
    list.Add(wxART_SQUARE_UP_RIGHT); 
    list.Add(wxART_SQUARE_VIRUS); 
    list.Add(wxART_SQUARE_XMARK); 
    list.Add(wxART_SQUARE); 
    list.Add(wxART_STAFF_SNAKE); 
    list.Add(wxART_STAIRS); 
    list.Add(wxART_STAMP); 
    list.Add(wxART_STAPLER); 
    list.Add(wxART_STAR_AND_CRESCENT); 
    list.Add(wxART_STAR_HALF_STROKE); 
    list.Add(wxART_STAR_HALF); 
    list.Add(wxART_STAR_OF_DAVID); 
    list.Add(wxART_STAR_OF_LIFE); 
    list.Add(wxART_STAR); 
    list.Add(wxART_STERLING_SIGN); 
    list.Add(wxART_STETHOSCOPE); 
    list.Add(wxART_STOP); 
    list.Add(wxART_STOPWATCH_20); 
    list.Add(wxART_STOPWATCH); 
    list.Add(wxART_STORE_SLASH); 
    list.Add(wxART_STORE); 
    list.Add(wxART_STREET_VIEW); 
    list.Add(wxART_STRIKETHROUGH); 
    list.Add(wxART_STROOPWAFEL); 
    list.Add(wxART_SUBSCRIPT); 
    list.Add(wxART_SUITCASE_MEDICAL); 
    list.Add(wxART_SUITCASE_ROLLING); 
    list.Add(wxART_SUITCASE); 
    list.Add(wxART_SUN_PLANT_WILT); 
    list.Add(wxART_SUN); 
    list.Add(wxART_SUPERSCRIPT); 
    list.Add(wxART_SWATCHBOOK); 
    list.Add(wxART_SYNAGOGUE); 
    list.Add(wxART_SYRINGE); 
    list.Add(wxART_T); 
    list.Add(wxART_TABLE_CELLS_LARGE); 
    list.Add(wxART_TABLE_CELLS); 
    list.Add(wxART_TABLE_COLUMNS); 
    list.Add(wxART_TABLE_LIST); 
    list.Add(wxART_TABLE_TENNIS_PADDLE_BALL); 
    list.Add(wxART_TABLE); 
    list.Add(wxART_TABLET_BUTTON); 
    list.Add(wxART_TABLET_SCREEN_BUTTON); 
    list.Add(wxART_TABLET); 
    list.Add(wxART_TABLETS); 
    list.Add(wxART_TACHOGRAPH_DIGITAL); 
    list.Add(wxART_TAG); 
    list.Add(wxART_TAGS); 
    list.Add(wxART_TAPE); 
    list.Add(wxART_TARP_DROPLET); 
    list.Add(wxART_TARP); 
    list.Add(wxART_TAXI); 
    list.Add(wxART_TEETH_OPEN); 
    list.Add(wxART_TEETH); 
    list.Add(wxART_TEMPERATURE_ARROW_DOWN); 
    list.Add(wxART_TEMPERATURE_ARROW_UP); 
    list.Add(wxART_TEMPERATURE_EMPTY); 
    list.Add(wxART_TEMPERATURE_FULL); 
    list.Add(wxART_TEMPERATURE_HALF); 
    list.Add(wxART_TEMPERATURE_HIGH); 
    list.Add(wxART_TEMPERATURE_LOW); 
    list.Add(wxART_TEMPERATURE_QUARTER); 
    list.Add(wxART_TEMPERATURE_THREE_QUARTERS); 
    list.Add(wxART_TENGE_SIGN); 
    list.Add(wxART_TENT_ARROW_DOWN_TO_LINE); 
    list.Add(wxART_TENT_ARROW_LEFT_RIGHT); 
    list.Add(wxART_TENT_ARROW_TURN_LEFT); 
    list.Add(wxART_TENT_ARROWS_DOWN); 
    list.Add(wxART_TENT); 
    list.Add(wxART_TENTS); 
    list.Add(wxART_TERMINAL); 
    list.Add(wxART_TEXT_HEIGHT); 
    list.Add(wxART_TEXT_SLASH); 
    list.Add(wxART_TEXT_WIDTH); 
    list.Add(wxART_THERMOMETER); 
    list.Add(wxART_THUMBS_DOWN); 
    list.Add(wxART_THUMBS_UP); 
    list.Add(wxART_THUMBTACK); 
    list.Add(wxART_TICKET_SIMPLE); 
    list.Add(wxART_TICKET); 
    list.Add(wxART_TIMELINE); 
    list.Add(wxART_TOGGLE_OFF); 
    list.Add(wxART_TOGGLE_ON); 
    list.Add(wxART_TOILET_PAPER_SLASH); 
    list.Add(wxART_TOILET_PAPER); 
    list.Add(wxART_TOILET_PORTABLE); 
    list.Add(wxART_TOILET); 
    list.Add(wxART_TOILETS_PORTABLE); 
    list.Add(wxART_TOOLBOX); 
    list.Add(wxART_TOOTH); 
    list.Add(wxART_TORII_GATE); 
    list.Add(wxART_TORNADO); 
    list.Add(wxART_TOWER_BROADCAST); 
    list.Add(wxART_TOWER_CELL); 
    list.Add(wxART_TOWER_OBSERVATION); 
    list.Add(wxART_TRACTOR); 
    list.Add(wxART_TRADEMARK); 
    list.Add(wxART_TRAFFIC_LIGHT); 
    list.Add(wxART_TRAILER); 
    list.Add(wxART_TRAIN_SUBWAY); 
    list.Add(wxART_TRAIN_TRAM); 
    list.Add(wxART_TRAIN); 
    list.Add(wxART_TRANSGENDER); 
    list.Add(wxART_TRASH_ARROW_UP); 
    list.Add(wxART_TRASH_CAN_ARROW_UP); 
    list.Add(wxART_TRASH_CAN); 
    list.Add(wxART_TRASH); 
    list.Add(wxART_TREE_CITY); 
    list.Add(wxART_TREE); 
    list.Add(wxART_TRIANGLE_EXCLAMATION); 
    list.Add(wxART_TROPHY); 
    list.Add(wxART_TROWEL_BRICKS); 
    list.Add(wxART_TROWEL); 
    list.Add(wxART_TRUCK_ARROW_RIGHT); 
    list.Add(wxART_TRUCK_DROPLET); 
    list.Add(wxART_TRUCK_FAST); 
    list.Add(wxART_TRUCK_FIELD_UN); 
    list.Add(wxART_TRUCK_FIELD); 
    list.Add(wxART_TRUCK_FRONT); 
    list.Add(wxART_TRUCK_MEDICAL); 
    list.Add(wxART_TRUCK_MONSTER); 
    list.Add(wxART_TRUCK_MOVING); 
    list.Add(wxART_TRUCK_PICKUP); 
    list.Add(wxART_TRUCK_PLANE); 
    list.Add(wxART_TRUCK_RAMP_BOX); 
    list.Add(wxART_TRUCK); 
    list.Add(wxART_TTY); 
    list.Add(wxART_TURKISH_LIRA_SIGN); 
    list.Add(wxART_TURN_DOWN); 
    list.Add(wxART_TURN_UP); 
    list.Add(wxART_TV); 
    list.Add(wxART_U); 
    list.Add(wxART_UMBRELLA_BEACH); 
    list.Add(wxART_UMBRELLA); 
    list.Add(wxART_UNDERLINE); 
    list.Add(wxART_UNIVERSAL_ACCESS); 
    list.Add(wxART_UNLOCK_KEYHOLE); 
    list.Add(wxART_UNLOCK); 
    list.Add(wxART_UP_DOWN_LEFT_RIGHT); 
    list.Add(wxART_UP_DOWN); 
    list.Add(wxART_UP_LONG); 
    list.Add(wxART_UP_RIGHT_AND_DOWN_LEFT_FROM_CENTER); 
    list.Add(wxART_UP_RIGHT_FROM_SQUARE); 
    list.Add(wxART_UPLOAD); 
    list.Add(wxART_USER_ASTRONAUT); 
    list.Add(wxART_USER_CHECK); 
    list.Add(wxART_USER_CLOCK); 
    list.Add(wxART_USER_DOCTOR); 
    list.Add(wxART_USER_GEAR); 
    list.Add(wxART_USER_GRADUATE); 
    list.Add(wxART_USER_GROUP); 
    list.Add(wxART_USER_INJURED); 
    list.Add(wxART_USER_LARGE_SLASH); 
    list.Add(wxART_USER_LARGE); 
    list.Add(wxART_USER_LOCK); 
    list.Add(wxART_USER_MINUS); 
    list.Add(wxART_USER_NINJA); 
    list.Add(wxART_USER_NURSE); 
    list.Add(wxART_USER_PEN); 
    list.Add(wxART_USER_PLUS); 
    list.Add(wxART_USER_SECRET); 
    list.Add(wxART_USER_SHIELD); 
    list.Add(wxART_USER_SLASH); 
    list.Add(wxART_USER_TAG); 
    list.Add(wxART_USER_TIE); 
    list.Add(wxART_USER_XMARK); 
    list.Add(wxART_USER); 
    list.Add(wxART_USERS_BETWEEN_LINES); 
    list.Add(wxART_USERS_GEAR); 
    list.Add(wxART_USERS_LINE); 
    list.Add(wxART_USERS_RAYS); 
    list.Add(wxART_USERS_RECTANGLE); 
    list.Add(wxART_USERS_SLASH); 
    list.Add(wxART_USERS_VIEWFINDER); 
    list.Add(wxART_USERS); 
    list.Add(wxART_UTENSILS); 
    list.Add(wxART_V); 
    list.Add(wxART_VAN_SHUTTLE); 
    list.Add(wxART_VAULT); 
    list.Add(wxART_VECTOR_SQUARE); 
    list.Add(wxART_VENUS_DOUBLE); 
    list.Add(wxART_VENUS_MARS); 
    list.Add(wxART_VENUS); 
    list.Add(wxART_VEST_PATCHES); 
    list.Add(wxART_VEST); 
    list.Add(wxART_VIAL_CIRCLE_CHECK); 
    list.Add(wxART_VIAL_VIRUS); 
    list.Add(wxART_VIAL); 
    list.Add(wxART_VIALS); 
    list.Add(wxART_VIDEO_SLASH); 
    list.Add(wxART_VIDEO); 
    list.Add(wxART_VIHARA); 
    list.Add(wxART_VIRUS_COVID_SLASH); 
    list.Add(wxART_VIRUS_COVID); 
    list.Add(wxART_VIRUS_SLASH); 
    list.Add(wxART_VIRUS); 
    list.Add(wxART_VIRUSES); 
    list.Add(wxART_VOICEMAIL); 
    list.Add(wxART_VOLCANO); 
    list.Add(wxART_VOLLEYBALL); 
    list.Add(wxART_VOLUME_HIGH); 
    list.Add(wxART_VOLUME_LOW); 
    list.Add(wxART_VOLUME_OFF); 
    list.Add(wxART_VOLUME_XMARK); 
    list.Add(wxART_VR_CARDBOARD); 
    list.Add(wxART_W); 
    list.Add(wxART_WALKIE_TALKIE); 
    list.Add(wxART_WALLET); 
    list.Add(wxART_WAND_MAGIC_SPARKLES); 
    list.Add(wxART_WAND_MAGIC); 
    list.Add(wxART_WAND_SPARKLES); 
    list.Add(wxART_WAREHOUSE); 
    list.Add(wxART_WATER_LADDER); 
    list.Add(wxART_WATER); 
    list.Add(wxART_WAVE_SQUARE); 
    list.Add(wxART_WEIGHT_HANGING); 
    list.Add(wxART_WEIGHT_SCALE); 
    list.Add(wxART_WHEAT_AWN_CIRCLE_EXCLAMATION); 
    list.Add(wxART_WHEAT_AWN); 
    list.Add(wxART_WHEELCHAIR_MOVE); 
    list.Add(wxART_WHEELCHAIR); 
    list.Add(wxART_WHISKEY_GLASS); 
    list.Add(wxART_WIFI); 
    list.Add(wxART_WIND); 
    list.Add(wxART_WINDOW_MAXIMIZE); 
    list.Add(wxART_WINDOW_MINIMIZE); 
    list.Add(wxART_WINDOW_RESTORE); 
    list.Add(wxART_WINE_BOTTLE); 
    list.Add(wxART_WINE_GLASS_EMPTY); 
    list.Add(wxART_WINE_GLASS); 
    list.Add(wxART_WON_SIGN); 
    list.Add(wxART_WORM); 
    list.Add(wxART_WRENCH); 
    list.Add(wxART_X_RAY); 
    list.Add(wxART_X); 
    list.Add(wxART_XMARK); 
    list.Add(wxART_XMARKS_LINES); 
    list.Add(wxART_Y); 
    list.Add(wxART_YEN_SIGN); 
    list.Add(wxART_YIN_YANG); 
    list.Add(wxART_Z); 
    return list; 
}


// Return SVG for the current ID as a wxBitmap 
wxBitmap CreateSolidAwesomeArtBitmapByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxString svg = SolidAwesomeArtColorSVGByID(id,color); 
  if (svg.IsEmpty()) return wxNullBitmap; 

  // Create bundle and get bitmap from it 
  wxSize useSize = size==wxDefaultSize? wxSize(24,24) : size;
  wxBitmapBundle bundle = wxBitmapBundle::FromSVG(svg.mb_str(),useSize);
  if (!bundle.IsOk()) return wxNullBitmap; 
  wxBitmap bmp = bundle.GetBitmap(useSize); 
  if (!bmp.IsOk()) return wxNullBitmap; 
  return bmp; 
}


// Return SVG for the current ID as a wxBitmapBundle 
wxBitmapBundle CreateSolidAwesomeArtBitmapBundleByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxBitmapBundle bundle; 
  wxString svg = SolidAwesomeArtColorSVGByID(id,color); 
  if (svg.IsEmpty()) return bundle; 

  // Create bundle and get bitmap from it 
  wxSize useSize = size==wxDefaultSize? wxSize(24,24) : size;
  bundle = wxBitmapBundle::FromSVG(svg.mb_str(),useSize);
  return bundle; 
}


