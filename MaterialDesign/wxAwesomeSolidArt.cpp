#include "wxAwesomeSolidArt.hpp" 
#include <wx/regex.h> 

// Return SVG for the current ID as a string 
wxString SolidAwesomeArtSVGByID(const wxArtID& id)
{
  if (id == wxART_0)  
      return wxString(SVG_AWESOME_SOLID_0);
  if (id == wxART_1)  
      return wxString(SVG_AWESOME_SOLID_1);
  if (id == wxART_2)  
      return wxString(SVG_AWESOME_SOLID_2);
  if (id == wxART_3)  
      return wxString(SVG_AWESOME_SOLID_3);
  if (id == wxART_4)  
      return wxString(SVG_AWESOME_SOLID_4);
  if (id == wxART_5)  
      return wxString(SVG_AWESOME_SOLID_5);
  if (id == wxART_6)  
      return wxString(SVG_AWESOME_SOLID_6);
  if (id == wxART_7)  
      return wxString(SVG_AWESOME_SOLID_7);
  if (id == wxART_8)  
      return wxString(SVG_AWESOME_SOLID_8);
  if (id == wxART_9)  
      return wxString(SVG_AWESOME_SOLID_9);
  if (id == wxART_A)  
      return wxString(SVG_AWESOME_SOLID_A);
  if (id == wxART_ADDRESS_BOOK)  
      return wxString(SVG_AWESOME_SOLID_ADDRESS_BOOK);
  if (id == wxART_ADDRESS_CARD)  
      return wxString(SVG_AWESOME_SOLID_ADDRESS_CARD);
  if (id == wxART_ALIGN_CENTER)  
      return wxString(SVG_AWESOME_SOLID_ALIGN_CENTER);
  if (id == wxART_ALIGN_JUSTIFY)  
      return wxString(SVG_AWESOME_SOLID_ALIGN_JUSTIFY);
  if (id == wxART_ALIGN_LEFT)  
      return wxString(SVG_AWESOME_SOLID_ALIGN_LEFT);
  if (id == wxART_ALIGN_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_ALIGN_RIGHT);
  if (id == wxART_ANCHOR_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_ANCHOR_CIRCLE_CHECK);
  if (id == wxART_ANCHOR_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_ANCHOR_CIRCLE_EXCLAMATION);
  if (id == wxART_ANCHOR_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_ANCHOR_CIRCLE_XMARK);
  if (id == wxART_ANCHOR_LOCK)  
      return wxString(SVG_AWESOME_SOLID_ANCHOR_LOCK);
  if (id == wxART_ANCHOR)  
      return wxString(SVG_AWESOME_SOLID_ANCHOR);
  if (id == wxART_ANGLE_DOWN)  
      return wxString(SVG_AWESOME_SOLID_ANGLE_DOWN);
  if (id == wxART_ANGLE_LEFT)  
      return wxString(SVG_AWESOME_SOLID_ANGLE_LEFT);
  if (id == wxART_ANGLE_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_ANGLE_RIGHT);
  if (id == wxART_ANGLE_UP)  
      return wxString(SVG_AWESOME_SOLID_ANGLE_UP);
  if (id == wxART_ANGLES_DOWN)  
      return wxString(SVG_AWESOME_SOLID_ANGLES_DOWN);
  if (id == wxART_ANGLES_LEFT)  
      return wxString(SVG_AWESOME_SOLID_ANGLES_LEFT);
  if (id == wxART_ANGLES_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_ANGLES_RIGHT);
  if (id == wxART_ANGLES_UP)  
      return wxString(SVG_AWESOME_SOLID_ANGLES_UP);
  if (id == wxART_ANKH)  
      return wxString(SVG_AWESOME_SOLID_ANKH);
  if (id == wxART_APPLE_WHOLE)  
      return wxString(SVG_AWESOME_SOLID_APPLE_WHOLE);
  if (id == wxART_ARCHWAY)  
      return wxString(SVG_AWESOME_SOLID_ARCHWAY);
  if (id == wxART_ARROW_DOWN_1_9)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_1_9);
  if (id == wxART_ARROW_DOWN_9_1)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_9_1);
  if (id == wxART_ARROW_DOWN_A_Z)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_A_Z);
  if (id == wxART_ARROW_DOWN_LONG)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_LONG);
  if (id == wxART_ARROW_DOWN_SHORT_WIDE)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_SHORT_WIDE);
  if (id == wxART_ARROW_DOWN_UP_ACROSS_LINE)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_UP_ACROSS_LINE);
  if (id == wxART_ARROW_DOWN_UP_LOCK)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_UP_LOCK);
  if (id == wxART_ARROW_DOWN_WIDE_SHORT)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_WIDE_SHORT);
  if (id == wxART_ARROW_DOWN_Z_A)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN_Z_A);
  if (id == wxART_ARROW_DOWN)  
      return wxString(SVG_AWESOME_SOLID_ARROW_DOWN);
  if (id == wxART_ARROW_LEFT_LONG)  
      return wxString(SVG_AWESOME_SOLID_ARROW_LEFT_LONG);
  if (id == wxART_ARROW_LEFT)  
      return wxString(SVG_AWESOME_SOLID_ARROW_LEFT);
  if (id == wxART_ARROW_POINTER)  
      return wxString(SVG_AWESOME_SOLID_ARROW_POINTER);
  if (id == wxART_ARROW_RIGHT_ARROW_LEFT)  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_ARROW_LEFT);
  if (id == wxART_ARROW_RIGHT_FROM_BRACKET)  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_FROM_BRACKET);
  if (id == wxART_ARROW_RIGHT_LONG)  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_LONG);
  if (id == wxART_ARROW_RIGHT_TO_BRACKET)  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_TO_BRACKET);
  if (id == wxART_ARROW_RIGHT_TO_CITY)  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT_TO_CITY);
  if (id == wxART_ARROW_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_ARROW_RIGHT);
  if (id == wxART_ARROW_ROTATE_LEFT)  
      return wxString(SVG_AWESOME_SOLID_ARROW_ROTATE_LEFT);
  if (id == wxART_ARROW_ROTATE_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_ARROW_ROTATE_RIGHT);
  if (id == wxART_ARROW_TREND_DOWN)  
      return wxString(SVG_AWESOME_SOLID_ARROW_TREND_DOWN);
  if (id == wxART_ARROW_TREND_UP)  
      return wxString(SVG_AWESOME_SOLID_ARROW_TREND_UP);
  if (id == wxART_ARROW_TURN_DOWN)  
      return wxString(SVG_AWESOME_SOLID_ARROW_TURN_DOWN);
  if (id == wxART_ARROW_TURN_UP)  
      return wxString(SVG_AWESOME_SOLID_ARROW_TURN_UP);
  if (id == wxART_ARROW_UP_1_9)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_1_9);
  if (id == wxART_ARROW_UP_9_1)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_9_1);
  if (id == wxART_ARROW_UP_A_Z)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_A_Z);
  if (id == wxART_ARROW_UP_FROM_BRACKET)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_FROM_BRACKET);
  if (id == wxART_ARROW_UP_FROM_GROUND_WATER)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_FROM_GROUND_WATER);
  if (id == wxART_ARROW_UP_FROM_WATER_PUMP)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_FROM_WATER_PUMP);
  if (id == wxART_ARROW_UP_LONG)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_LONG);
  if (id == wxART_ARROW_UP_RIGHT_DOTS)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_RIGHT_DOTS);
  if (id == wxART_ARROW_UP_RIGHT_FROM_SQUARE)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_RIGHT_FROM_SQUARE);
  if (id == wxART_ARROW_UP_SHORT_WIDE)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_SHORT_WIDE);
  if (id == wxART_ARROW_UP_WIDE_SHORT)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_WIDE_SHORT);
  if (id == wxART_ARROW_UP_Z_A)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP_Z_A);
  if (id == wxART_ARROW_UP)  
      return wxString(SVG_AWESOME_SOLID_ARROW_UP);
  if (id == wxART_ARROWS_DOWN_TO_LINE)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_DOWN_TO_LINE);
  if (id == wxART_ARROWS_DOWN_TO_PEOPLE)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_DOWN_TO_PEOPLE);
  if (id == wxART_ARROWS_LEFT_RIGHT_TO_LINE)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_LEFT_RIGHT_TO_LINE);
  if (id == wxART_ARROWS_LEFT_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_LEFT_RIGHT);
  if (id == wxART_ARROWS_ROTATE)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_ROTATE);
  if (id == wxART_ARROWS_SPIN)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_SPIN);
  if (id == wxART_ARROWS_SPLIT_UP_AND_LEFT)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_SPLIT_UP_AND_LEFT);
  if (id == wxART_ARROWS_TO_CIRCLE)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TO_CIRCLE);
  if (id == wxART_ARROWS_TO_DOT)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TO_DOT);
  if (id == wxART_ARROWS_TO_EYE)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TO_EYE);
  if (id == wxART_ARROWS_TURN_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TURN_RIGHT);
  if (id == wxART_ARROWS_TURN_TO_DOTS)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_TURN_TO_DOTS);
  if (id == wxART_ARROWS_UP_DOWN_LEFT_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_UP_DOWN_LEFT_RIGHT);
  if (id == wxART_ARROWS_UP_DOWN)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_UP_DOWN);
  if (id == wxART_ARROWS_UP_TO_LINE)  
      return wxString(SVG_AWESOME_SOLID_ARROWS_UP_TO_LINE);
  if (id == wxART_ASTERISK)  
      return wxString(SVG_AWESOME_SOLID_ASTERISK);
  if (id == wxART_AT)  
      return wxString(SVG_AWESOME_SOLID_AT);
  if (id == wxART_ATOM)  
      return wxString(SVG_AWESOME_SOLID_ATOM);
  if (id == wxART_AUDIO_DESCRIPTION)  
      return wxString(SVG_AWESOME_SOLID_AUDIO_DESCRIPTION);
  if (id == wxART_AUSTRAL_SIGN)  
      return wxString(SVG_AWESOME_SOLID_AUSTRAL_SIGN);
  if (id == wxART_AWARD)  
      return wxString(SVG_AWESOME_SOLID_AWARD);
  if (id == wxART_B)  
      return wxString(SVG_AWESOME_SOLID_B);
  if (id == wxART_BABY_CARRIAGE)  
      return wxString(SVG_AWESOME_SOLID_BABY_CARRIAGE);
  if (id == wxART_BABY)  
      return wxString(SVG_AWESOME_SOLID_BABY);
  if (id == wxART_BACKWARD_FAST)  
      return wxString(SVG_AWESOME_SOLID_BACKWARD_FAST);
  if (id == wxART_BACKWARD_STEP)  
      return wxString(SVG_AWESOME_SOLID_BACKWARD_STEP);
  if (id == wxART_BACKWARD)  
      return wxString(SVG_AWESOME_SOLID_BACKWARD);
  if (id == wxART_BACON)  
      return wxString(SVG_AWESOME_SOLID_BACON);
  if (id == wxART_BACTERIA)  
      return wxString(SVG_AWESOME_SOLID_BACTERIA);
  if (id == wxART_BACTERIUM)  
      return wxString(SVG_AWESOME_SOLID_BACTERIUM);
  if (id == wxART_BAG_SHOPPING)  
      return wxString(SVG_AWESOME_SOLID_BAG_SHOPPING);
  if (id == wxART_BAHAI)  
      return wxString(SVG_AWESOME_SOLID_BAHAI);
  if (id == wxART_BAHT_SIGN)  
      return wxString(SVG_AWESOME_SOLID_BAHT_SIGN);
  if (id == wxART_BAN_SMOKING)  
      return wxString(SVG_AWESOME_SOLID_BAN_SMOKING);
  if (id == wxART_BAN)  
      return wxString(SVG_AWESOME_SOLID_BAN);
  if (id == wxART_BANDAGE)  
      return wxString(SVG_AWESOME_SOLID_BANDAGE);
  if (id == wxART_BANGLADESHI_TAKA_SIGN)  
      return wxString(SVG_AWESOME_SOLID_BANGLADESHI_TAKA_SIGN);
  if (id == wxART_BARCODE)  
      return wxString(SVG_AWESOME_SOLID_BARCODE);
  if (id == wxART_BARS_PROGRESS)  
      return wxString(SVG_AWESOME_SOLID_BARS_PROGRESS);
  if (id == wxART_BARS_STAGGERED)  
      return wxString(SVG_AWESOME_SOLID_BARS_STAGGERED);
  if (id == wxART_BARS)  
      return wxString(SVG_AWESOME_SOLID_BARS);
  if (id == wxART_BASEBALL_BAT_BALL)  
      return wxString(SVG_AWESOME_SOLID_BASEBALL_BAT_BALL);
  if (id == wxART_BASEBALL)  
      return wxString(SVG_AWESOME_SOLID_BASEBALL);
  if (id == wxART_BASKET_SHOPPING)  
      return wxString(SVG_AWESOME_SOLID_BASKET_SHOPPING);
  if (id == wxART_BASKETBALL)  
      return wxString(SVG_AWESOME_SOLID_BASKETBALL);
  if (id == wxART_BATH)  
      return wxString(SVG_AWESOME_SOLID_BATH);
  if (id == wxART_BATTERY_EMPTY)  
      return wxString(SVG_AWESOME_SOLID_BATTERY_EMPTY);
  if (id == wxART_BATTERY_FULL)  
      return wxString(SVG_AWESOME_SOLID_BATTERY_FULL);
  if (id == wxART_BATTERY_HALF)  
      return wxString(SVG_AWESOME_SOLID_BATTERY_HALF);
  if (id == wxART_BATTERY_QUARTER)  
      return wxString(SVG_AWESOME_SOLID_BATTERY_QUARTER);
  if (id == wxART_BATTERY_THREE_QUARTERS)  
      return wxString(SVG_AWESOME_SOLID_BATTERY_THREE_QUARTERS);
  if (id == wxART_BED_PULSE)  
      return wxString(SVG_AWESOME_SOLID_BED_PULSE);
  if (id == wxART_BED)  
      return wxString(SVG_AWESOME_SOLID_BED);
  if (id == wxART_BEER_MUG_EMPTY)  
      return wxString(SVG_AWESOME_SOLID_BEER_MUG_EMPTY);
  if (id == wxART_BELL_CONCIERGE)  
      return wxString(SVG_AWESOME_SOLID_BELL_CONCIERGE);
  if (id == wxART_BELL_SLASH)  
      return wxString(SVG_AWESOME_SOLID_BELL_SLASH);
  if (id == wxART_BELL)  
      return wxString(SVG_AWESOME_SOLID_BELL);
  if (id == wxART_BEZIER_CURVE)  
      return wxString(SVG_AWESOME_SOLID_BEZIER_CURVE);
  if (id == wxART_BICYCLE)  
      return wxString(SVG_AWESOME_SOLID_BICYCLE);
  if (id == wxART_BINOCULARS)  
      return wxString(SVG_AWESOME_SOLID_BINOCULARS);
  if (id == wxART_BIOHAZARD)  
      return wxString(SVG_AWESOME_SOLID_BIOHAZARD);
  if (id == wxART_BITCOIN_SIGN)  
      return wxString(SVG_AWESOME_SOLID_BITCOIN_SIGN);
  if (id == wxART_BLENDER_PHONE)  
      return wxString(SVG_AWESOME_SOLID_BLENDER_PHONE);
  if (id == wxART_BLENDER)  
      return wxString(SVG_AWESOME_SOLID_BLENDER);
  if (id == wxART_BLOG)  
      return wxString(SVG_AWESOME_SOLID_BLOG);
  if (id == wxART_BOLD)  
      return wxString(SVG_AWESOME_SOLID_BOLD);
  if (id == wxART_BOLT_LIGHTNING)  
      return wxString(SVG_AWESOME_SOLID_BOLT_LIGHTNING);
  if (id == wxART_BOLT)  
      return wxString(SVG_AWESOME_SOLID_BOLT);
  if (id == wxART_BOMB)  
      return wxString(SVG_AWESOME_SOLID_BOMB);
  if (id == wxART_BONE)  
      return wxString(SVG_AWESOME_SOLID_BONE);
  if (id == wxART_BONG)  
      return wxString(SVG_AWESOME_SOLID_BONG);
  if (id == wxART_BOOK_ATLAS)  
      return wxString(SVG_AWESOME_SOLID_BOOK_ATLAS);
  if (id == wxART_BOOK_BIBLE)  
      return wxString(SVG_AWESOME_SOLID_BOOK_BIBLE);
  if (id == wxART_BOOK_BOOKMARK)  
      return wxString(SVG_AWESOME_SOLID_BOOK_BOOKMARK);
  if (id == wxART_BOOK_JOURNAL_WHILLS)  
      return wxString(SVG_AWESOME_SOLID_BOOK_JOURNAL_WHILLS);
  if (id == wxART_BOOK_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_BOOK_MEDICAL);
  if (id == wxART_BOOK_OPEN_READER)  
      return wxString(SVG_AWESOME_SOLID_BOOK_OPEN_READER);
  if (id == wxART_BOOK_OPEN)  
      return wxString(SVG_AWESOME_SOLID_BOOK_OPEN);
  if (id == wxART_BOOK_QURAN)  
      return wxString(SVG_AWESOME_SOLID_BOOK_QURAN);
  if (id == wxART_BOOK_SKULL)  
      return wxString(SVG_AWESOME_SOLID_BOOK_SKULL);
  if (id == wxART_BOOK_TANAKH)  
      return wxString(SVG_AWESOME_SOLID_BOOK_TANAKH);
  if (id == wxART_BOOK)  
      return wxString(SVG_AWESOME_SOLID_BOOK);
  if (id == wxART_BOOKMARK)  
      return wxString(SVG_AWESOME_SOLID_BOOKMARK);
  if (id == wxART_BORDER_ALL)  
      return wxString(SVG_AWESOME_SOLID_BORDER_ALL);
  if (id == wxART_BORDER_NONE)  
      return wxString(SVG_AWESOME_SOLID_BORDER_NONE);
  if (id == wxART_BORDER_TOP_LEFT)  
      return wxString(SVG_AWESOME_SOLID_BORDER_TOP_LEFT);
  if (id == wxART_BORE_HOLE)  
      return wxString(SVG_AWESOME_SOLID_BORE_HOLE);
  if (id == wxART_BOTTLE_DROPLET)  
      return wxString(SVG_AWESOME_SOLID_BOTTLE_DROPLET);
  if (id == wxART_BOTTLE_WATER)  
      return wxString(SVG_AWESOME_SOLID_BOTTLE_WATER);
  if (id == wxART_BOWL_FOOD)  
      return wxString(SVG_AWESOME_SOLID_BOWL_FOOD);
  if (id == wxART_BOWL_RICE)  
      return wxString(SVG_AWESOME_SOLID_BOWL_RICE);
  if (id == wxART_BOWLING_BALL)  
      return wxString(SVG_AWESOME_SOLID_BOWLING_BALL);
  if (id == wxART_BOX_ARCHIVE)  
      return wxString(SVG_AWESOME_SOLID_BOX_ARCHIVE);
  if (id == wxART_BOX_OPEN)  
      return wxString(SVG_AWESOME_SOLID_BOX_OPEN);
  if (id == wxART_BOX_TISSUE)  
      return wxString(SVG_AWESOME_SOLID_BOX_TISSUE);
  if (id == wxART_BOX)  
      return wxString(SVG_AWESOME_SOLID_BOX);
  if (id == wxART_BOXES_PACKING)  
      return wxString(SVG_AWESOME_SOLID_BOXES_PACKING);
  if (id == wxART_BOXES_STACKED)  
      return wxString(SVG_AWESOME_SOLID_BOXES_STACKED);
  if (id == wxART_BRAILLE)  
      return wxString(SVG_AWESOME_SOLID_BRAILLE);
  if (id == wxART_BRAIN)  
      return wxString(SVG_AWESOME_SOLID_BRAIN);
  if (id == wxART_BRAZILIAN_REAL_SIGN)  
      return wxString(SVG_AWESOME_SOLID_BRAZILIAN_REAL_SIGN);
  if (id == wxART_BREAD_SLICE)  
      return wxString(SVG_AWESOME_SOLID_BREAD_SLICE);
  if (id == wxART_BRIDGE_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_CIRCLE_CHECK);
  if (id == wxART_BRIDGE_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_CIRCLE_EXCLAMATION);
  if (id == wxART_BRIDGE_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_CIRCLE_XMARK);
  if (id == wxART_BRIDGE_LOCK)  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_LOCK);
  if (id == wxART_BRIDGE_WATER)  
      return wxString(SVG_AWESOME_SOLID_BRIDGE_WATER);
  if (id == wxART_BRIDGE)  
      return wxString(SVG_AWESOME_SOLID_BRIDGE);
  if (id == wxART_BRIEFCASE_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_BRIEFCASE_MEDICAL);
  if (id == wxART_BRIEFCASE)  
      return wxString(SVG_AWESOME_SOLID_BRIEFCASE);
  if (id == wxART_BROOM_BALL)  
      return wxString(SVG_AWESOME_SOLID_BROOM_BALL);
  if (id == wxART_BROOM)  
      return wxString(SVG_AWESOME_SOLID_BROOM);
  if (id == wxART_BRUSH)  
      return wxString(SVG_AWESOME_SOLID_BRUSH);
  if (id == wxART_BUCKET)  
      return wxString(SVG_AWESOME_SOLID_BUCKET);
  if (id == wxART_BUG_SLASH)  
      return wxString(SVG_AWESOME_SOLID_BUG_SLASH);
  if (id == wxART_BUG)  
      return wxString(SVG_AWESOME_SOLID_BUG);
  if (id == wxART_BUGS)  
      return wxString(SVG_AWESOME_SOLID_BUGS);
  if (id == wxART_BUILDING_CIRCLE_ARROW_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_CIRCLE_ARROW_RIGHT);
  if (id == wxART_BUILDING_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_CIRCLE_CHECK);
  if (id == wxART_BUILDING_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_CIRCLE_EXCLAMATION);
  if (id == wxART_BUILDING_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_CIRCLE_XMARK);
  if (id == wxART_BUILDING_COLUMNS)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_COLUMNS);
  if (id == wxART_BUILDING_FLAG)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_FLAG);
  if (id == wxART_BUILDING_LOCK)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_LOCK);
  if (id == wxART_BUILDING_NGO)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_NGO);
  if (id == wxART_BUILDING_SHIELD)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_SHIELD);
  if (id == wxART_BUILDING_UN)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_UN);
  if (id == wxART_BUILDING_USER)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_USER);
  if (id == wxART_BUILDING_WHEAT)  
      return wxString(SVG_AWESOME_SOLID_BUILDING_WHEAT);
  if (id == wxART_BUILDING)  
      return wxString(SVG_AWESOME_SOLID_BUILDING);
  if (id == wxART_BULLHORN)  
      return wxString(SVG_AWESOME_SOLID_BULLHORN);
  if (id == wxART_BULLSEYE)  
      return wxString(SVG_AWESOME_SOLID_BULLSEYE);
  if (id == wxART_BURGER)  
      return wxString(SVG_AWESOME_SOLID_BURGER);
  if (id == wxART_BURST)  
      return wxString(SVG_AWESOME_SOLID_BURST);
  if (id == wxART_BUS_SIMPLE)  
      return wxString(SVG_AWESOME_SOLID_BUS_SIMPLE);
  if (id == wxART_BUS)  
      return wxString(SVG_AWESOME_SOLID_BUS);
  if (id == wxART_BUSINESS_TIME)  
      return wxString(SVG_AWESOME_SOLID_BUSINESS_TIME);
  if (id == wxART_C)  
      return wxString(SVG_AWESOME_SOLID_C);
  if (id == wxART_CABLE_CAR)  
      return wxString(SVG_AWESOME_SOLID_CABLE_CAR);
  if (id == wxART_CAKE_CANDLES)  
      return wxString(SVG_AWESOME_SOLID_CAKE_CANDLES);
  if (id == wxART_CALCULATOR)  
      return wxString(SVG_AWESOME_SOLID_CALCULATOR);
  if (id == wxART_CALENDAR_CHECK)  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_CHECK);
  if (id == wxART_CALENDAR_DAY)  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_DAY);
  if (id == wxART_CALENDAR_DAYS)  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_DAYS);
  if (id == wxART_CALENDAR_MINUS)  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_MINUS);
  if (id == wxART_CALENDAR_PLUS)  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_PLUS);
  if (id == wxART_CALENDAR_WEEK)  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_WEEK);
  if (id == wxART_CALENDAR_XMARK)  
      return wxString(SVG_AWESOME_SOLID_CALENDAR_XMARK);
  if (id == wxART_CALENDAR)  
      return wxString(SVG_AWESOME_SOLID_CALENDAR);
  if (id == wxART_CAMERA_RETRO)  
      return wxString(SVG_AWESOME_SOLID_CAMERA_RETRO);
  if (id == wxART_CAMERA_ROTATE)  
      return wxString(SVG_AWESOME_SOLID_CAMERA_ROTATE);
  if (id == wxART_CAMERA)  
      return wxString(SVG_AWESOME_SOLID_CAMERA);
  if (id == wxART_CAMPGROUND)  
      return wxString(SVG_AWESOME_SOLID_CAMPGROUND);
  if (id == wxART_CANDY_CANE)  
      return wxString(SVG_AWESOME_SOLID_CANDY_CANE);
  if (id == wxART_CANNABIS)  
      return wxString(SVG_AWESOME_SOLID_CANNABIS);
  if (id == wxART_CAPSULES)  
      return wxString(SVG_AWESOME_SOLID_CAPSULES);
  if (id == wxART_CAR_BATTERY)  
      return wxString(SVG_AWESOME_SOLID_CAR_BATTERY);
  if (id == wxART_CAR_BURST)  
      return wxString(SVG_AWESOME_SOLID_CAR_BURST);
  if (id == wxART_CAR_ON)  
      return wxString(SVG_AWESOME_SOLID_CAR_ON);
  if (id == wxART_CAR_REAR)  
      return wxString(SVG_AWESOME_SOLID_CAR_REAR);
  if (id == wxART_CAR_SIDE)  
      return wxString(SVG_AWESOME_SOLID_CAR_SIDE);
  if (id == wxART_CAR_TUNNEL)  
      return wxString(SVG_AWESOME_SOLID_CAR_TUNNEL);
  if (id == wxART_CAR)  
      return wxString(SVG_AWESOME_SOLID_CAR);
  if (id == wxART_CARAVAN)  
      return wxString(SVG_AWESOME_SOLID_CARAVAN);
  if (id == wxART_CARET_DOWN)  
      return wxString(SVG_AWESOME_SOLID_CARET_DOWN);
  if (id == wxART_CARET_LEFT)  
      return wxString(SVG_AWESOME_SOLID_CARET_LEFT);
  if (id == wxART_CARET_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_CARET_RIGHT);
  if (id == wxART_CARET_UP)  
      return wxString(SVG_AWESOME_SOLID_CARET_UP);
  if (id == wxART_CARROT)  
      return wxString(SVG_AWESOME_SOLID_CARROT);
  if (id == wxART_CART_ARROW_DOWN)  
      return wxString(SVG_AWESOME_SOLID_CART_ARROW_DOWN);
  if (id == wxART_CART_FLATBED_SUITCASE)  
      return wxString(SVG_AWESOME_SOLID_CART_FLATBED_SUITCASE);
  if (id == wxART_CART_FLATBED)  
      return wxString(SVG_AWESOME_SOLID_CART_FLATBED);
  if (id == wxART_CART_PLUS)  
      return wxString(SVG_AWESOME_SOLID_CART_PLUS);
  if (id == wxART_CART_SHOPPING)  
      return wxString(SVG_AWESOME_SOLID_CART_SHOPPING);
  if (id == wxART_CASH_REGISTER)  
      return wxString(SVG_AWESOME_SOLID_CASH_REGISTER);
  if (id == wxART_CAT)  
      return wxString(SVG_AWESOME_SOLID_CAT);
  if (id == wxART_CEDI_SIGN)  
      return wxString(SVG_AWESOME_SOLID_CEDI_SIGN);
  if (id == wxART_CENT_SIGN)  
      return wxString(SVG_AWESOME_SOLID_CENT_SIGN);
  if (id == wxART_CERTIFICATE)  
      return wxString(SVG_AWESOME_SOLID_CERTIFICATE);
  if (id == wxART_CHAIR)  
      return wxString(SVG_AWESOME_SOLID_CHAIR);
  if (id == wxART_CHALKBOARD_USER)  
      return wxString(SVG_AWESOME_SOLID_CHALKBOARD_USER);
  if (id == wxART_CHALKBOARD)  
      return wxString(SVG_AWESOME_SOLID_CHALKBOARD);
  if (id == wxART_CHAMPAGNE_GLASSES)  
      return wxString(SVG_AWESOME_SOLID_CHAMPAGNE_GLASSES);
  if (id == wxART_CHARGING_STATION)  
      return wxString(SVG_AWESOME_SOLID_CHARGING_STATION);
  if (id == wxART_CHART_AREA)  
      return wxString(SVG_AWESOME_SOLID_CHART_AREA);
  if (id == wxART_CHART_BAR)  
      return wxString(SVG_AWESOME_SOLID_CHART_BAR);
  if (id == wxART_CHART_COLUMN)  
      return wxString(SVG_AWESOME_SOLID_CHART_COLUMN);
  if (id == wxART_CHART_GANTT)  
      return wxString(SVG_AWESOME_SOLID_CHART_GANTT);
  if (id == wxART_CHART_LINE)  
      return wxString(SVG_AWESOME_SOLID_CHART_LINE);
  if (id == wxART_CHART_PIE)  
      return wxString(SVG_AWESOME_SOLID_CHART_PIE);
  if (id == wxART_CHART_SIMPLE)  
      return wxString(SVG_AWESOME_SOLID_CHART_SIMPLE);
  if (id == wxART_CHECK_DOUBLE)  
      return wxString(SVG_AWESOME_SOLID_CHECK_DOUBLE);
  if (id == wxART_CHECK_TO_SLOT)  
      return wxString(SVG_AWESOME_SOLID_CHECK_TO_SLOT);
  if (id == wxART_CHECK)  
      return wxString(SVG_AWESOME_SOLID_CHECK);
  if (id == wxART_CHEESE)  
      return wxString(SVG_AWESOME_SOLID_CHEESE);
  if (id == wxART_CHESS_BISHOP)  
      return wxString(SVG_AWESOME_SOLID_CHESS_BISHOP);
  if (id == wxART_CHESS_BOARD)  
      return wxString(SVG_AWESOME_SOLID_CHESS_BOARD);
  if (id == wxART_CHESS_KING)  
      return wxString(SVG_AWESOME_SOLID_CHESS_KING);
  if (id == wxART_CHESS_KNIGHT)  
      return wxString(SVG_AWESOME_SOLID_CHESS_KNIGHT);
  if (id == wxART_CHESS_PAWN)  
      return wxString(SVG_AWESOME_SOLID_CHESS_PAWN);
  if (id == wxART_CHESS_QUEEN)  
      return wxString(SVG_AWESOME_SOLID_CHESS_QUEEN);
  if (id == wxART_CHESS_ROOK)  
      return wxString(SVG_AWESOME_SOLID_CHESS_ROOK);
  if (id == wxART_CHESS)  
      return wxString(SVG_AWESOME_SOLID_CHESS);
  if (id == wxART_CHEVRON_DOWN)  
      return wxString(SVG_AWESOME_SOLID_CHEVRON_DOWN);
  if (id == wxART_CHEVRON_LEFT)  
      return wxString(SVG_AWESOME_SOLID_CHEVRON_LEFT);
  if (id == wxART_CHEVRON_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_CHEVRON_RIGHT);
  if (id == wxART_CHEVRON_UP)  
      return wxString(SVG_AWESOME_SOLID_CHEVRON_UP);
  if (id == wxART_CHILD_COMBATANT)  
      return wxString(SVG_AWESOME_SOLID_CHILD_COMBATANT);
  if (id == wxART_CHILD_DRESS)  
      return wxString(SVG_AWESOME_SOLID_CHILD_DRESS);
  if (id == wxART_CHILD_REACHING)  
      return wxString(SVG_AWESOME_SOLID_CHILD_REACHING);
  if (id == wxART_CHILD)  
      return wxString(SVG_AWESOME_SOLID_CHILD);
  if (id == wxART_CHILDREN)  
      return wxString(SVG_AWESOME_SOLID_CHILDREN);
  if (id == wxART_CHURCH)  
      return wxString(SVG_AWESOME_SOLID_CHURCH);
  if (id == wxART_CIRCLE_ARROW_DOWN)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_ARROW_DOWN);
  if (id == wxART_CIRCLE_ARROW_LEFT)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_ARROW_LEFT);
  if (id == wxART_CIRCLE_ARROW_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_ARROW_RIGHT);
  if (id == wxART_CIRCLE_ARROW_UP)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_ARROW_UP);
  if (id == wxART_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHECK);
  if (id == wxART_CIRCLE_CHEVRON_DOWN)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHEVRON_DOWN);
  if (id == wxART_CIRCLE_CHEVRON_LEFT)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHEVRON_LEFT);
  if (id == wxART_CIRCLE_CHEVRON_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHEVRON_RIGHT);
  if (id == wxART_CIRCLE_CHEVRON_UP)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_CHEVRON_UP);
  if (id == wxART_CIRCLE_DOLLAR_TO_SLOT)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_DOLLAR_TO_SLOT);
  if (id == wxART_CIRCLE_DOT)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_DOT);
  if (id == wxART_CIRCLE_DOWN)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_DOWN);
  if (id == wxART_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_EXCLAMATION);
  if (id == wxART_CIRCLE_H)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_H);
  if (id == wxART_CIRCLE_HALF_STROKE)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_HALF_STROKE);
  if (id == wxART_CIRCLE_INFO)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_INFO);
  if (id == wxART_CIRCLE_LEFT)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_LEFT);
  if (id == wxART_CIRCLE_MINUS)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_MINUS);
  if (id == wxART_CIRCLE_NODES)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_NODES);
  if (id == wxART_CIRCLE_NOTCH)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_NOTCH);
  if (id == wxART_CIRCLE_PAUSE)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_PAUSE);
  if (id == wxART_CIRCLE_PLAY)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_PLAY);
  if (id == wxART_CIRCLE_PLUS)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_PLUS);
  if (id == wxART_CIRCLE_QUESTION)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_QUESTION);
  if (id == wxART_CIRCLE_RADIATION)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_RADIATION);
  if (id == wxART_CIRCLE_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_RIGHT);
  if (id == wxART_CIRCLE_STOP)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_STOP);
  if (id == wxART_CIRCLE_UP)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_UP);
  if (id == wxART_CIRCLE_USER)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_USER);
  if (id == wxART_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE_XMARK);
  if (id == wxART_CIRCLE)  
      return wxString(SVG_AWESOME_SOLID_CIRCLE);
  if (id == wxART_CITY)  
      return wxString(SVG_AWESOME_SOLID_CITY);
  if (id == wxART_CLAPPERBOARD)  
      return wxString(SVG_AWESOME_SOLID_CLAPPERBOARD);
  if (id == wxART_CLIPBOARD_CHECK)  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD_CHECK);
  if (id == wxART_CLIPBOARD_LIST)  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD_LIST);
  if (id == wxART_CLIPBOARD_QUESTION)  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD_QUESTION);
  if (id == wxART_CLIPBOARD_USER)  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD_USER);
  if (id == wxART_CLIPBOARD)  
      return wxString(SVG_AWESOME_SOLID_CLIPBOARD);
  if (id == wxART_CLOCK_ROTATE_LEFT)  
      return wxString(SVG_AWESOME_SOLID_CLOCK_ROTATE_LEFT);
  if (id == wxART_CLOCK)  
      return wxString(SVG_AWESOME_SOLID_CLOCK);
  if (id == wxART_CLONE)  
      return wxString(SVG_AWESOME_SOLID_CLONE);
  if (id == wxART_CLOSED_CAPTIONING)  
      return wxString(SVG_AWESOME_SOLID_CLOSED_CAPTIONING);
  if (id == wxART_CLOUD_ARROW_DOWN)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_ARROW_DOWN);
  if (id == wxART_CLOUD_ARROW_UP)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_ARROW_UP);
  if (id == wxART_CLOUD_BOLT)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_BOLT);
  if (id == wxART_CLOUD_MEATBALL)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_MEATBALL);
  if (id == wxART_CLOUD_MOON_RAIN)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_MOON_RAIN);
  if (id == wxART_CLOUD_MOON)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_MOON);
  if (id == wxART_CLOUD_RAIN)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_RAIN);
  if (id == wxART_CLOUD_SHOWERS_HEAVY)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_SHOWERS_HEAVY);
  if (id == wxART_CLOUD_SHOWERS_WATER)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_SHOWERS_WATER);
  if (id == wxART_CLOUD_SUN_RAIN)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_SUN_RAIN);
  if (id == wxART_CLOUD_SUN)  
      return wxString(SVG_AWESOME_SOLID_CLOUD_SUN);
  if (id == wxART_CLOUD)  
      return wxString(SVG_AWESOME_SOLID_CLOUD);
  if (id == wxART_CLOVER)  
      return wxString(SVG_AWESOME_SOLID_CLOVER);
  if (id == wxART_CODE_BRANCH)  
      return wxString(SVG_AWESOME_SOLID_CODE_BRANCH);
  if (id == wxART_CODE_COMMIT)  
      return wxString(SVG_AWESOME_SOLID_CODE_COMMIT);
  if (id == wxART_CODE_COMPARE)  
      return wxString(SVG_AWESOME_SOLID_CODE_COMPARE);
  if (id == wxART_CODE_FORK)  
      return wxString(SVG_AWESOME_SOLID_CODE_FORK);
  if (id == wxART_CODE_MERGE)  
      return wxString(SVG_AWESOME_SOLID_CODE_MERGE);
  if (id == wxART_CODE_PULL_REQUEST)  
      return wxString(SVG_AWESOME_SOLID_CODE_PULL_REQUEST);
  if (id == wxART_CODE)  
      return wxString(SVG_AWESOME_SOLID_CODE);
  if (id == wxART_COINS)  
      return wxString(SVG_AWESOME_SOLID_COINS);
  if (id == wxART_COLON_SIGN)  
      return wxString(SVG_AWESOME_SOLID_COLON_SIGN);
  if (id == wxART_COMMENT_DOLLAR)  
      return wxString(SVG_AWESOME_SOLID_COMMENT_DOLLAR);
  if (id == wxART_COMMENT_DOTS)  
      return wxString(SVG_AWESOME_SOLID_COMMENT_DOTS);
  if (id == wxART_COMMENT_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_COMMENT_MEDICAL);
  if (id == wxART_COMMENT_SLASH)  
      return wxString(SVG_AWESOME_SOLID_COMMENT_SLASH);
  if (id == wxART_COMMENT_SMS)  
      return wxString(SVG_AWESOME_SOLID_COMMENT_SMS);
  if (id == wxART_COMMENT)  
      return wxString(SVG_AWESOME_SOLID_COMMENT);
  if (id == wxART_COMMENTS_DOLLAR)  
      return wxString(SVG_AWESOME_SOLID_COMMENTS_DOLLAR);
  if (id == wxART_COMMENTS)  
      return wxString(SVG_AWESOME_SOLID_COMMENTS);
  if (id == wxART_COMPACT_DISC)  
      return wxString(SVG_AWESOME_SOLID_COMPACT_DISC);
  if (id == wxART_COMPASS_DRAFTING)  
      return wxString(SVG_AWESOME_SOLID_COMPASS_DRAFTING);
  if (id == wxART_COMPASS)  
      return wxString(SVG_AWESOME_SOLID_COMPASS);
  if (id == wxART_COMPRESS)  
      return wxString(SVG_AWESOME_SOLID_COMPRESS);
  if (id == wxART_COMPUTER_MOUSE)  
      return wxString(SVG_AWESOME_SOLID_COMPUTER_MOUSE);
  if (id == wxART_COMPUTER)  
      return wxString(SVG_AWESOME_SOLID_COMPUTER);
  if (id == wxART_COOKIE_BITE)  
      return wxString(SVG_AWESOME_SOLID_COOKIE_BITE);
  if (id == wxART_COOKIE)  
      return wxString(SVG_AWESOME_SOLID_COOKIE);
  if (id == wxART_COPY)  
      return wxString(SVG_AWESOME_SOLID_COPY);
  if (id == wxART_COPYRIGHT)  
      return wxString(SVG_AWESOME_SOLID_COPYRIGHT);
  if (id == wxART_COUCH)  
      return wxString(SVG_AWESOME_SOLID_COUCH);
  if (id == wxART_COW)  
      return wxString(SVG_AWESOME_SOLID_COW);
  if (id == wxART_CREDIT_CARD)  
      return wxString(SVG_AWESOME_SOLID_CREDIT_CARD);
  if (id == wxART_CROP_SIMPLE)  
      return wxString(SVG_AWESOME_SOLID_CROP_SIMPLE);
  if (id == wxART_CROP)  
      return wxString(SVG_AWESOME_SOLID_CROP);
  if (id == wxART_CROSS)  
      return wxString(SVG_AWESOME_SOLID_CROSS);
  if (id == wxART_CROSSHAIRS)  
      return wxString(SVG_AWESOME_SOLID_CROSSHAIRS);
  if (id == wxART_CROW)  
      return wxString(SVG_AWESOME_SOLID_CROW);
  if (id == wxART_CROWN)  
      return wxString(SVG_AWESOME_SOLID_CROWN);
  if (id == wxART_CRUTCH)  
      return wxString(SVG_AWESOME_SOLID_CRUTCH);
  if (id == wxART_CRUZEIRO_SIGN)  
      return wxString(SVG_AWESOME_SOLID_CRUZEIRO_SIGN);
  if (id == wxART_CUBE)  
      return wxString(SVG_AWESOME_SOLID_CUBE);
  if (id == wxART_CUBES_STACKED)  
      return wxString(SVG_AWESOME_SOLID_CUBES_STACKED);
  if (id == wxART_CUBES)  
      return wxString(SVG_AWESOME_SOLID_CUBES);
  if (id == wxART_D)  
      return wxString(SVG_AWESOME_SOLID_D);
  if (id == wxART_DATABASE)  
      return wxString(SVG_AWESOME_SOLID_DATABASE);
  if (id == wxART_DELETE_LEFT)  
      return wxString(SVG_AWESOME_SOLID_DELETE_LEFT);
  if (id == wxART_DEMOCRAT)  
      return wxString(SVG_AWESOME_SOLID_DEMOCRAT);
  if (id == wxART_DESKTOP)  
      return wxString(SVG_AWESOME_SOLID_DESKTOP);
  if (id == wxART_DHARMACHAKRA)  
      return wxString(SVG_AWESOME_SOLID_DHARMACHAKRA);
  if (id == wxART_DIAGRAM_NEXT)  
      return wxString(SVG_AWESOME_SOLID_DIAGRAM_NEXT);
  if (id == wxART_DIAGRAM_PREDECESSOR)  
      return wxString(SVG_AWESOME_SOLID_DIAGRAM_PREDECESSOR);
  if (id == wxART_DIAGRAM_PROJECT)  
      return wxString(SVG_AWESOME_SOLID_DIAGRAM_PROJECT);
  if (id == wxART_DIAGRAM_SUCCESSOR)  
      return wxString(SVG_AWESOME_SOLID_DIAGRAM_SUCCESSOR);
  if (id == wxART_DIAMOND_TURN_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_DIAMOND_TURN_RIGHT);
  if (id == wxART_DIAMOND)  
      return wxString(SVG_AWESOME_SOLID_DIAMOND);
  if (id == wxART_DICE_D20)  
      return wxString(SVG_AWESOME_SOLID_DICE_D20);
  if (id == wxART_DICE_D6)  
      return wxString(SVG_AWESOME_SOLID_DICE_D6);
  if (id == wxART_DICE_FIVE)  
      return wxString(SVG_AWESOME_SOLID_DICE_FIVE);
  if (id == wxART_DICE_FOUR)  
      return wxString(SVG_AWESOME_SOLID_DICE_FOUR);
  if (id == wxART_DICE_ONE)  
      return wxString(SVG_AWESOME_SOLID_DICE_ONE);
  if (id == wxART_DICE_SIX)  
      return wxString(SVG_AWESOME_SOLID_DICE_SIX);
  if (id == wxART_DICE_THREE)  
      return wxString(SVG_AWESOME_SOLID_DICE_THREE);
  if (id == wxART_DICE_TWO)  
      return wxString(SVG_AWESOME_SOLID_DICE_TWO);
  if (id == wxART_DICE)  
      return wxString(SVG_AWESOME_SOLID_DICE);
  if (id == wxART_DISEASE)  
      return wxString(SVG_AWESOME_SOLID_DISEASE);
  if (id == wxART_DISPLAY)  
      return wxString(SVG_AWESOME_SOLID_DISPLAY);
  if (id == wxART_DIVIDE)  
      return wxString(SVG_AWESOME_SOLID_DIVIDE);
  if (id == wxART_DNA)  
      return wxString(SVG_AWESOME_SOLID_DNA);
  if (id == wxART_DOG)  
      return wxString(SVG_AWESOME_SOLID_DOG);
  if (id == wxART_DOLLAR_SIGN)  
      return wxString(SVG_AWESOME_SOLID_DOLLAR_SIGN);
  if (id == wxART_DOLLY)  
      return wxString(SVG_AWESOME_SOLID_DOLLY);
  if (id == wxART_DONG_SIGN)  
      return wxString(SVG_AWESOME_SOLID_DONG_SIGN);
  if (id == wxART_DOOR_CLOSED)  
      return wxString(SVG_AWESOME_SOLID_DOOR_CLOSED);
  if (id == wxART_DOOR_OPEN)  
      return wxString(SVG_AWESOME_SOLID_DOOR_OPEN);
  if (id == wxART_DOVE)  
      return wxString(SVG_AWESOME_SOLID_DOVE);
  if (id == wxART_DOWN_LEFT_AND_UP_RIGHT_TO_CENTER)  
      return wxString(SVG_AWESOME_SOLID_DOWN_LEFT_AND_UP_RIGHT_TO_CENTER);
  if (id == wxART_DOWN_LONG)  
      return wxString(SVG_AWESOME_SOLID_DOWN_LONG);
  if (id == wxART_DOWNLOAD)  
      return wxString(SVG_AWESOME_SOLID_DOWNLOAD);
  if (id == wxART_DRAGON)  
      return wxString(SVG_AWESOME_SOLID_DRAGON);
  if (id == wxART_DRAW_POLYGON)  
      return wxString(SVG_AWESOME_SOLID_DRAW_POLYGON);
  if (id == wxART_DROPLET_SLASH)  
      return wxString(SVG_AWESOME_SOLID_DROPLET_SLASH);
  if (id == wxART_DROPLET)  
      return wxString(SVG_AWESOME_SOLID_DROPLET);
  if (id == wxART_DRUM_STEELPAN)  
      return wxString(SVG_AWESOME_SOLID_DRUM_STEELPAN);
  if (id == wxART_DRUM)  
      return wxString(SVG_AWESOME_SOLID_DRUM);
  if (id == wxART_DRUMSTICK_BITE)  
      return wxString(SVG_AWESOME_SOLID_DRUMSTICK_BITE);
  if (id == wxART_DUMBBELL)  
      return wxString(SVG_AWESOME_SOLID_DUMBBELL);
  if (id == wxART_DUMPSTER_FIRE)  
      return wxString(SVG_AWESOME_SOLID_DUMPSTER_FIRE);
  if (id == wxART_DUMPSTER)  
      return wxString(SVG_AWESOME_SOLID_DUMPSTER);
  if (id == wxART_DUNGEON)  
      return wxString(SVG_AWESOME_SOLID_DUNGEON);
  if (id == wxART_E)  
      return wxString(SVG_AWESOME_SOLID_E);
  if (id == wxART_EAR_DEAF)  
      return wxString(SVG_AWESOME_SOLID_EAR_DEAF);
  if (id == wxART_EAR_LISTEN)  
      return wxString(SVG_AWESOME_SOLID_EAR_LISTEN);
  if (id == wxART_EARTH_AFRICA)  
      return wxString(SVG_AWESOME_SOLID_EARTH_AFRICA);
  if (id == wxART_EARTH_AMERICAS)  
      return wxString(SVG_AWESOME_SOLID_EARTH_AMERICAS);
  if (id == wxART_EARTH_ASIA)  
      return wxString(SVG_AWESOME_SOLID_EARTH_ASIA);
  if (id == wxART_EARTH_EUROPE)  
      return wxString(SVG_AWESOME_SOLID_EARTH_EUROPE);
  if (id == wxART_EARTH_OCEANIA)  
      return wxString(SVG_AWESOME_SOLID_EARTH_OCEANIA);
  if (id == wxART_EGG)  
      return wxString(SVG_AWESOME_SOLID_EGG);
  if (id == wxART_EJECT)  
      return wxString(SVG_AWESOME_SOLID_EJECT);
  if (id == wxART_ELEVATOR)  
      return wxString(SVG_AWESOME_SOLID_ELEVATOR);
  if (id == wxART_ELLIPSIS_VERTICAL)  
      return wxString(SVG_AWESOME_SOLID_ELLIPSIS_VERTICAL);
  if (id == wxART_ELLIPSIS)  
      return wxString(SVG_AWESOME_SOLID_ELLIPSIS);
  if (id == wxART_ENVELOPE_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_ENVELOPE_CIRCLE_CHECK);
  if (id == wxART_ENVELOPE_OPEN_TEXT)  
      return wxString(SVG_AWESOME_SOLID_ENVELOPE_OPEN_TEXT);
  if (id == wxART_ENVELOPE_OPEN)  
      return wxString(SVG_AWESOME_SOLID_ENVELOPE_OPEN);
  if (id == wxART_ENVELOPE)  
      return wxString(SVG_AWESOME_SOLID_ENVELOPE);
  if (id == wxART_ENVELOPES_BULK)  
      return wxString(SVG_AWESOME_SOLID_ENVELOPES_BULK);
  if (id == wxART_EQUALS)  
      return wxString(SVG_AWESOME_SOLID_EQUALS);
  if (id == wxART_ERASER)  
      return wxString(SVG_AWESOME_SOLID_ERASER);
  if (id == wxART_ETHERNET)  
      return wxString(SVG_AWESOME_SOLID_ETHERNET);
  if (id == wxART_EURO_SIGN)  
      return wxString(SVG_AWESOME_SOLID_EURO_SIGN);
  if (id == wxART_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_EXCLAMATION);
  if (id == wxART_EXPAND)  
      return wxString(SVG_AWESOME_SOLID_EXPAND);
  if (id == wxART_EXPLOSION)  
      return wxString(SVG_AWESOME_SOLID_EXPLOSION);
  if (id == wxART_EYE_DROPPER)  
      return wxString(SVG_AWESOME_SOLID_EYE_DROPPER);
  if (id == wxART_EYE_LOW_VISION)  
      return wxString(SVG_AWESOME_SOLID_EYE_LOW_VISION);
  if (id == wxART_EYE_SLASH)  
      return wxString(SVG_AWESOME_SOLID_EYE_SLASH);
  if (id == wxART_EYE)  
      return wxString(SVG_AWESOME_SOLID_EYE);
  if (id == wxART_F)  
      return wxString(SVG_AWESOME_SOLID_F);
  if (id == wxART_FACE_ANGRY)  
      return wxString(SVG_AWESOME_SOLID_FACE_ANGRY);
  if (id == wxART_FACE_DIZZY)  
      return wxString(SVG_AWESOME_SOLID_FACE_DIZZY);
  if (id == wxART_FACE_FLUSHED)  
      return wxString(SVG_AWESOME_SOLID_FACE_FLUSHED);
  if (id == wxART_FACE_FROWN_OPEN)  
      return wxString(SVG_AWESOME_SOLID_FACE_FROWN_OPEN);
  if (id == wxART_FACE_FROWN)  
      return wxString(SVG_AWESOME_SOLID_FACE_FROWN);
  if (id == wxART_FACE_GRIMACE)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIMACE);
  if (id == wxART_FACE_GRIN_BEAM_SWEAT)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_BEAM_SWEAT);
  if (id == wxART_FACE_GRIN_BEAM)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_BEAM);
  if (id == wxART_FACE_GRIN_HEARTS)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_HEARTS);
  if (id == wxART_FACE_GRIN_SQUINT_TEARS)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_SQUINT_TEARS);
  if (id == wxART_FACE_GRIN_SQUINT)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_SQUINT);
  if (id == wxART_FACE_GRIN_STARS)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_STARS);
  if (id == wxART_FACE_GRIN_TEARS)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_TEARS);
  if (id == wxART_FACE_GRIN_TONGUE_SQUINT)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_TONGUE_SQUINT);
  if (id == wxART_FACE_GRIN_TONGUE_WINK)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_TONGUE_WINK);
  if (id == wxART_FACE_GRIN_TONGUE)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_TONGUE);
  if (id == wxART_FACE_GRIN_WIDE)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_WIDE);
  if (id == wxART_FACE_GRIN_WINK)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN_WINK);
  if (id == wxART_FACE_GRIN)  
      return wxString(SVG_AWESOME_SOLID_FACE_GRIN);
  if (id == wxART_FACE_KISS_BEAM)  
      return wxString(SVG_AWESOME_SOLID_FACE_KISS_BEAM);
  if (id == wxART_FACE_KISS_WINK_HEART)  
      return wxString(SVG_AWESOME_SOLID_FACE_KISS_WINK_HEART);
  if (id == wxART_FACE_KISS)  
      return wxString(SVG_AWESOME_SOLID_FACE_KISS);
  if (id == wxART_FACE_LAUGH_BEAM)  
      return wxString(SVG_AWESOME_SOLID_FACE_LAUGH_BEAM);
  if (id == wxART_FACE_LAUGH_SQUINT)  
      return wxString(SVG_AWESOME_SOLID_FACE_LAUGH_SQUINT);
  if (id == wxART_FACE_LAUGH_WINK)  
      return wxString(SVG_AWESOME_SOLID_FACE_LAUGH_WINK);
  if (id == wxART_FACE_LAUGH)  
      return wxString(SVG_AWESOME_SOLID_FACE_LAUGH);
  if (id == wxART_FACE_MEH_BLANK)  
      return wxString(SVG_AWESOME_SOLID_FACE_MEH_BLANK);
  if (id == wxART_FACE_MEH)  
      return wxString(SVG_AWESOME_SOLID_FACE_MEH);
  if (id == wxART_FACE_ROLLING_EYES)  
      return wxString(SVG_AWESOME_SOLID_FACE_ROLLING_EYES);
  if (id == wxART_FACE_SAD_CRY)  
      return wxString(SVG_AWESOME_SOLID_FACE_SAD_CRY);
  if (id == wxART_FACE_SAD_TEAR)  
      return wxString(SVG_AWESOME_SOLID_FACE_SAD_TEAR);
  if (id == wxART_FACE_SMILE_BEAM)  
      return wxString(SVG_AWESOME_SOLID_FACE_SMILE_BEAM);
  if (id == wxART_FACE_SMILE_WINK)  
      return wxString(SVG_AWESOME_SOLID_FACE_SMILE_WINK);
  if (id == wxART_FACE_SMILE)  
      return wxString(SVG_AWESOME_SOLID_FACE_SMILE);
  if (id == wxART_FACE_SURPRISE)  
      return wxString(SVG_AWESOME_SOLID_FACE_SURPRISE);
  if (id == wxART_FACE_TIRED)  
      return wxString(SVG_AWESOME_SOLID_FACE_TIRED);
  if (id == wxART_FAN)  
      return wxString(SVG_AWESOME_SOLID_FAN);
  if (id == wxART_FAUCET_DRIP)  
      return wxString(SVG_AWESOME_SOLID_FAUCET_DRIP);
  if (id == wxART_FAUCET)  
      return wxString(SVG_AWESOME_SOLID_FAUCET);
  if (id == wxART_FAX)  
      return wxString(SVG_AWESOME_SOLID_FAX);
  if (id == wxART_FEATHER_POINTED)  
      return wxString(SVG_AWESOME_SOLID_FEATHER_POINTED);
  if (id == wxART_FEATHER)  
      return wxString(SVG_AWESOME_SOLID_FEATHER);
  if (id == wxART_FERRY)  
      return wxString(SVG_AWESOME_SOLID_FERRY);
  if (id == wxART_FILE_ARROW_DOWN)  
      return wxString(SVG_AWESOME_SOLID_FILE_ARROW_DOWN);
  if (id == wxART_FILE_ARROW_UP)  
      return wxString(SVG_AWESOME_SOLID_FILE_ARROW_UP);
  if (id == wxART_FILE_AUDIO)  
      return wxString(SVG_AWESOME_SOLID_FILE_AUDIO);
  if (id == wxART_FILE_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_CHECK);
  if (id == wxART_FILE_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_EXCLAMATION);
  if (id == wxART_FILE_CIRCLE_MINUS)  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_MINUS);
  if (id == wxART_FILE_CIRCLE_PLUS)  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_PLUS);
  if (id == wxART_FILE_CIRCLE_QUESTION)  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_QUESTION);
  if (id == wxART_FILE_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_FILE_CIRCLE_XMARK);
  if (id == wxART_FILE_CODE)  
      return wxString(SVG_AWESOME_SOLID_FILE_CODE);
  if (id == wxART_FILE_CONTRACT)  
      return wxString(SVG_AWESOME_SOLID_FILE_CONTRACT);
  if (id == wxART_FILE_CSV)  
      return wxString(SVG_AWESOME_SOLID_FILE_CSV);
  if (id == wxART_FILE_EXCEL)  
      return wxString(SVG_AWESOME_SOLID_FILE_EXCEL);
  if (id == wxART_FILE_EXPORT)  
      return wxString(SVG_AWESOME_SOLID_FILE_EXPORT);
  if (id == wxART_FILE_IMAGE)  
      return wxString(SVG_AWESOME_SOLID_FILE_IMAGE);
  if (id == wxART_FILE_IMPORT)  
      return wxString(SVG_AWESOME_SOLID_FILE_IMPORT);
  if (id == wxART_FILE_INVOICE_DOLLAR)  
      return wxString(SVG_AWESOME_SOLID_FILE_INVOICE_DOLLAR);
  if (id == wxART_FILE_INVOICE)  
      return wxString(SVG_AWESOME_SOLID_FILE_INVOICE);
  if (id == wxART_FILE_LINES)  
      return wxString(SVG_AWESOME_SOLID_FILE_LINES);
  if (id == wxART_FILE_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_FILE_MEDICAL);
  if (id == wxART_FILE_PDF)  
      return wxString(SVG_AWESOME_SOLID_FILE_PDF);
  if (id == wxART_FILE_PEN)  
      return wxString(SVG_AWESOME_SOLID_FILE_PEN);
  if (id == wxART_FILE_POWERPOINT)  
      return wxString(SVG_AWESOME_SOLID_FILE_POWERPOINT);
  if (id == wxART_FILE_PRESCRIPTION)  
      return wxString(SVG_AWESOME_SOLID_FILE_PRESCRIPTION);
  if (id == wxART_FILE_SHIELD)  
      return wxString(SVG_AWESOME_SOLID_FILE_SHIELD);
  if (id == wxART_FILE_SIGNATURE)  
      return wxString(SVG_AWESOME_SOLID_FILE_SIGNATURE);
  if (id == wxART_FILE_VIDEO)  
      return wxString(SVG_AWESOME_SOLID_FILE_VIDEO);
  if (id == wxART_FILE_WAVEFORM)  
      return wxString(SVG_AWESOME_SOLID_FILE_WAVEFORM);
  if (id == wxART_FILE_WORD)  
      return wxString(SVG_AWESOME_SOLID_FILE_WORD);
  if (id == wxART_FILE_ZIPPER)  
      return wxString(SVG_AWESOME_SOLID_FILE_ZIPPER);
  if (id == wxART_FILE)  
      return wxString(SVG_AWESOME_SOLID_FILE);
  if (id == wxART_FILL_DRIP)  
      return wxString(SVG_AWESOME_SOLID_FILL_DRIP);
  if (id == wxART_FILL)  
      return wxString(SVG_AWESOME_SOLID_FILL);
  if (id == wxART_FILM)  
      return wxString(SVG_AWESOME_SOLID_FILM);
  if (id == wxART_FILTER_CIRCLE_DOLLAR)  
      return wxString(SVG_AWESOME_SOLID_FILTER_CIRCLE_DOLLAR);
  if (id == wxART_FILTER_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_FILTER_CIRCLE_XMARK);
  if (id == wxART_FILTER)  
      return wxString(SVG_AWESOME_SOLID_FILTER);
  if (id == wxART_FINGERPRINT)  
      return wxString(SVG_AWESOME_SOLID_FINGERPRINT);
  if (id == wxART_FIRE_BURNER)  
      return wxString(SVG_AWESOME_SOLID_FIRE_BURNER);
  if (id == wxART_FIRE_EXTINGUISHER)  
      return wxString(SVG_AWESOME_SOLID_FIRE_EXTINGUISHER);
  if (id == wxART_FIRE_FLAME_CURVED)  
      return wxString(SVG_AWESOME_SOLID_FIRE_FLAME_CURVED);
  if (id == wxART_FIRE_FLAME_SIMPLE)  
      return wxString(SVG_AWESOME_SOLID_FIRE_FLAME_SIMPLE);
  if (id == wxART_FIRE)  
      return wxString(SVG_AWESOME_SOLID_FIRE);
  if (id == wxART_FISH_FINS)  
      return wxString(SVG_AWESOME_SOLID_FISH_FINS);
  if (id == wxART_FISH)  
      return wxString(SVG_AWESOME_SOLID_FISH);
  if (id == wxART_FLAG_CHECKERED)  
      return wxString(SVG_AWESOME_SOLID_FLAG_CHECKERED);
  if (id == wxART_FLAG_USA)  
      return wxString(SVG_AWESOME_SOLID_FLAG_USA);
  if (id == wxART_FLAG)  
      return wxString(SVG_AWESOME_SOLID_FLAG);
  if (id == wxART_FLASK_VIAL)  
      return wxString(SVG_AWESOME_SOLID_FLASK_VIAL);
  if (id == wxART_FLASK)  
      return wxString(SVG_AWESOME_SOLID_FLASK);
  if (id == wxART_FLOPPY_DISK)  
      return wxString(SVG_AWESOME_SOLID_FLOPPY_DISK);
  if (id == wxART_FLORIN_SIGN)  
      return wxString(SVG_AWESOME_SOLID_FLORIN_SIGN);
  if (id == wxART_FOLDER_CLOSED)  
      return wxString(SVG_AWESOME_SOLID_FOLDER_CLOSED);
  if (id == wxART_FOLDER_MINUS)  
      return wxString(SVG_AWESOME_SOLID_FOLDER_MINUS);
  if (id == wxART_FOLDER_OPEN)  
      return wxString(SVG_AWESOME_SOLID_FOLDER_OPEN);
  if (id == wxART_FOLDER_PLUS)  
      return wxString(SVG_AWESOME_SOLID_FOLDER_PLUS);
  if (id == wxART_FOLDER_TREE)  
      return wxString(SVG_AWESOME_SOLID_FOLDER_TREE);
  if (id == wxART_FOLDER)  
      return wxString(SVG_AWESOME_SOLID_FOLDER);
  if (id == wxART_FONT_AWESOME)  
      return wxString(SVG_AWESOME_SOLID_FONT_AWESOME);
  if (id == wxART_FONT)  
      return wxString(SVG_AWESOME_SOLID_FONT);
  if (id == wxART_FOOTBALL)  
      return wxString(SVG_AWESOME_SOLID_FOOTBALL);
  if (id == wxART_FORWARD_FAST)  
      return wxString(SVG_AWESOME_SOLID_FORWARD_FAST);
  if (id == wxART_FORWARD_STEP)  
      return wxString(SVG_AWESOME_SOLID_FORWARD_STEP);
  if (id == wxART_FORWARD)  
      return wxString(SVG_AWESOME_SOLID_FORWARD);
  if (id == wxART_FRANC_SIGN)  
      return wxString(SVG_AWESOME_SOLID_FRANC_SIGN);
  if (id == wxART_FROG)  
      return wxString(SVG_AWESOME_SOLID_FROG);
  if (id == wxART_FUTBOL)  
      return wxString(SVG_AWESOME_SOLID_FUTBOL);
  if (id == wxART_G)  
      return wxString(SVG_AWESOME_SOLID_G);
  if (id == wxART_GAMEPAD)  
      return wxString(SVG_AWESOME_SOLID_GAMEPAD);
  if (id == wxART_GAS_PUMP)  
      return wxString(SVG_AWESOME_SOLID_GAS_PUMP);
  if (id == wxART_GAUGE_HIGH)  
      return wxString(SVG_AWESOME_SOLID_GAUGE_HIGH);
  if (id == wxART_GAUGE_SIMPLE_HIGH)  
      return wxString(SVG_AWESOME_SOLID_GAUGE_SIMPLE_HIGH);
  if (id == wxART_GAUGE_SIMPLE)  
      return wxString(SVG_AWESOME_SOLID_GAUGE_SIMPLE);
  if (id == wxART_GAUGE)  
      return wxString(SVG_AWESOME_SOLID_GAUGE);
  if (id == wxART_GAVEL)  
      return wxString(SVG_AWESOME_SOLID_GAVEL);
  if (id == wxART_GEAR)  
      return wxString(SVG_AWESOME_SOLID_GEAR);
  if (id == wxART_GEARS)  
      return wxString(SVG_AWESOME_SOLID_GEARS);
  if (id == wxART_GEM)  
      return wxString(SVG_AWESOME_SOLID_GEM);
  if (id == wxART_GENDERLESS)  
      return wxString(SVG_AWESOME_SOLID_GENDERLESS);
  if (id == wxART_GHOST)  
      return wxString(SVG_AWESOME_SOLID_GHOST);
  if (id == wxART_GIFT)  
      return wxString(SVG_AWESOME_SOLID_GIFT);
  if (id == wxART_GIFTS)  
      return wxString(SVG_AWESOME_SOLID_GIFTS);
  if (id == wxART_GLASS_WATER_DROPLET)  
      return wxString(SVG_AWESOME_SOLID_GLASS_WATER_DROPLET);
  if (id == wxART_GLASS_WATER)  
      return wxString(SVG_AWESOME_SOLID_GLASS_WATER);
  if (id == wxART_GLASSES)  
      return wxString(SVG_AWESOME_SOLID_GLASSES);
  if (id == wxART_GLOBE)  
      return wxString(SVG_AWESOME_SOLID_GLOBE);
  if (id == wxART_GOLF_BALL_TEE)  
      return wxString(SVG_AWESOME_SOLID_GOLF_BALL_TEE);
  if (id == wxART_GOPURAM)  
      return wxString(SVG_AWESOME_SOLID_GOPURAM);
  if (id == wxART_GRADUATION_CAP)  
      return wxString(SVG_AWESOME_SOLID_GRADUATION_CAP);
  if (id == wxART_GREATER_THAN_EQUAL)  
      return wxString(SVG_AWESOME_SOLID_GREATER_THAN_EQUAL);
  if (id == wxART_GREATER_THAN)  
      return wxString(SVG_AWESOME_SOLID_GREATER_THAN);
  if (id == wxART_GRIP_LINES_VERTICAL)  
      return wxString(SVG_AWESOME_SOLID_GRIP_LINES_VERTICAL);
  if (id == wxART_GRIP_LINES)  
      return wxString(SVG_AWESOME_SOLID_GRIP_LINES);
  if (id == wxART_GRIP_VERTICAL)  
      return wxString(SVG_AWESOME_SOLID_GRIP_VERTICAL);
  if (id == wxART_GRIP)  
      return wxString(SVG_AWESOME_SOLID_GRIP);
  if (id == wxART_GROUP_ARROWS_ROTATE)  
      return wxString(SVG_AWESOME_SOLID_GROUP_ARROWS_ROTATE);
  if (id == wxART_GUARANI_SIGN)  
      return wxString(SVG_AWESOME_SOLID_GUARANI_SIGN);
  if (id == wxART_GUITAR)  
      return wxString(SVG_AWESOME_SOLID_GUITAR);
  if (id == wxART_GUN)  
      return wxString(SVG_AWESOME_SOLID_GUN);
  if (id == wxART_H)  
      return wxString(SVG_AWESOME_SOLID_H);
  if (id == wxART_HAMMER)  
      return wxString(SVG_AWESOME_SOLID_HAMMER);
  if (id == wxART_HAMSA)  
      return wxString(SVG_AWESOME_SOLID_HAMSA);
  if (id == wxART_HAND_BACK_FIST)  
      return wxString(SVG_AWESOME_SOLID_HAND_BACK_FIST);
  if (id == wxART_HAND_DOTS)  
      return wxString(SVG_AWESOME_SOLID_HAND_DOTS);
  if (id == wxART_HAND_FIST)  
      return wxString(SVG_AWESOME_SOLID_HAND_FIST);
  if (id == wxART_HAND_HOLDING_DOLLAR)  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_DOLLAR);
  if (id == wxART_HAND_HOLDING_DROPLET)  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_DROPLET);
  if (id == wxART_HAND_HOLDING_HAND)  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_HAND);
  if (id == wxART_HAND_HOLDING_HEART)  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_HEART);
  if (id == wxART_HAND_HOLDING_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING_MEDICAL);
  if (id == wxART_HAND_HOLDING)  
      return wxString(SVG_AWESOME_SOLID_HAND_HOLDING);
  if (id == wxART_HAND_LIZARD)  
      return wxString(SVG_AWESOME_SOLID_HAND_LIZARD);
  if (id == wxART_HAND_MIDDLE_FINGER)  
      return wxString(SVG_AWESOME_SOLID_HAND_MIDDLE_FINGER);
  if (id == wxART_HAND_PEACE)  
      return wxString(SVG_AWESOME_SOLID_HAND_PEACE);
  if (id == wxART_HAND_POINT_DOWN)  
      return wxString(SVG_AWESOME_SOLID_HAND_POINT_DOWN);
  if (id == wxART_HAND_POINT_LEFT)  
      return wxString(SVG_AWESOME_SOLID_HAND_POINT_LEFT);
  if (id == wxART_HAND_POINT_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_HAND_POINT_RIGHT);
  if (id == wxART_HAND_POINT_UP)  
      return wxString(SVG_AWESOME_SOLID_HAND_POINT_UP);
  if (id == wxART_HAND_POINTER)  
      return wxString(SVG_AWESOME_SOLID_HAND_POINTER);
  if (id == wxART_HAND_SCISSORS)  
      return wxString(SVG_AWESOME_SOLID_HAND_SCISSORS);
  if (id == wxART_HAND_SPARKLES)  
      return wxString(SVG_AWESOME_SOLID_HAND_SPARKLES);
  if (id == wxART_HAND_SPOCK)  
      return wxString(SVG_AWESOME_SOLID_HAND_SPOCK);
  if (id == wxART_HAND)  
      return wxString(SVG_AWESOME_SOLID_HAND);
  if (id == wxART_HANDCUFFS)  
      return wxString(SVG_AWESOME_SOLID_HANDCUFFS);
  if (id == wxART_HANDS_ASL_INTERPRETING)  
      return wxString(SVG_AWESOME_SOLID_HANDS_ASL_INTERPRETING);
  if (id == wxART_HANDS_BOUND)  
      return wxString(SVG_AWESOME_SOLID_HANDS_BOUND);
  if (id == wxART_HANDS_BUBBLES)  
      return wxString(SVG_AWESOME_SOLID_HANDS_BUBBLES);
  if (id == wxART_HANDS_CLAPPING)  
      return wxString(SVG_AWESOME_SOLID_HANDS_CLAPPING);
  if (id == wxART_HANDS_HOLDING_CHILD)  
      return wxString(SVG_AWESOME_SOLID_HANDS_HOLDING_CHILD);
  if (id == wxART_HANDS_HOLDING_CIRCLE)  
      return wxString(SVG_AWESOME_SOLID_HANDS_HOLDING_CIRCLE);
  if (id == wxART_HANDS_HOLDING)  
      return wxString(SVG_AWESOME_SOLID_HANDS_HOLDING);
  if (id == wxART_HANDS_PRAYING)  
      return wxString(SVG_AWESOME_SOLID_HANDS_PRAYING);
  if (id == wxART_HANDS)  
      return wxString(SVG_AWESOME_SOLID_HANDS);
  if (id == wxART_HANDSHAKE_ANGLE)  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE_ANGLE);
  if (id == wxART_HANDSHAKE_SIMPLE_SLASH)  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE_SIMPLE_SLASH);
  if (id == wxART_HANDSHAKE_SIMPLE)  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE_SIMPLE);
  if (id == wxART_HANDSHAKE_SLASH)  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE_SLASH);
  if (id == wxART_HANDSHAKE)  
      return wxString(SVG_AWESOME_SOLID_HANDSHAKE);
  if (id == wxART_HANUKIAH)  
      return wxString(SVG_AWESOME_SOLID_HANUKIAH);
  if (id == wxART_HARD_DRIVE)  
      return wxString(SVG_AWESOME_SOLID_HARD_DRIVE);
  if (id == wxART_HASHTAG)  
      return wxString(SVG_AWESOME_SOLID_HASHTAG);
  if (id == wxART_HAT_COWBOY_SIDE)  
      return wxString(SVG_AWESOME_SOLID_HAT_COWBOY_SIDE);
  if (id == wxART_HAT_COWBOY)  
      return wxString(SVG_AWESOME_SOLID_HAT_COWBOY);
  if (id == wxART_HAT_WIZARD)  
      return wxString(SVG_AWESOME_SOLID_HAT_WIZARD);
  if (id == wxART_HEAD_SIDE_COUGH_SLASH)  
      return wxString(SVG_AWESOME_SOLID_HEAD_SIDE_COUGH_SLASH);
  if (id == wxART_HEAD_SIDE_COUGH)  
      return wxString(SVG_AWESOME_SOLID_HEAD_SIDE_COUGH);
  if (id == wxART_HEAD_SIDE_MASK)  
      return wxString(SVG_AWESOME_SOLID_HEAD_SIDE_MASK);
  if (id == wxART_HEAD_SIDE_VIRUS)  
      return wxString(SVG_AWESOME_SOLID_HEAD_SIDE_VIRUS);
  if (id == wxART_HEADING)  
      return wxString(SVG_AWESOME_SOLID_HEADING);
  if (id == wxART_HEADPHONES_SIMPLE)  
      return wxString(SVG_AWESOME_SOLID_HEADPHONES_SIMPLE);
  if (id == wxART_HEADPHONES)  
      return wxString(SVG_AWESOME_SOLID_HEADPHONES);
  if (id == wxART_HEADSET)  
      return wxString(SVG_AWESOME_SOLID_HEADSET);
  if (id == wxART_HEART_CIRCLE_BOLT)  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_BOLT);
  if (id == wxART_HEART_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_CHECK);
  if (id == wxART_HEART_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_EXCLAMATION);
  if (id == wxART_HEART_CIRCLE_MINUS)  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_MINUS);
  if (id == wxART_HEART_CIRCLE_PLUS)  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_PLUS);
  if (id == wxART_HEART_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_HEART_CIRCLE_XMARK);
  if (id == wxART_HEART_CRACK)  
      return wxString(SVG_AWESOME_SOLID_HEART_CRACK);
  if (id == wxART_HEART_PULSE)  
      return wxString(SVG_AWESOME_SOLID_HEART_PULSE);
  if (id == wxART_HEART)  
      return wxString(SVG_AWESOME_SOLID_HEART);
  if (id == wxART_HELICOPTER_SYMBOL)  
      return wxString(SVG_AWESOME_SOLID_HELICOPTER_SYMBOL);
  if (id == wxART_HELICOPTER)  
      return wxString(SVG_AWESOME_SOLID_HELICOPTER);
  if (id == wxART_HELMET_SAFETY)  
      return wxString(SVG_AWESOME_SOLID_HELMET_SAFETY);
  if (id == wxART_HELMET_UN)  
      return wxString(SVG_AWESOME_SOLID_HELMET_UN);
  if (id == wxART_HIGHLIGHTER)  
      return wxString(SVG_AWESOME_SOLID_HIGHLIGHTER);
  if (id == wxART_HILL_AVALANCHE)  
      return wxString(SVG_AWESOME_SOLID_HILL_AVALANCHE);
  if (id == wxART_HILL_ROCKSLIDE)  
      return wxString(SVG_AWESOME_SOLID_HILL_ROCKSLIDE);
  if (id == wxART_HIPPO)  
      return wxString(SVG_AWESOME_SOLID_HIPPO);
  if (id == wxART_HOCKEY_PUCK)  
      return wxString(SVG_AWESOME_SOLID_HOCKEY_PUCK);
  if (id == wxART_HOLLY_BERRY)  
      return wxString(SVG_AWESOME_SOLID_HOLLY_BERRY);
  if (id == wxART_HORSE_HEAD)  
      return wxString(SVG_AWESOME_SOLID_HORSE_HEAD);
  if (id == wxART_HORSE)  
      return wxString(SVG_AWESOME_SOLID_HORSE);
  if (id == wxART_HOSPITAL_USER)  
      return wxString(SVG_AWESOME_SOLID_HOSPITAL_USER);
  if (id == wxART_HOSPITAL)  
      return wxString(SVG_AWESOME_SOLID_HOSPITAL);
  if (id == wxART_HOT_TUB_PERSON)  
      return wxString(SVG_AWESOME_SOLID_HOT_TUB_PERSON);
  if (id == wxART_HOTDOG)  
      return wxString(SVG_AWESOME_SOLID_HOTDOG);
  if (id == wxART_HOTEL)  
      return wxString(SVG_AWESOME_SOLID_HOTEL);
  if (id == wxART_HOURGLASS_END)  
      return wxString(SVG_AWESOME_SOLID_HOURGLASS_END);
  if (id == wxART_HOURGLASS_HALF)  
      return wxString(SVG_AWESOME_SOLID_HOURGLASS_HALF);
  if (id == wxART_HOURGLASS_START)  
      return wxString(SVG_AWESOME_SOLID_HOURGLASS_START);
  if (id == wxART_HOURGLASS)  
      return wxString(SVG_AWESOME_SOLID_HOURGLASS);
  if (id == wxART_HOUSE_CHIMNEY_CRACK)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY_CRACK);
  if (id == wxART_HOUSE_CHIMNEY_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY_MEDICAL);
  if (id == wxART_HOUSE_CHIMNEY_USER)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY_USER);
  if (id == wxART_HOUSE_CHIMNEY_WINDOW)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY_WINDOW);
  if (id == wxART_HOUSE_CHIMNEY)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CHIMNEY);
  if (id == wxART_HOUSE_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CIRCLE_CHECK);
  if (id == wxART_HOUSE_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CIRCLE_EXCLAMATION);
  if (id == wxART_HOUSE_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CIRCLE_XMARK);
  if (id == wxART_HOUSE_CRACK)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_CRACK);
  if (id == wxART_HOUSE_FIRE)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_FIRE);
  if (id == wxART_HOUSE_FLAG)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_FLAG);
  if (id == wxART_HOUSE_FLOOD_WATER_CIRCLE_ARROW_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_FLOOD_WATER_CIRCLE_ARROW_RIGHT);
  if (id == wxART_HOUSE_FLOOD_WATER)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_FLOOD_WATER);
  if (id == wxART_HOUSE_LAPTOP)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_LAPTOP);
  if (id == wxART_HOUSE_LOCK)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_LOCK);
  if (id == wxART_HOUSE_MEDICAL_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL_CIRCLE_CHECK);
  if (id == wxART_HOUSE_MEDICAL_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL_CIRCLE_EXCLAMATION);
  if (id == wxART_HOUSE_MEDICAL_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL_CIRCLE_XMARK);
  if (id == wxART_HOUSE_MEDICAL_FLAG)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL_FLAG);
  if (id == wxART_HOUSE_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_MEDICAL);
  if (id == wxART_HOUSE_SIGNAL)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_SIGNAL);
  if (id == wxART_HOUSE_TSUNAMI)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_TSUNAMI);
  if (id == wxART_HOUSE_USER)  
      return wxString(SVG_AWESOME_SOLID_HOUSE_USER);
  if (id == wxART_HOUSE)  
      return wxString(SVG_AWESOME_SOLID_HOUSE);
  if (id == wxART_HRYVNIA_SIGN)  
      return wxString(SVG_AWESOME_SOLID_HRYVNIA_SIGN);
  if (id == wxART_HURRICANE)  
      return wxString(SVG_AWESOME_SOLID_HURRICANE);
  if (id == wxART_I_CURSOR)  
      return wxString(SVG_AWESOME_SOLID_I_CURSOR);
  if (id == wxART_I)  
      return wxString(SVG_AWESOME_SOLID_I);
  if (id == wxART_ICE_CREAM)  
      return wxString(SVG_AWESOME_SOLID_ICE_CREAM);
  if (id == wxART_ICICLES)  
      return wxString(SVG_AWESOME_SOLID_ICICLES);
  if (id == wxART_ICONS)  
      return wxString(SVG_AWESOME_SOLID_ICONS);
  if (id == wxART_ID_BADGE)  
      return wxString(SVG_AWESOME_SOLID_ID_BADGE);
  if (id == wxART_ID_CARD_CLIP)  
      return wxString(SVG_AWESOME_SOLID_ID_CARD_CLIP);
  if (id == wxART_ID_CARD)  
      return wxString(SVG_AWESOME_SOLID_ID_CARD);
  if (id == wxART_IGLOO)  
      return wxString(SVG_AWESOME_SOLID_IGLOO);
  if (id == wxART_IMAGE_PORTRAIT)  
      return wxString(SVG_AWESOME_SOLID_IMAGE_PORTRAIT);
  if (id == wxART_IMAGE)  
      return wxString(SVG_AWESOME_SOLID_IMAGE);
  if (id == wxART_IMAGES)  
      return wxString(SVG_AWESOME_SOLID_IMAGES);
  if (id == wxART_INBOX)  
      return wxString(SVG_AWESOME_SOLID_INBOX);
  if (id == wxART_INDENT)  
      return wxString(SVG_AWESOME_SOLID_INDENT);
  if (id == wxART_INDIAN_RUPEE_SIGN)  
      return wxString(SVG_AWESOME_SOLID_INDIAN_RUPEE_SIGN);
  if (id == wxART_INDUSTRY)  
      return wxString(SVG_AWESOME_SOLID_INDUSTRY);
  if (id == wxART_INFINITY)  
      return wxString(SVG_AWESOME_SOLID_INFINITY);
  if (id == wxART_INFO)  
      return wxString(SVG_AWESOME_SOLID_INFO);
  if (id == wxART_ITALIC)  
      return wxString(SVG_AWESOME_SOLID_ITALIC);
  if (id == wxART_J)  
      return wxString(SVG_AWESOME_SOLID_J);
  if (id == wxART_JAR_WHEAT)  
      return wxString(SVG_AWESOME_SOLID_JAR_WHEAT);
  if (id == wxART_JAR)  
      return wxString(SVG_AWESOME_SOLID_JAR);
  if (id == wxART_JEDI)  
      return wxString(SVG_AWESOME_SOLID_JEDI);
  if (id == wxART_JET_FIGHTER_UP)  
      return wxString(SVG_AWESOME_SOLID_JET_FIGHTER_UP);
  if (id == wxART_JET_FIGHTER)  
      return wxString(SVG_AWESOME_SOLID_JET_FIGHTER);
  if (id == wxART_JOINT)  
      return wxString(SVG_AWESOME_SOLID_JOINT);
  if (id == wxART_JUG_DETERGENT)  
      return wxString(SVG_AWESOME_SOLID_JUG_DETERGENT);
  if (id == wxART_K)  
      return wxString(SVG_AWESOME_SOLID_K);
  if (id == wxART_KAABA)  
      return wxString(SVG_AWESOME_SOLID_KAABA);
  if (id == wxART_KEY)  
      return wxString(SVG_AWESOME_SOLID_KEY);
  if (id == wxART_KEYBOARD)  
      return wxString(SVG_AWESOME_SOLID_KEYBOARD);
  if (id == wxART_KHANDA)  
      return wxString(SVG_AWESOME_SOLID_KHANDA);
  if (id == wxART_KIP_SIGN)  
      return wxString(SVG_AWESOME_SOLID_KIP_SIGN);
  if (id == wxART_KIT_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_KIT_MEDICAL);
  if (id == wxART_KITCHEN_SET)  
      return wxString(SVG_AWESOME_SOLID_KITCHEN_SET);
  if (id == wxART_KIWI_BIRD)  
      return wxString(SVG_AWESOME_SOLID_KIWI_BIRD);
  if (id == wxART_L)  
      return wxString(SVG_AWESOME_SOLID_L);
  if (id == wxART_LAND_MINE_ON)  
      return wxString(SVG_AWESOME_SOLID_LAND_MINE_ON);
  if (id == wxART_LANDMARK_DOME)  
      return wxString(SVG_AWESOME_SOLID_LANDMARK_DOME);
  if (id == wxART_LANDMARK_FLAG)  
      return wxString(SVG_AWESOME_SOLID_LANDMARK_FLAG);
  if (id == wxART_LANDMARK)  
      return wxString(SVG_AWESOME_SOLID_LANDMARK);
  if (id == wxART_LANGUAGE)  
      return wxString(SVG_AWESOME_SOLID_LANGUAGE);
  if (id == wxART_LAPTOP_CODE)  
      return wxString(SVG_AWESOME_SOLID_LAPTOP_CODE);
  if (id == wxART_LAPTOP_FILE)  
      return wxString(SVG_AWESOME_SOLID_LAPTOP_FILE);
  if (id == wxART_LAPTOP_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_LAPTOP_MEDICAL);
  if (id == wxART_LAPTOP)  
      return wxString(SVG_AWESOME_SOLID_LAPTOP);
  if (id == wxART_LARI_SIGN)  
      return wxString(SVG_AWESOME_SOLID_LARI_SIGN);
  if (id == wxART_LAYER_GROUP)  
      return wxString(SVG_AWESOME_SOLID_LAYER_GROUP);
  if (id == wxART_LEAF)  
      return wxString(SVG_AWESOME_SOLID_LEAF);
  if (id == wxART_LEFT_LONG)  
      return wxString(SVG_AWESOME_SOLID_LEFT_LONG);
  if (id == wxART_LEFT_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_LEFT_RIGHT);
  if (id == wxART_LEMON)  
      return wxString(SVG_AWESOME_SOLID_LEMON);
  if (id == wxART_LESS_THAN_EQUAL)  
      return wxString(SVG_AWESOME_SOLID_LESS_THAN_EQUAL);
  if (id == wxART_LESS_THAN)  
      return wxString(SVG_AWESOME_SOLID_LESS_THAN);
  if (id == wxART_LIFE_RING)  
      return wxString(SVG_AWESOME_SOLID_LIFE_RING);
  if (id == wxART_LIGHTBULB)  
      return wxString(SVG_AWESOME_SOLID_LIGHTBULB);
  if (id == wxART_LINES_LEANING)  
      return wxString(SVG_AWESOME_SOLID_LINES_LEANING);
  if (id == wxART_LINK_SLASH)  
      return wxString(SVG_AWESOME_SOLID_LINK_SLASH);
  if (id == wxART_LINK)  
      return wxString(SVG_AWESOME_SOLID_LINK);
  if (id == wxART_LIRA_SIGN)  
      return wxString(SVG_AWESOME_SOLID_LIRA_SIGN);
  if (id == wxART_LIST_CHECK)  
      return wxString(SVG_AWESOME_SOLID_LIST_CHECK);
  if (id == wxART_LIST_OL)  
      return wxString(SVG_AWESOME_SOLID_LIST_OL);
  if (id == wxART_LIST_UL)  
      return wxString(SVG_AWESOME_SOLID_LIST_UL);
  if (id == wxART_LIST)  
      return wxString(SVG_AWESOME_SOLID_LIST);
  if (id == wxART_LITECOIN_SIGN)  
      return wxString(SVG_AWESOME_SOLID_LITECOIN_SIGN);
  if (id == wxART_LOCATION_ARROW)  
      return wxString(SVG_AWESOME_SOLID_LOCATION_ARROW);
  if (id == wxART_LOCATION_CROSSHAIRS)  
      return wxString(SVG_AWESOME_SOLID_LOCATION_CROSSHAIRS);
  if (id == wxART_LOCATION_DOT)  
      return wxString(SVG_AWESOME_SOLID_LOCATION_DOT);
  if (id == wxART_LOCATION_PIN_LOCK)  
      return wxString(SVG_AWESOME_SOLID_LOCATION_PIN_LOCK);
  if (id == wxART_LOCATION_PIN)  
      return wxString(SVG_AWESOME_SOLID_LOCATION_PIN);
  if (id == wxART_LOCK_OPEN)  
      return wxString(SVG_AWESOME_SOLID_LOCK_OPEN);
  if (id == wxART_LOCK)  
      return wxString(SVG_AWESOME_SOLID_LOCK);
  if (id == wxART_LOCUST)  
      return wxString(SVG_AWESOME_SOLID_LOCUST);
  if (id == wxART_LUNGS_VIRUS)  
      return wxString(SVG_AWESOME_SOLID_LUNGS_VIRUS);
  if (id == wxART_LUNGS)  
      return wxString(SVG_AWESOME_SOLID_LUNGS);
  if (id == wxART_M)  
      return wxString(SVG_AWESOME_SOLID_M);
  if (id == wxART_MAGNET)  
      return wxString(SVG_AWESOME_SOLID_MAGNET);
  if (id == wxART_MAGNIFYING_GLASS_ARROW_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_ARROW_RIGHT);
  if (id == wxART_MAGNIFYING_GLASS_CHART)  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_CHART);
  if (id == wxART_MAGNIFYING_GLASS_DOLLAR)  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_DOLLAR);
  if (id == wxART_MAGNIFYING_GLASS_LOCATION)  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_LOCATION);
  if (id == wxART_MAGNIFYING_GLASS_MINUS)  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_MINUS);
  if (id == wxART_MAGNIFYING_GLASS_PLUS)  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS_PLUS);
  if (id == wxART_MAGNIFYING_GLASS)  
      return wxString(SVG_AWESOME_SOLID_MAGNIFYING_GLASS);
  if (id == wxART_MANAT_SIGN)  
      return wxString(SVG_AWESOME_SOLID_MANAT_SIGN);
  if (id == wxART_MAP_LOCATION_DOT)  
      return wxString(SVG_AWESOME_SOLID_MAP_LOCATION_DOT);
  if (id == wxART_MAP_LOCATION)  
      return wxString(SVG_AWESOME_SOLID_MAP_LOCATION);
  if (id == wxART_MAP_PIN)  
      return wxString(SVG_AWESOME_SOLID_MAP_PIN);
  if (id == wxART_MAP)  
      return wxString(SVG_AWESOME_SOLID_MAP);
  if (id == wxART_MARKER)  
      return wxString(SVG_AWESOME_SOLID_MARKER);
  if (id == wxART_MARS_AND_VENUS_BURST)  
      return wxString(SVG_AWESOME_SOLID_MARS_AND_VENUS_BURST);
  if (id == wxART_MARS_AND_VENUS)  
      return wxString(SVG_AWESOME_SOLID_MARS_AND_VENUS);
  if (id == wxART_MARS_DOUBLE)  
      return wxString(SVG_AWESOME_SOLID_MARS_DOUBLE);
  if (id == wxART_MARS_STROKE_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_MARS_STROKE_RIGHT);
  if (id == wxART_MARS_STROKE_UP)  
      return wxString(SVG_AWESOME_SOLID_MARS_STROKE_UP);
  if (id == wxART_MARS_STROKE)  
      return wxString(SVG_AWESOME_SOLID_MARS_STROKE);
  if (id == wxART_MARS)  
      return wxString(SVG_AWESOME_SOLID_MARS);
  if (id == wxART_MARTINI_GLASS_CITRUS)  
      return wxString(SVG_AWESOME_SOLID_MARTINI_GLASS_CITRUS);
  if (id == wxART_MARTINI_GLASS_EMPTY)  
      return wxString(SVG_AWESOME_SOLID_MARTINI_GLASS_EMPTY);
  if (id == wxART_MARTINI_GLASS)  
      return wxString(SVG_AWESOME_SOLID_MARTINI_GLASS);
  if (id == wxART_MASK_FACE)  
      return wxString(SVG_AWESOME_SOLID_MASK_FACE);
  if (id == wxART_MASK_VENTILATOR)  
      return wxString(SVG_AWESOME_SOLID_MASK_VENTILATOR);
  if (id == wxART_MASK)  
      return wxString(SVG_AWESOME_SOLID_MASK);
  if (id == wxART_MASKS_THEATER)  
      return wxString(SVG_AWESOME_SOLID_MASKS_THEATER);
  if (id == wxART_MATTRESS_PILLOW)  
      return wxString(SVG_AWESOME_SOLID_MATTRESS_PILLOW);
  if (id == wxART_MAXIMIZE)  
      return wxString(SVG_AWESOME_SOLID_MAXIMIZE);
  if (id == wxART_MEDAL)  
      return wxString(SVG_AWESOME_SOLID_MEDAL);
  if (id == wxART_MEMORY)  
      return wxString(SVG_AWESOME_SOLID_MEMORY);
  if (id == wxART_MENORAH)  
      return wxString(SVG_AWESOME_SOLID_MENORAH);
  if (id == wxART_MERCURY)  
      return wxString(SVG_AWESOME_SOLID_MERCURY);
  if (id == wxART_MESSAGE)  
      return wxString(SVG_AWESOME_SOLID_MESSAGE);
  if (id == wxART_METEOR)  
      return wxString(SVG_AWESOME_SOLID_METEOR);
  if (id == wxART_MICROCHIP)  
      return wxString(SVG_AWESOME_SOLID_MICROCHIP);
  if (id == wxART_MICROPHONE_LINES_SLASH)  
      return wxString(SVG_AWESOME_SOLID_MICROPHONE_LINES_SLASH);
  if (id == wxART_MICROPHONE_LINES)  
      return wxString(SVG_AWESOME_SOLID_MICROPHONE_LINES);
  if (id == wxART_MICROPHONE_SLASH)  
      return wxString(SVG_AWESOME_SOLID_MICROPHONE_SLASH);
  if (id == wxART_MICROPHONE)  
      return wxString(SVG_AWESOME_SOLID_MICROPHONE);
  if (id == wxART_MICROSCOPE)  
      return wxString(SVG_AWESOME_SOLID_MICROSCOPE);
  if (id == wxART_MILL_SIGN)  
      return wxString(SVG_AWESOME_SOLID_MILL_SIGN);
  if (id == wxART_MINIMIZE)  
      return wxString(SVG_AWESOME_SOLID_MINIMIZE);
  if (id == wxART_MINUS)  
      return wxString(SVG_AWESOME_SOLID_MINUS);
  if (id == wxART_MITTEN)  
      return wxString(SVG_AWESOME_SOLID_MITTEN);
  if (id == wxART_MOBILE_BUTTON)  
      return wxString(SVG_AWESOME_SOLID_MOBILE_BUTTON);
  if (id == wxART_MOBILE_RETRO)  
      return wxString(SVG_AWESOME_SOLID_MOBILE_RETRO);
  if (id == wxART_MOBILE_SCREEN_BUTTON)  
      return wxString(SVG_AWESOME_SOLID_MOBILE_SCREEN_BUTTON);
  if (id == wxART_MOBILE_SCREEN)  
      return wxString(SVG_AWESOME_SOLID_MOBILE_SCREEN);
  if (id == wxART_MOBILE)  
      return wxString(SVG_AWESOME_SOLID_MOBILE);
  if (id == wxART_MONEY_BILL_1_WAVE)  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_1_WAVE);
  if (id == wxART_MONEY_BILL_1)  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_1);
  if (id == wxART_MONEY_BILL_TRANSFER)  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_TRANSFER);
  if (id == wxART_MONEY_BILL_TREND_UP)  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_TREND_UP);
  if (id == wxART_MONEY_BILL_WAVE)  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_WAVE);
  if (id == wxART_MONEY_BILL_WHEAT)  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL_WHEAT);
  if (id == wxART_MONEY_BILL)  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILL);
  if (id == wxART_MONEY_BILLS)  
      return wxString(SVG_AWESOME_SOLID_MONEY_BILLS);
  if (id == wxART_MONEY_CHECK_DOLLAR)  
      return wxString(SVG_AWESOME_SOLID_MONEY_CHECK_DOLLAR);
  if (id == wxART_MONEY_CHECK)  
      return wxString(SVG_AWESOME_SOLID_MONEY_CHECK);
  if (id == wxART_MONUMENT)  
      return wxString(SVG_AWESOME_SOLID_MONUMENT);
  if (id == wxART_MOON)  
      return wxString(SVG_AWESOME_SOLID_MOON);
  if (id == wxART_MORTAR_PESTLE)  
      return wxString(SVG_AWESOME_SOLID_MORTAR_PESTLE);
  if (id == wxART_MOSQUE)  
      return wxString(SVG_AWESOME_SOLID_MOSQUE);
  if (id == wxART_MOSQUITO_NET)  
      return wxString(SVG_AWESOME_SOLID_MOSQUITO_NET);
  if (id == wxART_MOSQUITO)  
      return wxString(SVG_AWESOME_SOLID_MOSQUITO);
  if (id == wxART_MOTORCYCLE)  
      return wxString(SVG_AWESOME_SOLID_MOTORCYCLE);
  if (id == wxART_MOUND)  
      return wxString(SVG_AWESOME_SOLID_MOUND);
  if (id == wxART_MOUNTAIN_CITY)  
      return wxString(SVG_AWESOME_SOLID_MOUNTAIN_CITY);
  if (id == wxART_MOUNTAIN_SUN)  
      return wxString(SVG_AWESOME_SOLID_MOUNTAIN_SUN);
  if (id == wxART_MOUNTAIN)  
      return wxString(SVG_AWESOME_SOLID_MOUNTAIN);
  if (id == wxART_MUG_HOT)  
      return wxString(SVG_AWESOME_SOLID_MUG_HOT);
  if (id == wxART_MUG_SAUCER)  
      return wxString(SVG_AWESOME_SOLID_MUG_SAUCER);
  if (id == wxART_MUSIC)  
      return wxString(SVG_AWESOME_SOLID_MUSIC);
  if (id == wxART_N)  
      return wxString(SVG_AWESOME_SOLID_N);
  if (id == wxART_NAIRA_SIGN)  
      return wxString(SVG_AWESOME_SOLID_NAIRA_SIGN);
  if (id == wxART_NETWORK_WIRED)  
      return wxString(SVG_AWESOME_SOLID_NETWORK_WIRED);
  if (id == wxART_NEUTER)  
      return wxString(SVG_AWESOME_SOLID_NEUTER);
  if (id == wxART_NEWSPAPER)  
      return wxString(SVG_AWESOME_SOLID_NEWSPAPER);
  if (id == wxART_NOT_EQUAL)  
      return wxString(SVG_AWESOME_SOLID_NOT_EQUAL);
  if (id == wxART_NOTDEF)  
      return wxString(SVG_AWESOME_SOLID_NOTDEF);
  if (id == wxART_NOTE_STICKY)  
      return wxString(SVG_AWESOME_SOLID_NOTE_STICKY);
  if (id == wxART_NOTES_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_NOTES_MEDICAL);
  if (id == wxART_O)  
      return wxString(SVG_AWESOME_SOLID_O);
  if (id == wxART_OBJECT_GROUP)  
      return wxString(SVG_AWESOME_SOLID_OBJECT_GROUP);
  if (id == wxART_OBJECT_UNGROUP)  
      return wxString(SVG_AWESOME_SOLID_OBJECT_UNGROUP);
  if (id == wxART_OIL_CAN)  
      return wxString(SVG_AWESOME_SOLID_OIL_CAN);
  if (id == wxART_OIL_WELL)  
      return wxString(SVG_AWESOME_SOLID_OIL_WELL);
  if (id == wxART_OM)  
      return wxString(SVG_AWESOME_SOLID_OM);
  if (id == wxART_OTTER)  
      return wxString(SVG_AWESOME_SOLID_OTTER);
  if (id == wxART_OUTDENT)  
      return wxString(SVG_AWESOME_SOLID_OUTDENT);
  if (id == wxART_P)  
      return wxString(SVG_AWESOME_SOLID_P);
  if (id == wxART_PAGER)  
      return wxString(SVG_AWESOME_SOLID_PAGER);
  if (id == wxART_PAINT_ROLLER)  
      return wxString(SVG_AWESOME_SOLID_PAINT_ROLLER);
  if (id == wxART_PAINTBRUSH)  
      return wxString(SVG_AWESOME_SOLID_PAINTBRUSH);
  if (id == wxART_PALETTE)  
      return wxString(SVG_AWESOME_SOLID_PALETTE);
  if (id == wxART_PALLET)  
      return wxString(SVG_AWESOME_SOLID_PALLET);
  if (id == wxART_PANORAMA)  
      return wxString(SVG_AWESOME_SOLID_PANORAMA);
  if (id == wxART_PAPER_PLANE)  
      return wxString(SVG_AWESOME_SOLID_PAPER_PLANE);
  if (id == wxART_PAPERCLIP)  
      return wxString(SVG_AWESOME_SOLID_PAPERCLIP);
  if (id == wxART_PARACHUTE_BOX)  
      return wxString(SVG_AWESOME_SOLID_PARACHUTE_BOX);
  if (id == wxART_PARAGRAPH)  
      return wxString(SVG_AWESOME_SOLID_PARAGRAPH);
  if (id == wxART_PASSPORT)  
      return wxString(SVG_AWESOME_SOLID_PASSPORT);
  if (id == wxART_PASTE)  
      return wxString(SVG_AWESOME_SOLID_PASTE);
  if (id == wxART_PAUSE)  
      return wxString(SVG_AWESOME_SOLID_PAUSE);
  if (id == wxART_PAW)  
      return wxString(SVG_AWESOME_SOLID_PAW);
  if (id == wxART_PEACE)  
      return wxString(SVG_AWESOME_SOLID_PEACE);
  if (id == wxART_PEN_CLIP)  
      return wxString(SVG_AWESOME_SOLID_PEN_CLIP);
  if (id == wxART_PEN_FANCY)  
      return wxString(SVG_AWESOME_SOLID_PEN_FANCY);
  if (id == wxART_PEN_NIB)  
      return wxString(SVG_AWESOME_SOLID_PEN_NIB);
  if (id == wxART_PEN_RULER)  
      return wxString(SVG_AWESOME_SOLID_PEN_RULER);
  if (id == wxART_PEN_TO_SQUARE)  
      return wxString(SVG_AWESOME_SOLID_PEN_TO_SQUARE);
  if (id == wxART_PEN)  
      return wxString(SVG_AWESOME_SOLID_PEN);
  if (id == wxART_PENCIL)  
      return wxString(SVG_AWESOME_SOLID_PENCIL);
  if (id == wxART_PEOPLE_ARROWS)  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_ARROWS);
  if (id == wxART_PEOPLE_CARRY_BOX)  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_CARRY_BOX);
  if (id == wxART_PEOPLE_GROUP)  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_GROUP);
  if (id == wxART_PEOPLE_LINE)  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_LINE);
  if (id == wxART_PEOPLE_PULLING)  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_PULLING);
  if (id == wxART_PEOPLE_ROBBERY)  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_ROBBERY);
  if (id == wxART_PEOPLE_ROOF)  
      return wxString(SVG_AWESOME_SOLID_PEOPLE_ROOF);
  if (id == wxART_PEPPER_HOT)  
      return wxString(SVG_AWESOME_SOLID_PEPPER_HOT);
  if (id == wxART_PERCENT)  
      return wxString(SVG_AWESOME_SOLID_PERCENT);
  if (id == wxART_PERSON_ARROW_DOWN_TO_LINE)  
      return wxString(SVG_AWESOME_SOLID_PERSON_ARROW_DOWN_TO_LINE);
  if (id == wxART_PERSON_ARROW_UP_FROM_LINE)  
      return wxString(SVG_AWESOME_SOLID_PERSON_ARROW_UP_FROM_LINE);
  if (id == wxART_PERSON_BIKING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_BIKING);
  if (id == wxART_PERSON_BOOTH)  
      return wxString(SVG_AWESOME_SOLID_PERSON_BOOTH);
  if (id == wxART_PERSON_BREASTFEEDING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_BREASTFEEDING);
  if (id == wxART_PERSON_BURST)  
      return wxString(SVG_AWESOME_SOLID_PERSON_BURST);
  if (id == wxART_PERSON_CANE)  
      return wxString(SVG_AWESOME_SOLID_PERSON_CANE);
  if (id == wxART_PERSON_CHALKBOARD)  
      return wxString(SVG_AWESOME_SOLID_PERSON_CHALKBOARD);
  if (id == wxART_PERSON_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_CHECK);
  if (id == wxART_PERSON_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_EXCLAMATION);
  if (id == wxART_PERSON_CIRCLE_MINUS)  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_MINUS);
  if (id == wxART_PERSON_CIRCLE_PLUS)  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_PLUS);
  if (id == wxART_PERSON_CIRCLE_QUESTION)  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_QUESTION);
  if (id == wxART_PERSON_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_PERSON_CIRCLE_XMARK);
  if (id == wxART_PERSON_DIGGING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_DIGGING);
  if (id == wxART_PERSON_DOTS_FROM_LINE)  
      return wxString(SVG_AWESOME_SOLID_PERSON_DOTS_FROM_LINE);
  if (id == wxART_PERSON_DRESS_BURST)  
      return wxString(SVG_AWESOME_SOLID_PERSON_DRESS_BURST);
  if (id == wxART_PERSON_DRESS)  
      return wxString(SVG_AWESOME_SOLID_PERSON_DRESS);
  if (id == wxART_PERSON_DROWNING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_DROWNING);
  if (id == wxART_PERSON_FALLING_BURST)  
      return wxString(SVG_AWESOME_SOLID_PERSON_FALLING_BURST);
  if (id == wxART_PERSON_FALLING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_FALLING);
  if (id == wxART_PERSON_HALF_DRESS)  
      return wxString(SVG_AWESOME_SOLID_PERSON_HALF_DRESS);
  if (id == wxART_PERSON_HARASSING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_HARASSING);
  if (id == wxART_PERSON_HIKING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_HIKING);
  if (id == wxART_PERSON_MILITARY_POINTING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_MILITARY_POINTING);
  if (id == wxART_PERSON_MILITARY_RIFLE)  
      return wxString(SVG_AWESOME_SOLID_PERSON_MILITARY_RIFLE);
  if (id == wxART_PERSON_MILITARY_TO_PERSON)  
      return wxString(SVG_AWESOME_SOLID_PERSON_MILITARY_TO_PERSON);
  if (id == wxART_PERSON_PRAYING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_PRAYING);
  if (id == wxART_PERSON_PREGNANT)  
      return wxString(SVG_AWESOME_SOLID_PERSON_PREGNANT);
  if (id == wxART_PERSON_RAYS)  
      return wxString(SVG_AWESOME_SOLID_PERSON_RAYS);
  if (id == wxART_PERSON_RIFLE)  
      return wxString(SVG_AWESOME_SOLID_PERSON_RIFLE);
  if (id == wxART_PERSON_RUNNING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_RUNNING);
  if (id == wxART_PERSON_SHELTER)  
      return wxString(SVG_AWESOME_SOLID_PERSON_SHELTER);
  if (id == wxART_PERSON_SKATING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_SKATING);
  if (id == wxART_PERSON_SKIING_NORDIC)  
      return wxString(SVG_AWESOME_SOLID_PERSON_SKIING_NORDIC);
  if (id == wxART_PERSON_SKIING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_SKIING);
  if (id == wxART_PERSON_SNOWBOARDING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_SNOWBOARDING);
  if (id == wxART_PERSON_SWIMMING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_SWIMMING);
  if (id == wxART_PERSON_THROUGH_WINDOW)  
      return wxString(SVG_AWESOME_SOLID_PERSON_THROUGH_WINDOW);
  if (id == wxART_PERSON_WALKING_ARROW_LOOP_LEFT)  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_ARROW_LOOP_LEFT);
  if (id == wxART_PERSON_WALKING_ARROW_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_ARROW_RIGHT);
  if (id == wxART_PERSON_WALKING_DASHED_LINE_ARROW_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_DASHED_LINE_ARROW_RIGHT);
  if (id == wxART_PERSON_WALKING_LUGGAGE)  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_LUGGAGE);
  if (id == wxART_PERSON_WALKING_WITH_CANE)  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING_WITH_CANE);
  if (id == wxART_PERSON_WALKING)  
      return wxString(SVG_AWESOME_SOLID_PERSON_WALKING);
  if (id == wxART_PERSON)  
      return wxString(SVG_AWESOME_SOLID_PERSON);
  if (id == wxART_PESETA_SIGN)  
      return wxString(SVG_AWESOME_SOLID_PESETA_SIGN);
  if (id == wxART_PESO_SIGN)  
      return wxString(SVG_AWESOME_SOLID_PESO_SIGN);
  if (id == wxART_PHONE_FLIP)  
      return wxString(SVG_AWESOME_SOLID_PHONE_FLIP);
  if (id == wxART_PHONE_SLASH)  
      return wxString(SVG_AWESOME_SOLID_PHONE_SLASH);
  if (id == wxART_PHONE_VOLUME)  
      return wxString(SVG_AWESOME_SOLID_PHONE_VOLUME);
  if (id == wxART_PHONE)  
      return wxString(SVG_AWESOME_SOLID_PHONE);
  if (id == wxART_PHOTO_FILM)  
      return wxString(SVG_AWESOME_SOLID_PHOTO_FILM);
  if (id == wxART_PIGGY_BANK)  
      return wxString(SVG_AWESOME_SOLID_PIGGY_BANK);
  if (id == wxART_PILLS)  
      return wxString(SVG_AWESOME_SOLID_PILLS);
  if (id == wxART_PIZZA_SLICE)  
      return wxString(SVG_AWESOME_SOLID_PIZZA_SLICE);
  if (id == wxART_PLACE_OF_WORSHIP)  
      return wxString(SVG_AWESOME_SOLID_PLACE_OF_WORSHIP);
  if (id == wxART_PLANE_ARRIVAL)  
      return wxString(SVG_AWESOME_SOLID_PLANE_ARRIVAL);
  if (id == wxART_PLANE_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_PLANE_CIRCLE_CHECK);
  if (id == wxART_PLANE_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_PLANE_CIRCLE_EXCLAMATION);
  if (id == wxART_PLANE_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_PLANE_CIRCLE_XMARK);
  if (id == wxART_PLANE_DEPARTURE)  
      return wxString(SVG_AWESOME_SOLID_PLANE_DEPARTURE);
  if (id == wxART_PLANE_LOCK)  
      return wxString(SVG_AWESOME_SOLID_PLANE_LOCK);
  if (id == wxART_PLANE_SLASH)  
      return wxString(SVG_AWESOME_SOLID_PLANE_SLASH);
  if (id == wxART_PLANE_UP)  
      return wxString(SVG_AWESOME_SOLID_PLANE_UP);
  if (id == wxART_PLANE)  
      return wxString(SVG_AWESOME_SOLID_PLANE);
  if (id == wxART_PLANT_WILT)  
      return wxString(SVG_AWESOME_SOLID_PLANT_WILT);
  if (id == wxART_PLATE_WHEAT)  
      return wxString(SVG_AWESOME_SOLID_PLATE_WHEAT);
  if (id == wxART_PLAY)  
      return wxString(SVG_AWESOME_SOLID_PLAY);
  if (id == wxART_PLUG_CIRCLE_BOLT)  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_BOLT);
  if (id == wxART_PLUG_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_CHECK);
  if (id == wxART_PLUG_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_EXCLAMATION);
  if (id == wxART_PLUG_CIRCLE_MINUS)  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_MINUS);
  if (id == wxART_PLUG_CIRCLE_PLUS)  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_PLUS);
  if (id == wxART_PLUG_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_PLUG_CIRCLE_XMARK);
  if (id == wxART_PLUG)  
      return wxString(SVG_AWESOME_SOLID_PLUG);
  if (id == wxART_PLUS_MINUS)  
      return wxString(SVG_AWESOME_SOLID_PLUS_MINUS);
  if (id == wxART_PLUS)  
      return wxString(SVG_AWESOME_SOLID_PLUS);
  if (id == wxART_PODCAST)  
      return wxString(SVG_AWESOME_SOLID_PODCAST);
  if (id == wxART_POO_STORM)  
      return wxString(SVG_AWESOME_SOLID_POO_STORM);
  if (id == wxART_POO)  
      return wxString(SVG_AWESOME_SOLID_POO);
  if (id == wxART_POOP)  
      return wxString(SVG_AWESOME_SOLID_POOP);
  if (id == wxART_POWER_OFF)  
      return wxString(SVG_AWESOME_SOLID_POWER_OFF);
  if (id == wxART_PRESCRIPTION_BOTTLE_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_PRESCRIPTION_BOTTLE_MEDICAL);
  if (id == wxART_PRESCRIPTION_BOTTLE)  
      return wxString(SVG_AWESOME_SOLID_PRESCRIPTION_BOTTLE);
  if (id == wxART_PRESCRIPTION)  
      return wxString(SVG_AWESOME_SOLID_PRESCRIPTION);
  if (id == wxART_PRINT)  
      return wxString(SVG_AWESOME_SOLID_PRINT);
  if (id == wxART_PUMP_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_PUMP_MEDICAL);
  if (id == wxART_PUMP_SOAP)  
      return wxString(SVG_AWESOME_SOLID_PUMP_SOAP);
  if (id == wxART_PUZZLE_PIECE)  
      return wxString(SVG_AWESOME_SOLID_PUZZLE_PIECE);
  if (id == wxART_Q)  
      return wxString(SVG_AWESOME_SOLID_Q);
  if (id == wxART_QRCODE)  
      return wxString(SVG_AWESOME_SOLID_QRCODE);
  if (id == wxART_QUESTION)  
      return wxString(SVG_AWESOME_SOLID_QUESTION);
  if (id == wxART_QUOTE_LEFT)  
      return wxString(SVG_AWESOME_SOLID_QUOTE_LEFT);
  if (id == wxART_QUOTE_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_QUOTE_RIGHT);
  if (id == wxART_R)  
      return wxString(SVG_AWESOME_SOLID_R);
  if (id == wxART_RADIATION)  
      return wxString(SVG_AWESOME_SOLID_RADIATION);
  if (id == wxART_RADIO)  
      return wxString(SVG_AWESOME_SOLID_RADIO);
  if (id == wxART_RAINBOW)  
      return wxString(SVG_AWESOME_SOLID_RAINBOW);
  if (id == wxART_RANKING_STAR)  
      return wxString(SVG_AWESOME_SOLID_RANKING_STAR);
  if (id == wxART_RECEIPT)  
      return wxString(SVG_AWESOME_SOLID_RECEIPT);
  if (id == wxART_RECORD_VINYL)  
      return wxString(SVG_AWESOME_SOLID_RECORD_VINYL);
  if (id == wxART_RECTANGLE_AD)  
      return wxString(SVG_AWESOME_SOLID_RECTANGLE_AD);
  if (id == wxART_RECTANGLE_LIST)  
      return wxString(SVG_AWESOME_SOLID_RECTANGLE_LIST);
  if (id == wxART_RECTANGLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_RECTANGLE_XMARK);
  if (id == wxART_RECYCLE)  
      return wxString(SVG_AWESOME_SOLID_RECYCLE);
  if (id == wxART_REGISTERED)  
      return wxString(SVG_AWESOME_SOLID_REGISTERED);
  if (id == wxART_REPEAT)  
      return wxString(SVG_AWESOME_SOLID_REPEAT);
  if (id == wxART_REPLY_ALL)  
      return wxString(SVG_AWESOME_SOLID_REPLY_ALL);
  if (id == wxART_REPLY)  
      return wxString(SVG_AWESOME_SOLID_REPLY);
  if (id == wxART_REPUBLICAN)  
      return wxString(SVG_AWESOME_SOLID_REPUBLICAN);
  if (id == wxART_RESTROOM)  
      return wxString(SVG_AWESOME_SOLID_RESTROOM);
  if (id == wxART_RETWEET)  
      return wxString(SVG_AWESOME_SOLID_RETWEET);
  if (id == wxART_RIBBON)  
      return wxString(SVG_AWESOME_SOLID_RIBBON);
  if (id == wxART_RIGHT_FROM_BRACKET)  
      return wxString(SVG_AWESOME_SOLID_RIGHT_FROM_BRACKET);
  if (id == wxART_RIGHT_LEFT)  
      return wxString(SVG_AWESOME_SOLID_RIGHT_LEFT);
  if (id == wxART_RIGHT_LONG)  
      return wxString(SVG_AWESOME_SOLID_RIGHT_LONG);
  if (id == wxART_RIGHT_TO_BRACKET)  
      return wxString(SVG_AWESOME_SOLID_RIGHT_TO_BRACKET);
  if (id == wxART_RING)  
      return wxString(SVG_AWESOME_SOLID_RING);
  if (id == wxART_ROAD_BARRIER)  
      return wxString(SVG_AWESOME_SOLID_ROAD_BARRIER);
  if (id == wxART_ROAD_BRIDGE)  
      return wxString(SVG_AWESOME_SOLID_ROAD_BRIDGE);
  if (id == wxART_ROAD_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_ROAD_CIRCLE_CHECK);
  if (id == wxART_ROAD_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_ROAD_CIRCLE_EXCLAMATION);
  if (id == wxART_ROAD_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_ROAD_CIRCLE_XMARK);
  if (id == wxART_ROAD_LOCK)  
      return wxString(SVG_AWESOME_SOLID_ROAD_LOCK);
  if (id == wxART_ROAD_SPIKES)  
      return wxString(SVG_AWESOME_SOLID_ROAD_SPIKES);
  if (id == wxART_ROAD)  
      return wxString(SVG_AWESOME_SOLID_ROAD);
  if (id == wxART_ROBOT)  
      return wxString(SVG_AWESOME_SOLID_ROBOT);
  if (id == wxART_ROCKET)  
      return wxString(SVG_AWESOME_SOLID_ROCKET);
  if (id == wxART_ROTATE_LEFT)  
      return wxString(SVG_AWESOME_SOLID_ROTATE_LEFT);
  if (id == wxART_ROTATE_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_ROTATE_RIGHT);
  if (id == wxART_ROTATE)  
      return wxString(SVG_AWESOME_SOLID_ROTATE);
  if (id == wxART_ROUTE)  
      return wxString(SVG_AWESOME_SOLID_ROUTE);
  if (id == wxART_RSS)  
      return wxString(SVG_AWESOME_SOLID_RSS);
  if (id == wxART_RUBLE_SIGN)  
      return wxString(SVG_AWESOME_SOLID_RUBLE_SIGN);
  if (id == wxART_RUG)  
      return wxString(SVG_AWESOME_SOLID_RUG);
  if (id == wxART_RULER_COMBINED)  
      return wxString(SVG_AWESOME_SOLID_RULER_COMBINED);
  if (id == wxART_RULER_HORIZONTAL)  
      return wxString(SVG_AWESOME_SOLID_RULER_HORIZONTAL);
  if (id == wxART_RULER_VERTICAL)  
      return wxString(SVG_AWESOME_SOLID_RULER_VERTICAL);
  if (id == wxART_RULER)  
      return wxString(SVG_AWESOME_SOLID_RULER);
  if (id == wxART_RUPEE_SIGN)  
      return wxString(SVG_AWESOME_SOLID_RUPEE_SIGN);
  if (id == wxART_RUPIAH_SIGN)  
      return wxString(SVG_AWESOME_SOLID_RUPIAH_SIGN);
  if (id == wxART_S)  
      return wxString(SVG_AWESOME_SOLID_S);
  if (id == wxART_SACK_DOLLAR)  
      return wxString(SVG_AWESOME_SOLID_SACK_DOLLAR);
  if (id == wxART_SACK_XMARK)  
      return wxString(SVG_AWESOME_SOLID_SACK_XMARK);
  if (id == wxART_SAILBOAT)  
      return wxString(SVG_AWESOME_SOLID_SAILBOAT);
  if (id == wxART_SATELLITE_DISH)  
      return wxString(SVG_AWESOME_SOLID_SATELLITE_DISH);
  if (id == wxART_SATELLITE)  
      return wxString(SVG_AWESOME_SOLID_SATELLITE);
  if (id == wxART_SCALE_BALANCED)  
      return wxString(SVG_AWESOME_SOLID_SCALE_BALANCED);
  if (id == wxART_SCALE_UNBALANCED_FLIP)  
      return wxString(SVG_AWESOME_SOLID_SCALE_UNBALANCED_FLIP);
  if (id == wxART_SCALE_UNBALANCED)  
      return wxString(SVG_AWESOME_SOLID_SCALE_UNBALANCED);
  if (id == wxART_SCHOOL_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_CIRCLE_CHECK);
  if (id == wxART_SCHOOL_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_CIRCLE_EXCLAMATION);
  if (id == wxART_SCHOOL_CIRCLE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_CIRCLE_XMARK);
  if (id == wxART_SCHOOL_FLAG)  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_FLAG);
  if (id == wxART_SCHOOL_LOCK)  
      return wxString(SVG_AWESOME_SOLID_SCHOOL_LOCK);
  if (id == wxART_SCHOOL)  
      return wxString(SVG_AWESOME_SOLID_SCHOOL);
  if (id == wxART_SCISSORS)  
      return wxString(SVG_AWESOME_SOLID_SCISSORS);
  if (id == wxART_SCREWDRIVER_WRENCH)  
      return wxString(SVG_AWESOME_SOLID_SCREWDRIVER_WRENCH);
  if (id == wxART_SCREWDRIVER)  
      return wxString(SVG_AWESOME_SOLID_SCREWDRIVER);
  if (id == wxART_SCROLL_TORAH)  
      return wxString(SVG_AWESOME_SOLID_SCROLL_TORAH);
  if (id == wxART_SCROLL)  
      return wxString(SVG_AWESOME_SOLID_SCROLL);
  if (id == wxART_SD_CARD)  
      return wxString(SVG_AWESOME_SOLID_SD_CARD);
  if (id == wxART_SECTION)  
      return wxString(SVG_AWESOME_SOLID_SECTION);
  if (id == wxART_SEEDLING)  
      return wxString(SVG_AWESOME_SOLID_SEEDLING);
  if (id == wxART_SERVER)  
      return wxString(SVG_AWESOME_SOLID_SERVER);
  if (id == wxART_SHAPES)  
      return wxString(SVG_AWESOME_SOLID_SHAPES);
  if (id == wxART_SHARE_FROM_SQUARE)  
      return wxString(SVG_AWESOME_SOLID_SHARE_FROM_SQUARE);
  if (id == wxART_SHARE_NODES)  
      return wxString(SVG_AWESOME_SOLID_SHARE_NODES);
  if (id == wxART_SHARE)  
      return wxString(SVG_AWESOME_SOLID_SHARE);
  if (id == wxART_SHEET_PLASTIC)  
      return wxString(SVG_AWESOME_SOLID_SHEET_PLASTIC);
  if (id == wxART_SHEKEL_SIGN)  
      return wxString(SVG_AWESOME_SOLID_SHEKEL_SIGN);
  if (id == wxART_SHIELD_CAT)  
      return wxString(SVG_AWESOME_SOLID_SHIELD_CAT);
  if (id == wxART_SHIELD_DOG)  
      return wxString(SVG_AWESOME_SOLID_SHIELD_DOG);
  if (id == wxART_SHIELD_HALVED)  
      return wxString(SVG_AWESOME_SOLID_SHIELD_HALVED);
  if (id == wxART_SHIELD_HEART)  
      return wxString(SVG_AWESOME_SOLID_SHIELD_HEART);
  if (id == wxART_SHIELD_VIRUS)  
      return wxString(SVG_AWESOME_SOLID_SHIELD_VIRUS);
  if (id == wxART_SHIELD)  
      return wxString(SVG_AWESOME_SOLID_SHIELD);
  if (id == wxART_SHIP)  
      return wxString(SVG_AWESOME_SOLID_SHIP);
  if (id == wxART_SHIRT)  
      return wxString(SVG_AWESOME_SOLID_SHIRT);
  if (id == wxART_SHOE_PRINTS)  
      return wxString(SVG_AWESOME_SOLID_SHOE_PRINTS);
  if (id == wxART_SHOP_LOCK)  
      return wxString(SVG_AWESOME_SOLID_SHOP_LOCK);
  if (id == wxART_SHOP_SLASH)  
      return wxString(SVG_AWESOME_SOLID_SHOP_SLASH);
  if (id == wxART_SHOP)  
      return wxString(SVG_AWESOME_SOLID_SHOP);
  if (id == wxART_SHOWER)  
      return wxString(SVG_AWESOME_SOLID_SHOWER);
  if (id == wxART_SHRIMP)  
      return wxString(SVG_AWESOME_SOLID_SHRIMP);
  if (id == wxART_SHUFFLE)  
      return wxString(SVG_AWESOME_SOLID_SHUFFLE);
  if (id == wxART_SHUTTLE_SPACE)  
      return wxString(SVG_AWESOME_SOLID_SHUTTLE_SPACE);
  if (id == wxART_SIGN_HANGING)  
      return wxString(SVG_AWESOME_SOLID_SIGN_HANGING);
  if (id == wxART_SIGNAL)  
      return wxString(SVG_AWESOME_SOLID_SIGNAL);
  if (id == wxART_SIGNATURE)  
      return wxString(SVG_AWESOME_SOLID_SIGNATURE);
  if (id == wxART_SIGNS_POST)  
      return wxString(SVG_AWESOME_SOLID_SIGNS_POST);
  if (id == wxART_SIM_CARD)  
      return wxString(SVG_AWESOME_SOLID_SIM_CARD);
  if (id == wxART_SINK)  
      return wxString(SVG_AWESOME_SOLID_SINK);
  if (id == wxART_SITEMAP)  
      return wxString(SVG_AWESOME_SOLID_SITEMAP);
  if (id == wxART_SKULL_CROSSBONES)  
      return wxString(SVG_AWESOME_SOLID_SKULL_CROSSBONES);
  if (id == wxART_SKULL)  
      return wxString(SVG_AWESOME_SOLID_SKULL);
  if (id == wxART_SLASH)  
      return wxString(SVG_AWESOME_SOLID_SLASH);
  if (id == wxART_SLEIGH)  
      return wxString(SVG_AWESOME_SOLID_SLEIGH);
  if (id == wxART_SLIDERS)  
      return wxString(SVG_AWESOME_SOLID_SLIDERS);
  if (id == wxART_SMOG)  
      return wxString(SVG_AWESOME_SOLID_SMOG);
  if (id == wxART_SMOKING)  
      return wxString(SVG_AWESOME_SOLID_SMOKING);
  if (id == wxART_SNOWFLAKE)  
      return wxString(SVG_AWESOME_SOLID_SNOWFLAKE);
  if (id == wxART_SNOWMAN)  
      return wxString(SVG_AWESOME_SOLID_SNOWMAN);
  if (id == wxART_SNOWPLOW)  
      return wxString(SVG_AWESOME_SOLID_SNOWPLOW);
  if (id == wxART_SOAP)  
      return wxString(SVG_AWESOME_SOLID_SOAP);
  if (id == wxART_SOCKS)  
      return wxString(SVG_AWESOME_SOLID_SOCKS);
  if (id == wxART_SOLAR_PANEL)  
      return wxString(SVG_AWESOME_SOLID_SOLAR_PANEL);
  if (id == wxART_SORT_DOWN)  
      return wxString(SVG_AWESOME_SOLID_SORT_DOWN);
  if (id == wxART_SORT_UP)  
      return wxString(SVG_AWESOME_SOLID_SORT_UP);
  if (id == wxART_SORT)  
      return wxString(SVG_AWESOME_SOLID_SORT);
  if (id == wxART_SPA)  
      return wxString(SVG_AWESOME_SOLID_SPA);
  if (id == wxART_SPAGHETTI_MONSTER_FLYING)  
      return wxString(SVG_AWESOME_SOLID_SPAGHETTI_MONSTER_FLYING);
  if (id == wxART_SPELL_CHECK)  
      return wxString(SVG_AWESOME_SOLID_SPELL_CHECK);
  if (id == wxART_SPIDER)  
      return wxString(SVG_AWESOME_SOLID_SPIDER);
  if (id == wxART_SPINNER)  
      return wxString(SVG_AWESOME_SOLID_SPINNER);
  if (id == wxART_SPLOTCH)  
      return wxString(SVG_AWESOME_SOLID_SPLOTCH);
  if (id == wxART_SPOON)  
      return wxString(SVG_AWESOME_SOLID_SPOON);
  if (id == wxART_SPRAY_CAN_SPARKLES)  
      return wxString(SVG_AWESOME_SOLID_SPRAY_CAN_SPARKLES);
  if (id == wxART_SPRAY_CAN)  
      return wxString(SVG_AWESOME_SOLID_SPRAY_CAN);
  if (id == wxART_SQUARE_ARROW_UP_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_ARROW_UP_RIGHT);
  if (id == wxART_SQUARE_CARET_DOWN)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CARET_DOWN);
  if (id == wxART_SQUARE_CARET_LEFT)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CARET_LEFT);
  if (id == wxART_SQUARE_CARET_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CARET_RIGHT);
  if (id == wxART_SQUARE_CARET_UP)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CARET_UP);
  if (id == wxART_SQUARE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_CHECK);
  if (id == wxART_SQUARE_ENVELOPE)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_ENVELOPE);
  if (id == wxART_SQUARE_FULL)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_FULL);
  if (id == wxART_SQUARE_H)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_H);
  if (id == wxART_SQUARE_MINUS)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_MINUS);
  if (id == wxART_SQUARE_NFI)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_NFI);
  if (id == wxART_SQUARE_PARKING)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PARKING);
  if (id == wxART_SQUARE_PEN)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PEN);
  if (id == wxART_SQUARE_PERSON_CONFINED)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PERSON_CONFINED);
  if (id == wxART_SQUARE_PHONE_FLIP)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PHONE_FLIP);
  if (id == wxART_SQUARE_PHONE)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PHONE);
  if (id == wxART_SQUARE_PLUS)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_PLUS);
  if (id == wxART_SQUARE_POLL_HORIZONTAL)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_POLL_HORIZONTAL);
  if (id == wxART_SQUARE_POLL_VERTICAL)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_POLL_VERTICAL);
  if (id == wxART_SQUARE_ROOT_VARIABLE)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_ROOT_VARIABLE);
  if (id == wxART_SQUARE_RSS)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_RSS);
  if (id == wxART_SQUARE_SHARE_NODES)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_SHARE_NODES);
  if (id == wxART_SQUARE_UP_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_UP_RIGHT);
  if (id == wxART_SQUARE_VIRUS)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_VIRUS);
  if (id == wxART_SQUARE_XMARK)  
      return wxString(SVG_AWESOME_SOLID_SQUARE_XMARK);
  if (id == wxART_SQUARE)  
      return wxString(SVG_AWESOME_SOLID_SQUARE);
  if (id == wxART_STAFF_SNAKE)  
      return wxString(SVG_AWESOME_SOLID_STAFF_SNAKE);
  if (id == wxART_STAIRS)  
      return wxString(SVG_AWESOME_SOLID_STAIRS);
  if (id == wxART_STAMP)  
      return wxString(SVG_AWESOME_SOLID_STAMP);
  if (id == wxART_STAPLER)  
      return wxString(SVG_AWESOME_SOLID_STAPLER);
  if (id == wxART_STAR_AND_CRESCENT)  
      return wxString(SVG_AWESOME_SOLID_STAR_AND_CRESCENT);
  if (id == wxART_STAR_HALF_STROKE)  
      return wxString(SVG_AWESOME_SOLID_STAR_HALF_STROKE);
  if (id == wxART_STAR_HALF)  
      return wxString(SVG_AWESOME_SOLID_STAR_HALF);
  if (id == wxART_STAR_OF_DAVID)  
      return wxString(SVG_AWESOME_SOLID_STAR_OF_DAVID);
  if (id == wxART_STAR_OF_LIFE)  
      return wxString(SVG_AWESOME_SOLID_STAR_OF_LIFE);
  if (id == wxART_STAR)  
      return wxString(SVG_AWESOME_SOLID_STAR);
  if (id == wxART_STERLING_SIGN)  
      return wxString(SVG_AWESOME_SOLID_STERLING_SIGN);
  if (id == wxART_STETHOSCOPE)  
      return wxString(SVG_AWESOME_SOLID_STETHOSCOPE);
  if (id == wxART_STOP)  
      return wxString(SVG_AWESOME_SOLID_STOP);
  if (id == wxART_STOPWATCH_20)  
      return wxString(SVG_AWESOME_SOLID_STOPWATCH_20);
  if (id == wxART_STOPWATCH)  
      return wxString(SVG_AWESOME_SOLID_STOPWATCH);
  if (id == wxART_STORE_SLASH)  
      return wxString(SVG_AWESOME_SOLID_STORE_SLASH);
  if (id == wxART_STORE)  
      return wxString(SVG_AWESOME_SOLID_STORE);
  if (id == wxART_STREET_VIEW)  
      return wxString(SVG_AWESOME_SOLID_STREET_VIEW);
  if (id == wxART_STRIKETHROUGH)  
      return wxString(SVG_AWESOME_SOLID_STRIKETHROUGH);
  if (id == wxART_STROOPWAFEL)  
      return wxString(SVG_AWESOME_SOLID_STROOPWAFEL);
  if (id == wxART_SUBSCRIPT)  
      return wxString(SVG_AWESOME_SOLID_SUBSCRIPT);
  if (id == wxART_SUITCASE_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_SUITCASE_MEDICAL);
  if (id == wxART_SUITCASE_ROLLING)  
      return wxString(SVG_AWESOME_SOLID_SUITCASE_ROLLING);
  if (id == wxART_SUITCASE)  
      return wxString(SVG_AWESOME_SOLID_SUITCASE);
  if (id == wxART_SUN_PLANT_WILT)  
      return wxString(SVG_AWESOME_SOLID_SUN_PLANT_WILT);
  if (id == wxART_SUN)  
      return wxString(SVG_AWESOME_SOLID_SUN);
  if (id == wxART_SUPERSCRIPT)  
      return wxString(SVG_AWESOME_SOLID_SUPERSCRIPT);
  if (id == wxART_SWATCHBOOK)  
      return wxString(SVG_AWESOME_SOLID_SWATCHBOOK);
  if (id == wxART_SYNAGOGUE)  
      return wxString(SVG_AWESOME_SOLID_SYNAGOGUE);
  if (id == wxART_SYRINGE)  
      return wxString(SVG_AWESOME_SOLID_SYRINGE);
  if (id == wxART_T)  
      return wxString(SVG_AWESOME_SOLID_T);
  if (id == wxART_TABLE_CELLS_LARGE)  
      return wxString(SVG_AWESOME_SOLID_TABLE_CELLS_LARGE);
  if (id == wxART_TABLE_CELLS)  
      return wxString(SVG_AWESOME_SOLID_TABLE_CELLS);
  if (id == wxART_TABLE_COLUMNS)  
      return wxString(SVG_AWESOME_SOLID_TABLE_COLUMNS);
  if (id == wxART_TABLE_LIST)  
      return wxString(SVG_AWESOME_SOLID_TABLE_LIST);
  if (id == wxART_TABLE_TENNIS_PADDLE_BALL)  
      return wxString(SVG_AWESOME_SOLID_TABLE_TENNIS_PADDLE_BALL);
  if (id == wxART_TABLE)  
      return wxString(SVG_AWESOME_SOLID_TABLE);
  if (id == wxART_TABLET_BUTTON)  
      return wxString(SVG_AWESOME_SOLID_TABLET_BUTTON);
  if (id == wxART_TABLET_SCREEN_BUTTON)  
      return wxString(SVG_AWESOME_SOLID_TABLET_SCREEN_BUTTON);
  if (id == wxART_TABLET)  
      return wxString(SVG_AWESOME_SOLID_TABLET);
  if (id == wxART_TABLETS)  
      return wxString(SVG_AWESOME_SOLID_TABLETS);
  if (id == wxART_TACHOGRAPH_DIGITAL)  
      return wxString(SVG_AWESOME_SOLID_TACHOGRAPH_DIGITAL);
  if (id == wxART_TAG)  
      return wxString(SVG_AWESOME_SOLID_TAG);
  if (id == wxART_TAGS)  
      return wxString(SVG_AWESOME_SOLID_TAGS);
  if (id == wxART_TAPE)  
      return wxString(SVG_AWESOME_SOLID_TAPE);
  if (id == wxART_TARP_DROPLET)  
      return wxString(SVG_AWESOME_SOLID_TARP_DROPLET);
  if (id == wxART_TARP)  
      return wxString(SVG_AWESOME_SOLID_TARP);
  if (id == wxART_TAXI)  
      return wxString(SVG_AWESOME_SOLID_TAXI);
  if (id == wxART_TEETH_OPEN)  
      return wxString(SVG_AWESOME_SOLID_TEETH_OPEN);
  if (id == wxART_TEETH)  
      return wxString(SVG_AWESOME_SOLID_TEETH);
  if (id == wxART_TEMPERATURE_ARROW_DOWN)  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_ARROW_DOWN);
  if (id == wxART_TEMPERATURE_ARROW_UP)  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_ARROW_UP);
  if (id == wxART_TEMPERATURE_EMPTY)  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_EMPTY);
  if (id == wxART_TEMPERATURE_FULL)  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_FULL);
  if (id == wxART_TEMPERATURE_HALF)  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_HALF);
  if (id == wxART_TEMPERATURE_HIGH)  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_HIGH);
  if (id == wxART_TEMPERATURE_LOW)  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_LOW);
  if (id == wxART_TEMPERATURE_QUARTER)  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_QUARTER);
  if (id == wxART_TEMPERATURE_THREE_QUARTERS)  
      return wxString(SVG_AWESOME_SOLID_TEMPERATURE_THREE_QUARTERS);
  if (id == wxART_TENGE_SIGN)  
      return wxString(SVG_AWESOME_SOLID_TENGE_SIGN);
  if (id == wxART_TENT_ARROW_DOWN_TO_LINE)  
      return wxString(SVG_AWESOME_SOLID_TENT_ARROW_DOWN_TO_LINE);
  if (id == wxART_TENT_ARROW_LEFT_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_TENT_ARROW_LEFT_RIGHT);
  if (id == wxART_TENT_ARROW_TURN_LEFT)  
      return wxString(SVG_AWESOME_SOLID_TENT_ARROW_TURN_LEFT);
  if (id == wxART_TENT_ARROWS_DOWN)  
      return wxString(SVG_AWESOME_SOLID_TENT_ARROWS_DOWN);
  if (id == wxART_TENT)  
      return wxString(SVG_AWESOME_SOLID_TENT);
  if (id == wxART_TENTS)  
      return wxString(SVG_AWESOME_SOLID_TENTS);
  if (id == wxART_TERMINAL)  
      return wxString(SVG_AWESOME_SOLID_TERMINAL);
  if (id == wxART_TEXT_HEIGHT)  
      return wxString(SVG_AWESOME_SOLID_TEXT_HEIGHT);
  if (id == wxART_TEXT_SLASH)  
      return wxString(SVG_AWESOME_SOLID_TEXT_SLASH);
  if (id == wxART_TEXT_WIDTH)  
      return wxString(SVG_AWESOME_SOLID_TEXT_WIDTH);
  if (id == wxART_THERMOMETER)  
      return wxString(SVG_AWESOME_SOLID_THERMOMETER);
  if (id == wxART_THUMBS_DOWN)  
      return wxString(SVG_AWESOME_SOLID_THUMBS_DOWN);
  if (id == wxART_THUMBS_UP)  
      return wxString(SVG_AWESOME_SOLID_THUMBS_UP);
  if (id == wxART_THUMBTACK)  
      return wxString(SVG_AWESOME_SOLID_THUMBTACK);
  if (id == wxART_TICKET_SIMPLE)  
      return wxString(SVG_AWESOME_SOLID_TICKET_SIMPLE);
  if (id == wxART_TICKET)  
      return wxString(SVG_AWESOME_SOLID_TICKET);
  if (id == wxART_TIMELINE)  
      return wxString(SVG_AWESOME_SOLID_TIMELINE);
  if (id == wxART_TOGGLE_OFF)  
      return wxString(SVG_AWESOME_SOLID_TOGGLE_OFF);
  if (id == wxART_TOGGLE_ON)  
      return wxString(SVG_AWESOME_SOLID_TOGGLE_ON);
  if (id == wxART_TOILET_PAPER_SLASH)  
      return wxString(SVG_AWESOME_SOLID_TOILET_PAPER_SLASH);
  if (id == wxART_TOILET_PAPER)  
      return wxString(SVG_AWESOME_SOLID_TOILET_PAPER);
  if (id == wxART_TOILET_PORTABLE)  
      return wxString(SVG_AWESOME_SOLID_TOILET_PORTABLE);
  if (id == wxART_TOILET)  
      return wxString(SVG_AWESOME_SOLID_TOILET);
  if (id == wxART_TOILETS_PORTABLE)  
      return wxString(SVG_AWESOME_SOLID_TOILETS_PORTABLE);
  if (id == wxART_TOOLBOX)  
      return wxString(SVG_AWESOME_SOLID_TOOLBOX);
  if (id == wxART_TOOTH)  
      return wxString(SVG_AWESOME_SOLID_TOOTH);
  if (id == wxART_TORII_GATE)  
      return wxString(SVG_AWESOME_SOLID_TORII_GATE);
  if (id == wxART_TORNADO)  
      return wxString(SVG_AWESOME_SOLID_TORNADO);
  if (id == wxART_TOWER_BROADCAST)  
      return wxString(SVG_AWESOME_SOLID_TOWER_BROADCAST);
  if (id == wxART_TOWER_CELL)  
      return wxString(SVG_AWESOME_SOLID_TOWER_CELL);
  if (id == wxART_TOWER_OBSERVATION)  
      return wxString(SVG_AWESOME_SOLID_TOWER_OBSERVATION);
  if (id == wxART_TRACTOR)  
      return wxString(SVG_AWESOME_SOLID_TRACTOR);
  if (id == wxART_TRADEMARK)  
      return wxString(SVG_AWESOME_SOLID_TRADEMARK);
  if (id == wxART_TRAFFIC_LIGHT)  
      return wxString(SVG_AWESOME_SOLID_TRAFFIC_LIGHT);
  if (id == wxART_TRAILER)  
      return wxString(SVG_AWESOME_SOLID_TRAILER);
  if (id == wxART_TRAIN_SUBWAY)  
      return wxString(SVG_AWESOME_SOLID_TRAIN_SUBWAY);
  if (id == wxART_TRAIN_TRAM)  
      return wxString(SVG_AWESOME_SOLID_TRAIN_TRAM);
  if (id == wxART_TRAIN)  
      return wxString(SVG_AWESOME_SOLID_TRAIN);
  if (id == wxART_TRANSGENDER)  
      return wxString(SVG_AWESOME_SOLID_TRANSGENDER);
  if (id == wxART_TRASH_ARROW_UP)  
      return wxString(SVG_AWESOME_SOLID_TRASH_ARROW_UP);
  if (id == wxART_TRASH_CAN_ARROW_UP)  
      return wxString(SVG_AWESOME_SOLID_TRASH_CAN_ARROW_UP);
  if (id == wxART_TRASH_CAN)  
      return wxString(SVG_AWESOME_SOLID_TRASH_CAN);
  if (id == wxART_TRASH)  
      return wxString(SVG_AWESOME_SOLID_TRASH);
  if (id == wxART_TREE_CITY)  
      return wxString(SVG_AWESOME_SOLID_TREE_CITY);
  if (id == wxART_TREE)  
      return wxString(SVG_AWESOME_SOLID_TREE);
  if (id == wxART_TRIANGLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_TRIANGLE_EXCLAMATION);
  if (id == wxART_TROPHY)  
      return wxString(SVG_AWESOME_SOLID_TROPHY);
  if (id == wxART_TROWEL_BRICKS)  
      return wxString(SVG_AWESOME_SOLID_TROWEL_BRICKS);
  if (id == wxART_TROWEL)  
      return wxString(SVG_AWESOME_SOLID_TROWEL);
  if (id == wxART_TRUCK_ARROW_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_ARROW_RIGHT);
  if (id == wxART_TRUCK_DROPLET)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_DROPLET);
  if (id == wxART_TRUCK_FAST)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_FAST);
  if (id == wxART_TRUCK_FIELD_UN)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_FIELD_UN);
  if (id == wxART_TRUCK_FIELD)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_FIELD);
  if (id == wxART_TRUCK_FRONT)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_FRONT);
  if (id == wxART_TRUCK_MEDICAL)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_MEDICAL);
  if (id == wxART_TRUCK_MONSTER)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_MONSTER);
  if (id == wxART_TRUCK_MOVING)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_MOVING);
  if (id == wxART_TRUCK_PICKUP)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_PICKUP);
  if (id == wxART_TRUCK_PLANE)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_PLANE);
  if (id == wxART_TRUCK_RAMP_BOX)  
      return wxString(SVG_AWESOME_SOLID_TRUCK_RAMP_BOX);
  if (id == wxART_TRUCK)  
      return wxString(SVG_AWESOME_SOLID_TRUCK);
  if (id == wxART_TTY)  
      return wxString(SVG_AWESOME_SOLID_TTY);
  if (id == wxART_TURKISH_LIRA_SIGN)  
      return wxString(SVG_AWESOME_SOLID_TURKISH_LIRA_SIGN);
  if (id == wxART_TURN_DOWN)  
      return wxString(SVG_AWESOME_SOLID_TURN_DOWN);
  if (id == wxART_TURN_UP)  
      return wxString(SVG_AWESOME_SOLID_TURN_UP);
  if (id == wxART_TV)  
      return wxString(SVG_AWESOME_SOLID_TV);
  if (id == wxART_U)  
      return wxString(SVG_AWESOME_SOLID_U);
  if (id == wxART_UMBRELLA_BEACH)  
      return wxString(SVG_AWESOME_SOLID_UMBRELLA_BEACH);
  if (id == wxART_UMBRELLA)  
      return wxString(SVG_AWESOME_SOLID_UMBRELLA);
  if (id == wxART_UNDERLINE)  
      return wxString(SVG_AWESOME_SOLID_UNDERLINE);
  if (id == wxART_UNIVERSAL_ACCESS)  
      return wxString(SVG_AWESOME_SOLID_UNIVERSAL_ACCESS);
  if (id == wxART_UNLOCK_KEYHOLE)  
      return wxString(SVG_AWESOME_SOLID_UNLOCK_KEYHOLE);
  if (id == wxART_UNLOCK)  
      return wxString(SVG_AWESOME_SOLID_UNLOCK);
  if (id == wxART_UP_DOWN_LEFT_RIGHT)  
      return wxString(SVG_AWESOME_SOLID_UP_DOWN_LEFT_RIGHT);
  if (id == wxART_UP_DOWN)  
      return wxString(SVG_AWESOME_SOLID_UP_DOWN);
  if (id == wxART_UP_LONG)  
      return wxString(SVG_AWESOME_SOLID_UP_LONG);
  if (id == wxART_UP_RIGHT_AND_DOWN_LEFT_FROM_CENTER)  
      return wxString(SVG_AWESOME_SOLID_UP_RIGHT_AND_DOWN_LEFT_FROM_CENTER);
  if (id == wxART_UP_RIGHT_FROM_SQUARE)  
      return wxString(SVG_AWESOME_SOLID_UP_RIGHT_FROM_SQUARE);
  if (id == wxART_UPLOAD)  
      return wxString(SVG_AWESOME_SOLID_UPLOAD);
  if (id == wxART_USER_ASTRONAUT)  
      return wxString(SVG_AWESOME_SOLID_USER_ASTRONAUT);
  if (id == wxART_USER_CHECK)  
      return wxString(SVG_AWESOME_SOLID_USER_CHECK);
  if (id == wxART_USER_CLOCK)  
      return wxString(SVG_AWESOME_SOLID_USER_CLOCK);
  if (id == wxART_USER_DOCTOR)  
      return wxString(SVG_AWESOME_SOLID_USER_DOCTOR);
  if (id == wxART_USER_GEAR)  
      return wxString(SVG_AWESOME_SOLID_USER_GEAR);
  if (id == wxART_USER_GRADUATE)  
      return wxString(SVG_AWESOME_SOLID_USER_GRADUATE);
  if (id == wxART_USER_GROUP)  
      return wxString(SVG_AWESOME_SOLID_USER_GROUP);
  if (id == wxART_USER_INJURED)  
      return wxString(SVG_AWESOME_SOLID_USER_INJURED);
  if (id == wxART_USER_LARGE_SLASH)  
      return wxString(SVG_AWESOME_SOLID_USER_LARGE_SLASH);
  if (id == wxART_USER_LARGE)  
      return wxString(SVG_AWESOME_SOLID_USER_LARGE);
  if (id == wxART_USER_LOCK)  
      return wxString(SVG_AWESOME_SOLID_USER_LOCK);
  if (id == wxART_USER_MINUS)  
      return wxString(SVG_AWESOME_SOLID_USER_MINUS);
  if (id == wxART_USER_NINJA)  
      return wxString(SVG_AWESOME_SOLID_USER_NINJA);
  if (id == wxART_USER_NURSE)  
      return wxString(SVG_AWESOME_SOLID_USER_NURSE);
  if (id == wxART_USER_PEN)  
      return wxString(SVG_AWESOME_SOLID_USER_PEN);
  if (id == wxART_USER_PLUS)  
      return wxString(SVG_AWESOME_SOLID_USER_PLUS);
  if (id == wxART_USER_SECRET)  
      return wxString(SVG_AWESOME_SOLID_USER_SECRET);
  if (id == wxART_USER_SHIELD)  
      return wxString(SVG_AWESOME_SOLID_USER_SHIELD);
  if (id == wxART_USER_SLASH)  
      return wxString(SVG_AWESOME_SOLID_USER_SLASH);
  if (id == wxART_USER_TAG)  
      return wxString(SVG_AWESOME_SOLID_USER_TAG);
  if (id == wxART_USER_TIE)  
      return wxString(SVG_AWESOME_SOLID_USER_TIE);
  if (id == wxART_USER_XMARK)  
      return wxString(SVG_AWESOME_SOLID_USER_XMARK);
  if (id == wxART_USER)  
      return wxString(SVG_AWESOME_SOLID_USER);
  if (id == wxART_USERS_BETWEEN_LINES)  
      return wxString(SVG_AWESOME_SOLID_USERS_BETWEEN_LINES);
  if (id == wxART_USERS_GEAR)  
      return wxString(SVG_AWESOME_SOLID_USERS_GEAR);
  if (id == wxART_USERS_LINE)  
      return wxString(SVG_AWESOME_SOLID_USERS_LINE);
  if (id == wxART_USERS_RAYS)  
      return wxString(SVG_AWESOME_SOLID_USERS_RAYS);
  if (id == wxART_USERS_RECTANGLE)  
      return wxString(SVG_AWESOME_SOLID_USERS_RECTANGLE);
  if (id == wxART_USERS_SLASH)  
      return wxString(SVG_AWESOME_SOLID_USERS_SLASH);
  if (id == wxART_USERS_VIEWFINDER)  
      return wxString(SVG_AWESOME_SOLID_USERS_VIEWFINDER);
  if (id == wxART_USERS)  
      return wxString(SVG_AWESOME_SOLID_USERS);
  if (id == wxART_UTENSILS)  
      return wxString(SVG_AWESOME_SOLID_UTENSILS);
  if (id == wxART_V)  
      return wxString(SVG_AWESOME_SOLID_V);
  if (id == wxART_VAN_SHUTTLE)  
      return wxString(SVG_AWESOME_SOLID_VAN_SHUTTLE);
  if (id == wxART_VAULT)  
      return wxString(SVG_AWESOME_SOLID_VAULT);
  if (id == wxART_VECTOR_SQUARE)  
      return wxString(SVG_AWESOME_SOLID_VECTOR_SQUARE);
  if (id == wxART_VENUS_DOUBLE)  
      return wxString(SVG_AWESOME_SOLID_VENUS_DOUBLE);
  if (id == wxART_VENUS_MARS)  
      return wxString(SVG_AWESOME_SOLID_VENUS_MARS);
  if (id == wxART_VENUS)  
      return wxString(SVG_AWESOME_SOLID_VENUS);
  if (id == wxART_VEST_PATCHES)  
      return wxString(SVG_AWESOME_SOLID_VEST_PATCHES);
  if (id == wxART_VEST)  
      return wxString(SVG_AWESOME_SOLID_VEST);
  if (id == wxART_VIAL_CIRCLE_CHECK)  
      return wxString(SVG_AWESOME_SOLID_VIAL_CIRCLE_CHECK);
  if (id == wxART_VIAL_VIRUS)  
      return wxString(SVG_AWESOME_SOLID_VIAL_VIRUS);
  if (id == wxART_VIAL)  
      return wxString(SVG_AWESOME_SOLID_VIAL);
  if (id == wxART_VIALS)  
      return wxString(SVG_AWESOME_SOLID_VIALS);
  if (id == wxART_VIDEO_SLASH)  
      return wxString(SVG_AWESOME_SOLID_VIDEO_SLASH);
  if (id == wxART_VIDEO)  
      return wxString(SVG_AWESOME_SOLID_VIDEO);
  if (id == wxART_VIHARA)  
      return wxString(SVG_AWESOME_SOLID_VIHARA);
  if (id == wxART_VIRUS_COVID_SLASH)  
      return wxString(SVG_AWESOME_SOLID_VIRUS_COVID_SLASH);
  if (id == wxART_VIRUS_COVID)  
      return wxString(SVG_AWESOME_SOLID_VIRUS_COVID);
  if (id == wxART_VIRUS_SLASH)  
      return wxString(SVG_AWESOME_SOLID_VIRUS_SLASH);
  if (id == wxART_VIRUS)  
      return wxString(SVG_AWESOME_SOLID_VIRUS);
  if (id == wxART_VIRUSES)  
      return wxString(SVG_AWESOME_SOLID_VIRUSES);
  if (id == wxART_VOICEMAIL)  
      return wxString(SVG_AWESOME_SOLID_VOICEMAIL);
  if (id == wxART_VOLCANO)  
      return wxString(SVG_AWESOME_SOLID_VOLCANO);
  if (id == wxART_VOLLEYBALL)  
      return wxString(SVG_AWESOME_SOLID_VOLLEYBALL);
  if (id == wxART_VOLUME_HIGH)  
      return wxString(SVG_AWESOME_SOLID_VOLUME_HIGH);
  if (id == wxART_VOLUME_LOW)  
      return wxString(SVG_AWESOME_SOLID_VOLUME_LOW);
  if (id == wxART_VOLUME_OFF)  
      return wxString(SVG_AWESOME_SOLID_VOLUME_OFF);
  if (id == wxART_VOLUME_XMARK)  
      return wxString(SVG_AWESOME_SOLID_VOLUME_XMARK);
  if (id == wxART_VR_CARDBOARD)  
      return wxString(SVG_AWESOME_SOLID_VR_CARDBOARD);
  if (id == wxART_W)  
      return wxString(SVG_AWESOME_SOLID_W);
  if (id == wxART_WALKIE_TALKIE)  
      return wxString(SVG_AWESOME_SOLID_WALKIE_TALKIE);
  if (id == wxART_WALLET)  
      return wxString(SVG_AWESOME_SOLID_WALLET);
  if (id == wxART_WAND_MAGIC_SPARKLES)  
      return wxString(SVG_AWESOME_SOLID_WAND_MAGIC_SPARKLES);
  if (id == wxART_WAND_MAGIC)  
      return wxString(SVG_AWESOME_SOLID_WAND_MAGIC);
  if (id == wxART_WAND_SPARKLES)  
      return wxString(SVG_AWESOME_SOLID_WAND_SPARKLES);
  if (id == wxART_WAREHOUSE)  
      return wxString(SVG_AWESOME_SOLID_WAREHOUSE);
  if (id == wxART_WATER_LADDER)  
      return wxString(SVG_AWESOME_SOLID_WATER_LADDER);
  if (id == wxART_WATER)  
      return wxString(SVG_AWESOME_SOLID_WATER);
  if (id == wxART_WAVE_SQUARE)  
      return wxString(SVG_AWESOME_SOLID_WAVE_SQUARE);
  if (id == wxART_WEIGHT_HANGING)  
      return wxString(SVG_AWESOME_SOLID_WEIGHT_HANGING);
  if (id == wxART_WEIGHT_SCALE)  
      return wxString(SVG_AWESOME_SOLID_WEIGHT_SCALE);
  if (id == wxART_WHEAT_AWN_CIRCLE_EXCLAMATION)  
      return wxString(SVG_AWESOME_SOLID_WHEAT_AWN_CIRCLE_EXCLAMATION);
  if (id == wxART_WHEAT_AWN)  
      return wxString(SVG_AWESOME_SOLID_WHEAT_AWN);
  if (id == wxART_WHEELCHAIR_MOVE)  
      return wxString(SVG_AWESOME_SOLID_WHEELCHAIR_MOVE);
  if (id == wxART_WHEELCHAIR)  
      return wxString(SVG_AWESOME_SOLID_WHEELCHAIR);
  if (id == wxART_WHISKEY_GLASS)  
      return wxString(SVG_AWESOME_SOLID_WHISKEY_GLASS);
  if (id == wxART_WIFI)  
      return wxString(SVG_AWESOME_SOLID_WIFI);
  if (id == wxART_WIND)  
      return wxString(SVG_AWESOME_SOLID_WIND);
  if (id == wxART_WINDOW_MAXIMIZE)  
      return wxString(SVG_AWESOME_SOLID_WINDOW_MAXIMIZE);
  if (id == wxART_WINDOW_MINIMIZE)  
      return wxString(SVG_AWESOME_SOLID_WINDOW_MINIMIZE);
  if (id == wxART_WINDOW_RESTORE)  
      return wxString(SVG_AWESOME_SOLID_WINDOW_RESTORE);
  if (id == wxART_WINE_BOTTLE)  
      return wxString(SVG_AWESOME_SOLID_WINE_BOTTLE);
  if (id == wxART_WINE_GLASS_EMPTY)  
      return wxString(SVG_AWESOME_SOLID_WINE_GLASS_EMPTY);
  if (id == wxART_WINE_GLASS)  
      return wxString(SVG_AWESOME_SOLID_WINE_GLASS);
  if (id == wxART_WON_SIGN)  
      return wxString(SVG_AWESOME_SOLID_WON_SIGN);
  if (id == wxART_WORM)  
      return wxString(SVG_AWESOME_SOLID_WORM);
  if (id == wxART_WRENCH)  
      return wxString(SVG_AWESOME_SOLID_WRENCH);
  if (id == wxART_X_RAY)  
      return wxString(SVG_AWESOME_SOLID_X_RAY);
  if (id == wxART_X)  
      return wxString(SVG_AWESOME_SOLID_X);
  if (id == wxART_XMARK)  
      return wxString(SVG_AWESOME_SOLID_XMARK);
  if (id == wxART_XMARKS_LINES)  
      return wxString(SVG_AWESOME_SOLID_XMARKS_LINES);
  if (id == wxART_Y)  
      return wxString(SVG_AWESOME_SOLID_Y);
  if (id == wxART_YEN_SIGN)  
      return wxString(SVG_AWESOME_SOLID_YEN_SIGN);
  if (id == wxART_YIN_YANG)  
      return wxString(SVG_AWESOME_SOLID_YIN_YANG);
  if (id == wxART_Z)  
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


