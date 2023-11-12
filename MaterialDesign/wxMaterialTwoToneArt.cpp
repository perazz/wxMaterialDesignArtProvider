#include "wxMaterialTwoToneArt.hpp" 
#include <wx/regex.h> 

// Return SVG for the current ID as a string 
wxString TwoToneMaterialArtSVGByID(const wxArtID& id)
{
  if (id == wxART_10K)  
      return wxString(SVG_MATERIAL_TWO_TONE_10K);
  if (id == wxART_10MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_10MP);
  if (id == wxART_11MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_11MP);
  if (id == wxART_123)  
      return wxString(SVG_MATERIAL_TWO_TONE_123);
  if (id == wxART_12MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_12MP);
  if (id == wxART_13MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_13MP);
  if (id == wxART_14MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_14MP);
  if (id == wxART_15MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_15MP);
  if (id == wxART_16MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_16MP);
  if (id == wxART_17MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_17MP);
  if (id == wxART_18_UP_RATING)  
      return wxString(SVG_MATERIAL_TWO_TONE_18_UP_RATING);
  if (id == wxART_18MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_18MP);
  if (id == wxART_19MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_19MP);
  if (id == wxART_1K)  
      return wxString(SVG_MATERIAL_TWO_TONE_1K);
  if (id == wxART_1K_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_1K_PLUS);
  if (id == wxART_1X_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_1X_MOBILEDATA);
  if (id == wxART_20MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_20MP);
  if (id == wxART_21MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_21MP);
  if (id == wxART_22MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_22MP);
  if (id == wxART_23MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_23MP);
  if (id == wxART_24MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_24MP);
  if (id == wxART_2K)  
      return wxString(SVG_MATERIAL_TWO_TONE_2K);
  if (id == wxART_2K_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_2K_PLUS);
  if (id == wxART_2MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_2MP);
  if (id == wxART_30FPS)  
      return wxString(SVG_MATERIAL_TWO_TONE_30FPS);
  if (id == wxART_30FPS_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_30FPS_SELECT);
  if (id == wxART_360)  
      return wxString(SVG_MATERIAL_TWO_TONE_360);
  if (id == wxART_3D_ROTATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_3D_ROTATION);
  if (id == wxART_3G_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_3G_MOBILEDATA);
  if (id == wxART_3K)  
      return wxString(SVG_MATERIAL_TWO_TONE_3K);
  if (id == wxART_3K_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_3K_PLUS);
  if (id == wxART_3MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_3MP);
  if (id == wxART_3P)  
      return wxString(SVG_MATERIAL_TWO_TONE_3P);
  if (id == wxART_4G_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_4G_MOBILEDATA);
  if (id == wxART_4G_PLUS_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_4G_PLUS_MOBILEDATA);
  if (id == wxART_4K)  
      return wxString(SVG_MATERIAL_TWO_TONE_4K);
  if (id == wxART_4K_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_4K_PLUS);
  if (id == wxART_4MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_4MP);
  if (id == wxART_5G)  
      return wxString(SVG_MATERIAL_TWO_TONE_5G);
  if (id == wxART_5K)  
      return wxString(SVG_MATERIAL_TWO_TONE_5K);
  if (id == wxART_5K_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_5K_PLUS);
  if (id == wxART_5MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_5MP);
  if (id == wxART_60FPS)  
      return wxString(SVG_MATERIAL_TWO_TONE_60FPS);
  if (id == wxART_60FPS_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_60FPS_SELECT);
  if (id == wxART_6_FT_APART)  
      return wxString(SVG_MATERIAL_TWO_TONE_6_FT_APART);
  if (id == wxART_6K)  
      return wxString(SVG_MATERIAL_TWO_TONE_6K);
  if (id == wxART_6K_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_6K_PLUS);
  if (id == wxART_6MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_6MP);
  if (id == wxART_7K)  
      return wxString(SVG_MATERIAL_TWO_TONE_7K);
  if (id == wxART_7K_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_7K_PLUS);
  if (id == wxART_7MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_7MP);
  if (id == wxART_8K)  
      return wxString(SVG_MATERIAL_TWO_TONE_8K);
  if (id == wxART_8K_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_8K_PLUS);
  if (id == wxART_8MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_8MP);
  if (id == wxART_9K)  
      return wxString(SVG_MATERIAL_TWO_TONE_9K);
  if (id == wxART_9K_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_9K_PLUS);
  if (id == wxART_9MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_9MP);
  if (id == wxART_ABC)  
      return wxString(SVG_MATERIAL_TWO_TONE_ABC);
  if (id == wxART_AC_UNIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_AC_UNIT);
  if (id == wxART_ACCESS_ALARM)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCESS_ALARM);
  if (id == wxART_ACCESS_ALARMS)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCESS_ALARMS);
  if (id == wxART_ACCESS_TIME)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCESS_TIME);
  if (id == wxART_ACCESS_TIME_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCESS_TIME_FILLED);
  if (id == wxART_ACCESSIBILITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCESSIBILITY);
  if (id == wxART_ACCESSIBILITY_NEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCESSIBILITY_NEW);
  if (id == wxART_ACCESSIBLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCESSIBLE);
  if (id == wxART_ACCESSIBLE_FORWARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCESSIBLE_FORWARD);
  if (id == wxART_ACCOUNT_BALANCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCOUNT_BALANCE);
  if (id == wxART_ACCOUNT_BALANCE_WALLET)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCOUNT_BALANCE_WALLET);
  if (id == wxART_ACCOUNT_BOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCOUNT_BOX);
  if (id == wxART_ACCOUNT_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCOUNT_CIRCLE);
  if (id == wxART_ACCOUNT_TREE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ACCOUNT_TREE);
  if (id == wxART_AD_UNITS)  
      return wxString(SVG_MATERIAL_TWO_TONE_AD_UNITS);
  if (id == wxART_ADB)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADB);
  if (id == wxART_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD);
  if (id == wxART_ADD_A_PHOTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_A_PHOTO);
  if (id == wxART_ADD_ALARM)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_ALARM);
  if (id == wxART_ADD_ALERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_ALERT);
  if (id == wxART_ADD_BOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_BOX);
  if (id == wxART_ADD_BUSINESS)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_BUSINESS);
  if (id == wxART_ADD_CARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_CARD);
  if (id == wxART_ADD_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_CHART);
  if (id == wxART_ADD_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_CIRCLE);
  if (id == wxART_ADD_CIRCLE_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_CIRCLE_OUTLINE);
  if (id == wxART_ADD_COMMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_COMMENT);
  if (id == wxART_ADD_HOME)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_HOME);
  if (id == wxART_ADD_HOME_WORK)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_HOME_WORK);
  if (id == wxART_ADD_IC_CALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_IC_CALL);
  if (id == wxART_ADD_LINK)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_LINK);
  if (id == wxART_ADD_LOCATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_LOCATION);
  if (id == wxART_ADD_LOCATION_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_LOCATION_ALT);
  if (id == wxART_ADD_MODERATOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_MODERATOR);
  if (id == wxART_ADD_PHOTO_ALTERNATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_PHOTO_ALTERNATE);
  if (id == wxART_ADD_REACTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_REACTION);
  if (id == wxART_ADD_ROAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_ROAD);
  if (id == wxART_ADD_SHOPPING_CART)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_SHOPPING_CART);
  if (id == wxART_ADD_TASK)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_TASK);
  if (id == wxART_ADD_TO_DRIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_TO_DRIVE);
  if (id == wxART_ADD_TO_HOME_SCREEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_TO_HOME_SCREEN);
  if (id == wxART_ADD_TO_PHOTOS)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_TO_PHOTOS);
  if (id == wxART_ADD_TO_QUEUE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADD_TO_QUEUE);
  if (id == wxART_ADDCHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADDCHART);
  if (id == wxART_ADF_SCANNER)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADF_SCANNER);
  if (id == wxART_ADJUST)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADJUST);
  if (id == wxART_ADMIN_PANEL_SETTINGS)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADMIN_PANEL_SETTINGS);
  if (id == wxART_ADS_CLICK)  
      return wxString(SVG_MATERIAL_TWO_TONE_ADS_CLICK);
  if (id == wxART_AGRICULTURE)  
      return wxString(SVG_MATERIAL_TWO_TONE_AGRICULTURE);
  if (id == wxART_AIR)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIR);
  if (id == wxART_AIRLINE_SEAT_FLAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINE_SEAT_FLAT);
  if (id == wxART_AIRLINE_SEAT_FLAT_ANGLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINE_SEAT_FLAT_ANGLED);
  if (id == wxART_AIRLINE_SEAT_INDIVIDUAL_SUITE)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINE_SEAT_INDIVIDUAL_SUITE);
  if (id == wxART_AIRLINE_SEAT_LEGROOM_EXTRA)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINE_SEAT_LEGROOM_EXTRA);
  if (id == wxART_AIRLINE_SEAT_LEGROOM_NORMAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINE_SEAT_LEGROOM_NORMAL);
  if (id == wxART_AIRLINE_SEAT_LEGROOM_REDUCED)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINE_SEAT_LEGROOM_REDUCED);
  if (id == wxART_AIRLINE_SEAT_RECLINE_EXTRA)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINE_SEAT_RECLINE_EXTRA);
  if (id == wxART_AIRLINE_SEAT_RECLINE_NORMAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINE_SEAT_RECLINE_NORMAL);
  if (id == wxART_AIRLINE_STOPS)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINE_STOPS);
  if (id == wxART_AIRLINES)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRLINES);
  if (id == wxART_AIRPLANE_TICKET)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRPLANE_TICKET);
  if (id == wxART_AIRPLANEMODE_ACTIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRPLANEMODE_ACTIVE);
  if (id == wxART_AIRPLANEMODE_INACTIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRPLANEMODE_INACTIVE);
  if (id == wxART_AIRPLAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRPLAY);
  if (id == wxART_AIRPORT_SHUTTLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_AIRPORT_SHUTTLE);
  if (id == wxART_ALARM)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALARM);
  if (id == wxART_ALARM_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALARM_ADD);
  if (id == wxART_ALARM_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALARM_OFF);
  if (id == wxART_ALARM_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALARM_ON);
  if (id == wxART_ALBUM)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALBUM);
  if (id == wxART_ALIGN_HORIZONTAL_CENTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALIGN_HORIZONTAL_CENTER);
  if (id == wxART_ALIGN_HORIZONTAL_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALIGN_HORIZONTAL_LEFT);
  if (id == wxART_ALIGN_HORIZONTAL_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALIGN_HORIZONTAL_RIGHT);
  if (id == wxART_ALIGN_VERTICAL_BOTTOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALIGN_VERTICAL_BOTTOM);
  if (id == wxART_ALIGN_VERTICAL_CENTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALIGN_VERTICAL_CENTER);
  if (id == wxART_ALIGN_VERTICAL_TOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALIGN_VERTICAL_TOP);
  if (id == wxART_ALL_INBOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALL_INBOX);
  if (id == wxART_ALL_INCLUSIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALL_INCLUSIVE);
  if (id == wxART_ALL_OUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALL_OUT);
  if (id == wxART_ALT_ROUTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALT_ROUTE);
  if (id == wxART_ALTERNATE_EMAIL)  
      return wxString(SVG_MATERIAL_TWO_TONE_ALTERNATE_EMAIL);
  if (id == wxART_ANALYTICS)  
      return wxString(SVG_MATERIAL_TWO_TONE_ANALYTICS);
  if (id == wxART_ANCHOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_ANCHOR);
  if (id == wxART_ANDROID)  
      return wxString(SVG_MATERIAL_TWO_TONE_ANDROID);
  if (id == wxART_ANIMATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_ANIMATION);
  if (id == wxART_ANNOUNCEMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ANNOUNCEMENT);
  if (id == wxART_AOD)  
      return wxString(SVG_MATERIAL_TWO_TONE_AOD);
  if (id == wxART_APARTMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_APARTMENT);
  if (id == wxART_API)  
      return wxString(SVG_MATERIAL_TWO_TONE_API);
  if (id == wxART_APP_BLOCKING)  
      return wxString(SVG_MATERIAL_TWO_TONE_APP_BLOCKING);
  if (id == wxART_APP_REGISTRATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_APP_REGISTRATION);
  if (id == wxART_APP_SETTINGS_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_APP_SETTINGS_ALT);
  if (id == wxART_APP_SHORTCUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_APP_SHORTCUT);
  if (id == wxART_APPROVAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_APPROVAL);
  if (id == wxART_APPS)  
      return wxString(SVG_MATERIAL_TWO_TONE_APPS);
  if (id == wxART_APPS_OUTAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_APPS_OUTAGE);
  if (id == wxART_ARCHITECTURE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARCHITECTURE);
  if (id == wxART_ARCHIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARCHIVE);
  if (id == wxART_AREA_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_AREA_CHART);
  if (id == wxART_ARROW_BACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_BACK);
  if (id == wxART_ARROW_BACK_IOS)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_BACK_IOS);
  if (id == wxART_ARROW_BACK_IOS_NEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_BACK_IOS_NEW);
  if (id == wxART_ARROW_CIRCLE_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_CIRCLE_DOWN);
  if (id == wxART_ARROW_CIRCLE_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_CIRCLE_LEFT);
  if (id == wxART_ARROW_CIRCLE_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_CIRCLE_RIGHT);
  if (id == wxART_ARROW_CIRCLE_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_CIRCLE_UP);
  if (id == wxART_ARROW_DOWNWARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_DOWNWARD);
  if (id == wxART_ARROW_DROP_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_DROP_DOWN);
  if (id == wxART_ARROW_DROP_DOWN_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_DROP_DOWN_CIRCLE);
  if (id == wxART_ARROW_DROP_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_DROP_UP);
  if (id == wxART_ARROW_FORWARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_FORWARD);
  if (id == wxART_ARROW_FORWARD_IOS)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_FORWARD_IOS);
  if (id == wxART_ARROW_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_LEFT);
  if (id == wxART_ARROW_OUTWARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_OUTWARD);
  if (id == wxART_ARROW_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_RIGHT);
  if (id == wxART_ARROW_RIGHT_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_RIGHT_ALT);
  if (id == wxART_ARROW_UPWARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARROW_UPWARD);
  if (id == wxART_ART_TRACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_ART_TRACK);
  if (id == wxART_ARTICLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ARTICLE);
  if (id == wxART_ASPECT_RATIO)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASPECT_RATIO);
  if (id == wxART_ASSESSMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSESSMENT);
  if (id == wxART_ASSIGNMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSIGNMENT);
  if (id == wxART_ASSIGNMENT_IND)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSIGNMENT_IND);
  if (id == wxART_ASSIGNMENT_LATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSIGNMENT_LATE);
  if (id == wxART_ASSIGNMENT_RETURN)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSIGNMENT_RETURN);
  if (id == wxART_ASSIGNMENT_RETURNED)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSIGNMENT_RETURNED);
  if (id == wxART_ASSIGNMENT_TURNED_IN)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSIGNMENT_TURNED_IN);
  if (id == wxART_ASSIST_WALKER)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSIST_WALKER);
  if (id == wxART_ASSISTANT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSISTANT);
  if (id == wxART_ASSISTANT_DIRECTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSISTANT_DIRECTION);
  if (id == wxART_ASSISTANT_PHOTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSISTANT_PHOTO);
  if (id == wxART_ASSURED_WORKLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_ASSURED_WORKLOAD);
  if (id == wxART_ATM)  
      return wxString(SVG_MATERIAL_TWO_TONE_ATM);
  if (id == wxART_ATTACH_EMAIL)  
      return wxString(SVG_MATERIAL_TWO_TONE_ATTACH_EMAIL);
  if (id == wxART_ATTACH_FILE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ATTACH_FILE);
  if (id == wxART_ATTACH_MONEY)  
      return wxString(SVG_MATERIAL_TWO_TONE_ATTACH_MONEY);
  if (id == wxART_ATTACHMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ATTACHMENT);
  if (id == wxART_ATTRACTIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_ATTRACTIONS);
  if (id == wxART_ATTRIBUTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_ATTRIBUTION);
  if (id == wxART_AUDIO_FILE)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUDIO_FILE);
  if (id == wxART_AUDIOTRACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUDIOTRACK);
  if (id == wxART_AUTO_AWESOME)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_AWESOME);
  if (id == wxART_AUTO_AWESOME_MOSAIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_AWESOME_MOSAIC);
  if (id == wxART_AUTO_AWESOME_MOTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_AWESOME_MOTION);
  if (id == wxART_AUTO_DELETE)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_DELETE);
  if (id == wxART_AUTO_FIX_HIGH)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_FIX_HIGH);
  if (id == wxART_AUTO_FIX_NORMAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_FIX_NORMAL);
  if (id == wxART_AUTO_FIX_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_FIX_OFF);
  if (id == wxART_AUTO_GRAPH)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_GRAPH);
  if (id == wxART_AUTO_MODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_MODE);
  if (id == wxART_AUTO_STORIES)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTO_STORIES);
  if (id == wxART_AUTOFPS_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTOFPS_SELECT);
  if (id == wxART_AUTORENEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_AUTORENEW);
  if (id == wxART_AV_TIMER)  
      return wxString(SVG_MATERIAL_TWO_TONE_AV_TIMER);
  if (id == wxART_BABY_CHANGING_STATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_BABY_CHANGING_STATION);
  if (id == wxART_BACK_HAND)  
      return wxString(SVG_MATERIAL_TWO_TONE_BACK_HAND);
  if (id == wxART_BACKPACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_BACKPACK);
  if (id == wxART_BACKSPACE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BACKSPACE);
  if (id == wxART_BACKUP)  
      return wxString(SVG_MATERIAL_TWO_TONE_BACKUP);
  if (id == wxART_BACKUP_TABLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BACKUP_TABLE);
  if (id == wxART_BADGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BADGE);
  if (id == wxART_BAKERY_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_BAKERY_DINING);
  if (id == wxART_BALANCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BALANCE);
  if (id == wxART_BALCONY)  
      return wxString(SVG_MATERIAL_TWO_TONE_BALCONY);
  if (id == wxART_BALLOT)  
      return wxString(SVG_MATERIAL_TWO_TONE_BALLOT);
  if (id == wxART_BAR_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_BAR_CHART);
  if (id == wxART_BATCH_PREDICTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATCH_PREDICTION);
  if (id == wxART_BATHROOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATHROOM);
  if (id == wxART_BATHTUB)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATHTUB);
  if (id == wxART_BATTERY_0_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_0_BAR);
  if (id == wxART_BATTERY_1_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_1_BAR);
  if (id == wxART_BATTERY_2_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_2_BAR);
  if (id == wxART_BATTERY_3_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_3_BAR);
  if (id == wxART_BATTERY_4_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_4_BAR);
  if (id == wxART_BATTERY_5_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_5_BAR);
  if (id == wxART_BATTERY_6_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_6_BAR);
  if (id == wxART_BATTERY_ALERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_ALERT);
  if (id == wxART_BATTERY_CHARGING_FULL)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_CHARGING_FULL);
  if (id == wxART_BATTERY_FULL)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_FULL);
  if (id == wxART_BATTERY_SAVER)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_SAVER);
  if (id == wxART_BATTERY_STD)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_STD);
  if (id == wxART_BATTERY_UNKNOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_BATTERY_UNKNOWN);
  if (id == wxART_BEACH_ACCESS)  
      return wxString(SVG_MATERIAL_TWO_TONE_BEACH_ACCESS);
  if (id == wxART_BED)  
      return wxString(SVG_MATERIAL_TWO_TONE_BED);
  if (id == wxART_BEDROOM_BABY)  
      return wxString(SVG_MATERIAL_TWO_TONE_BEDROOM_BABY);
  if (id == wxART_BEDROOM_CHILD)  
      return wxString(SVG_MATERIAL_TWO_TONE_BEDROOM_CHILD);
  if (id == wxART_BEDROOM_PARENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_BEDROOM_PARENT);
  if (id == wxART_BEDTIME)  
      return wxString(SVG_MATERIAL_TWO_TONE_BEDTIME);
  if (id == wxART_BEDTIME_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_BEDTIME_OFF);
  if (id == wxART_BEENHERE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BEENHERE);
  if (id == wxART_BENTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_BENTO);
  if (id == wxART_BIKE_SCOOTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_BIKE_SCOOTER);
  if (id == wxART_BIOTECH)  
      return wxString(SVG_MATERIAL_TWO_TONE_BIOTECH);
  if (id == wxART_BLENDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLENDER);
  if (id == wxART_BLIND)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLIND);
  if (id == wxART_BLINDS)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLINDS);
  if (id == wxART_BLINDS_CLOSED)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLINDS_CLOSED);
  if (id == wxART_BLOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLOCK);
  if (id == wxART_BLOODTYPE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLOODTYPE);
  if (id == wxART_BLUETOOTH)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUETOOTH);
  if (id == wxART_BLUETOOTH_AUDIO)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUETOOTH_AUDIO);
  if (id == wxART_BLUETOOTH_CONNECTED)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUETOOTH_CONNECTED);
  if (id == wxART_BLUETOOTH_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUETOOTH_DISABLED);
  if (id == wxART_BLUETOOTH_DRIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUETOOTH_DRIVE);
  if (id == wxART_BLUETOOTH_SEARCHING)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUETOOTH_SEARCHING);
  if (id == wxART_BLUR_CIRCULAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUR_CIRCULAR);
  if (id == wxART_BLUR_LINEAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUR_LINEAR);
  if (id == wxART_BLUR_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUR_OFF);
  if (id == wxART_BLUR_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_BLUR_ON);
  if (id == wxART_BOLT)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOLT);
  if (id == wxART_BOOK)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOOK);
  if (id == wxART_BOOK_ONLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOOK_ONLINE);
  if (id == wxART_BOOKMARK)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOOKMARK);
  if (id == wxART_BOOKMARK_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOOKMARK_ADD);
  if (id == wxART_BOOKMARK_ADDED)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOOKMARK_ADDED);
  if (id == wxART_BOOKMARK_BORDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOOKMARK_BORDER);
  if (id == wxART_BOOKMARK_REMOVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOOKMARK_REMOVE);
  if (id == wxART_BOOKMARKS)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOOKMARKS);
  if (id == wxART_BORDER_ALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_ALL);
  if (id == wxART_BORDER_BOTTOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_BOTTOM);
  if (id == wxART_BORDER_CLEAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_CLEAR);
  if (id == wxART_BORDER_COLOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_COLOR);
  if (id == wxART_BORDER_HORIZONTAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_HORIZONTAL);
  if (id == wxART_BORDER_INNER)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_INNER);
  if (id == wxART_BORDER_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_LEFT);
  if (id == wxART_BORDER_OUTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_OUTER);
  if (id == wxART_BORDER_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_RIGHT);
  if (id == wxART_BORDER_STYLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_STYLE);
  if (id == wxART_BORDER_TOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_TOP);
  if (id == wxART_BORDER_VERTICAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_BORDER_VERTICAL);
  if (id == wxART_BOY)  
      return wxString(SVG_MATERIAL_TWO_TONE_BOY);
  if (id == wxART_BRANDING_WATERMARK)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRANDING_WATERMARK);
  if (id == wxART_BREAKFAST_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_BREAKFAST_DINING);
  if (id == wxART_BRIGHTNESS_1)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_1);
  if (id == wxART_BRIGHTNESS_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_2);
  if (id == wxART_BRIGHTNESS_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_3);
  if (id == wxART_BRIGHTNESS_4)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_4);
  if (id == wxART_BRIGHTNESS_5)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_5);
  if (id == wxART_BRIGHTNESS_6)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_6);
  if (id == wxART_BRIGHTNESS_7)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_7);
  if (id == wxART_BRIGHTNESS_AUTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_AUTO);
  if (id == wxART_BRIGHTNESS_HIGH)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_HIGH);
  if (id == wxART_BRIGHTNESS_LOW)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_LOW);
  if (id == wxART_BRIGHTNESS_MEDIUM)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRIGHTNESS_MEDIUM);
  if (id == wxART_BROADCAST_ON_HOME)  
      return wxString(SVG_MATERIAL_TWO_TONE_BROADCAST_ON_HOME);
  if (id == wxART_BROADCAST_ON_PERSONAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_BROADCAST_ON_PERSONAL);
  if (id == wxART_BROKEN_IMAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BROKEN_IMAGE);
  if (id == wxART_BROWSE_GALLERY)  
      return wxString(SVG_MATERIAL_TWO_TONE_BROWSE_GALLERY);
  if (id == wxART_BROWSER_NOT_SUPPORTED)  
      return wxString(SVG_MATERIAL_TWO_TONE_BROWSER_NOT_SUPPORTED);
  if (id == wxART_BROWSER_UPDATED)  
      return wxString(SVG_MATERIAL_TWO_TONE_BROWSER_UPDATED);
  if (id == wxART_BRUNCH_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRUNCH_DINING);
  if (id == wxART_BRUSH)  
      return wxString(SVG_MATERIAL_TWO_TONE_BRUSH);
  if (id == wxART_BUBBLE_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_BUBBLE_CHART);
  if (id == wxART_BUG_REPORT)  
      return wxString(SVG_MATERIAL_TWO_TONE_BUG_REPORT);
  if (id == wxART_BUILD)  
      return wxString(SVG_MATERIAL_TWO_TONE_BUILD);
  if (id == wxART_BUILD_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BUILD_CIRCLE);
  if (id == wxART_BUNGALOW)  
      return wxString(SVG_MATERIAL_TWO_TONE_BUNGALOW);
  if (id == wxART_BURST_MODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_BURST_MODE);
  if (id == wxART_BUS_ALERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_BUS_ALERT);
  if (id == wxART_BUSINESS)  
      return wxString(SVG_MATERIAL_TWO_TONE_BUSINESS);
  if (id == wxART_BUSINESS_CENTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_BUSINESS_CENTER);
  if (id == wxART_CABIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_CABIN);
  if (id == wxART_CABLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CABLE);
  if (id == wxART_CACHED)  
      return wxString(SVG_MATERIAL_TWO_TONE_CACHED);
  if (id == wxART_CAKE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAKE);
  if (id == wxART_CALCULATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALCULATE);
  if (id == wxART_CALENDAR_MONTH)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALENDAR_MONTH);
  if (id == wxART_CALENDAR_TODAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALENDAR_TODAY);
  if (id == wxART_CALENDAR_VIEW_DAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALENDAR_VIEW_DAY);
  if (id == wxART_CALENDAR_VIEW_MONTH)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALENDAR_VIEW_MONTH);
  if (id == wxART_CALENDAR_VIEW_WEEK)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALENDAR_VIEW_WEEK);
  if (id == wxART_CALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALL);
  if (id == wxART_CALL_END)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALL_END);
  if (id == wxART_CALL_MADE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALL_MADE);
  if (id == wxART_CALL_MERGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALL_MERGE);
  if (id == wxART_CALL_MISSED)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALL_MISSED);
  if (id == wxART_CALL_MISSED_OUTGOING)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALL_MISSED_OUTGOING);
  if (id == wxART_CALL_RECEIVED)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALL_RECEIVED);
  if (id == wxART_CALL_SPLIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALL_SPLIT);
  if (id == wxART_CALL_TO_ACTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_CALL_TO_ACTION);
  if (id == wxART_CAMERA)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMERA);
  if (id == wxART_CAMERA_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMERA_ALT);
  if (id == wxART_CAMERA_ENHANCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMERA_ENHANCE);
  if (id == wxART_CAMERA_FRONT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMERA_FRONT);
  if (id == wxART_CAMERA_INDOOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMERA_INDOOR);
  if (id == wxART_CAMERA_OUTDOOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMERA_OUTDOOR);
  if (id == wxART_CAMERA_REAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMERA_REAR);
  if (id == wxART_CAMERA_ROLL)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMERA_ROLL);
  if (id == wxART_CAMERASWITCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMERASWITCH);
  if (id == wxART_CAMPAIGN)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAMPAIGN);
  if (id == wxART_CANCEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_CANCEL);
  if (id == wxART_CANCEL_PRESENTATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_CANCEL_PRESENTATION);
  if (id == wxART_CANCEL_SCHEDULE_SEND)  
      return wxString(SVG_MATERIAL_TWO_TONE_CANCEL_SCHEDULE_SEND);
  if (id == wxART_CANDLESTICK_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_CANDLESTICK_CHART);
  if (id == wxART_CAR_CRASH)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAR_CRASH);
  if (id == wxART_CAR_RENTAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAR_RENTAL);
  if (id == wxART_CAR_REPAIR)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAR_REPAIR);
  if (id == wxART_CARD_GIFTCARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_CARD_GIFTCARD);
  if (id == wxART_CARD_MEMBERSHIP)  
      return wxString(SVG_MATERIAL_TWO_TONE_CARD_MEMBERSHIP);
  if (id == wxART_CARD_TRAVEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_CARD_TRAVEL);
  if (id == wxART_CARPENTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_CARPENTER);
  if (id == wxART_CASES)  
      return wxString(SVG_MATERIAL_TWO_TONE_CASES);
  if (id == wxART_CASINO)  
      return wxString(SVG_MATERIAL_TWO_TONE_CASINO);
  if (id == wxART_CAST)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAST);
  if (id == wxART_CAST_CONNECTED)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAST_CONNECTED);
  if (id == wxART_CAST_FOR_EDUCATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_CAST_FOR_EDUCATION);
  if (id == wxART_CASTLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CASTLE);
  if (id == wxART_CATCHING_POKEMON)  
      return wxString(SVG_MATERIAL_TWO_TONE_CATCHING_POKEMON);
  if (id == wxART_CATEGORY)  
      return wxString(SVG_MATERIAL_TWO_TONE_CATEGORY);
  if (id == wxART_CELEBRATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_CELEBRATION);
  if (id == wxART_CELL_TOWER)  
      return wxString(SVG_MATERIAL_TWO_TONE_CELL_TOWER);
  if (id == wxART_CELL_WIFI)  
      return wxString(SVG_MATERIAL_TWO_TONE_CELL_WIFI);
  if (id == wxART_CENTER_FOCUS_STRONG)  
      return wxString(SVG_MATERIAL_TWO_TONE_CENTER_FOCUS_STRONG);
  if (id == wxART_CENTER_FOCUS_WEAK)  
      return wxString(SVG_MATERIAL_TWO_TONE_CENTER_FOCUS_WEAK);
  if (id == wxART_CHAIR)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHAIR);
  if (id == wxART_CHAIR_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHAIR_ALT);
  if (id == wxART_CHALET)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHALET);
  if (id == wxART_CHANGE_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHANGE_CIRCLE);
  if (id == wxART_CHANGE_HISTORY)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHANGE_HISTORY);
  if (id == wxART_CHARGING_STATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHARGING_STATION);
  if (id == wxART_CHAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHAT);
  if (id == wxART_CHAT_BUBBLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHAT_BUBBLE);
  if (id == wxART_CHAT_BUBBLE_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHAT_BUBBLE_OUTLINE);
  if (id == wxART_CHECK)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHECK);
  if (id == wxART_CHECK_BOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHECK_BOX);
  if (id == wxART_CHECK_BOX_OUTLINE_BLANK)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHECK_BOX_OUTLINE_BLANK);
  if (id == wxART_CHECK_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHECK_CIRCLE);
  if (id == wxART_CHECK_CIRCLE_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHECK_CIRCLE_OUTLINE);
  if (id == wxART_CHECKLIST)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHECKLIST);
  if (id == wxART_CHECKLIST_RTL)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHECKLIST_RTL);
  if (id == wxART_CHECKROOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHECKROOM);
  if (id == wxART_CHEVRON_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHEVRON_LEFT);
  if (id == wxART_CHEVRON_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHEVRON_RIGHT);
  if (id == wxART_CHILD_CARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHILD_CARE);
  if (id == wxART_CHILD_FRIENDLY)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHILD_FRIENDLY);
  if (id == wxART_CHROME_READER_MODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHROME_READER_MODE);
  if (id == wxART_CHURCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_CHURCH);
  if (id == wxART_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CIRCLE);
  if (id == wxART_CIRCLE_NOTIFICATIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_CIRCLE_NOTIFICATIONS);
  if (id == wxART_CLASS)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLASS);
  if (id == wxART_CLEAN_HANDS)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLEAN_HANDS);
  if (id == wxART_CLEANING_SERVICES)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLEANING_SERVICES);
  if (id == wxART_CLEAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLEAR);
  if (id == wxART_CLEAR_ALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLEAR_ALL);
  if (id == wxART_CLOSE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOSE);
  if (id == wxART_CLOSE_FULLSCREEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOSE_FULLSCREEN);
  if (id == wxART_CLOSED_CAPTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOSED_CAPTION);
  if (id == wxART_CLOSED_CAPTION_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOSED_CAPTION_DISABLED);
  if (id == wxART_CLOSED_CAPTION_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOSED_CAPTION_OFF);
  if (id == wxART_CLOUD)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOUD);
  if (id == wxART_CLOUD_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOUD_CIRCLE);
  if (id == wxART_CLOUD_DONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOUD_DONE);
  if (id == wxART_CLOUD_DOWNLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOUD_DOWNLOAD);
  if (id == wxART_CLOUD_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOUD_OFF);
  if (id == wxART_CLOUD_QUEUE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOUD_QUEUE);
  if (id == wxART_CLOUD_SYNC)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOUD_SYNC);
  if (id == wxART_CLOUD_UPLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_CLOUD_UPLOAD);
  if (id == wxART_CO2)  
      return wxString(SVG_MATERIAL_TWO_TONE_CO2);
  if (id == wxART_CO_PRESENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CO_PRESENT);
  if (id == wxART_CODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CODE);
  if (id == wxART_CODE_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_CODE_OFF);
  if (id == wxART_COFFEE)  
      return wxString(SVG_MATERIAL_TWO_TONE_COFFEE);
  if (id == wxART_COFFEE_MAKER)  
      return wxString(SVG_MATERIAL_TWO_TONE_COFFEE_MAKER);
  if (id == wxART_COLLECTIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_COLLECTIONS);
  if (id == wxART_COLLECTIONS_BOOKMARK)  
      return wxString(SVG_MATERIAL_TWO_TONE_COLLECTIONS_BOOKMARK);
  if (id == wxART_COLOR_LENS)  
      return wxString(SVG_MATERIAL_TWO_TONE_COLOR_LENS);
  if (id == wxART_COLORIZE)  
      return wxString(SVG_MATERIAL_TWO_TONE_COLORIZE);
  if (id == wxART_COMMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMMENT);
  if (id == wxART_COMMENT_BANK)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMMENT_BANK);
  if (id == wxART_COMMENTS_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMMENTS_DISABLED);
  if (id == wxART_COMMIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMMIT);
  if (id == wxART_COMMUTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMMUTE);
  if (id == wxART_COMPARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMPARE);
  if (id == wxART_COMPARE_ARROWS)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMPARE_ARROWS);
  if (id == wxART_COMPASS_CALIBRATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMPASS_CALIBRATION);
  if (id == wxART_COMPOST)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMPOST);
  if (id == wxART_COMPRESS)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMPRESS);
  if (id == wxART_COMPUTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_COMPUTER);
  if (id == wxART_CONFIRMATION_NUMBER)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONFIRMATION_NUMBER);
  if (id == wxART_CONNECT_WITHOUT_CONTACT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONNECT_WITHOUT_CONTACT);
  if (id == wxART_CONNECTED_TV)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONNECTED_TV);
  if (id == wxART_CONNECTING_AIRPORTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONNECTING_AIRPORTS);
  if (id == wxART_CONSTRUCTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONSTRUCTION);
  if (id == wxART_CONTACT_EMERGENCY)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTACT_EMERGENCY);
  if (id == wxART_CONTACT_MAIL)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTACT_MAIL);
  if (id == wxART_CONTACT_PAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTACT_PAGE);
  if (id == wxART_CONTACT_PHONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTACT_PHONE);
  if (id == wxART_CONTACT_SUPPORT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTACT_SUPPORT);
  if (id == wxART_CONTACTLESS)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTACTLESS);
  if (id == wxART_CONTACTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTACTS);
  if (id == wxART_CONTENT_COPY)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTENT_COPY);
  if (id == wxART_CONTENT_CUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTENT_CUT);
  if (id == wxART_CONTENT_PASTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTENT_PASTE);
  if (id == wxART_CONTENT_PASTE_GO)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTENT_PASTE_GO);
  if (id == wxART_CONTENT_PASTE_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTENT_PASTE_OFF);
  if (id == wxART_CONTENT_PASTE_SEARCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTENT_PASTE_SEARCH);
  if (id == wxART_CONTRAST)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTRAST);
  if (id == wxART_CONTROL_CAMERA)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTROL_CAMERA);
  if (id == wxART_CONTROL_POINT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTROL_POINT);
  if (id == wxART_CONTROL_POINT_DUPLICATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CONTROL_POINT_DUPLICATE);
  if (id == wxART_COOKIE)  
      return wxString(SVG_MATERIAL_TWO_TONE_COOKIE);
  if (id == wxART_COPY_ALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_COPY_ALL);
  if (id == wxART_COPYRIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_COPYRIGHT);
  if (id == wxART_CORONAVIRUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_CORONAVIRUS);
  if (id == wxART_CORPORATE_FARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CORPORATE_FARE);
  if (id == wxART_COTTAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_COTTAGE);
  if (id == wxART_COUNTERTOPS)  
      return wxString(SVG_MATERIAL_TWO_TONE_COUNTERTOPS);
  if (id == wxART_CREATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CREATE);
  if (id == wxART_CREATE_NEW_FOLDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_CREATE_NEW_FOLDER);
  if (id == wxART_CREDIT_CARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_CREDIT_CARD);
  if (id == wxART_CREDIT_CARD_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_CREDIT_CARD_OFF);
  if (id == wxART_CREDIT_SCORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CREDIT_SCORE);
  if (id == wxART_CRIB)  
      return wxString(SVG_MATERIAL_TWO_TONE_CRIB);
  if (id == wxART_CRISIS_ALERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CRISIS_ALERT);
  if (id == wxART_CROP)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP);
  if (id == wxART_CROP_16_9)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_16_9);
  if (id == wxART_CROP_3_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_3_2);
  if (id == wxART_CROP_5_4)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_5_4);
  if (id == wxART_CROP_7_5)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_7_5);
  if (id == wxART_CROP_DIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_DIN);
  if (id == wxART_CROP_FREE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_FREE);
  if (id == wxART_CROP_LANDSCAPE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_LANDSCAPE);
  if (id == wxART_CROP_ORIGINAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_ORIGINAL);
  if (id == wxART_CROP_PORTRAIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_PORTRAIT);
  if (id == wxART_CROP_ROTATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_ROTATE);
  if (id == wxART_CROP_SQUARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CROP_SQUARE);
  if (id == wxART_CRUELTY_FREE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CRUELTY_FREE);
  if (id == wxART_CSS)  
      return wxString(SVG_MATERIAL_TWO_TONE_CSS);
  if (id == wxART_CURRENCY_BITCOIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURRENCY_BITCOIN);
  if (id == wxART_CURRENCY_EXCHANGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURRENCY_EXCHANGE);
  if (id == wxART_CURRENCY_FRANC)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURRENCY_FRANC);
  if (id == wxART_CURRENCY_LIRA)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURRENCY_LIRA);
  if (id == wxART_CURRENCY_POUND)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURRENCY_POUND);
  if (id == wxART_CURRENCY_RUBLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURRENCY_RUBLE);
  if (id == wxART_CURRENCY_RUPEE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURRENCY_RUPEE);
  if (id == wxART_CURRENCY_YEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURRENCY_YEN);
  if (id == wxART_CURRENCY_YUAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURRENCY_YUAN);
  if (id == wxART_CURTAINS)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURTAINS);
  if (id == wxART_CURTAINS_CLOSED)  
      return wxString(SVG_MATERIAL_TWO_TONE_CURTAINS_CLOSED);
  if (id == wxART_CYCLONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_CYCLONE);
  if (id == wxART_DANGEROUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_DANGEROUS);
  if (id == wxART_DARK_MODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DARK_MODE);
  if (id == wxART_DASHBOARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_DASHBOARD);
  if (id == wxART_DASHBOARD_CUSTOMIZE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DASHBOARD_CUSTOMIZE);
  if (id == wxART_DATA_ARRAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATA_ARRAY);
  if (id == wxART_DATA_EXPLORATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATA_EXPLORATION);
  if (id == wxART_DATA_OBJECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATA_OBJECT);
  if (id == wxART_DATA_SAVER_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATA_SAVER_OFF);
  if (id == wxART_DATA_SAVER_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATA_SAVER_ON);
  if (id == wxART_DATA_THRESHOLDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATA_THRESHOLDING);
  if (id == wxART_DATA_USAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATA_USAGE);
  if (id == wxART_DATASET)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATASET);
  if (id == wxART_DATASET_LINKED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATASET_LINKED);
  if (id == wxART_DATE_RANGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DATE_RANGE);
  if (id == wxART_DEBLUR)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEBLUR);
  if (id == wxART_DECK)  
      return wxString(SVG_MATERIAL_TWO_TONE_DECK);
  if (id == wxART_DEHAZE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEHAZE);
  if (id == wxART_DELETE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DELETE);
  if (id == wxART_DELETE_FOREVER)  
      return wxString(SVG_MATERIAL_TWO_TONE_DELETE_FOREVER);
  if (id == wxART_DELETE_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DELETE_OUTLINE);
  if (id == wxART_DELETE_SWEEP)  
      return wxString(SVG_MATERIAL_TWO_TONE_DELETE_SWEEP);
  if (id == wxART_DELIVERY_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_DELIVERY_DINING);
  if (id == wxART_DENSITY_LARGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DENSITY_LARGE);
  if (id == wxART_DENSITY_MEDIUM)  
      return wxString(SVG_MATERIAL_TWO_TONE_DENSITY_MEDIUM);
  if (id == wxART_DENSITY_SMALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_DENSITY_SMALL);
  if (id == wxART_DEPARTURE_BOARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEPARTURE_BOARD);
  if (id == wxART_DESCRIPTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_DESCRIPTION);
  if (id == wxART_DESELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DESELECT);
  if (id == wxART_DESIGN_SERVICES)  
      return wxString(SVG_MATERIAL_TWO_TONE_DESIGN_SERVICES);
  if (id == wxART_DESK)  
      return wxString(SVG_MATERIAL_TWO_TONE_DESK);
  if (id == wxART_DESKTOP_ACCESS_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DESKTOP_ACCESS_DISABLED);
  if (id == wxART_DESKTOP_MAC)  
      return wxString(SVG_MATERIAL_TWO_TONE_DESKTOP_MAC);
  if (id == wxART_DESKTOP_WINDOWS)  
      return wxString(SVG_MATERIAL_TWO_TONE_DESKTOP_WINDOWS);
  if (id == wxART_DETAILS)  
      return wxString(SVG_MATERIAL_TWO_TONE_DETAILS);
  if (id == wxART_DEVELOPER_BOARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEVELOPER_BOARD);
  if (id == wxART_DEVELOPER_BOARD_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEVELOPER_BOARD_OFF);
  if (id == wxART_DEVELOPER_MODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEVELOPER_MODE);
  if (id == wxART_DEVICE_HUB)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEVICE_HUB);
  if (id == wxART_DEVICE_THERMOSTAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEVICE_THERMOSTAT);
  if (id == wxART_DEVICE_UNKNOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEVICE_UNKNOWN);
  if (id == wxART_DEVICES)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEVICES);
  if (id == wxART_DEVICES_FOLD)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEVICES_FOLD);
  if (id == wxART_DEVICES_OTHER)  
      return wxString(SVG_MATERIAL_TWO_TONE_DEVICES_OTHER);
  if (id == wxART_DIALER_SIP)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIALER_SIP);
  if (id == wxART_DIALPAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIALPAD);
  if (id == wxART_DIAMOND)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIAMOND);
  if (id == wxART_DIFFERENCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIFFERENCE);
  if (id == wxART_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_DINING);
  if (id == wxART_DINNER_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_DINNER_DINING);
  if (id == wxART_DIRECTIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS);
  if (id == wxART_DIRECTIONS_BIKE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_BIKE);
  if (id == wxART_DIRECTIONS_BOAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_BOAT);
  if (id == wxART_DIRECTIONS_BOAT_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_BOAT_FILLED);
  if (id == wxART_DIRECTIONS_BUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_BUS);
  if (id == wxART_DIRECTIONS_BUS_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_BUS_FILLED);
  if (id == wxART_DIRECTIONS_CAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_CAR);
  if (id == wxART_DIRECTIONS_CAR_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_CAR_FILLED);
  if (id == wxART_DIRECTIONS_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_OFF);
  if (id == wxART_DIRECTIONS_RAILWAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_RAILWAY);
  if (id == wxART_DIRECTIONS_RAILWAY_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_RAILWAY_FILLED);
  if (id == wxART_DIRECTIONS_RUN)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_RUN);
  if (id == wxART_DIRECTIONS_SUBWAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_SUBWAY);
  if (id == wxART_DIRECTIONS_SUBWAY_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_SUBWAY_FILLED);
  if (id == wxART_DIRECTIONS_TRANSIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_TRANSIT);
  if (id == wxART_DIRECTIONS_TRANSIT_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_TRANSIT_FILLED);
  if (id == wxART_DIRECTIONS_WALK)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRECTIONS_WALK);
  if (id == wxART_DIRTY_LENS)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIRTY_LENS);
  if (id == wxART_DISABLED_BY_DEFAULT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DISABLED_BY_DEFAULT);
  if (id == wxART_DISABLED_VISIBLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DISABLED_VISIBLE);
  if (id == wxART_DISC_FULL)  
      return wxString(SVG_MATERIAL_TWO_TONE_DISC_FULL);
  if (id == wxART_DISCOUNT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DISCOUNT);
  if (id == wxART_DISPLAY_SETTINGS)  
      return wxString(SVG_MATERIAL_TWO_TONE_DISPLAY_SETTINGS);
  if (id == wxART_DIVERSITY_1)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIVERSITY_1);
  if (id == wxART_DIVERSITY_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIVERSITY_2);
  if (id == wxART_DIVERSITY_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_DIVERSITY_3);
  if (id == wxART_DNS)  
      return wxString(SVG_MATERIAL_TWO_TONE_DNS);
  if (id == wxART_DO_DISTURB)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_DISTURB);
  if (id == wxART_DO_DISTURB_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_DISTURB_ALT);
  if (id == wxART_DO_DISTURB_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_DISTURB_OFF);
  if (id == wxART_DO_DISTURB_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_DISTURB_ON);
  if (id == wxART_DO_NOT_DISTURB)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_NOT_DISTURB);
  if (id == wxART_DO_NOT_DISTURB_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_NOT_DISTURB_ALT);
  if (id == wxART_DO_NOT_DISTURB_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_NOT_DISTURB_OFF);
  if (id == wxART_DO_NOT_DISTURB_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_NOT_DISTURB_ON);
  if (id == wxART_DO_NOT_DISTURB_ON_TOTAL_SILENCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_NOT_DISTURB_ON_TOTAL_SILENCE);
  if (id == wxART_DO_NOT_STEP)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_NOT_STEP);
  if (id == wxART_DO_NOT_TOUCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_DO_NOT_TOUCH);
  if (id == wxART_DOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOCK);
  if (id == wxART_DOCUMENT_SCANNER)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOCUMENT_SCANNER);
  if (id == wxART_DOMAIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOMAIN);
  if (id == wxART_DOMAIN_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOMAIN_ADD);
  if (id == wxART_DOMAIN_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOMAIN_DISABLED);
  if (id == wxART_DOMAIN_VERIFICATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOMAIN_VERIFICATION);
  if (id == wxART_DONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DONE);
  if (id == wxART_DONE_ALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_DONE_ALL);
  if (id == wxART_DONE_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DONE_OUTLINE);
  if (id == wxART_DONUT_LARGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DONUT_LARGE);
  if (id == wxART_DONUT_SMALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_DONUT_SMALL);
  if (id == wxART_DOOR_BACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOOR_BACK);
  if (id == wxART_DOOR_FRONT)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOOR_FRONT);
  if (id == wxART_DOOR_SLIDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOOR_SLIDING);
  if (id == wxART_DOORBELL)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOORBELL);
  if (id == wxART_DOUBLE_ARROW)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOUBLE_ARROW);
  if (id == wxART_DOWNHILL_SKIING)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOWNHILL_SKIING);
  if (id == wxART_DOWNLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOWNLOAD);
  if (id == wxART_DOWNLOAD_DONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOWNLOAD_DONE);
  if (id == wxART_DOWNLOAD_FOR_OFFLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOWNLOAD_FOR_OFFLINE);
  if (id == wxART_DOWNLOADING)  
      return wxString(SVG_MATERIAL_TWO_TONE_DOWNLOADING);
  if (id == wxART_DRAFTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRAFTS);
  if (id == wxART_DRAG_HANDLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRAG_HANDLE);
  if (id == wxART_DRAG_INDICATOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRAG_INDICATOR);
  if (id == wxART_DRAW)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRAW);
  if (id == wxART_DRIVE_ETA)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRIVE_ETA);
  if (id == wxART_DRIVE_FILE_MOVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRIVE_FILE_MOVE);
  if (id == wxART_DRIVE_FILE_MOVE_RTL)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRIVE_FILE_MOVE_RTL);
  if (id == wxART_DRIVE_FILE_RENAME_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRIVE_FILE_RENAME_OUTLINE);
  if (id == wxART_DRIVE_FOLDER_UPLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRIVE_FOLDER_UPLOAD);
  if (id == wxART_DRY)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRY);
  if (id == wxART_DRY_CLEANING)  
      return wxString(SVG_MATERIAL_TWO_TONE_DRY_CLEANING);
  if (id == wxART_DUO)  
      return wxString(SVG_MATERIAL_TWO_TONE_DUO);
  if (id == wxART_DVR)  
      return wxString(SVG_MATERIAL_TWO_TONE_DVR);
  if (id == wxART_DYNAMIC_FEED)  
      return wxString(SVG_MATERIAL_TWO_TONE_DYNAMIC_FEED);
  if (id == wxART_DYNAMIC_FORM)  
      return wxString(SVG_MATERIAL_TWO_TONE_DYNAMIC_FORM);
  if (id == wxART_E_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_E_MOBILEDATA);
  if (id == wxART_EARBUDS)  
      return wxString(SVG_MATERIAL_TWO_TONE_EARBUDS);
  if (id == wxART_EARBUDS_BATTERY)  
      return wxString(SVG_MATERIAL_TWO_TONE_EARBUDS_BATTERY);
  if (id == wxART_EAST)  
      return wxString(SVG_MATERIAL_TWO_TONE_EAST);
  if (id == wxART_EDGESENSOR_HIGH)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDGESENSOR_HIGH);
  if (id == wxART_EDGESENSOR_LOW)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDGESENSOR_LOW);
  if (id == wxART_EDIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDIT);
  if (id == wxART_EDIT_ATTRIBUTES)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDIT_ATTRIBUTES);
  if (id == wxART_EDIT_CALENDAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDIT_CALENDAR);
  if (id == wxART_EDIT_LOCATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDIT_LOCATION);
  if (id == wxART_EDIT_LOCATION_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDIT_LOCATION_ALT);
  if (id == wxART_EDIT_NOTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDIT_NOTE);
  if (id == wxART_EDIT_NOTIFICATIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDIT_NOTIFICATIONS);
  if (id == wxART_EDIT_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDIT_OFF);
  if (id == wxART_EDIT_ROAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_EDIT_ROAD);
  if (id == wxART_EGG)  
      return wxString(SVG_MATERIAL_TWO_TONE_EGG);
  if (id == wxART_EGG_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_EGG_ALT);
  if (id == wxART_EJECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_EJECT);
  if (id == wxART_ELDERLY)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELDERLY);
  if (id == wxART_ELDERLY_WOMAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELDERLY_WOMAN);
  if (id == wxART_ELECTRIC_BIKE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELECTRIC_BIKE);
  if (id == wxART_ELECTRIC_BOLT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELECTRIC_BOLT);
  if (id == wxART_ELECTRIC_CAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELECTRIC_CAR);
  if (id == wxART_ELECTRIC_METER)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELECTRIC_METER);
  if (id == wxART_ELECTRIC_MOPED)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELECTRIC_MOPED);
  if (id == wxART_ELECTRIC_RICKSHAW)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELECTRIC_RICKSHAW);
  if (id == wxART_ELECTRIC_SCOOTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELECTRIC_SCOOTER);
  if (id == wxART_ELECTRICAL_SERVICES)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELECTRICAL_SERVICES);
  if (id == wxART_ELEVATOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_ELEVATOR);
  if (id == wxART_EMAIL)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMAIL);
  if (id == wxART_EMERGENCY)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMERGENCY);
  if (id == wxART_EMERGENCY_RECORDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMERGENCY_RECORDING);
  if (id == wxART_EMERGENCY_SHARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMERGENCY_SHARE);
  if (id == wxART_EMOJI_EMOTIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMOJI_EMOTIONS);
  if (id == wxART_EMOJI_EVENTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMOJI_EVENTS);
  if (id == wxART_EMOJI_FOOD_BEVERAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMOJI_FOOD_BEVERAGE);
  if (id == wxART_EMOJI_NATURE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMOJI_NATURE);
  if (id == wxART_EMOJI_OBJECTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMOJI_OBJECTS);
  if (id == wxART_EMOJI_PEOPLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMOJI_PEOPLE);
  if (id == wxART_EMOJI_SYMBOLS)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMOJI_SYMBOLS);
  if (id == wxART_EMOJI_TRANSPORTATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_EMOJI_TRANSPORTATION);
  if (id == wxART_ENERGY_SAVINGS_LEAF)  
      return wxString(SVG_MATERIAL_TWO_TONE_ENERGY_SAVINGS_LEAF);
  if (id == wxART_ENGINEERING)  
      return wxString(SVG_MATERIAL_TWO_TONE_ENGINEERING);
  if (id == wxART_ENHANCED_ENCRYPTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_ENHANCED_ENCRYPTION);
  if (id == wxART_EQUALIZER)  
      return wxString(SVG_MATERIAL_TWO_TONE_EQUALIZER);
  if (id == wxART_ERROR)  
      return wxString(SVG_MATERIAL_TWO_TONE_ERROR);
  if (id == wxART_ERROR_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ERROR_OUTLINE);
  if (id == wxART_ESCALATOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_ESCALATOR);
  if (id == wxART_ESCALATOR_WARNING)  
      return wxString(SVG_MATERIAL_TWO_TONE_ESCALATOR_WARNING);
  if (id == wxART_EURO)  
      return wxString(SVG_MATERIAL_TWO_TONE_EURO);
  if (id == wxART_EURO_SYMBOL)  
      return wxString(SVG_MATERIAL_TWO_TONE_EURO_SYMBOL);
  if (id == wxART_EV_STATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_EV_STATION);
  if (id == wxART_EVENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_EVENT);
  if (id == wxART_EVENT_AVAILABLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EVENT_AVAILABLE);
  if (id == wxART_EVENT_BUSY)  
      return wxString(SVG_MATERIAL_TWO_TONE_EVENT_BUSY);
  if (id == wxART_EVENT_NOTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EVENT_NOTE);
  if (id == wxART_EVENT_REPEAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_EVENT_REPEAT);
  if (id == wxART_EVENT_SEAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_EVENT_SEAT);
  if (id == wxART_EXIT_TO_APP)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXIT_TO_APP);
  if (id == wxART_EXPAND)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPAND);
  if (id == wxART_EXPAND_CIRCLE_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPAND_CIRCLE_DOWN);
  if (id == wxART_EXPAND_LESS)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPAND_LESS);
  if (id == wxART_EXPAND_MORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPAND_MORE);
  if (id == wxART_EXPLICIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPLICIT);
  if (id == wxART_EXPLORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPLORE);
  if (id == wxART_EXPLORE_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPLORE_OFF);
  if (id == wxART_EXPOSURE)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPOSURE);
  if (id == wxART_EXPOSURE_NEG_1)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPOSURE_NEG_1);
  if (id == wxART_EXPOSURE_NEG_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPOSURE_NEG_2);
  if (id == wxART_EXPOSURE_PLUS_1)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPOSURE_PLUS_1);
  if (id == wxART_EXPOSURE_PLUS_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPOSURE_PLUS_2);
  if (id == wxART_EXPOSURE_ZERO)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXPOSURE_ZERO);
  if (id == wxART_EXTENSION)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXTENSION);
  if (id == wxART_EXTENSION_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_EXTENSION_OFF);
  if (id == wxART_FACE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACE);
  if (id == wxART_FACE_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACE_2);
  if (id == wxART_FACE_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACE_3);
  if (id == wxART_FACE_4)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACE_4);
  if (id == wxART_FACE_5)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACE_5);
  if (id == wxART_FACE_6)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACE_6);
  if (id == wxART_FACE_RETOUCHING_NATURAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACE_RETOUCHING_NATURAL);
  if (id == wxART_FACE_RETOUCHING_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACE_RETOUCHING_OFF);
  if (id == wxART_FACT_CHECK)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACT_CHECK);
  if (id == wxART_FACTORY)  
      return wxString(SVG_MATERIAL_TWO_TONE_FACTORY);
  if (id == wxART_FAMILY_RESTROOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_FAMILY_RESTROOM);
  if (id == wxART_FAST_FORWARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FAST_FORWARD);
  if (id == wxART_FAST_REWIND)  
      return wxString(SVG_MATERIAL_TWO_TONE_FAST_REWIND);
  if (id == wxART_FASTFOOD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FASTFOOD);
  if (id == wxART_FAVORITE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FAVORITE);
  if (id == wxART_FAVORITE_BORDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_FAVORITE_BORDER);
  if (id == wxART_FAX)  
      return wxString(SVG_MATERIAL_TWO_TONE_FAX);
  if (id == wxART_FEATURED_PLAY_LIST)  
      return wxString(SVG_MATERIAL_TWO_TONE_FEATURED_PLAY_LIST);
  if (id == wxART_FEATURED_VIDEO)  
      return wxString(SVG_MATERIAL_TWO_TONE_FEATURED_VIDEO);
  if (id == wxART_FEED)  
      return wxString(SVG_MATERIAL_TWO_TONE_FEED);
  if (id == wxART_FEEDBACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_FEEDBACK);
  if (id == wxART_FEMALE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FEMALE);
  if (id == wxART_FENCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FENCE);
  if (id == wxART_FESTIVAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_FESTIVAL);
  if (id == wxART_FIBER_DVR)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIBER_DVR);
  if (id == wxART_FIBER_MANUAL_RECORD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIBER_MANUAL_RECORD);
  if (id == wxART_FIBER_NEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIBER_NEW);
  if (id == wxART_FIBER_PIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIBER_PIN);
  if (id == wxART_FIBER_SMART_RECORD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIBER_SMART_RECORD);
  if (id == wxART_FILE_COPY)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILE_COPY);
  if (id == wxART_FILE_DOWNLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILE_DOWNLOAD);
  if (id == wxART_FILE_DOWNLOAD_DONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILE_DOWNLOAD_DONE);
  if (id == wxART_FILE_DOWNLOAD_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILE_DOWNLOAD_OFF);
  if (id == wxART_FILE_OPEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILE_OPEN);
  if (id == wxART_FILE_PRESENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILE_PRESENT);
  if (id == wxART_FILE_UPLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILE_UPLOAD);
  if (id == wxART_FILTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER);
  if (id == wxART_FILTER_1)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_1);
  if (id == wxART_FILTER_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_2);
  if (id == wxART_FILTER_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_3);
  if (id == wxART_FILTER_4)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_4);
  if (id == wxART_FILTER_5)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_5);
  if (id == wxART_FILTER_6)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_6);
  if (id == wxART_FILTER_7)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_7);
  if (id == wxART_FILTER_8)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_8);
  if (id == wxART_FILTER_9)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_9);
  if (id == wxART_FILTER_9_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_9_PLUS);
  if (id == wxART_FILTER_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_ALT);
  if (id == wxART_FILTER_ALT_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_ALT_OFF);
  if (id == wxART_FILTER_B_AND_W)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_B_AND_W);
  if (id == wxART_FILTER_CENTER_FOCUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_CENTER_FOCUS);
  if (id == wxART_FILTER_DRAMA)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_DRAMA);
  if (id == wxART_FILTER_FRAMES)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_FRAMES);
  if (id == wxART_FILTER_HDR)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_HDR);
  if (id == wxART_FILTER_LIST)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_LIST);
  if (id == wxART_FILTER_LIST_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_LIST_OFF);
  if (id == wxART_FILTER_NONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_NONE);
  if (id == wxART_FILTER_TILT_SHIFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_TILT_SHIFT);
  if (id == wxART_FILTER_VINTAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FILTER_VINTAGE);
  if (id == wxART_FIND_IN_PAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIND_IN_PAGE);
  if (id == wxART_FIND_REPLACE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIND_REPLACE);
  if (id == wxART_FINGERPRINT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FINGERPRINT);
  if (id == wxART_FIRE_EXTINGUISHER)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIRE_EXTINGUISHER);
  if (id == wxART_FIRE_HYDRANT_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIRE_HYDRANT_ALT);
  if (id == wxART_FIRE_TRUCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIRE_TRUCK);
  if (id == wxART_FIREPLACE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIREPLACE);
  if (id == wxART_FIRST_PAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIRST_PAGE);
  if (id == wxART_FIT_SCREEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_FIT_SCREEN);
  if (id == wxART_FITBIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FITBIT);
  if (id == wxART_FITNESS_CENTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_FITNESS_CENTER);
  if (id == wxART_FLAG)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLAG);
  if (id == wxART_FLAG_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLAG_CIRCLE);
  if (id == wxART_FLAKY)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLAKY);
  if (id == wxART_FLARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLARE);
  if (id == wxART_FLASH_AUTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLASH_AUTO);
  if (id == wxART_FLASH_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLASH_OFF);
  if (id == wxART_FLASH_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLASH_ON);
  if (id == wxART_FLASHLIGHT_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLASHLIGHT_OFF);
  if (id == wxART_FLASHLIGHT_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLASHLIGHT_ON);
  if (id == wxART_FLATWARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLATWARE);
  if (id == wxART_FLIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLIGHT);
  if (id == wxART_FLIGHT_CLASS)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLIGHT_CLASS);
  if (id == wxART_FLIGHT_LAND)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLIGHT_LAND);
  if (id == wxART_FLIGHT_TAKEOFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLIGHT_TAKEOFF);
  if (id == wxART_FLIP)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLIP);
  if (id == wxART_FLIP_CAMERA_ANDROID)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLIP_CAMERA_ANDROID);
  if (id == wxART_FLIP_CAMERA_IOS)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLIP_CAMERA_IOS);
  if (id == wxART_FLIP_TO_BACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLIP_TO_BACK);
  if (id == wxART_FLIP_TO_FRONT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLIP_TO_FRONT);
  if (id == wxART_FLOOD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLOOD);
  if (id == wxART_FLUORESCENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLUORESCENT);
  if (id == wxART_FLUTTER_DASH)  
      return wxString(SVG_MATERIAL_TWO_TONE_FLUTTER_DASH);
  if (id == wxART_FMD_BAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FMD_BAD);
  if (id == wxART_FMD_GOOD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FMD_GOOD);
  if (id == wxART_FOLDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOLDER);
  if (id == wxART_FOLDER_COPY)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOLDER_COPY);
  if (id == wxART_FOLDER_DELETE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOLDER_DELETE);
  if (id == wxART_FOLDER_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOLDER_OFF);
  if (id == wxART_FOLDER_OPEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOLDER_OPEN);
  if (id == wxART_FOLDER_SHARED)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOLDER_SHARED);
  if (id == wxART_FOLDER_SPECIAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOLDER_SPECIAL);
  if (id == wxART_FOLDER_ZIP)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOLDER_ZIP);
  if (id == wxART_FOLLOW_THE_SIGNS)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOLLOW_THE_SIGNS);
  if (id == wxART_FONT_DOWNLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FONT_DOWNLOAD);
  if (id == wxART_FONT_DOWNLOAD_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_FONT_DOWNLOAD_OFF);
  if (id == wxART_FOOD_BANK)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOOD_BANK);
  if (id == wxART_FOREST)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOREST);
  if (id == wxART_FORK_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORK_LEFT);
  if (id == wxART_FORK_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORK_RIGHT);
  if (id == wxART_FORMAT_ALIGN_CENTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_ALIGN_CENTER);
  if (id == wxART_FORMAT_ALIGN_JUSTIFY)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_ALIGN_JUSTIFY);
  if (id == wxART_FORMAT_ALIGN_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_ALIGN_LEFT);
  if (id == wxART_FORMAT_ALIGN_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_ALIGN_RIGHT);
  if (id == wxART_FORMAT_BOLD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_BOLD);
  if (id == wxART_FORMAT_CLEAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_CLEAR);
  if (id == wxART_FORMAT_COLOR_FILL)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_COLOR_FILL);
  if (id == wxART_FORMAT_COLOR_RESET)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_COLOR_RESET);
  if (id == wxART_FORMAT_COLOR_TEXT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_COLOR_TEXT);
  if (id == wxART_FORMAT_INDENT_DECREASE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_INDENT_DECREASE);
  if (id == wxART_FORMAT_INDENT_INCREASE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_INDENT_INCREASE);
  if (id == wxART_FORMAT_ITALIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_ITALIC);
  if (id == wxART_FORMAT_LINE_SPACING)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_LINE_SPACING);
  if (id == wxART_FORMAT_LIST_BULLETED)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_LIST_BULLETED);
  if (id == wxART_FORMAT_LIST_NUMBERED)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_LIST_NUMBERED);
  if (id == wxART_FORMAT_LIST_NUMBERED_RTL)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_LIST_NUMBERED_RTL);
  if (id == wxART_FORMAT_OVERLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_OVERLINE);
  if (id == wxART_FORMAT_PAINT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_PAINT);
  if (id == wxART_FORMAT_QUOTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_QUOTE);
  if (id == wxART_FORMAT_SHAPES)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_SHAPES);
  if (id == wxART_FORMAT_SIZE)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_SIZE);
  if (id == wxART_FORMAT_STRIKETHROUGH)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_STRIKETHROUGH);
  if (id == wxART_FORMAT_TEXTDIRECTION_L_TO_R)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_TEXTDIRECTION_L_TO_R);
  if (id == wxART_FORMAT_TEXTDIRECTION_R_TO_L)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_TEXTDIRECTION_R_TO_L);
  if (id == wxART_FORMAT_UNDERLINED)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORMAT_UNDERLINED);
  if (id == wxART_FORUM)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORUM);
  if (id == wxART_FORWARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORWARD);
  if (id == wxART_FORWARD_10)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORWARD_10);
  if (id == wxART_FORWARD_30)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORWARD_30);
  if (id == wxART_FORWARD_5)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORWARD_5);
  if (id == wxART_FORWARD_TO_INBOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_FORWARD_TO_INBOX);
  if (id == wxART_FOUNDATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_FOUNDATION);
  if (id == wxART_FREE_BREAKFAST)  
      return wxString(SVG_MATERIAL_TWO_TONE_FREE_BREAKFAST);
  if (id == wxART_FREE_CANCELLATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_FREE_CANCELLATION);
  if (id == wxART_FRONT_HAND)  
      return wxString(SVG_MATERIAL_TWO_TONE_FRONT_HAND);
  if (id == wxART_FULLSCREEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_FULLSCREEN);
  if (id == wxART_FULLSCREEN_EXIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_FULLSCREEN_EXIT);
  if (id == wxART_FUNCTIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_FUNCTIONS);
  if (id == wxART_G_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_G_MOBILEDATA);
  if (id == wxART_G_TRANSLATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_G_TRANSLATE);
  if (id == wxART_GAMEPAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_GAMEPAD);
  if (id == wxART_GAMES)  
      return wxString(SVG_MATERIAL_TWO_TONE_GAMES);
  if (id == wxART_GARAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_GARAGE);
  if (id == wxART_GAS_METER)  
      return wxString(SVG_MATERIAL_TWO_TONE_GAS_METER);
  if (id == wxART_GAVEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_GAVEL);
  if (id == wxART_GENERATING_TOKENS)  
      return wxString(SVG_MATERIAL_TWO_TONE_GENERATING_TOKENS);
  if (id == wxART_GESTURE)  
      return wxString(SVG_MATERIAL_TWO_TONE_GESTURE);
  if (id == wxART_GET_APP)  
      return wxString(SVG_MATERIAL_TWO_TONE_GET_APP);
  if (id == wxART_GIF)  
      return wxString(SVG_MATERIAL_TWO_TONE_GIF);
  if (id == wxART_GIF_BOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_GIF_BOX);
  if (id == wxART_GIRL)  
      return wxString(SVG_MATERIAL_TWO_TONE_GIRL);
  if (id == wxART_GITE)  
      return wxString(SVG_MATERIAL_TWO_TONE_GITE);
  if (id == wxART_GOLF_COURSE)  
      return wxString(SVG_MATERIAL_TWO_TONE_GOLF_COURSE);
  if (id == wxART_GPP_BAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_GPP_BAD);
  if (id == wxART_GPP_GOOD)  
      return wxString(SVG_MATERIAL_TWO_TONE_GPP_GOOD);
  if (id == wxART_GPP_MAYBE)  
      return wxString(SVG_MATERIAL_TWO_TONE_GPP_MAYBE);
  if (id == wxART_GPS_FIXED)  
      return wxString(SVG_MATERIAL_TWO_TONE_GPS_FIXED);
  if (id == wxART_GPS_NOT_FIXED)  
      return wxString(SVG_MATERIAL_TWO_TONE_GPS_NOT_FIXED);
  if (id == wxART_GPS_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_GPS_OFF);
  if (id == wxART_GRADE)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRADE);
  if (id == wxART_GRADIENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRADIENT);
  if (id == wxART_GRADING)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRADING);
  if (id == wxART_GRAIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRAIN);
  if (id == wxART_GRAPHIC_EQ)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRAPHIC_EQ);
  if (id == wxART_GRASS)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRASS);
  if (id == wxART_GRID_3X3)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRID_3X3);
  if (id == wxART_GRID_4X4)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRID_4X4);
  if (id == wxART_GRID_GOLDENRATIO)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRID_GOLDENRATIO);
  if (id == wxART_GRID_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRID_OFF);
  if (id == wxART_GRID_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRID_ON);
  if (id == wxART_GRID_VIEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_GRID_VIEW);
  if (id == wxART_GROUP)  
      return wxString(SVG_MATERIAL_TWO_TONE_GROUP);
  if (id == wxART_GROUP_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_GROUP_ADD);
  if (id == wxART_GROUP_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_GROUP_OFF);
  if (id == wxART_GROUP_REMOVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_GROUP_REMOVE);
  if (id == wxART_GROUP_WORK)  
      return wxString(SVG_MATERIAL_TWO_TONE_GROUP_WORK);
  if (id == wxART_GROUPS)  
      return wxString(SVG_MATERIAL_TWO_TONE_GROUPS);
  if (id == wxART_GROUPS_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_GROUPS_2);
  if (id == wxART_GROUPS_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_GROUPS_3);
  if (id == wxART_H_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_H_MOBILEDATA);
  if (id == wxART_H_PLUS_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_H_PLUS_MOBILEDATA);
  if (id == wxART_HAIL)  
      return wxString(SVG_MATERIAL_TWO_TONE_HAIL);
  if (id == wxART_HANDSHAKE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HANDSHAKE);
  if (id == wxART_HANDYMAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_HANDYMAN);
  if (id == wxART_HARDWARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HARDWARE);
  if (id == wxART_HD)  
      return wxString(SVG_MATERIAL_TWO_TONE_HD);
  if (id == wxART_HDR_AUTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_AUTO);
  if (id == wxART_HDR_AUTO_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_AUTO_SELECT);
  if (id == wxART_HDR_ENHANCED_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_ENHANCED_SELECT);
  if (id == wxART_HDR_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_OFF);
  if (id == wxART_HDR_OFF_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_OFF_SELECT);
  if (id == wxART_HDR_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_ON);
  if (id == wxART_HDR_ON_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_ON_SELECT);
  if (id == wxART_HDR_PLUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_PLUS);
  if (id == wxART_HDR_STRONG)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_STRONG);
  if (id == wxART_HDR_WEAK)  
      return wxString(SVG_MATERIAL_TWO_TONE_HDR_WEAK);
  if (id == wxART_HEADPHONES)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEADPHONES);
  if (id == wxART_HEADPHONES_BATTERY)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEADPHONES_BATTERY);
  if (id == wxART_HEADSET)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEADSET);
  if (id == wxART_HEADSET_MIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEADSET_MIC);
  if (id == wxART_HEADSET_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEADSET_OFF);
  if (id == wxART_HEALING)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEALING);
  if (id == wxART_HEALTH_AND_SAFETY)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEALTH_AND_SAFETY);
  if (id == wxART_HEARING)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEARING);
  if (id == wxART_HEARING_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEARING_DISABLED);
  if (id == wxART_HEART_BROKEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEART_BROKEN);
  if (id == wxART_HEAT_PUMP)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEAT_PUMP);
  if (id == wxART_HEIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEIGHT);
  if (id == wxART_HELP)  
      return wxString(SVG_MATERIAL_TWO_TONE_HELP);
  if (id == wxART_HELP_CENTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_HELP_CENTER);
  if (id == wxART_HELP_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HELP_OUTLINE);
  if (id == wxART_HEVC)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEVC);
  if (id == wxART_HEXAGON)  
      return wxString(SVG_MATERIAL_TWO_TONE_HEXAGON);
  if (id == wxART_HIDE_IMAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HIDE_IMAGE);
  if (id == wxART_HIDE_SOURCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HIDE_SOURCE);
  if (id == wxART_HIGH_QUALITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_HIGH_QUALITY);
  if (id == wxART_HIGHLIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_HIGHLIGHT);
  if (id == wxART_HIGHLIGHT_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_HIGHLIGHT_ALT);
  if (id == wxART_HIGHLIGHT_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_HIGHLIGHT_OFF);
  if (id == wxART_HIKING)  
      return wxString(SVG_MATERIAL_TWO_TONE_HIKING);
  if (id == wxART_HISTORY)  
      return wxString(SVG_MATERIAL_TWO_TONE_HISTORY);
  if (id == wxART_HISTORY_EDU)  
      return wxString(SVG_MATERIAL_TWO_TONE_HISTORY_EDU);
  if (id == wxART_HISTORY_TOGGLE_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_HISTORY_TOGGLE_OFF);
  if (id == wxART_HIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HIVE);
  if (id == wxART_HLS)  
      return wxString(SVG_MATERIAL_TWO_TONE_HLS);
  if (id == wxART_HLS_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_HLS_OFF);
  if (id == wxART_HOLIDAY_VILLAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOLIDAY_VILLAGE);
  if (id == wxART_HOME)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOME);
  if (id == wxART_HOME_MAX)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOME_MAX);
  if (id == wxART_HOME_MINI)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOME_MINI);
  if (id == wxART_HOME_REPAIR_SERVICE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOME_REPAIR_SERVICE);
  if (id == wxART_HOME_WORK)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOME_WORK);
  if (id == wxART_HORIZONTAL_DISTRIBUTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HORIZONTAL_DISTRIBUTE);
  if (id == wxART_HORIZONTAL_RULE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HORIZONTAL_RULE);
  if (id == wxART_HORIZONTAL_SPLIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_HORIZONTAL_SPLIT);
  if (id == wxART_HOT_TUB)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOT_TUB);
  if (id == wxART_HOTEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOTEL);
  if (id == wxART_HOTEL_CLASS)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOTEL_CLASS);
  if (id == wxART_HOURGLASS_BOTTOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOURGLASS_BOTTOM);
  if (id == wxART_HOURGLASS_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOURGLASS_DISABLED);
  if (id == wxART_HOURGLASS_EMPTY)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOURGLASS_EMPTY);
  if (id == wxART_HOURGLASS_FULL)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOURGLASS_FULL);
  if (id == wxART_HOURGLASS_TOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOURGLASS_TOP);
  if (id == wxART_HOUSE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOUSE);
  if (id == wxART_HOUSE_SIDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOUSE_SIDING);
  if (id == wxART_HOUSEBOAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOUSEBOAT);
  if (id == wxART_HOW_TO_REG)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOW_TO_REG);
  if (id == wxART_HOW_TO_VOTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_HOW_TO_VOTE);
  if (id == wxART_HTML)  
      return wxString(SVG_MATERIAL_TWO_TONE_HTML);
  if (id == wxART_HTTP)  
      return wxString(SVG_MATERIAL_TWO_TONE_HTTP);
  if (id == wxART_HTTPS)  
      return wxString(SVG_MATERIAL_TWO_TONE_HTTPS);
  if (id == wxART_HUB)  
      return wxString(SVG_MATERIAL_TWO_TONE_HUB);
  if (id == wxART_HVAC)  
      return wxString(SVG_MATERIAL_TWO_TONE_HVAC);
  if (id == wxART_ICE_SKATING)  
      return wxString(SVG_MATERIAL_TWO_TONE_ICE_SKATING);
  if (id == wxART_ICECREAM)  
      return wxString(SVG_MATERIAL_TWO_TONE_ICECREAM);
  if (id == wxART_IMAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_IMAGE);
  if (id == wxART_IMAGE_ASPECT_RATIO)  
      return wxString(SVG_MATERIAL_TWO_TONE_IMAGE_ASPECT_RATIO);
  if (id == wxART_IMAGE_NOT_SUPPORTED)  
      return wxString(SVG_MATERIAL_TWO_TONE_IMAGE_NOT_SUPPORTED);
  if (id == wxART_IMAGE_SEARCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_IMAGE_SEARCH);
  if (id == wxART_IMAGESEARCH_ROLLER)  
      return wxString(SVG_MATERIAL_TWO_TONE_IMAGESEARCH_ROLLER);
  if (id == wxART_IMPORT_CONTACTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_IMPORT_CONTACTS);
  if (id == wxART_IMPORT_EXPORT)  
      return wxString(SVG_MATERIAL_TWO_TONE_IMPORT_EXPORT);
  if (id == wxART_IMPORTANT_DEVICES)  
      return wxString(SVG_MATERIAL_TWO_TONE_IMPORTANT_DEVICES);
  if (id == wxART_INBOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_INBOX);
  if (id == wxART_INCOMPLETE_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_INCOMPLETE_CIRCLE);
  if (id == wxART_INDETERMINATE_CHECK_BOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_INDETERMINATE_CHECK_BOX);
  if (id == wxART_INFO)  
      return wxString(SVG_MATERIAL_TWO_TONE_INFO);
  if (id == wxART_INPUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_INPUT);
  if (id == wxART_INSERT_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSERT_CHART);
  if (id == wxART_INSERT_CHART_OUTLINED)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSERT_CHART_OUTLINED);
  if (id == wxART_INSERT_COMMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSERT_COMMENT);
  if (id == wxART_INSERT_DRIVE_FILE)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSERT_DRIVE_FILE);
  if (id == wxART_INSERT_EMOTICON)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSERT_EMOTICON);
  if (id == wxART_INSERT_INVITATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSERT_INVITATION);
  if (id == wxART_INSERT_LINK)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSERT_LINK);
  if (id == wxART_INSERT_PAGE_BREAK)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSERT_PAGE_BREAK);
  if (id == wxART_INSERT_PHOTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSERT_PHOTO);
  if (id == wxART_INSIGHTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSIGHTS);
  if (id == wxART_INSTALL_DESKTOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSTALL_DESKTOP);
  if (id == wxART_INSTALL_MOBILE)  
      return wxString(SVG_MATERIAL_TWO_TONE_INSTALL_MOBILE);
  if (id == wxART_INTEGRATION_INSTRUCTIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_INTEGRATION_INSTRUCTIONS);
  if (id == wxART_INTERESTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_INTERESTS);
  if (id == wxART_INTERPRETER_MODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_INTERPRETER_MODE);
  if (id == wxART_INVENTORY)  
      return wxString(SVG_MATERIAL_TWO_TONE_INVENTORY);
  if (id == wxART_INVENTORY_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_INVENTORY_2);
  if (id == wxART_INVERT_COLORS)  
      return wxString(SVG_MATERIAL_TWO_TONE_INVERT_COLORS);
  if (id == wxART_INVERT_COLORS_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_INVERT_COLORS_OFF);
  if (id == wxART_IOS_SHARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_IOS_SHARE);
  if (id == wxART_IRON)  
      return wxString(SVG_MATERIAL_TWO_TONE_IRON);
  if (id == wxART_ISO)  
      return wxString(SVG_MATERIAL_TWO_TONE_ISO);
  if (id == wxART_JAVASCRIPT)  
      return wxString(SVG_MATERIAL_TWO_TONE_JAVASCRIPT);
  if (id == wxART_JOIN_FULL)  
      return wxString(SVG_MATERIAL_TWO_TONE_JOIN_FULL);
  if (id == wxART_JOIN_INNER)  
      return wxString(SVG_MATERIAL_TWO_TONE_JOIN_INNER);
  if (id == wxART_JOIN_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_JOIN_LEFT);
  if (id == wxART_JOIN_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_JOIN_RIGHT);
  if (id == wxART_KAYAKING)  
      return wxString(SVG_MATERIAL_TWO_TONE_KAYAKING);
  if (id == wxART_KEBAB_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEBAB_DINING);
  if (id == wxART_KEY)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEY);
  if (id == wxART_KEY_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEY_OFF);
  if (id == wxART_KEYBOARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD);
  if (id == wxART_KEYBOARD_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_ALT);
  if (id == wxART_KEYBOARD_ARROW_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_ARROW_DOWN);
  if (id == wxART_KEYBOARD_ARROW_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_ARROW_LEFT);
  if (id == wxART_KEYBOARD_ARROW_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_ARROW_RIGHT);
  if (id == wxART_KEYBOARD_ARROW_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_ARROW_UP);
  if (id == wxART_KEYBOARD_BACKSPACE)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_BACKSPACE);
  if (id == wxART_KEYBOARD_CAPSLOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_CAPSLOCK);
  if (id == wxART_KEYBOARD_COMMAND_KEY)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_COMMAND_KEY);
  if (id == wxART_KEYBOARD_CONTROL_KEY)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_CONTROL_KEY);
  if (id == wxART_KEYBOARD_DOUBLE_ARROW_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_DOUBLE_ARROW_DOWN);
  if (id == wxART_KEYBOARD_DOUBLE_ARROW_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_DOUBLE_ARROW_LEFT);
  if (id == wxART_KEYBOARD_DOUBLE_ARROW_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_DOUBLE_ARROW_RIGHT);
  if (id == wxART_KEYBOARD_DOUBLE_ARROW_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_DOUBLE_ARROW_UP);
  if (id == wxART_KEYBOARD_HIDE)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_HIDE);
  if (id == wxART_KEYBOARD_OPTION_KEY)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_OPTION_KEY);
  if (id == wxART_KEYBOARD_RETURN)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_RETURN);
  if (id == wxART_KEYBOARD_TAB)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_TAB);
  if (id == wxART_KEYBOARD_VOICE)  
      return wxString(SVG_MATERIAL_TWO_TONE_KEYBOARD_VOICE);
  if (id == wxART_KING_BED)  
      return wxString(SVG_MATERIAL_TWO_TONE_KING_BED);
  if (id == wxART_KITCHEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_KITCHEN);
  if (id == wxART_KITESURFING)  
      return wxString(SVG_MATERIAL_TWO_TONE_KITESURFING);
  if (id == wxART_LABEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_LABEL);
  if (id == wxART_LABEL_IMPORTANT)  
      return wxString(SVG_MATERIAL_TWO_TONE_LABEL_IMPORTANT);
  if (id == wxART_LABEL_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_LABEL_OFF);
  if (id == wxART_LAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_LAN);
  if (id == wxART_LANDSCAPE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LANDSCAPE);
  if (id == wxART_LANDSLIDE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LANDSLIDE);
  if (id == wxART_LANGUAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LANGUAGE);
  if (id == wxART_LAPTOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_LAPTOP);
  if (id == wxART_LAPTOP_CHROMEBOOK)  
      return wxString(SVG_MATERIAL_TWO_TONE_LAPTOP_CHROMEBOOK);
  if (id == wxART_LAPTOP_MAC)  
      return wxString(SVG_MATERIAL_TWO_TONE_LAPTOP_MAC);
  if (id == wxART_LAPTOP_WINDOWS)  
      return wxString(SVG_MATERIAL_TWO_TONE_LAPTOP_WINDOWS);
  if (id == wxART_LAST_PAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LAST_PAGE);
  if (id == wxART_LAUNCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_LAUNCH);
  if (id == wxART_LAYERS)  
      return wxString(SVG_MATERIAL_TWO_TONE_LAYERS);
  if (id == wxART_LAYERS_CLEAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_LAYERS_CLEAR);
  if (id == wxART_LEADERBOARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_LEADERBOARD);
  if (id == wxART_LEAK_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_LEAK_ADD);
  if (id == wxART_LEAK_REMOVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LEAK_REMOVE);
  if (id == wxART_LEGEND_TOGGLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LEGEND_TOGGLE);
  if (id == wxART_LENS)  
      return wxString(SVG_MATERIAL_TWO_TONE_LENS);
  if (id == wxART_LENS_BLUR)  
      return wxString(SVG_MATERIAL_TWO_TONE_LENS_BLUR);
  if (id == wxART_LIBRARY_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIBRARY_ADD);
  if (id == wxART_LIBRARY_ADD_CHECK)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIBRARY_ADD_CHECK);
  if (id == wxART_LIBRARY_BOOKS)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIBRARY_BOOKS);
  if (id == wxART_LIBRARY_MUSIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIBRARY_MUSIC);
  if (id == wxART_LIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIGHT);
  if (id == wxART_LIGHT_MODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIGHT_MODE);
  if (id == wxART_LIGHTBULB)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIGHTBULB);
  if (id == wxART_LIGHTBULB_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIGHTBULB_CIRCLE);
  if (id == wxART_LINE_AXIS)  
      return wxString(SVG_MATERIAL_TWO_TONE_LINE_AXIS);
  if (id == wxART_LINE_STYLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LINE_STYLE);
  if (id == wxART_LINE_WEIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_LINE_WEIGHT);
  if (id == wxART_LINEAR_SCALE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LINEAR_SCALE);
  if (id == wxART_LINK)  
      return wxString(SVG_MATERIAL_TWO_TONE_LINK);
  if (id == wxART_LINK_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_LINK_OFF);
  if (id == wxART_LINKED_CAMERA)  
      return wxString(SVG_MATERIAL_TWO_TONE_LINKED_CAMERA);
  if (id == wxART_LIQUOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIQUOR);
  if (id == wxART_LIST)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIST);
  if (id == wxART_LIST_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIST_ALT);
  if (id == wxART_LIVE_HELP)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIVE_HELP);
  if (id == wxART_LIVE_TV)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIVE_TV);
  if (id == wxART_LIVING)  
      return wxString(SVG_MATERIAL_TWO_TONE_LIVING);
  if (id == wxART_LOCAL_ACTIVITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_ACTIVITY);
  if (id == wxART_LOCAL_AIRPORT)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_AIRPORT);
  if (id == wxART_LOCAL_ATM)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_ATM);
  if (id == wxART_LOCAL_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_BAR);
  if (id == wxART_LOCAL_CAFE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_CAFE);
  if (id == wxART_LOCAL_CAR_WASH)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_CAR_WASH);
  if (id == wxART_LOCAL_CONVENIENCE_STORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_CONVENIENCE_STORE);
  if (id == wxART_LOCAL_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_DINING);
  if (id == wxART_LOCAL_DRINK)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_DRINK);
  if (id == wxART_LOCAL_FIRE_DEPARTMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_FIRE_DEPARTMENT);
  if (id == wxART_LOCAL_FLORIST)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_FLORIST);
  if (id == wxART_LOCAL_GAS_STATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_GAS_STATION);
  if (id == wxART_LOCAL_GROCERY_STORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_GROCERY_STORE);
  if (id == wxART_LOCAL_HOSPITAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_HOSPITAL);
  if (id == wxART_LOCAL_HOTEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_HOTEL);
  if (id == wxART_LOCAL_LAUNDRY_SERVICE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_LAUNDRY_SERVICE);
  if (id == wxART_LOCAL_LIBRARY)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_LIBRARY);
  if (id == wxART_LOCAL_MALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_MALL);
  if (id == wxART_LOCAL_MOVIES)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_MOVIES);
  if (id == wxART_LOCAL_OFFER)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_OFFER);
  if (id == wxART_LOCAL_PARKING)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_PARKING);
  if (id == wxART_LOCAL_PHARMACY)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_PHARMACY);
  if (id == wxART_LOCAL_PHONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_PHONE);
  if (id == wxART_LOCAL_PIZZA)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_PIZZA);
  if (id == wxART_LOCAL_PLAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_PLAY);
  if (id == wxART_LOCAL_POLICE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_POLICE);
  if (id == wxART_LOCAL_POST_OFFICE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_POST_OFFICE);
  if (id == wxART_LOCAL_PRINTSHOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_PRINTSHOP);
  if (id == wxART_LOCAL_SEE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_SEE);
  if (id == wxART_LOCAL_SHIPPING)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_SHIPPING);
  if (id == wxART_LOCAL_TAXI)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCAL_TAXI);
  if (id == wxART_LOCATION_CITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCATION_CITY);
  if (id == wxART_LOCATION_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCATION_DISABLED);
  if (id == wxART_LOCATION_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCATION_OFF);
  if (id == wxART_LOCATION_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCATION_ON);
  if (id == wxART_LOCATION_SEARCHING)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCATION_SEARCHING);
  if (id == wxART_LOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCK);
  if (id == wxART_LOCK_CLOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCK_CLOCK);
  if (id == wxART_LOCK_OPEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCK_OPEN);
  if (id == wxART_LOCK_PERSON)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCK_PERSON);
  if (id == wxART_LOCK_RESET)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOCK_RESET);
  if (id == wxART_LOGIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOGIN);
  if (id == wxART_LOGO_DEV)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOGO_DEV);
  if (id == wxART_LOGOUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOGOUT);
  if (id == wxART_LOOKS)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOOKS);
  if (id == wxART_LOOKS_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOOKS_3);
  if (id == wxART_LOOKS_4)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOOKS_4);
  if (id == wxART_LOOKS_5)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOOKS_5);
  if (id == wxART_LOOKS_6)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOOKS_6);
  if (id == wxART_LOOKS_ONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOOKS_ONE);
  if (id == wxART_LOOKS_TWO)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOOKS_TWO);
  if (id == wxART_LOOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOOP);
  if (id == wxART_LOUPE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOUPE);
  if (id == wxART_LOW_PRIORITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOW_PRIORITY);
  if (id == wxART_LOYALTY)  
      return wxString(SVG_MATERIAL_TWO_TONE_LOYALTY);
  if (id == wxART_LTE_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_LTE_MOBILEDATA);
  if (id == wxART_LTE_PLUS_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_LTE_PLUS_MOBILEDATA);
  if (id == wxART_LUGGAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_LUGGAGE);
  if (id == wxART_LUNCH_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_LUNCH_DINING);
  if (id == wxART_LYRICS)  
      return wxString(SVG_MATERIAL_TWO_TONE_LYRICS);
  if (id == wxART_MACRO_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MACRO_OFF);
  if (id == wxART_MAIL)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAIL);
  if (id == wxART_MAIL_LOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAIL_LOCK);
  if (id == wxART_MAIL_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAIL_OUTLINE);
  if (id == wxART_MALE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MALE);
  if (id == wxART_MAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAN);
  if (id == wxART_MAN_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAN_2);
  if (id == wxART_MAN_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAN_3);
  if (id == wxART_MAN_4)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAN_4);
  if (id == wxART_MANAGE_ACCOUNTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_MANAGE_ACCOUNTS);
  if (id == wxART_MANAGE_HISTORY)  
      return wxString(SVG_MATERIAL_TWO_TONE_MANAGE_HISTORY);
  if (id == wxART_MANAGE_SEARCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_MANAGE_SEARCH);
  if (id == wxART_MAP)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAP);
  if (id == wxART_MAPS_HOME_WORK)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAPS_HOME_WORK);
  if (id == wxART_MAPS_UGC)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAPS_UGC);
  if (id == wxART_MARGIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_MARGIN);
  if (id == wxART_MARK_AS_UNREAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_MARK_AS_UNREAD);
  if (id == wxART_MARK_CHAT_READ)  
      return wxString(SVG_MATERIAL_TWO_TONE_MARK_CHAT_READ);
  if (id == wxART_MARK_CHAT_UNREAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_MARK_CHAT_UNREAD);
  if (id == wxART_MARK_EMAIL_READ)  
      return wxString(SVG_MATERIAL_TWO_TONE_MARK_EMAIL_READ);
  if (id == wxART_MARK_EMAIL_UNREAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_MARK_EMAIL_UNREAD);
  if (id == wxART_MARK_UNREAD_CHAT_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_MARK_UNREAD_CHAT_ALT);
  if (id == wxART_MARKUNREAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_MARKUNREAD);
  if (id == wxART_MARKUNREAD_MAILBOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_MARKUNREAD_MAILBOX);
  if (id == wxART_MASKS)  
      return wxString(SVG_MATERIAL_TWO_TONE_MASKS);
  if (id == wxART_MAXIMIZE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MAXIMIZE);
  if (id == wxART_MEDIA_BLUETOOTH_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MEDIA_BLUETOOTH_OFF);
  if (id == wxART_MEDIA_BLUETOOTH_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_MEDIA_BLUETOOTH_ON);
  if (id == wxART_MEDIATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_MEDIATION);
  if (id == wxART_MEDICAL_INFORMATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_MEDICAL_INFORMATION);
  if (id == wxART_MEDICAL_SERVICES)  
      return wxString(SVG_MATERIAL_TWO_TONE_MEDICAL_SERVICES);
  if (id == wxART_MEDICATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_MEDICATION);
  if (id == wxART_MEDICATION_LIQUID)  
      return wxString(SVG_MATERIAL_TWO_TONE_MEDICATION_LIQUID);
  if (id == wxART_MEETING_ROOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_MEETING_ROOM);
  if (id == wxART_MEMORY)  
      return wxString(SVG_MATERIAL_TWO_TONE_MEMORY);
  if (id == wxART_MENU)  
      return wxString(SVG_MATERIAL_TWO_TONE_MENU);
  if (id == wxART_MENU_BOOK)  
      return wxString(SVG_MATERIAL_TWO_TONE_MENU_BOOK);
  if (id == wxART_MENU_OPEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_MENU_OPEN);
  if (id == wxART_MERGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MERGE);
  if (id == wxART_MERGE_TYPE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MERGE_TYPE);
  if (id == wxART_MESSAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MESSAGE);
  if (id == wxART_MIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_MIC);
  if (id == wxART_MIC_EXTERNAL_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MIC_EXTERNAL_OFF);
  if (id == wxART_MIC_EXTERNAL_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_MIC_EXTERNAL_ON);
  if (id == wxART_MIC_NONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MIC_NONE);
  if (id == wxART_MIC_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MIC_OFF);
  if (id == wxART_MICROWAVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MICROWAVE);
  if (id == wxART_MILITARY_TECH)  
      return wxString(SVG_MATERIAL_TWO_TONE_MILITARY_TECH);
  if (id == wxART_MINIMIZE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MINIMIZE);
  if (id == wxART_MINOR_CRASH)  
      return wxString(SVG_MATERIAL_TWO_TONE_MINOR_CRASH);
  if (id == wxART_MISCELLANEOUS_SERVICES)  
      return wxString(SVG_MATERIAL_TWO_TONE_MISCELLANEOUS_SERVICES);
  if (id == wxART_MISSED_VIDEO_CALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_MISSED_VIDEO_CALL);
  if (id == wxART_MMS)  
      return wxString(SVG_MATERIAL_TWO_TONE_MMS);
  if (id == wxART_MOBILE_FRIENDLY)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOBILE_FRIENDLY);
  if (id == wxART_MOBILE_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOBILE_OFF);
  if (id == wxART_MOBILE_SCREEN_SHARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOBILE_SCREEN_SHARE);
  if (id == wxART_MOBILEDATA_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOBILEDATA_OFF);
  if (id == wxART_MODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MODE);
  if (id == wxART_MODE_COMMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_MODE_COMMENT);
  if (id == wxART_MODE_EDIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_MODE_EDIT);
  if (id == wxART_MODE_EDIT_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MODE_EDIT_OUTLINE);
  if (id == wxART_MODE_FAN_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MODE_FAN_OFF);
  if (id == wxART_MODE_NIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_MODE_NIGHT);
  if (id == wxART_MODE_OF_TRAVEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_MODE_OF_TRAVEL);
  if (id == wxART_MODE_STANDBY)  
      return wxString(SVG_MATERIAL_TWO_TONE_MODE_STANDBY);
  if (id == wxART_MODEL_TRAINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_MODEL_TRAINING);
  if (id == wxART_MONETIZATION_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_MONETIZATION_ON);
  if (id == wxART_MONEY)  
      return wxString(SVG_MATERIAL_TWO_TONE_MONEY);
  if (id == wxART_MONEY_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MONEY_OFF);
  if (id == wxART_MONEY_OFF_CSRED)  
      return wxString(SVG_MATERIAL_TWO_TONE_MONEY_OFF_CSRED);
  if (id == wxART_MONITOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_MONITOR);
  if (id == wxART_MONITOR_HEART)  
      return wxString(SVG_MATERIAL_TWO_TONE_MONITOR_HEART);
  if (id == wxART_MONITOR_WEIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_MONITOR_WEIGHT);
  if (id == wxART_MONOCHROME_PHOTOS)  
      return wxString(SVG_MATERIAL_TWO_TONE_MONOCHROME_PHOTOS);
  if (id == wxART_MOOD)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOOD);
  if (id == wxART_MOOD_BAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOOD_BAD);
  if (id == wxART_MOPED)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOPED);
  if (id == wxART_MORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MORE);
  if (id == wxART_MORE_HORIZ)  
      return wxString(SVG_MATERIAL_TWO_TONE_MORE_HORIZ);
  if (id == wxART_MORE_TIME)  
      return wxString(SVG_MATERIAL_TWO_TONE_MORE_TIME);
  if (id == wxART_MORE_VERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_MORE_VERT);
  if (id == wxART_MOSQUE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOSQUE);
  if (id == wxART_MOTION_PHOTOS_AUTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOTION_PHOTOS_AUTO);
  if (id == wxART_MOTION_PHOTOS_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOTION_PHOTOS_OFF);
  if (id == wxART_MOTION_PHOTOS_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOTION_PHOTOS_ON);
  if (id == wxART_MOTION_PHOTOS_PAUSE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOTION_PHOTOS_PAUSE);
  if (id == wxART_MOTION_PHOTOS_PAUSED)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOTION_PHOTOS_PAUSED);
  if (id == wxART_MOUSE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOUSE);
  if (id == wxART_MOVE_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOVE_DOWN);
  if (id == wxART_MOVE_TO_INBOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOVE_TO_INBOX);
  if (id == wxART_MOVE_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOVE_UP);
  if (id == wxART_MOVIE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOVIE);
  if (id == wxART_MOVIE_CREATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOVIE_CREATION);
  if (id == wxART_MOVIE_FILTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOVIE_FILTER);
  if (id == wxART_MOVING)  
      return wxString(SVG_MATERIAL_TWO_TONE_MOVING);
  if (id == wxART_MP)  
      return wxString(SVG_MATERIAL_TWO_TONE_MP);
  if (id == wxART_MULTILINE_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_MULTILINE_CHART);
  if (id == wxART_MULTIPLE_STOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_MULTIPLE_STOP);
  if (id == wxART_MUSEUM)  
      return wxString(SVG_MATERIAL_TWO_TONE_MUSEUM);
  if (id == wxART_MUSIC_NOTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_MUSIC_NOTE);
  if (id == wxART_MUSIC_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_MUSIC_OFF);
  if (id == wxART_MUSIC_VIDEO)  
      return wxString(SVG_MATERIAL_TWO_TONE_MUSIC_VIDEO);
  if (id == wxART_MY_LOCATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_MY_LOCATION);
  if (id == wxART_NAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_NAT);
  if (id == wxART_NATURE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NATURE);
  if (id == wxART_NATURE_PEOPLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NATURE_PEOPLE);
  if (id == wxART_NAVIGATE_BEFORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NAVIGATE_BEFORE);
  if (id == wxART_NAVIGATE_NEXT)  
      return wxString(SVG_MATERIAL_TWO_TONE_NAVIGATE_NEXT);
  if (id == wxART_NAVIGATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_NAVIGATION);
  if (id == wxART_NEAR_ME)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEAR_ME);
  if (id == wxART_NEAR_ME_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEAR_ME_DISABLED);
  if (id == wxART_NEARBY_ERROR)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEARBY_ERROR);
  if (id == wxART_NEARBY_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEARBY_OFF);
  if (id == wxART_NEST_CAM_WIRED_STAND)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEST_CAM_WIRED_STAND);
  if (id == wxART_NETWORK_CELL)  
      return wxString(SVG_MATERIAL_TWO_TONE_NETWORK_CELL);
  if (id == wxART_NETWORK_CHECK)  
      return wxString(SVG_MATERIAL_TWO_TONE_NETWORK_CHECK);
  if (id == wxART_NETWORK_LOCKED)  
      return wxString(SVG_MATERIAL_TWO_TONE_NETWORK_LOCKED);
  if (id == wxART_NETWORK_PING)  
      return wxString(SVG_MATERIAL_TWO_TONE_NETWORK_PING);
  if (id == wxART_NETWORK_WIFI)  
      return wxString(SVG_MATERIAL_TWO_TONE_NETWORK_WIFI);
  if (id == wxART_NETWORK_WIFI_1_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_NETWORK_WIFI_1_BAR);
  if (id == wxART_NETWORK_WIFI_2_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_NETWORK_WIFI_2_BAR);
  if (id == wxART_NETWORK_WIFI_3_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_NETWORK_WIFI_3_BAR);
  if (id == wxART_NEW_LABEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEW_LABEL);
  if (id == wxART_NEW_RELEASES)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEW_RELEASES);
  if (id == wxART_NEWSPAPER)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEWSPAPER);
  if (id == wxART_NEXT_PLAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEXT_PLAN);
  if (id == wxART_NEXT_WEEK)  
      return wxString(SVG_MATERIAL_TWO_TONE_NEXT_WEEK);
  if (id == wxART_NFC)  
      return wxString(SVG_MATERIAL_TWO_TONE_NFC);
  if (id == wxART_NIGHT_SHELTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_NIGHT_SHELTER);
  if (id == wxART_NIGHTLIFE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NIGHTLIFE);
  if (id == wxART_NIGHTLIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_NIGHTLIGHT);
  if (id == wxART_NIGHTLIGHT_ROUND)  
      return wxString(SVG_MATERIAL_TWO_TONE_NIGHTLIGHT_ROUND);
  if (id == wxART_NIGHTS_STAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_NIGHTS_STAY);
  if (id == wxART_NO_ACCOUNTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_ACCOUNTS);
  if (id == wxART_NO_ADULT_CONTENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_ADULT_CONTENT);
  if (id == wxART_NO_BACKPACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_BACKPACK);
  if (id == wxART_NO_CELL)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_CELL);
  if (id == wxART_NO_CRASH)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_CRASH);
  if (id == wxART_NO_DRINKS)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_DRINKS);
  if (id == wxART_NO_ENCRYPTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_ENCRYPTION);
  if (id == wxART_NO_ENCRYPTION_GMAILERRORRED)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_ENCRYPTION_GMAILERRORRED);
  if (id == wxART_NO_FLASH)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_FLASH);
  if (id == wxART_NO_FOOD)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_FOOD);
  if (id == wxART_NO_LUGGAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_LUGGAGE);
  if (id == wxART_NO_MEALS)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_MEALS);
  if (id == wxART_NO_MEETING_ROOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_MEETING_ROOM);
  if (id == wxART_NO_PHOTOGRAPHY)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_PHOTOGRAPHY);
  if (id == wxART_NO_SIM)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_SIM);
  if (id == wxART_NO_STROLLER)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_STROLLER);
  if (id == wxART_NO_TRANSFER)  
      return wxString(SVG_MATERIAL_TWO_TONE_NO_TRANSFER);
  if (id == wxART_NOISE_AWARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOISE_AWARE);
  if (id == wxART_NOISE_CONTROL_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOISE_CONTROL_OFF);
  if (id == wxART_NORDIC_WALKING)  
      return wxString(SVG_MATERIAL_TWO_TONE_NORDIC_WALKING);
  if (id == wxART_NORTH)  
      return wxString(SVG_MATERIAL_TWO_TONE_NORTH);
  if (id == wxART_NORTH_EAST)  
      return wxString(SVG_MATERIAL_TWO_TONE_NORTH_EAST);
  if (id == wxART_NORTH_WEST)  
      return wxString(SVG_MATERIAL_TWO_TONE_NORTH_WEST);
  if (id == wxART_NOT_ACCESSIBLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOT_ACCESSIBLE);
  if (id == wxART_NOT_INTERESTED)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOT_INTERESTED);
  if (id == wxART_NOT_LISTED_LOCATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOT_LISTED_LOCATION);
  if (id == wxART_NOT_STARTED)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOT_STARTED);
  if (id == wxART_NOTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTE);
  if (id == wxART_NOTE_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTE_ADD);
  if (id == wxART_NOTE_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTE_ALT);
  if (id == wxART_NOTES)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTES);
  if (id == wxART_NOTIFICATION_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTIFICATION_ADD);
  if (id == wxART_NOTIFICATION_IMPORTANT)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTIFICATION_IMPORTANT);
  if (id == wxART_NOTIFICATIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTIFICATIONS);
  if (id == wxART_NOTIFICATIONS_ACTIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTIFICATIONS_ACTIVE);
  if (id == wxART_NOTIFICATIONS_NONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTIFICATIONS_NONE);
  if (id == wxART_NOTIFICATIONS_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTIFICATIONS_OFF);
  if (id == wxART_NOTIFICATIONS_PAUSED)  
      return wxString(SVG_MATERIAL_TWO_TONE_NOTIFICATIONS_PAUSED);
  if (id == wxART_NUMBERS)  
      return wxString(SVG_MATERIAL_TWO_TONE_NUMBERS);
  if (id == wxART_OFFLINE_BOLT)  
      return wxString(SVG_MATERIAL_TWO_TONE_OFFLINE_BOLT);
  if (id == wxART_OFFLINE_PIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_OFFLINE_PIN);
  if (id == wxART_OFFLINE_SHARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_OFFLINE_SHARE);
  if (id == wxART_OIL_BARREL)  
      return wxString(SVG_MATERIAL_TWO_TONE_OIL_BARREL);
  if (id == wxART_ON_DEVICE_TRAINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_ON_DEVICE_TRAINING);
  if (id == wxART_ONDEMAND_VIDEO)  
      return wxString(SVG_MATERIAL_TWO_TONE_ONDEMAND_VIDEO);
  if (id == wxART_ONLINE_PREDICTION)  
      return wxString(SVG_MATERIAL_TWO_TONE_ONLINE_PREDICTION);
  if (id == wxART_OPACITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_OPACITY);
  if (id == wxART_OPEN_IN_BROWSER)  
      return wxString(SVG_MATERIAL_TWO_TONE_OPEN_IN_BROWSER);
  if (id == wxART_OPEN_IN_FULL)  
      return wxString(SVG_MATERIAL_TWO_TONE_OPEN_IN_FULL);
  if (id == wxART_OPEN_IN_NEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_OPEN_IN_NEW);
  if (id == wxART_OPEN_IN_NEW_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_OPEN_IN_NEW_OFF);
  if (id == wxART_OPEN_WITH)  
      return wxString(SVG_MATERIAL_TWO_TONE_OPEN_WITH);
  if (id == wxART_OTHER_HOUSES)  
      return wxString(SVG_MATERIAL_TWO_TONE_OTHER_HOUSES);
  if (id == wxART_OUTBOUND)  
      return wxString(SVG_MATERIAL_TWO_TONE_OUTBOUND);
  if (id == wxART_OUTBOX)  
      return wxString(SVG_MATERIAL_TWO_TONE_OUTBOX);
  if (id == wxART_OUTDOOR_GRILL)  
      return wxString(SVG_MATERIAL_TWO_TONE_OUTDOOR_GRILL);
  if (id == wxART_OUTLET)  
      return wxString(SVG_MATERIAL_TWO_TONE_OUTLET);
  if (id == wxART_OUTLINED_FLAG)  
      return wxString(SVG_MATERIAL_TWO_TONE_OUTLINED_FLAG);
  if (id == wxART_OUTPUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_OUTPUT);
  if (id == wxART_PADDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_PADDING);
  if (id == wxART_PAGES)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAGES);
  if (id == wxART_PAGEVIEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAGEVIEW);
  if (id == wxART_PAID)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAID);
  if (id == wxART_PALETTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PALETTE);
  if (id == wxART_PAN_TOOL)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAN_TOOL);
  if (id == wxART_PAN_TOOL_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAN_TOOL_ALT);
  if (id == wxART_PANORAMA)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA);
  if (id == wxART_PANORAMA_FISH_EYE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA_FISH_EYE);
  if (id == wxART_PANORAMA_HORIZONTAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA_HORIZONTAL);
  if (id == wxART_PANORAMA_HORIZONTAL_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA_HORIZONTAL_SELECT);
  if (id == wxART_PANORAMA_PHOTOSPHERE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA_PHOTOSPHERE);
  if (id == wxART_PANORAMA_PHOTOSPHERE_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA_PHOTOSPHERE_SELECT);
  if (id == wxART_PANORAMA_VERTICAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA_VERTICAL);
  if (id == wxART_PANORAMA_VERTICAL_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA_VERTICAL_SELECT);
  if (id == wxART_PANORAMA_WIDE_ANGLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA_WIDE_ANGLE);
  if (id == wxART_PANORAMA_WIDE_ANGLE_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PANORAMA_WIDE_ANGLE_SELECT);
  if (id == wxART_PARAGLIDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_PARAGLIDING);
  if (id == wxART_PARK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PARK);
  if (id == wxART_PARTY_MODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PARTY_MODE);
  if (id == wxART_PASSWORD)  
      return wxString(SVG_MATERIAL_TWO_TONE_PASSWORD);
  if (id == wxART_PATTERN)  
      return wxString(SVG_MATERIAL_TWO_TONE_PATTERN);
  if (id == wxART_PAUSE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAUSE);
  if (id == wxART_PAUSE_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAUSE_CIRCLE);
  if (id == wxART_PAUSE_CIRCLE_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAUSE_CIRCLE_FILLED);
  if (id == wxART_PAUSE_CIRCLE_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAUSE_CIRCLE_OUTLINE);
  if (id == wxART_PAUSE_PRESENTATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAUSE_PRESENTATION);
  if (id == wxART_PAYMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAYMENT);
  if (id == wxART_PAYMENTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_PAYMENTS);
  if (id == wxART_PEDAL_BIKE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PEDAL_BIKE);
  if (id == wxART_PENDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_PENDING);
  if (id == wxART_PENDING_ACTIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_PENDING_ACTIONS);
  if (id == wxART_PENTAGON)  
      return wxString(SVG_MATERIAL_TWO_TONE_PENTAGON);
  if (id == wxART_PEOPLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PEOPLE);
  if (id == wxART_PEOPLE_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PEOPLE_ALT);
  if (id == wxART_PEOPLE_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PEOPLE_OUTLINE);
  if (id == wxART_PERCENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERCENT);
  if (id == wxART_PERM_CAMERA_MIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERM_CAMERA_MIC);
  if (id == wxART_PERM_CONTACT_CALENDAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERM_CONTACT_CALENDAR);
  if (id == wxART_PERM_DATA_SETTING)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERM_DATA_SETTING);
  if (id == wxART_PERM_DEVICE_INFORMATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERM_DEVICE_INFORMATION);
  if (id == wxART_PERM_IDENTITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERM_IDENTITY);
  if (id == wxART_PERM_MEDIA)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERM_MEDIA);
  if (id == wxART_PERM_PHONE_MSG)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERM_PHONE_MSG);
  if (id == wxART_PERM_SCAN_WIFI)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERM_SCAN_WIFI);
  if (id == wxART_PERSON)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON);
  if (id == wxART_PERSON_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_2);
  if (id == wxART_PERSON_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_3);
  if (id == wxART_PERSON_4)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_4);
  if (id == wxART_PERSON_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_ADD);
  if (id == wxART_PERSON_ADD_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_ADD_ALT);
  if (id == wxART_PERSON_ADD_ALT_1)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_ADD_ALT_1);
  if (id == wxART_PERSON_ADD_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_ADD_DISABLED);
  if (id == wxART_PERSON_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_OFF);
  if (id == wxART_PERSON_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_OUTLINE);
  if (id == wxART_PERSON_PIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_PIN);
  if (id == wxART_PERSON_PIN_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_PIN_CIRCLE);
  if (id == wxART_PERSON_REMOVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_REMOVE);
  if (id == wxART_PERSON_REMOVE_ALT_1)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_REMOVE_ALT_1);
  if (id == wxART_PERSON_SEARCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSON_SEARCH);
  if (id == wxART_PERSONAL_INJURY)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSONAL_INJURY);
  if (id == wxART_PERSONAL_VIDEO)  
      return wxString(SVG_MATERIAL_TWO_TONE_PERSONAL_VIDEO);
  if (id == wxART_PEST_CONTROL)  
      return wxString(SVG_MATERIAL_TWO_TONE_PEST_CONTROL);
  if (id == wxART_PEST_CONTROL_RODENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PEST_CONTROL_RODENT);
  if (id == wxART_PETS)  
      return wxString(SVG_MATERIAL_TWO_TONE_PETS);
  if (id == wxART_PHISHING)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHISHING);
  if (id == wxART_PHONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE);
  if (id == wxART_PHONE_ANDROID)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_ANDROID);
  if (id == wxART_PHONE_BLUETOOTH_SPEAKER)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_BLUETOOTH_SPEAKER);
  if (id == wxART_PHONE_CALLBACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_CALLBACK);
  if (id == wxART_PHONE_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_DISABLED);
  if (id == wxART_PHONE_ENABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_ENABLED);
  if (id == wxART_PHONE_FORWARDED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_FORWARDED);
  if (id == wxART_PHONE_IPHONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_IPHONE);
  if (id == wxART_PHONE_LOCKED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_LOCKED);
  if (id == wxART_PHONE_MISSED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_MISSED);
  if (id == wxART_PHONE_PAUSED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONE_PAUSED);
  if (id == wxART_PHONELINK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONELINK);
  if (id == wxART_PHONELINK_ERASE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONELINK_ERASE);
  if (id == wxART_PHONELINK_LOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONELINK_LOCK);
  if (id == wxART_PHONELINK_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONELINK_OFF);
  if (id == wxART_PHONELINK_RING)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONELINK_RING);
  if (id == wxART_PHONELINK_SETUP)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHONELINK_SETUP);
  if (id == wxART_PHOTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO);
  if (id == wxART_PHOTO_ALBUM)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO_ALBUM);
  if (id == wxART_PHOTO_CAMERA)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO_CAMERA);
  if (id == wxART_PHOTO_CAMERA_BACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO_CAMERA_BACK);
  if (id == wxART_PHOTO_CAMERA_FRONT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO_CAMERA_FRONT);
  if (id == wxART_PHOTO_FILTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO_FILTER);
  if (id == wxART_PHOTO_LIBRARY)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO_LIBRARY);
  if (id == wxART_PHOTO_SIZE_SELECT_ACTUAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO_SIZE_SELECT_ACTUAL);
  if (id == wxART_PHOTO_SIZE_SELECT_LARGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO_SIZE_SELECT_LARGE);
  if (id == wxART_PHOTO_SIZE_SELECT_SMALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHOTO_SIZE_SELECT_SMALL);
  if (id == wxART_PHP)  
      return wxString(SVG_MATERIAL_TWO_TONE_PHP);
  if (id == wxART_PIANO)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIANO);
  if (id == wxART_PIANO_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIANO_OFF);
  if (id == wxART_PICTURE_AS_PDF)  
      return wxString(SVG_MATERIAL_TWO_TONE_PICTURE_AS_PDF);
  if (id == wxART_PICTURE_IN_PICTURE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PICTURE_IN_PICTURE);
  if (id == wxART_PICTURE_IN_PICTURE_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PICTURE_IN_PICTURE_ALT);
  if (id == wxART_PIE_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIE_CHART);
  if (id == wxART_PIE_CHART_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIE_CHART_OUTLINE);
  if (id == wxART_PIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIN);
  if (id == wxART_PIN_DROP)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIN_DROP);
  if (id == wxART_PIN_END)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIN_END);
  if (id == wxART_PIN_INVOKE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIN_INVOKE);
  if (id == wxART_PINCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_PINCH);
  if (id == wxART_PIVOT_TABLE_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIVOT_TABLE_CHART);
  if (id == wxART_PIX)  
      return wxString(SVG_MATERIAL_TWO_TONE_PIX);
  if (id == wxART_PLACE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLACE);
  if (id == wxART_PLAGIARISM)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAGIARISM);
  if (id == wxART_PLAY_ARROW)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAY_ARROW);
  if (id == wxART_PLAY_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAY_CIRCLE);
  if (id == wxART_PLAY_CIRCLE_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAY_CIRCLE_FILLED);
  if (id == wxART_PLAY_CIRCLE_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAY_CIRCLE_OUTLINE);
  if (id == wxART_PLAY_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAY_DISABLED);
  if (id == wxART_PLAY_FOR_WORK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAY_FOR_WORK);
  if (id == wxART_PLAY_LESSON)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAY_LESSON);
  if (id == wxART_PLAYLIST_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAYLIST_ADD);
  if (id == wxART_PLAYLIST_ADD_CHECK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAYLIST_ADD_CHECK);
  if (id == wxART_PLAYLIST_ADD_CHECK_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAYLIST_ADD_CHECK_CIRCLE);
  if (id == wxART_PLAYLIST_ADD_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAYLIST_ADD_CIRCLE);
  if (id == wxART_PLAYLIST_PLAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAYLIST_PLAY);
  if (id == wxART_PLAYLIST_REMOVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLAYLIST_REMOVE);
  if (id == wxART_PLUMBING)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLUMBING);
  if (id == wxART_PLUS_ONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PLUS_ONE);
  if (id == wxART_PODCASTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_PODCASTS);
  if (id == wxART_POINT_OF_SALE)  
      return wxString(SVG_MATERIAL_TWO_TONE_POINT_OF_SALE);
  if (id == wxART_POLICY)  
      return wxString(SVG_MATERIAL_TWO_TONE_POLICY);
  if (id == wxART_POLL)  
      return wxString(SVG_MATERIAL_TWO_TONE_POLL);
  if (id == wxART_POLYLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_POLYLINE);
  if (id == wxART_POLYMER)  
      return wxString(SVG_MATERIAL_TWO_TONE_POLYMER);
  if (id == wxART_POOL)  
      return wxString(SVG_MATERIAL_TWO_TONE_POOL);
  if (id == wxART_PORTABLE_WIFI_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_PORTABLE_WIFI_OFF);
  if (id == wxART_PORTRAIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PORTRAIT);
  if (id == wxART_POST_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_POST_ADD);
  if (id == wxART_POWER)  
      return wxString(SVG_MATERIAL_TWO_TONE_POWER);
  if (id == wxART_POWER_INPUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_POWER_INPUT);
  if (id == wxART_POWER_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_POWER_OFF);
  if (id == wxART_POWER_SETTINGS_NEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_POWER_SETTINGS_NEW);
  if (id == wxART_PRECISION_MANUFACTURING)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRECISION_MANUFACTURING);
  if (id == wxART_PREGNANT_WOMAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_PREGNANT_WOMAN);
  if (id == wxART_PRESENT_TO_ALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRESENT_TO_ALL);
  if (id == wxART_PREVIEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_PREVIEW);
  if (id == wxART_PRICE_CHANGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRICE_CHANGE);
  if (id == wxART_PRICE_CHECK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRICE_CHECK);
  if (id == wxART_PRINT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRINT);
  if (id == wxART_PRINT_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRINT_DISABLED);
  if (id == wxART_PRIORITY_HIGH)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRIORITY_HIGH);
  if (id == wxART_PRIVACY_TIP)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRIVACY_TIP);
  if (id == wxART_PRIVATE_CONNECTIVITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRIVATE_CONNECTIVITY);
  if (id == wxART_PRODUCTION_QUANTITY_LIMITS)  
      return wxString(SVG_MATERIAL_TWO_TONE_PRODUCTION_QUANTITY_LIMITS);
  if (id == wxART_PROPANE)  
      return wxString(SVG_MATERIAL_TWO_TONE_PROPANE);
  if (id == wxART_PROPANE_TANK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PROPANE_TANK);
  if (id == wxART_PSYCHOLOGY)  
      return wxString(SVG_MATERIAL_TWO_TONE_PSYCHOLOGY);
  if (id == wxART_PSYCHOLOGY_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_PSYCHOLOGY_ALT);
  if (id == wxART_PUBLIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_PUBLIC);
  if (id == wxART_PUBLIC_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_PUBLIC_OFF);
  if (id == wxART_PUBLISH)  
      return wxString(SVG_MATERIAL_TWO_TONE_PUBLISH);
  if (id == wxART_PUBLISHED_WITH_CHANGES)  
      return wxString(SVG_MATERIAL_TWO_TONE_PUBLISHED_WITH_CHANGES);
  if (id == wxART_PUNCH_CLOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_PUNCH_CLOCK);
  if (id == wxART_PUSH_PIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_PUSH_PIN);
  if (id == wxART_QR_CODE)  
      return wxString(SVG_MATERIAL_TWO_TONE_QR_CODE);
  if (id == wxART_QR_CODE_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_QR_CODE_2);
  if (id == wxART_QR_CODE_SCANNER)  
      return wxString(SVG_MATERIAL_TWO_TONE_QR_CODE_SCANNER);
  if (id == wxART_QUERY_BUILDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_QUERY_BUILDER);
  if (id == wxART_QUERY_STATS)  
      return wxString(SVG_MATERIAL_TWO_TONE_QUERY_STATS);
  if (id == wxART_QUESTION_ANSWER)  
      return wxString(SVG_MATERIAL_TWO_TONE_QUESTION_ANSWER);
  if (id == wxART_QUESTION_MARK)  
      return wxString(SVG_MATERIAL_TWO_TONE_QUESTION_MARK);
  if (id == wxART_QUEUE)  
      return wxString(SVG_MATERIAL_TWO_TONE_QUEUE);
  if (id == wxART_QUEUE_MUSIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_QUEUE_MUSIC);
  if (id == wxART_QUEUE_PLAY_NEXT)  
      return wxString(SVG_MATERIAL_TWO_TONE_QUEUE_PLAY_NEXT);
  if (id == wxART_QUICKREPLY)  
      return wxString(SVG_MATERIAL_TWO_TONE_QUICKREPLY);
  if (id == wxART_QUIZ)  
      return wxString(SVG_MATERIAL_TWO_TONE_QUIZ);
  if (id == wxART_R_MOBILEDATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_R_MOBILEDATA);
  if (id == wxART_RADAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_RADAR);
  if (id == wxART_RADIO)  
      return wxString(SVG_MATERIAL_TWO_TONE_RADIO);
  if (id == wxART_RADIO_BUTTON_CHECKED)  
      return wxString(SVG_MATERIAL_TWO_TONE_RADIO_BUTTON_CHECKED);
  if (id == wxART_RADIO_BUTTON_UNCHECKED)  
      return wxString(SVG_MATERIAL_TWO_TONE_RADIO_BUTTON_UNCHECKED);
  if (id == wxART_RAILWAY_ALERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_RAILWAY_ALERT);
  if (id == wxART_RAMEN_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_RAMEN_DINING);
  if (id == wxART_RAMP_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_RAMP_LEFT);
  if (id == wxART_RAMP_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_RAMP_RIGHT);
  if (id == wxART_RATE_REVIEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_RATE_REVIEW);
  if (id == wxART_RAW_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_RAW_OFF);
  if (id == wxART_RAW_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_RAW_ON);
  if (id == wxART_READ_MORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_READ_MORE);
  if (id == wxART_REAL_ESTATE_AGENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_REAL_ESTATE_AGENT);
  if (id == wxART_RECEIPT)  
      return wxString(SVG_MATERIAL_TWO_TONE_RECEIPT);
  if (id == wxART_RECEIPT_LONG)  
      return wxString(SVG_MATERIAL_TWO_TONE_RECEIPT_LONG);
  if (id == wxART_RECENT_ACTORS)  
      return wxString(SVG_MATERIAL_TWO_TONE_RECENT_ACTORS);
  if (id == wxART_RECOMMEND)  
      return wxString(SVG_MATERIAL_TWO_TONE_RECOMMEND);
  if (id == wxART_RECORD_VOICE_OVER)  
      return wxString(SVG_MATERIAL_TWO_TONE_RECORD_VOICE_OVER);
  if (id == wxART_RECTANGLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_RECTANGLE);
  if (id == wxART_RECYCLING)  
      return wxString(SVG_MATERIAL_TWO_TONE_RECYCLING);
  if (id == wxART_REDEEM)  
      return wxString(SVG_MATERIAL_TWO_TONE_REDEEM);
  if (id == wxART_REDO)  
      return wxString(SVG_MATERIAL_TWO_TONE_REDO);
  if (id == wxART_REDUCE_CAPACITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_REDUCE_CAPACITY);
  if (id == wxART_REFRESH)  
      return wxString(SVG_MATERIAL_TWO_TONE_REFRESH);
  if (id == wxART_REMEMBER_ME)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMEMBER_ME);
  if (id == wxART_REMOVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMOVE);
  if (id == wxART_REMOVE_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMOVE_CIRCLE);
  if (id == wxART_REMOVE_CIRCLE_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMOVE_CIRCLE_OUTLINE);
  if (id == wxART_REMOVE_DONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMOVE_DONE);
  if (id == wxART_REMOVE_FROM_QUEUE)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMOVE_FROM_QUEUE);
  if (id == wxART_REMOVE_MODERATOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMOVE_MODERATOR);
  if (id == wxART_REMOVE_RED_EYE)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMOVE_RED_EYE);
  if (id == wxART_REMOVE_ROAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMOVE_ROAD);
  if (id == wxART_REMOVE_SHOPPING_CART)  
      return wxString(SVG_MATERIAL_TWO_TONE_REMOVE_SHOPPING_CART);
  if (id == wxART_REORDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_REORDER);
  if (id == wxART_REPARTITION)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPARTITION);
  if (id == wxART_REPEAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPEAT);
  if (id == wxART_REPEAT_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPEAT_ON);
  if (id == wxART_REPEAT_ONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPEAT_ONE);
  if (id == wxART_REPEAT_ONE_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPEAT_ONE_ON);
  if (id == wxART_REPLAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPLAY);
  if (id == wxART_REPLAY_10)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPLAY_10);
  if (id == wxART_REPLAY_30)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPLAY_30);
  if (id == wxART_REPLAY_5)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPLAY_5);
  if (id == wxART_REPLAY_CIRCLE_FILLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPLAY_CIRCLE_FILLED);
  if (id == wxART_REPLY)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPLY);
  if (id == wxART_REPLY_ALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPLY_ALL);
  if (id == wxART_REPORT)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPORT);
  if (id == wxART_REPORT_GMAILERRORRED)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPORT_GMAILERRORRED);
  if (id == wxART_REPORT_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPORT_OFF);
  if (id == wxART_REPORT_PROBLEM)  
      return wxString(SVG_MATERIAL_TWO_TONE_REPORT_PROBLEM);
  if (id == wxART_REQUEST_PAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_REQUEST_PAGE);
  if (id == wxART_REQUEST_QUOTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_REQUEST_QUOTE);
  if (id == wxART_RESET_TV)  
      return wxString(SVG_MATERIAL_TWO_TONE_RESET_TV);
  if (id == wxART_RESTART_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_RESTART_ALT);
  if (id == wxART_RESTAURANT)  
      return wxString(SVG_MATERIAL_TWO_TONE_RESTAURANT);
  if (id == wxART_RESTAURANT_MENU)  
      return wxString(SVG_MATERIAL_TWO_TONE_RESTAURANT_MENU);
  if (id == wxART_RESTORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_RESTORE);
  if (id == wxART_RESTORE_FROM_TRASH)  
      return wxString(SVG_MATERIAL_TWO_TONE_RESTORE_FROM_TRASH);
  if (id == wxART_RESTORE_PAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_RESTORE_PAGE);
  if (id == wxART_REVIEWS)  
      return wxString(SVG_MATERIAL_TWO_TONE_REVIEWS);
  if (id == wxART_RICE_BOWL)  
      return wxString(SVG_MATERIAL_TWO_TONE_RICE_BOWL);
  if (id == wxART_RING_VOLUME)  
      return wxString(SVG_MATERIAL_TWO_TONE_RING_VOLUME);
  if (id == wxART_ROCKET)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROCKET);
  if (id == wxART_ROCKET_LAUNCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROCKET_LAUNCH);
  if (id == wxART_ROLLER_SHADES)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROLLER_SHADES);
  if (id == wxART_ROLLER_SHADES_CLOSED)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROLLER_SHADES_CLOSED);
  if (id == wxART_ROLLER_SKATING)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROLLER_SKATING);
  if (id == wxART_ROOFING)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROOFING);
  if (id == wxART_ROOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROOM);
  if (id == wxART_ROOM_PREFERENCES)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROOM_PREFERENCES);
  if (id == wxART_ROOM_SERVICE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROOM_SERVICE);
  if (id == wxART_ROTATE_90_DEGREES_CCW)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROTATE_90_DEGREES_CCW);
  if (id == wxART_ROTATE_90_DEGREES_CW)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROTATE_90_DEGREES_CW);
  if (id == wxART_ROTATE_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROTATE_LEFT);
  if (id == wxART_ROTATE_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROTATE_RIGHT);
  if (id == wxART_ROUNDABOUT_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROUNDABOUT_LEFT);
  if (id == wxART_ROUNDABOUT_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROUNDABOUT_RIGHT);
  if (id == wxART_ROUNDED_CORNER)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROUNDED_CORNER);
  if (id == wxART_ROUTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROUTE);
  if (id == wxART_ROUTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROUTER);
  if (id == wxART_ROWING)  
      return wxString(SVG_MATERIAL_TWO_TONE_ROWING);
  if (id == wxART_RSS_FEED)  
      return wxString(SVG_MATERIAL_TWO_TONE_RSS_FEED);
  if (id == wxART_RSVP)  
      return wxString(SVG_MATERIAL_TWO_TONE_RSVP);
  if (id == wxART_RTT)  
      return wxString(SVG_MATERIAL_TWO_TONE_RTT);
  if (id == wxART_RULE)  
      return wxString(SVG_MATERIAL_TWO_TONE_RULE);
  if (id == wxART_RULE_FOLDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_RULE_FOLDER);
  if (id == wxART_RUN_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_RUN_CIRCLE);
  if (id == wxART_RUNNING_WITH_ERRORS)  
      return wxString(SVG_MATERIAL_TWO_TONE_RUNNING_WITH_ERRORS);
  if (id == wxART_RV_HOOKUP)  
      return wxString(SVG_MATERIAL_TWO_TONE_RV_HOOKUP);
  if (id == wxART_SAFETY_CHECK)  
      return wxString(SVG_MATERIAL_TWO_TONE_SAFETY_CHECK);
  if (id == wxART_SAFETY_DIVIDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_SAFETY_DIVIDER);
  if (id == wxART_SAILING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SAILING);
  if (id == wxART_SANITIZER)  
      return wxString(SVG_MATERIAL_TWO_TONE_SANITIZER);
  if (id == wxART_SATELLITE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SATELLITE);
  if (id == wxART_SATELLITE_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SATELLITE_ALT);
  if (id == wxART_SAVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SAVE);
  if (id == wxART_SAVE_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SAVE_ALT);
  if (id == wxART_SAVE_AS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SAVE_AS);
  if (id == wxART_SAVED_SEARCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_SAVED_SEARCH);
  if (id == wxART_SAVINGS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SAVINGS);
  if (id == wxART_SCALE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCALE);
  if (id == wxART_SCANNER)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCANNER);
  if (id == wxART_SCATTER_PLOT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCATTER_PLOT);
  if (id == wxART_SCHEDULE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCHEDULE);
  if (id == wxART_SCHEDULE_SEND)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCHEDULE_SEND);
  if (id == wxART_SCHEMA)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCHEMA);
  if (id == wxART_SCHOOL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCHOOL);
  if (id == wxART_SCIENCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCIENCE);
  if (id == wxART_SCORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCORE);
  if (id == wxART_SCOREBOARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCOREBOARD);
  if (id == wxART_SCREEN_LOCK_LANDSCAPE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCREEN_LOCK_LANDSCAPE);
  if (id == wxART_SCREEN_LOCK_PORTRAIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCREEN_LOCK_PORTRAIT);
  if (id == wxART_SCREEN_LOCK_ROTATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCREEN_LOCK_ROTATION);
  if (id == wxART_SCREEN_ROTATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCREEN_ROTATION);
  if (id == wxART_SCREEN_ROTATION_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCREEN_ROTATION_ALT);
  if (id == wxART_SCREEN_SEARCH_DESKTOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCREEN_SEARCH_DESKTOP);
  if (id == wxART_SCREEN_SHARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCREEN_SHARE);
  if (id == wxART_SCREENSHOT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCREENSHOT);
  if (id == wxART_SCREENSHOT_MONITOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCREENSHOT_MONITOR);
  if (id == wxART_SCUBA_DIVING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SCUBA_DIVING);
  if (id == wxART_SD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SD);
  if (id == wxART_SD_CARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SD_CARD);
  if (id == wxART_SD_CARD_ALERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SD_CARD_ALERT);
  if (id == wxART_SD_STORAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SD_STORAGE);
  if (id == wxART_SEARCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_SEARCH);
  if (id == wxART_SEARCH_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_SEARCH_OFF);
  if (id == wxART_SECURITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_SECURITY);
  if (id == wxART_SECURITY_UPDATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SECURITY_UPDATE);
  if (id == wxART_SECURITY_UPDATE_GOOD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SECURITY_UPDATE_GOOD);
  if (id == wxART_SECURITY_UPDATE_WARNING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SECURITY_UPDATE_WARNING);
  if (id == wxART_SEGMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SEGMENT);
  if (id == wxART_SELECT_ALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SELECT_ALL);
  if (id == wxART_SELF_IMPROVEMENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SELF_IMPROVEMENT);
  if (id == wxART_SELL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SELL);
  if (id == wxART_SEND)  
      return wxString(SVG_MATERIAL_TWO_TONE_SEND);
  if (id == wxART_SEND_AND_ARCHIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SEND_AND_ARCHIVE);
  if (id == wxART_SEND_TIME_EXTENSION)  
      return wxString(SVG_MATERIAL_TWO_TONE_SEND_TIME_EXTENSION);
  if (id == wxART_SEND_TO_MOBILE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SEND_TO_MOBILE);
  if (id == wxART_SENSOR_DOOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENSOR_DOOR);
  if (id == wxART_SENSOR_OCCUPIED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENSOR_OCCUPIED);
  if (id == wxART_SENSOR_WINDOW)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENSOR_WINDOW);
  if (id == wxART_SENSORS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENSORS);
  if (id == wxART_SENSORS_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENSORS_OFF);
  if (id == wxART_SENTIMENT_DISSATISFIED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENTIMENT_DISSATISFIED);
  if (id == wxART_SENTIMENT_NEUTRAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENTIMENT_NEUTRAL);
  if (id == wxART_SENTIMENT_SATISFIED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENTIMENT_SATISFIED);
  if (id == wxART_SENTIMENT_SATISFIED_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENTIMENT_SATISFIED_ALT);
  if (id == wxART_SENTIMENT_VERY_DISSATISFIED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENTIMENT_VERY_DISSATISFIED);
  if (id == wxART_SENTIMENT_VERY_SATISFIED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SENTIMENT_VERY_SATISFIED);
  if (id == wxART_SET_MEAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SET_MEAL);
  if (id == wxART_SETTINGS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS);
  if (id == wxART_SETTINGS_ACCESSIBILITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_ACCESSIBILITY);
  if (id == wxART_SETTINGS_APPLICATIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_APPLICATIONS);
  if (id == wxART_SETTINGS_BACKUP_RESTORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_BACKUP_RESTORE);
  if (id == wxART_SETTINGS_BLUETOOTH)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_BLUETOOTH);
  if (id == wxART_SETTINGS_BRIGHTNESS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_BRIGHTNESS);
  if (id == wxART_SETTINGS_CELL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_CELL);
  if (id == wxART_SETTINGS_ETHERNET)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_ETHERNET);
  if (id == wxART_SETTINGS_INPUT_ANTENNA)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_INPUT_ANTENNA);
  if (id == wxART_SETTINGS_INPUT_COMPONENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_INPUT_COMPONENT);
  if (id == wxART_SETTINGS_INPUT_COMPOSITE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_INPUT_COMPOSITE);
  if (id == wxART_SETTINGS_INPUT_HDMI)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_INPUT_HDMI);
  if (id == wxART_SETTINGS_INPUT_SVIDEO)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_INPUT_SVIDEO);
  if (id == wxART_SETTINGS_OVERSCAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_OVERSCAN);
  if (id == wxART_SETTINGS_PHONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_PHONE);
  if (id == wxART_SETTINGS_POWER)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_POWER);
  if (id == wxART_SETTINGS_REMOTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_REMOTE);
  if (id == wxART_SETTINGS_SUGGEST)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_SUGGEST);
  if (id == wxART_SETTINGS_SYSTEM_DAYDREAM)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_SYSTEM_DAYDREAM);
  if (id == wxART_SETTINGS_VOICE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SETTINGS_VOICE);
  if (id == wxART_SEVERE_COLD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SEVERE_COLD);
  if (id == wxART_SHAPE_LINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHAPE_LINE);
  if (id == wxART_SHARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHARE);
  if (id == wxART_SHARE_LOCATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHARE_LOCATION);
  if (id == wxART_SHIELD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHIELD);
  if (id == wxART_SHIELD_MOON)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHIELD_MOON);
  if (id == wxART_SHOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHOP);
  if (id == wxART_SHOP_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHOP_2);
  if (id == wxART_SHOP_TWO)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHOP_TWO);
  if (id == wxART_SHOPPING_BAG)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHOPPING_BAG);
  if (id == wxART_SHOPPING_BASKET)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHOPPING_BASKET);
  if (id == wxART_SHOPPING_CART)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHOPPING_CART);
  if (id == wxART_SHOPPING_CART_CHECKOUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHOPPING_CART_CHECKOUT);
  if (id == wxART_SHORT_TEXT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHORT_TEXT);
  if (id == wxART_SHORTCUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHORTCUT);
  if (id == wxART_SHOW_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHOW_CHART);
  if (id == wxART_SHOWER)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHOWER);
  if (id == wxART_SHUFFLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHUFFLE);
  if (id == wxART_SHUFFLE_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHUFFLE_ON);
  if (id == wxART_SHUTTER_SPEED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SHUTTER_SPEED);
  if (id == wxART_SICK)  
      return wxString(SVG_MATERIAL_TWO_TONE_SICK);
  if (id == wxART_SIGN_LANGUAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGN_LANGUAGE);
  if (id == wxART_SIGNAL_CELLULAR_0_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_0_BAR);
  if (id == wxART_SIGNAL_CELLULAR_4_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_4_BAR);
  if (id == wxART_SIGNAL_CELLULAR_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_ALT);
  if (id == wxART_SIGNAL_CELLULAR_ALT_1_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_ALT_1_BAR);
  if (id == wxART_SIGNAL_CELLULAR_ALT_2_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_ALT_2_BAR);
  if (id == wxART_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_0_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_0_BAR);
  if (id == wxART_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_4_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_4_BAR);
  if (id == wxART_SIGNAL_CELLULAR_NO_SIM)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_NO_SIM);
  if (id == wxART_SIGNAL_CELLULAR_NODATA)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_NODATA);
  if (id == wxART_SIGNAL_CELLULAR_NULL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_NULL);
  if (id == wxART_SIGNAL_CELLULAR_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_CELLULAR_OFF);
  if (id == wxART_SIGNAL_WIFI_0_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_WIFI_0_BAR);
  if (id == wxART_SIGNAL_WIFI_4_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_WIFI_4_BAR);
  if (id == wxART_SIGNAL_WIFI_4_BAR_LOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_WIFI_4_BAR_LOCK);
  if (id == wxART_SIGNAL_WIFI_BAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_WIFI_BAD);
  if (id == wxART_SIGNAL_WIFI_CONNECTED_NO_INTERNET_4)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_WIFI_CONNECTED_NO_INTERNET_4);
  if (id == wxART_SIGNAL_WIFI_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_WIFI_OFF);
  if (id == wxART_SIGNAL_WIFI_STATUSBAR_4_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_WIFI_STATUSBAR_4_BAR);
  if (id == wxART_SIGNAL_WIFI_STATUSBAR_CONNECTED_NO_INTERNET_4)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_WIFI_STATUSBAR_CONNECTED_NO_INTERNET_4);
  if (id == wxART_SIGNAL_WIFI_STATUSBAR_NULL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNAL_WIFI_STATUSBAR_NULL);
  if (id == wxART_SIGNPOST)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIGNPOST);
  if (id == wxART_SIM_CARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIM_CARD);
  if (id == wxART_SIM_CARD_ALERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIM_CARD_ALERT);
  if (id == wxART_SIM_CARD_DOWNLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIM_CARD_DOWNLOAD);
  if (id == wxART_SINGLE_BED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SINGLE_BED);
  if (id == wxART_SIP)  
      return wxString(SVG_MATERIAL_TWO_TONE_SIP);
  if (id == wxART_SKATEBOARDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SKATEBOARDING);
  if (id == wxART_SKIP_NEXT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SKIP_NEXT);
  if (id == wxART_SKIP_PREVIOUS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SKIP_PREVIOUS);
  if (id == wxART_SLEDDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SLEDDING);
  if (id == wxART_SLIDESHOW)  
      return wxString(SVG_MATERIAL_TWO_TONE_SLIDESHOW);
  if (id == wxART_SLOW_MOTION_VIDEO)  
      return wxString(SVG_MATERIAL_TWO_TONE_SLOW_MOTION_VIDEO);
  if (id == wxART_SMART_BUTTON)  
      return wxString(SVG_MATERIAL_TWO_TONE_SMART_BUTTON);
  if (id == wxART_SMART_DISPLAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_SMART_DISPLAY);
  if (id == wxART_SMART_SCREEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_SMART_SCREEN);
  if (id == wxART_SMART_TOY)  
      return wxString(SVG_MATERIAL_TWO_TONE_SMART_TOY);
  if (id == wxART_SMARTPHONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SMARTPHONE);
  if (id == wxART_SMOKE_FREE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SMOKE_FREE);
  if (id == wxART_SMOKING_ROOMS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SMOKING_ROOMS);
  if (id == wxART_SMS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SMS);
  if (id == wxART_SMS_FAILED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SMS_FAILED);
  if (id == wxART_SNIPPET_FOLDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_SNIPPET_FOLDER);
  if (id == wxART_SNOOZE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SNOOZE);
  if (id == wxART_SNOWBOARDING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SNOWBOARDING);
  if (id == wxART_SNOWMOBILE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SNOWMOBILE);
  if (id == wxART_SNOWSHOEING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SNOWSHOEING);
  if (id == wxART_SOAP)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOAP);
  if (id == wxART_SOCIAL_DISTANCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOCIAL_DISTANCE);
  if (id == wxART_SOLAR_POWER)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOLAR_POWER);
  if (id == wxART_SORT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SORT);
  if (id == wxART_SORT_BY_ALPHA)  
      return wxString(SVG_MATERIAL_TWO_TONE_SORT_BY_ALPHA);
  if (id == wxART_SOS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOS);
  if (id == wxART_SOUP_KITCHEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOUP_KITCHEN);
  if (id == wxART_SOURCE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOURCE);
  if (id == wxART_SOUTH)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOUTH);
  if (id == wxART_SOUTH_AMERICA)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOUTH_AMERICA);
  if (id == wxART_SOUTH_EAST)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOUTH_EAST);
  if (id == wxART_SOUTH_WEST)  
      return wxString(SVG_MATERIAL_TWO_TONE_SOUTH_WEST);
  if (id == wxART_SPA)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPA);
  if (id == wxART_SPACE_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPACE_BAR);
  if (id == wxART_SPACE_DASHBOARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPACE_DASHBOARD);
  if (id == wxART_SPATIAL_AUDIO)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPATIAL_AUDIO);
  if (id == wxART_SPATIAL_AUDIO_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPATIAL_AUDIO_OFF);
  if (id == wxART_SPATIAL_TRACKING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPATIAL_TRACKING);
  if (id == wxART_SPEAKER)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPEAKER);
  if (id == wxART_SPEAKER_GROUP)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPEAKER_GROUP);
  if (id == wxART_SPEAKER_NOTES)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPEAKER_NOTES);
  if (id == wxART_SPEAKER_NOTES_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPEAKER_NOTES_OFF);
  if (id == wxART_SPEAKER_PHONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPEAKER_PHONE);
  if (id == wxART_SPEED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPEED);
  if (id == wxART_SPELLCHECK)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPELLCHECK);
  if (id == wxART_SPLITSCREEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPLITSCREEN);
  if (id == wxART_SPOKE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPOKE);
  if (id == wxART_SPORTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS);
  if (id == wxART_SPORTS_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_BAR);
  if (id == wxART_SPORTS_BASEBALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_BASEBALL);
  if (id == wxART_SPORTS_BASKETBALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_BASKETBALL);
  if (id == wxART_SPORTS_CRICKET)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_CRICKET);
  if (id == wxART_SPORTS_ESPORTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_ESPORTS);
  if (id == wxART_SPORTS_FOOTBALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_FOOTBALL);
  if (id == wxART_SPORTS_GOLF)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_GOLF);
  if (id == wxART_SPORTS_GYMNASTICS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_GYMNASTICS);
  if (id == wxART_SPORTS_HANDBALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_HANDBALL);
  if (id == wxART_SPORTS_HOCKEY)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_HOCKEY);
  if (id == wxART_SPORTS_KABADDI)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_KABADDI);
  if (id == wxART_SPORTS_MARTIAL_ARTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_MARTIAL_ARTS);
  if (id == wxART_SPORTS_MMA)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_MMA);
  if (id == wxART_SPORTS_MOTORSPORTS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_MOTORSPORTS);
  if (id == wxART_SPORTS_RUGBY)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_RUGBY);
  if (id == wxART_SPORTS_SCORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_SCORE);
  if (id == wxART_SPORTS_SOCCER)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_SOCCER);
  if (id == wxART_SPORTS_TENNIS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_TENNIS);
  if (id == wxART_SPORTS_VOLLEYBALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SPORTS_VOLLEYBALL);
  if (id == wxART_SQUARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SQUARE);
  if (id == wxART_SQUARE_FOOT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SQUARE_FOOT);
  if (id == wxART_SSID_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_SSID_CHART);
  if (id == wxART_STACKED_BAR_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_STACKED_BAR_CHART);
  if (id == wxART_STACKED_LINE_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_STACKED_LINE_CHART);
  if (id == wxART_STADIUM)  
      return wxString(SVG_MATERIAL_TWO_TONE_STADIUM);
  if (id == wxART_STAIRS)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAIRS);
  if (id == wxART_STAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAR);
  if (id == wxART_STAR_BORDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAR_BORDER);
  if (id == wxART_STAR_BORDER_PURPLE500)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAR_BORDER_PURPLE500);
  if (id == wxART_STAR_HALF)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAR_HALF);
  if (id == wxART_STAR_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAR_OUTLINE);
  if (id == wxART_STAR_PURPLE500)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAR_PURPLE500);
  if (id == wxART_STAR_RATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAR_RATE);
  if (id == wxART_STARS)  
      return wxString(SVG_MATERIAL_TWO_TONE_STARS);
  if (id == wxART_START)  
      return wxString(SVG_MATERIAL_TWO_TONE_START);
  if (id == wxART_STAY_CURRENT_LANDSCAPE)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAY_CURRENT_LANDSCAPE);
  if (id == wxART_STAY_CURRENT_PORTRAIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAY_CURRENT_PORTRAIT);
  if (id == wxART_STAY_PRIMARY_LANDSCAPE)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAY_PRIMARY_LANDSCAPE);
  if (id == wxART_STAY_PRIMARY_PORTRAIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_STAY_PRIMARY_PORTRAIT);
  if (id == wxART_STICKY_NOTE_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_STICKY_NOTE_2);
  if (id == wxART_STOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_STOP);
  if (id == wxART_STOP_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_STOP_CIRCLE);
  if (id == wxART_STOP_SCREEN_SHARE)  
      return wxString(SVG_MATERIAL_TWO_TONE_STOP_SCREEN_SHARE);
  if (id == wxART_STORAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_STORAGE);
  if (id == wxART_STORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_STORE);
  if (id == wxART_STORE_MALL_DIRECTORY)  
      return wxString(SVG_MATERIAL_TWO_TONE_STORE_MALL_DIRECTORY);
  if (id == wxART_STOREFRONT)  
      return wxString(SVG_MATERIAL_TWO_TONE_STOREFRONT);
  if (id == wxART_STORM)  
      return wxString(SVG_MATERIAL_TWO_TONE_STORM);
  if (id == wxART_STRAIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_STRAIGHT);
  if (id == wxART_STRAIGHTEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_STRAIGHTEN);
  if (id == wxART_STREAM)  
      return wxString(SVG_MATERIAL_TWO_TONE_STREAM);
  if (id == wxART_STREETVIEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_STREETVIEW);
  if (id == wxART_STRIKETHROUGH_S)  
      return wxString(SVG_MATERIAL_TWO_TONE_STRIKETHROUGH_S);
  if (id == wxART_STROLLER)  
      return wxString(SVG_MATERIAL_TWO_TONE_STROLLER);
  if (id == wxART_STYLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_STYLE);
  if (id == wxART_SUBDIRECTORY_ARROW_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUBDIRECTORY_ARROW_LEFT);
  if (id == wxART_SUBDIRECTORY_ARROW_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUBDIRECTORY_ARROW_RIGHT);
  if (id == wxART_SUBJECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUBJECT);
  if (id == wxART_SUBSCRIPT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUBSCRIPT);
  if (id == wxART_SUBSCRIPTIONS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUBSCRIPTIONS);
  if (id == wxART_SUBTITLES)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUBTITLES);
  if (id == wxART_SUBTITLES_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUBTITLES_OFF);
  if (id == wxART_SUBWAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUBWAY);
  if (id == wxART_SUMMARIZE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUMMARIZE);
  if (id == wxART_SUPERSCRIPT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUPERSCRIPT);
  if (id == wxART_SUPERVISED_USER_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUPERVISED_USER_CIRCLE);
  if (id == wxART_SUPERVISOR_ACCOUNT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUPERVISOR_ACCOUNT);
  if (id == wxART_SUPPORT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUPPORT);
  if (id == wxART_SUPPORT_AGENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SUPPORT_AGENT);
  if (id == wxART_SURFING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SURFING);
  if (id == wxART_SURROUND_SOUND)  
      return wxString(SVG_MATERIAL_TWO_TONE_SURROUND_SOUND);
  if (id == wxART_SWAP_CALLS)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWAP_CALLS);
  if (id == wxART_SWAP_HORIZ)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWAP_HORIZ);
  if (id == wxART_SWAP_HORIZONTAL_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWAP_HORIZONTAL_CIRCLE);
  if (id == wxART_SWAP_VERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWAP_VERT);
  if (id == wxART_SWAP_VERTICAL_CIRCLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWAP_VERTICAL_CIRCLE);
  if (id == wxART_SWIPE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE);
  if (id == wxART_SWIPE_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE_DOWN);
  if (id == wxART_SWIPE_DOWN_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE_DOWN_ALT);
  if (id == wxART_SWIPE_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE_LEFT);
  if (id == wxART_SWIPE_LEFT_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE_LEFT_ALT);
  if (id == wxART_SWIPE_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE_RIGHT);
  if (id == wxART_SWIPE_RIGHT_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE_RIGHT_ALT);
  if (id == wxART_SWIPE_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE_UP);
  if (id == wxART_SWIPE_UP_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE_UP_ALT);
  if (id == wxART_SWIPE_VERTICAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWIPE_VERTICAL);
  if (id == wxART_SWITCH_ACCESS_SHORTCUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWITCH_ACCESS_SHORTCUT);
  if (id == wxART_SWITCH_ACCESS_SHORTCUT_ADD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWITCH_ACCESS_SHORTCUT_ADD);
  if (id == wxART_SWITCH_ACCOUNT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWITCH_ACCOUNT);
  if (id == wxART_SWITCH_CAMERA)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWITCH_CAMERA);
  if (id == wxART_SWITCH_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWITCH_LEFT);
  if (id == wxART_SWITCH_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWITCH_RIGHT);
  if (id == wxART_SWITCH_VIDEO)  
      return wxString(SVG_MATERIAL_TWO_TONE_SWITCH_VIDEO);
  if (id == wxART_SYNAGOGUE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYNAGOGUE);
  if (id == wxART_SYNC)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYNC);
  if (id == wxART_SYNC_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYNC_ALT);
  if (id == wxART_SYNC_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYNC_DISABLED);
  if (id == wxART_SYNC_LOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYNC_LOCK);
  if (id == wxART_SYNC_PROBLEM)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYNC_PROBLEM);
  if (id == wxART_SYSTEM_SECURITY_UPDATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYSTEM_SECURITY_UPDATE);
  if (id == wxART_SYSTEM_SECURITY_UPDATE_GOOD)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYSTEM_SECURITY_UPDATE_GOOD);
  if (id == wxART_SYSTEM_SECURITY_UPDATE_WARNING)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYSTEM_SECURITY_UPDATE_WARNING);
  if (id == wxART_SYSTEM_UPDATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYSTEM_UPDATE);
  if (id == wxART_SYSTEM_UPDATE_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_SYSTEM_UPDATE_ALT);
  if (id == wxART_TAB)  
      return wxString(SVG_MATERIAL_TWO_TONE_TAB);
  if (id == wxART_TAB_UNSELECTED)  
      return wxString(SVG_MATERIAL_TWO_TONE_TAB_UNSELECTED);
  if (id == wxART_TABLE_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_TABLE_BAR);
  if (id == wxART_TABLE_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_TABLE_CHART);
  if (id == wxART_TABLE_RESTAURANT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TABLE_RESTAURANT);
  if (id == wxART_TABLE_ROWS)  
      return wxString(SVG_MATERIAL_TWO_TONE_TABLE_ROWS);
  if (id == wxART_TABLE_VIEW)  
      return wxString(SVG_MATERIAL_TWO_TONE_TABLE_VIEW);
  if (id == wxART_TABLET)  
      return wxString(SVG_MATERIAL_TWO_TONE_TABLET);
  if (id == wxART_TABLET_ANDROID)  
      return wxString(SVG_MATERIAL_TWO_TONE_TABLET_ANDROID);
  if (id == wxART_TABLET_MAC)  
      return wxString(SVG_MATERIAL_TWO_TONE_TABLET_MAC);
  if (id == wxART_TAG)  
      return wxString(SVG_MATERIAL_TWO_TONE_TAG);
  if (id == wxART_TAG_FACES)  
      return wxString(SVG_MATERIAL_TWO_TONE_TAG_FACES);
  if (id == wxART_TAKEOUT_DINING)  
      return wxString(SVG_MATERIAL_TWO_TONE_TAKEOUT_DINING);
  if (id == wxART_TAP_AND_PLAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_TAP_AND_PLAY);
  if (id == wxART_TAPAS)  
      return wxString(SVG_MATERIAL_TWO_TONE_TAPAS);
  if (id == wxART_TASK)  
      return wxString(SVG_MATERIAL_TWO_TONE_TASK);
  if (id == wxART_TASK_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TASK_ALT);
  if (id == wxART_TAXI_ALERT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TAXI_ALERT);
  if (id == wxART_TEMPLE_BUDDHIST)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEMPLE_BUDDHIST);
  if (id == wxART_TEMPLE_HINDU)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEMPLE_HINDU);
  if (id == wxART_TERMINAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_TERMINAL);
  if (id == wxART_TERRAIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TERRAIN);
  if (id == wxART_TEXT_DECREASE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_DECREASE);
  if (id == wxART_TEXT_FIELDS)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_FIELDS);
  if (id == wxART_TEXT_FORMAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_FORMAT);
  if (id == wxART_TEXT_INCREASE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_INCREASE);
  if (id == wxART_TEXT_ROTATE_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_ROTATE_UP);
  if (id == wxART_TEXT_ROTATE_VERTICAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_ROTATE_VERTICAL);
  if (id == wxART_TEXT_ROTATION_ANGLEDOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_ROTATION_ANGLEDOWN);
  if (id == wxART_TEXT_ROTATION_ANGLEUP)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_ROTATION_ANGLEUP);
  if (id == wxART_TEXT_ROTATION_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_ROTATION_DOWN);
  if (id == wxART_TEXT_ROTATION_NONE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_ROTATION_NONE);
  if (id == wxART_TEXT_SNIPPET)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXT_SNIPPET);
  if (id == wxART_TEXTSMS)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXTSMS);
  if (id == wxART_TEXTURE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TEXTURE);
  if (id == wxART_THEATER_COMEDY)  
      return wxString(SVG_MATERIAL_TWO_TONE_THEATER_COMEDY);
  if (id == wxART_THEATERS)  
      return wxString(SVG_MATERIAL_TWO_TONE_THEATERS);
  if (id == wxART_THERMOSTAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_THERMOSTAT);
  if (id == wxART_THERMOSTAT_AUTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_THERMOSTAT_AUTO);
  if (id == wxART_THUMB_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_THUMB_DOWN);
  if (id == wxART_THUMB_DOWN_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_THUMB_DOWN_ALT);
  if (id == wxART_THUMB_DOWN_OFF_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_THUMB_DOWN_OFF_ALT);
  if (id == wxART_THUMB_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_THUMB_UP);
  if (id == wxART_THUMB_UP_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_THUMB_UP_ALT);
  if (id == wxART_THUMB_UP_OFF_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_THUMB_UP_OFF_ALT);
  if (id == wxART_THUMBS_UP_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_THUMBS_UP_DOWN);
  if (id == wxART_THUNDERSTORM)  
      return wxString(SVG_MATERIAL_TWO_TONE_THUNDERSTORM);
  if (id == wxART_TIME_TO_LEAVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIME_TO_LEAVE);
  if (id == wxART_TIMELAPSE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIMELAPSE);
  if (id == wxART_TIMELINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIMELINE);
  if (id == wxART_TIMER)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIMER);
  if (id == wxART_TIMER_10)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIMER_10);
  if (id == wxART_TIMER_10_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIMER_10_SELECT);
  if (id == wxART_TIMER_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIMER_3);
  if (id == wxART_TIMER_3_SELECT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIMER_3_SELECT);
  if (id == wxART_TIMER_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIMER_OFF);
  if (id == wxART_TIPS_AND_UPDATES)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIPS_AND_UPDATES);
  if (id == wxART_TIRE_REPAIR)  
      return wxString(SVG_MATERIAL_TWO_TONE_TIRE_REPAIR);
  if (id == wxART_TITLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TITLE);
  if (id == wxART_TOC)  
      return wxString(SVG_MATERIAL_TWO_TONE_TOC);
  if (id == wxART_TODAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_TODAY);
  if (id == wxART_TOGGLE_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_TOGGLE_OFF);
  if (id == wxART_TOGGLE_ON)  
      return wxString(SVG_MATERIAL_TWO_TONE_TOGGLE_ON);
  if (id == wxART_TOKEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TOKEN);
  if (id == wxART_TOLL)  
      return wxString(SVG_MATERIAL_TWO_TONE_TOLL);
  if (id == wxART_TONALITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_TONALITY);
  if (id == wxART_TOPIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_TOPIC);
  if (id == wxART_TORNADO)  
      return wxString(SVG_MATERIAL_TWO_TONE_TORNADO);
  if (id == wxART_TOUCH_APP)  
      return wxString(SVG_MATERIAL_TWO_TONE_TOUCH_APP);
  if (id == wxART_TOUR)  
      return wxString(SVG_MATERIAL_TWO_TONE_TOUR);
  if (id == wxART_TOYS)  
      return wxString(SVG_MATERIAL_TWO_TONE_TOYS);
  if (id == wxART_TRACK_CHANGES)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRACK_CHANGES);
  if (id == wxART_TRAFFIC)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRAFFIC);
  if (id == wxART_TRAIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRAIN);
  if (id == wxART_TRAM)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRAM);
  if (id == wxART_TRANSCRIBE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRANSCRIBE);
  if (id == wxART_TRANSFER_WITHIN_A_STATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRANSFER_WITHIN_A_STATION);
  if (id == wxART_TRANSFORM)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRANSFORM);
  if (id == wxART_TRANSGENDER)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRANSGENDER);
  if (id == wxART_TRANSIT_ENTEREXIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRANSIT_ENTEREXIT);
  if (id == wxART_TRANSLATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRANSLATE);
  if (id == wxART_TRAVEL_EXPLORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRAVEL_EXPLORE);
  if (id == wxART_TRENDING_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRENDING_DOWN);
  if (id == wxART_TRENDING_FLAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRENDING_FLAT);
  if (id == wxART_TRENDING_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRENDING_UP);
  if (id == wxART_TRIP_ORIGIN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRIP_ORIGIN);
  if (id == wxART_TROUBLESHOOT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TROUBLESHOOT);
  if (id == wxART_TRY)  
      return wxString(SVG_MATERIAL_TWO_TONE_TRY);
  if (id == wxART_TSUNAMI)  
      return wxString(SVG_MATERIAL_TWO_TONE_TSUNAMI);
  if (id == wxART_TTY)  
      return wxString(SVG_MATERIAL_TWO_TONE_TTY);
  if (id == wxART_TUNE)  
      return wxString(SVG_MATERIAL_TWO_TONE_TUNE);
  if (id == wxART_TUNGSTEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TUNGSTEN);
  if (id == wxART_TURN_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TURN_LEFT);
  if (id == wxART_TURN_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TURN_RIGHT);
  if (id == wxART_TURN_SHARP_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TURN_SHARP_LEFT);
  if (id == wxART_TURN_SHARP_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TURN_SHARP_RIGHT);
  if (id == wxART_TURN_SLIGHT_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TURN_SLIGHT_LEFT);
  if (id == wxART_TURN_SLIGHT_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TURN_SLIGHT_RIGHT);
  if (id == wxART_TURNED_IN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TURNED_IN);
  if (id == wxART_TURNED_IN_NOT)  
      return wxString(SVG_MATERIAL_TWO_TONE_TURNED_IN_NOT);
  if (id == wxART_TV)  
      return wxString(SVG_MATERIAL_TWO_TONE_TV);
  if (id == wxART_TV_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_TV_OFF);
  if (id == wxART_TWO_WHEELER)  
      return wxString(SVG_MATERIAL_TWO_TONE_TWO_WHEELER);
  if (id == wxART_TYPE_SPECIMEN)  
      return wxString(SVG_MATERIAL_TWO_TONE_TYPE_SPECIMEN);
  if (id == wxART_U_TURN_LEFT)  
      return wxString(SVG_MATERIAL_TWO_TONE_U_TURN_LEFT);
  if (id == wxART_U_TURN_RIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_U_TURN_RIGHT);
  if (id == wxART_UMBRELLA)  
      return wxString(SVG_MATERIAL_TWO_TONE_UMBRELLA);
  if (id == wxART_UNARCHIVE)  
      return wxString(SVG_MATERIAL_TWO_TONE_UNARCHIVE);
  if (id == wxART_UNDO)  
      return wxString(SVG_MATERIAL_TWO_TONE_UNDO);
  if (id == wxART_UNFOLD_LESS)  
      return wxString(SVG_MATERIAL_TWO_TONE_UNFOLD_LESS);
  if (id == wxART_UNFOLD_LESS_DOUBLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_UNFOLD_LESS_DOUBLE);
  if (id == wxART_UNFOLD_MORE)  
      return wxString(SVG_MATERIAL_TWO_TONE_UNFOLD_MORE);
  if (id == wxART_UNFOLD_MORE_DOUBLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_UNFOLD_MORE_DOUBLE);
  if (id == wxART_UNPUBLISHED)  
      return wxString(SVG_MATERIAL_TWO_TONE_UNPUBLISHED);
  if (id == wxART_UNSUBSCRIBE)  
      return wxString(SVG_MATERIAL_TWO_TONE_UNSUBSCRIBE);
  if (id == wxART_UPCOMING)  
      return wxString(SVG_MATERIAL_TWO_TONE_UPCOMING);
  if (id == wxART_UPDATE)  
      return wxString(SVG_MATERIAL_TWO_TONE_UPDATE);
  if (id == wxART_UPDATE_DISABLED)  
      return wxString(SVG_MATERIAL_TWO_TONE_UPDATE_DISABLED);
  if (id == wxART_UPGRADE)  
      return wxString(SVG_MATERIAL_TWO_TONE_UPGRADE);
  if (id == wxART_UPLOAD)  
      return wxString(SVG_MATERIAL_TWO_TONE_UPLOAD);
  if (id == wxART_UPLOAD_FILE)  
      return wxString(SVG_MATERIAL_TWO_TONE_UPLOAD_FILE);
  if (id == wxART_USB)  
      return wxString(SVG_MATERIAL_TWO_TONE_USB);
  if (id == wxART_USB_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_USB_OFF);
  if (id == wxART_VACCINES)  
      return wxString(SVG_MATERIAL_TWO_TONE_VACCINES);
  if (id == wxART_VAPE_FREE)  
      return wxString(SVG_MATERIAL_TWO_TONE_VAPE_FREE);
  if (id == wxART_VAPING_ROOMS)  
      return wxString(SVG_MATERIAL_TWO_TONE_VAPING_ROOMS);
  if (id == wxART_VERIFIED)  
      return wxString(SVG_MATERIAL_TWO_TONE_VERIFIED);
  if (id == wxART_VERIFIED_USER)  
      return wxString(SVG_MATERIAL_TWO_TONE_VERIFIED_USER);
  if (id == wxART_VERTICAL_ALIGN_BOTTOM)  
      return wxString(SVG_MATERIAL_TWO_TONE_VERTICAL_ALIGN_BOTTOM);
  if (id == wxART_VERTICAL_ALIGN_CENTER)  
      return wxString(SVG_MATERIAL_TWO_TONE_VERTICAL_ALIGN_CENTER);
  if (id == wxART_VERTICAL_ALIGN_TOP)  
      return wxString(SVG_MATERIAL_TWO_TONE_VERTICAL_ALIGN_TOP);
  if (id == wxART_VERTICAL_DISTRIBUTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_VERTICAL_DISTRIBUTE);
  if (id == wxART_VERTICAL_SHADES)  
      return wxString(SVG_MATERIAL_TWO_TONE_VERTICAL_SHADES);
  if (id == wxART_VERTICAL_SHADES_CLOSED)  
      return wxString(SVG_MATERIAL_TWO_TONE_VERTICAL_SHADES_CLOSED);
  if (id == wxART_VERTICAL_SPLIT)  
      return wxString(SVG_MATERIAL_TWO_TONE_VERTICAL_SPLIT);
  if (id == wxART_VIBRATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIBRATION);
  if (id == wxART_VIDEO_CALL)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEO_CALL);
  if (id == wxART_VIDEO_CAMERA_BACK)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEO_CAMERA_BACK);
  if (id == wxART_VIDEO_CAMERA_FRONT)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEO_CAMERA_FRONT);
  if (id == wxART_VIDEO_CHAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEO_CHAT);
  if (id == wxART_VIDEO_FILE)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEO_FILE);
  if (id == wxART_VIDEO_LABEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEO_LABEL);
  if (id == wxART_VIDEO_LIBRARY)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEO_LIBRARY);
  if (id == wxART_VIDEO_SETTINGS)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEO_SETTINGS);
  if (id == wxART_VIDEO_STABLE)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEO_STABLE);
  if (id == wxART_VIDEOCAM)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEOCAM);
  if (id == wxART_VIDEOCAM_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEOCAM_OFF);
  if (id == wxART_VIDEOGAME_ASSET)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEOGAME_ASSET);
  if (id == wxART_VIDEOGAME_ASSET_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIDEOGAME_ASSET_OFF);
  if (id == wxART_VIEW_AGENDA)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_AGENDA);
  if (id == wxART_VIEW_ARRAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_ARRAY);
  if (id == wxART_VIEW_CAROUSEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_CAROUSEL);
  if (id == wxART_VIEW_COLUMN)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_COLUMN);
  if (id == wxART_VIEW_COMFY)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_COMFY);
  if (id == wxART_VIEW_COMFY_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_COMFY_ALT);
  if (id == wxART_VIEW_COMPACT)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_COMPACT);
  if (id == wxART_VIEW_COMPACT_ALT)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_COMPACT_ALT);
  if (id == wxART_VIEW_COZY)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_COZY);
  if (id == wxART_VIEW_DAY)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_DAY);
  if (id == wxART_VIEW_HEADLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_HEADLINE);
  if (id == wxART_VIEW_IN_AR)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_IN_AR);
  if (id == wxART_VIEW_KANBAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_KANBAN);
  if (id == wxART_VIEW_LIST)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_LIST);
  if (id == wxART_VIEW_MODULE)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_MODULE);
  if (id == wxART_VIEW_QUILT)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_QUILT);
  if (id == wxART_VIEW_SIDEBAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_SIDEBAR);
  if (id == wxART_VIEW_STREAM)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_STREAM);
  if (id == wxART_VIEW_TIMELINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_TIMELINE);
  if (id == wxART_VIEW_WEEK)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIEW_WEEK);
  if (id == wxART_VIGNETTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_VIGNETTE);
  if (id == wxART_VILLA)  
      return wxString(SVG_MATERIAL_TWO_TONE_VILLA);
  if (id == wxART_VISIBILITY)  
      return wxString(SVG_MATERIAL_TWO_TONE_VISIBILITY);
  if (id == wxART_VISIBILITY_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_VISIBILITY_OFF);
  if (id == wxART_VOICE_CHAT)  
      return wxString(SVG_MATERIAL_TWO_TONE_VOICE_CHAT);
  if (id == wxART_VOICE_OVER_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_VOICE_OVER_OFF);
  if (id == wxART_VOICEMAIL)  
      return wxString(SVG_MATERIAL_TWO_TONE_VOICEMAIL);
  if (id == wxART_VOLCANO)  
      return wxString(SVG_MATERIAL_TWO_TONE_VOLCANO);
  if (id == wxART_VOLUME_DOWN)  
      return wxString(SVG_MATERIAL_TWO_TONE_VOLUME_DOWN);
  if (id == wxART_VOLUME_MUTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_VOLUME_MUTE);
  if (id == wxART_VOLUME_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_VOLUME_OFF);
  if (id == wxART_VOLUME_UP)  
      return wxString(SVG_MATERIAL_TWO_TONE_VOLUME_UP);
  if (id == wxART_VOLUNTEER_ACTIVISM)  
      return wxString(SVG_MATERIAL_TWO_TONE_VOLUNTEER_ACTIVISM);
  if (id == wxART_VPN_KEY)  
      return wxString(SVG_MATERIAL_TWO_TONE_VPN_KEY);
  if (id == wxART_VPN_KEY_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_VPN_KEY_OFF);
  if (id == wxART_VPN_LOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_VPN_LOCK);
  if (id == wxART_VRPANO)  
      return wxString(SVG_MATERIAL_TWO_TONE_VRPANO);
  if (id == wxART_WALLET)  
      return wxString(SVG_MATERIAL_TWO_TONE_WALLET);
  if (id == wxART_WALLPAPER)  
      return wxString(SVG_MATERIAL_TWO_TONE_WALLPAPER);
  if (id == wxART_WAREHOUSE)  
      return wxString(SVG_MATERIAL_TWO_TONE_WAREHOUSE);
  if (id == wxART_WARNING)  
      return wxString(SVG_MATERIAL_TWO_TONE_WARNING);
  if (id == wxART_WARNING_AMBER)  
      return wxString(SVG_MATERIAL_TWO_TONE_WARNING_AMBER);
  if (id == wxART_WASH)  
      return wxString(SVG_MATERIAL_TWO_TONE_WASH);
  if (id == wxART_WATCH)  
      return wxString(SVG_MATERIAL_TWO_TONE_WATCH);
  if (id == wxART_WATCH_LATER)  
      return wxString(SVG_MATERIAL_TWO_TONE_WATCH_LATER);
  if (id == wxART_WATCH_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_WATCH_OFF);
  if (id == wxART_WATER)  
      return wxString(SVG_MATERIAL_TWO_TONE_WATER);
  if (id == wxART_WATER_DAMAGE)  
      return wxString(SVG_MATERIAL_TWO_TONE_WATER_DAMAGE);
  if (id == wxART_WATER_DROP)  
      return wxString(SVG_MATERIAL_TWO_TONE_WATER_DROP);
  if (id == wxART_WATERFALL_CHART)  
      return wxString(SVG_MATERIAL_TWO_TONE_WATERFALL_CHART);
  if (id == wxART_WAVES)  
      return wxString(SVG_MATERIAL_TWO_TONE_WAVES);
  if (id == wxART_WAVING_HAND)  
      return wxString(SVG_MATERIAL_TWO_TONE_WAVING_HAND);
  if (id == wxART_WB_AUTO)  
      return wxString(SVG_MATERIAL_TWO_TONE_WB_AUTO);
  if (id == wxART_WB_CLOUDY)  
      return wxString(SVG_MATERIAL_TWO_TONE_WB_CLOUDY);
  if (id == wxART_WB_INCANDESCENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_WB_INCANDESCENT);
  if (id == wxART_WB_IRIDESCENT)  
      return wxString(SVG_MATERIAL_TWO_TONE_WB_IRIDESCENT);
  if (id == wxART_WB_SHADE)  
      return wxString(SVG_MATERIAL_TWO_TONE_WB_SHADE);
  if (id == wxART_WB_SUNNY)  
      return wxString(SVG_MATERIAL_TWO_TONE_WB_SUNNY);
  if (id == wxART_WB_TWILIGHT)  
      return wxString(SVG_MATERIAL_TWO_TONE_WB_TWILIGHT);
  if (id == wxART_WC)  
      return wxString(SVG_MATERIAL_TWO_TONE_WC);
  if (id == wxART_WEB)  
      return wxString(SVG_MATERIAL_TWO_TONE_WEB);
  if (id == wxART_WEB_ASSET)  
      return wxString(SVG_MATERIAL_TWO_TONE_WEB_ASSET);
  if (id == wxART_WEB_ASSET_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_WEB_ASSET_OFF);
  if (id == wxART_WEB_STORIES)  
      return wxString(SVG_MATERIAL_TWO_TONE_WEB_STORIES);
  if (id == wxART_WEBHOOK)  
      return wxString(SVG_MATERIAL_TWO_TONE_WEBHOOK);
  if (id == wxART_WEEKEND)  
      return wxString(SVG_MATERIAL_TWO_TONE_WEEKEND);
  if (id == wxART_WEST)  
      return wxString(SVG_MATERIAL_TWO_TONE_WEST);
  if (id == wxART_WHATSHOT)  
      return wxString(SVG_MATERIAL_TWO_TONE_WHATSHOT);
  if (id == wxART_WHEELCHAIR_PICKUP)  
      return wxString(SVG_MATERIAL_TWO_TONE_WHEELCHAIR_PICKUP);
  if (id == wxART_WHERE_TO_VOTE)  
      return wxString(SVG_MATERIAL_TWO_TONE_WHERE_TO_VOTE);
  if (id == wxART_WIDGETS)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIDGETS);
  if (id == wxART_WIDTH_FULL)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIDTH_FULL);
  if (id == wxART_WIDTH_NORMAL)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIDTH_NORMAL);
  if (id == wxART_WIDTH_WIDE)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIDTH_WIDE);
  if (id == wxART_WIFI)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI);
  if (id == wxART_WIFI_1_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_1_BAR);
  if (id == wxART_WIFI_2_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_2_BAR);
  if (id == wxART_WIFI_CALLING)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_CALLING);
  if (id == wxART_WIFI_CALLING_3)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_CALLING_3);
  if (id == wxART_WIFI_CHANNEL)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_CHANNEL);
  if (id == wxART_WIFI_FIND)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_FIND);
  if (id == wxART_WIFI_LOCK)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_LOCK);
  if (id == wxART_WIFI_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_OFF);
  if (id == wxART_WIFI_PASSWORD)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_PASSWORD);
  if (id == wxART_WIFI_PROTECTED_SETUP)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_PROTECTED_SETUP);
  if (id == wxART_WIFI_TETHERING)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_TETHERING);
  if (id == wxART_WIFI_TETHERING_ERROR)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_TETHERING_ERROR);
  if (id == wxART_WIFI_TETHERING_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIFI_TETHERING_OFF);
  if (id == wxART_WIND_POWER)  
      return wxString(SVG_MATERIAL_TWO_TONE_WIND_POWER);
  if (id == wxART_WINDOW)  
      return wxString(SVG_MATERIAL_TWO_TONE_WINDOW);
  if (id == wxART_WINE_BAR)  
      return wxString(SVG_MATERIAL_TWO_TONE_WINE_BAR);
  if (id == wxART_WOMAN)  
      return wxString(SVG_MATERIAL_TWO_TONE_WOMAN);
  if (id == wxART_WOMAN_2)  
      return wxString(SVG_MATERIAL_TWO_TONE_WOMAN_2);
  if (id == wxART_WORK)  
      return wxString(SVG_MATERIAL_TWO_TONE_WORK);
  if (id == wxART_WORK_HISTORY)  
      return wxString(SVG_MATERIAL_TWO_TONE_WORK_HISTORY);
  if (id == wxART_WORK_OFF)  
      return wxString(SVG_MATERIAL_TWO_TONE_WORK_OFF);
  if (id == wxART_WORK_OUTLINE)  
      return wxString(SVG_MATERIAL_TWO_TONE_WORK_OUTLINE);
  if (id == wxART_WORKSPACE_PREMIUM)  
      return wxString(SVG_MATERIAL_TWO_TONE_WORKSPACE_PREMIUM);
  if (id == wxART_WORKSPACES)  
      return wxString(SVG_MATERIAL_TWO_TONE_WORKSPACES);
  if (id == wxART_WRAP_TEXT)  
      return wxString(SVG_MATERIAL_TWO_TONE_WRAP_TEXT);
  if (id == wxART_WRONG_LOCATION)  
      return wxString(SVG_MATERIAL_TWO_TONE_WRONG_LOCATION);
  if (id == wxART_WYSIWYG)  
      return wxString(SVG_MATERIAL_TWO_TONE_WYSIWYG);
  if (id == wxART_YARD)  
      return wxString(SVG_MATERIAL_TWO_TONE_YARD);
  if (id == wxART_YOUTUBE_SEARCHED_FOR)  
      return wxString(SVG_MATERIAL_TWO_TONE_YOUTUBE_SEARCHED_FOR);
  if (id == wxART_ZOOM_IN)  
      return wxString(SVG_MATERIAL_TWO_TONE_ZOOM_IN);
  if (id == wxART_ZOOM_IN_MAP)  
      return wxString(SVG_MATERIAL_TWO_TONE_ZOOM_IN_MAP);
  if (id == wxART_ZOOM_OUT)  
      return wxString(SVG_MATERIAL_TWO_TONE_ZOOM_OUT);
  if (id == wxART_ZOOM_OUT_MAP)  
      return wxString(SVG_MATERIAL_TWO_TONE_ZOOM_OUT_MAP);


// Any IDs not implemented here will return a null string 
return wxString(); 
}


// Return SVG for the current ID as a string, with given color
wxString TwoToneMaterialArtColorSVGByID(const wxArtID& id, const wxColour& color)
{
wxString svg = TwoToneMaterialArtSVGByID(id); 
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
int npaths = 0;  
wxString tmp;  
while (!(ifirst==wxNOT_FOUND)) {  
   npaths++;  
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
wxArrayString TwoToneMaterialArtIDs()
{
    wxArrayString list; 

    list.Add(wxART_10K); 
    list.Add(wxART_10MP); 
    list.Add(wxART_11MP); 
    list.Add(wxART_123); 
    list.Add(wxART_12MP); 
    list.Add(wxART_13MP); 
    list.Add(wxART_14MP); 
    list.Add(wxART_15MP); 
    list.Add(wxART_16MP); 
    list.Add(wxART_17MP); 
    list.Add(wxART_18_UP_RATING); 
    list.Add(wxART_18MP); 
    list.Add(wxART_19MP); 
    list.Add(wxART_1K); 
    list.Add(wxART_1K_PLUS); 
    list.Add(wxART_1X_MOBILEDATA); 
    list.Add(wxART_20MP); 
    list.Add(wxART_21MP); 
    list.Add(wxART_22MP); 
    list.Add(wxART_23MP); 
    list.Add(wxART_24MP); 
    list.Add(wxART_2K); 
    list.Add(wxART_2K_PLUS); 
    list.Add(wxART_2MP); 
    list.Add(wxART_30FPS); 
    list.Add(wxART_30FPS_SELECT); 
    list.Add(wxART_360); 
    list.Add(wxART_3D_ROTATION); 
    list.Add(wxART_3G_MOBILEDATA); 
    list.Add(wxART_3K); 
    list.Add(wxART_3K_PLUS); 
    list.Add(wxART_3MP); 
    list.Add(wxART_3P); 
    list.Add(wxART_4G_MOBILEDATA); 
    list.Add(wxART_4G_PLUS_MOBILEDATA); 
    list.Add(wxART_4K); 
    list.Add(wxART_4K_PLUS); 
    list.Add(wxART_4MP); 
    list.Add(wxART_5G); 
    list.Add(wxART_5K); 
    list.Add(wxART_5K_PLUS); 
    list.Add(wxART_5MP); 
    list.Add(wxART_60FPS); 
    list.Add(wxART_60FPS_SELECT); 
    list.Add(wxART_6_FT_APART); 
    list.Add(wxART_6K); 
    list.Add(wxART_6K_PLUS); 
    list.Add(wxART_6MP); 
    list.Add(wxART_7K); 
    list.Add(wxART_7K_PLUS); 
    list.Add(wxART_7MP); 
    list.Add(wxART_8K); 
    list.Add(wxART_8K_PLUS); 
    list.Add(wxART_8MP); 
    list.Add(wxART_9K); 
    list.Add(wxART_9K_PLUS); 
    list.Add(wxART_9MP); 
    list.Add(wxART_ABC); 
    list.Add(wxART_AC_UNIT); 
    list.Add(wxART_ACCESS_ALARM); 
    list.Add(wxART_ACCESS_ALARMS); 
    list.Add(wxART_ACCESS_TIME); 
    list.Add(wxART_ACCESS_TIME_FILLED); 
    list.Add(wxART_ACCESSIBILITY); 
    list.Add(wxART_ACCESSIBILITY_NEW); 
    list.Add(wxART_ACCESSIBLE); 
    list.Add(wxART_ACCESSIBLE_FORWARD); 
    list.Add(wxART_ACCOUNT_BALANCE); 
    list.Add(wxART_ACCOUNT_BALANCE_WALLET); 
    list.Add(wxART_ACCOUNT_BOX); 
    list.Add(wxART_ACCOUNT_CIRCLE); 
    list.Add(wxART_ACCOUNT_TREE); 
    list.Add(wxART_AD_UNITS); 
    list.Add(wxART_ADB); 
    list.Add(wxART_ADD); 
    list.Add(wxART_ADD_A_PHOTO); 
    list.Add(wxART_ADD_ALARM); 
    list.Add(wxART_ADD_ALERT); 
    list.Add(wxART_ADD_BOX); 
    list.Add(wxART_ADD_BUSINESS); 
    list.Add(wxART_ADD_CARD); 
    list.Add(wxART_ADD_CHART); 
    list.Add(wxART_ADD_CIRCLE); 
    list.Add(wxART_ADD_CIRCLE_OUTLINE); 
    list.Add(wxART_ADD_COMMENT); 
    list.Add(wxART_ADD_HOME); 
    list.Add(wxART_ADD_HOME_WORK); 
    list.Add(wxART_ADD_IC_CALL); 
    list.Add(wxART_ADD_LINK); 
    list.Add(wxART_ADD_LOCATION); 
    list.Add(wxART_ADD_LOCATION_ALT); 
    list.Add(wxART_ADD_MODERATOR); 
    list.Add(wxART_ADD_PHOTO_ALTERNATE); 
    list.Add(wxART_ADD_REACTION); 
    list.Add(wxART_ADD_ROAD); 
    list.Add(wxART_ADD_SHOPPING_CART); 
    list.Add(wxART_ADD_TASK); 
    list.Add(wxART_ADD_TO_DRIVE); 
    list.Add(wxART_ADD_TO_HOME_SCREEN); 
    list.Add(wxART_ADD_TO_PHOTOS); 
    list.Add(wxART_ADD_TO_QUEUE); 
    list.Add(wxART_ADDCHART); 
    list.Add(wxART_ADF_SCANNER); 
    list.Add(wxART_ADJUST); 
    list.Add(wxART_ADMIN_PANEL_SETTINGS); 
    list.Add(wxART_ADS_CLICK); 
    list.Add(wxART_AGRICULTURE); 
    list.Add(wxART_AIR); 
    list.Add(wxART_AIRLINE_SEAT_FLAT); 
    list.Add(wxART_AIRLINE_SEAT_FLAT_ANGLED); 
    list.Add(wxART_AIRLINE_SEAT_INDIVIDUAL_SUITE); 
    list.Add(wxART_AIRLINE_SEAT_LEGROOM_EXTRA); 
    list.Add(wxART_AIRLINE_SEAT_LEGROOM_NORMAL); 
    list.Add(wxART_AIRLINE_SEAT_LEGROOM_REDUCED); 
    list.Add(wxART_AIRLINE_SEAT_RECLINE_EXTRA); 
    list.Add(wxART_AIRLINE_SEAT_RECLINE_NORMAL); 
    list.Add(wxART_AIRLINE_STOPS); 
    list.Add(wxART_AIRLINES); 
    list.Add(wxART_AIRPLANE_TICKET); 
    list.Add(wxART_AIRPLANEMODE_ACTIVE); 
    list.Add(wxART_AIRPLANEMODE_INACTIVE); 
    list.Add(wxART_AIRPLAY); 
    list.Add(wxART_AIRPORT_SHUTTLE); 
    list.Add(wxART_ALARM); 
    list.Add(wxART_ALARM_ADD); 
    list.Add(wxART_ALARM_OFF); 
    list.Add(wxART_ALARM_ON); 
    list.Add(wxART_ALBUM); 
    list.Add(wxART_ALIGN_HORIZONTAL_CENTER); 
    list.Add(wxART_ALIGN_HORIZONTAL_LEFT); 
    list.Add(wxART_ALIGN_HORIZONTAL_RIGHT); 
    list.Add(wxART_ALIGN_VERTICAL_BOTTOM); 
    list.Add(wxART_ALIGN_VERTICAL_CENTER); 
    list.Add(wxART_ALIGN_VERTICAL_TOP); 
    list.Add(wxART_ALL_INBOX); 
    list.Add(wxART_ALL_INCLUSIVE); 
    list.Add(wxART_ALL_OUT); 
    list.Add(wxART_ALT_ROUTE); 
    list.Add(wxART_ALTERNATE_EMAIL); 
    list.Add(wxART_ANALYTICS); 
    list.Add(wxART_ANCHOR); 
    list.Add(wxART_ANDROID); 
    list.Add(wxART_ANIMATION); 
    list.Add(wxART_ANNOUNCEMENT); 
    list.Add(wxART_AOD); 
    list.Add(wxART_APARTMENT); 
    list.Add(wxART_API); 
    list.Add(wxART_APP_BLOCKING); 
    list.Add(wxART_APP_REGISTRATION); 
    list.Add(wxART_APP_SETTINGS_ALT); 
    list.Add(wxART_APP_SHORTCUT); 
    list.Add(wxART_APPROVAL); 
    list.Add(wxART_APPS); 
    list.Add(wxART_APPS_OUTAGE); 
    list.Add(wxART_ARCHITECTURE); 
    list.Add(wxART_ARCHIVE); 
    list.Add(wxART_AREA_CHART); 
    list.Add(wxART_ARROW_BACK); 
    list.Add(wxART_ARROW_BACK_IOS); 
    list.Add(wxART_ARROW_BACK_IOS_NEW); 
    list.Add(wxART_ARROW_CIRCLE_DOWN); 
    list.Add(wxART_ARROW_CIRCLE_LEFT); 
    list.Add(wxART_ARROW_CIRCLE_RIGHT); 
    list.Add(wxART_ARROW_CIRCLE_UP); 
    list.Add(wxART_ARROW_DOWNWARD); 
    list.Add(wxART_ARROW_DROP_DOWN); 
    list.Add(wxART_ARROW_DROP_DOWN_CIRCLE); 
    list.Add(wxART_ARROW_DROP_UP); 
    list.Add(wxART_ARROW_FORWARD); 
    list.Add(wxART_ARROW_FORWARD_IOS); 
    list.Add(wxART_ARROW_LEFT); 
    list.Add(wxART_ARROW_OUTWARD); 
    list.Add(wxART_ARROW_RIGHT); 
    list.Add(wxART_ARROW_RIGHT_ALT); 
    list.Add(wxART_ARROW_UPWARD); 
    list.Add(wxART_ART_TRACK); 
    list.Add(wxART_ARTICLE); 
    list.Add(wxART_ASPECT_RATIO); 
    list.Add(wxART_ASSESSMENT); 
    list.Add(wxART_ASSIGNMENT); 
    list.Add(wxART_ASSIGNMENT_IND); 
    list.Add(wxART_ASSIGNMENT_LATE); 
    list.Add(wxART_ASSIGNMENT_RETURN); 
    list.Add(wxART_ASSIGNMENT_RETURNED); 
    list.Add(wxART_ASSIGNMENT_TURNED_IN); 
    list.Add(wxART_ASSIST_WALKER); 
    list.Add(wxART_ASSISTANT); 
    list.Add(wxART_ASSISTANT_DIRECTION); 
    list.Add(wxART_ASSISTANT_PHOTO); 
    list.Add(wxART_ASSURED_WORKLOAD); 
    list.Add(wxART_ATM); 
    list.Add(wxART_ATTACH_EMAIL); 
    list.Add(wxART_ATTACH_FILE); 
    list.Add(wxART_ATTACH_MONEY); 
    list.Add(wxART_ATTACHMENT); 
    list.Add(wxART_ATTRACTIONS); 
    list.Add(wxART_ATTRIBUTION); 
    list.Add(wxART_AUDIO_FILE); 
    list.Add(wxART_AUDIOTRACK); 
    list.Add(wxART_AUTO_AWESOME); 
    list.Add(wxART_AUTO_AWESOME_MOSAIC); 
    list.Add(wxART_AUTO_AWESOME_MOTION); 
    list.Add(wxART_AUTO_DELETE); 
    list.Add(wxART_AUTO_FIX_HIGH); 
    list.Add(wxART_AUTO_FIX_NORMAL); 
    list.Add(wxART_AUTO_FIX_OFF); 
    list.Add(wxART_AUTO_GRAPH); 
    list.Add(wxART_AUTO_MODE); 
    list.Add(wxART_AUTO_STORIES); 
    list.Add(wxART_AUTOFPS_SELECT); 
    list.Add(wxART_AUTORENEW); 
    list.Add(wxART_AV_TIMER); 
    list.Add(wxART_BABY_CHANGING_STATION); 
    list.Add(wxART_BACK_HAND); 
    list.Add(wxART_BACKPACK); 
    list.Add(wxART_BACKSPACE); 
    list.Add(wxART_BACKUP); 
    list.Add(wxART_BACKUP_TABLE); 
    list.Add(wxART_BADGE); 
    list.Add(wxART_BAKERY_DINING); 
    list.Add(wxART_BALANCE); 
    list.Add(wxART_BALCONY); 
    list.Add(wxART_BALLOT); 
    list.Add(wxART_BAR_CHART); 
    list.Add(wxART_BATCH_PREDICTION); 
    list.Add(wxART_BATHROOM); 
    list.Add(wxART_BATHTUB); 
    list.Add(wxART_BATTERY_0_BAR); 
    list.Add(wxART_BATTERY_1_BAR); 
    list.Add(wxART_BATTERY_2_BAR); 
    list.Add(wxART_BATTERY_3_BAR); 
    list.Add(wxART_BATTERY_4_BAR); 
    list.Add(wxART_BATTERY_5_BAR); 
    list.Add(wxART_BATTERY_6_BAR); 
    list.Add(wxART_BATTERY_ALERT); 
    list.Add(wxART_BATTERY_CHARGING_FULL); 
    list.Add(wxART_BATTERY_FULL); 
    list.Add(wxART_BATTERY_SAVER); 
    list.Add(wxART_BATTERY_STD); 
    list.Add(wxART_BATTERY_UNKNOWN); 
    list.Add(wxART_BEACH_ACCESS); 
    list.Add(wxART_BED); 
    list.Add(wxART_BEDROOM_BABY); 
    list.Add(wxART_BEDROOM_CHILD); 
    list.Add(wxART_BEDROOM_PARENT); 
    list.Add(wxART_BEDTIME); 
    list.Add(wxART_BEDTIME_OFF); 
    list.Add(wxART_BEENHERE); 
    list.Add(wxART_BENTO); 
    list.Add(wxART_BIKE_SCOOTER); 
    list.Add(wxART_BIOTECH); 
    list.Add(wxART_BLENDER); 
    list.Add(wxART_BLIND); 
    list.Add(wxART_BLINDS); 
    list.Add(wxART_BLINDS_CLOSED); 
    list.Add(wxART_BLOCK); 
    list.Add(wxART_BLOODTYPE); 
    list.Add(wxART_BLUETOOTH); 
    list.Add(wxART_BLUETOOTH_AUDIO); 
    list.Add(wxART_BLUETOOTH_CONNECTED); 
    list.Add(wxART_BLUETOOTH_DISABLED); 
    list.Add(wxART_BLUETOOTH_DRIVE); 
    list.Add(wxART_BLUETOOTH_SEARCHING); 
    list.Add(wxART_BLUR_CIRCULAR); 
    list.Add(wxART_BLUR_LINEAR); 
    list.Add(wxART_BLUR_OFF); 
    list.Add(wxART_BLUR_ON); 
    list.Add(wxART_BOLT); 
    list.Add(wxART_BOOK); 
    list.Add(wxART_BOOK_ONLINE); 
    list.Add(wxART_BOOKMARK); 
    list.Add(wxART_BOOKMARK_ADD); 
    list.Add(wxART_BOOKMARK_ADDED); 
    list.Add(wxART_BOOKMARK_BORDER); 
    list.Add(wxART_BOOKMARK_REMOVE); 
    list.Add(wxART_BOOKMARKS); 
    list.Add(wxART_BORDER_ALL); 
    list.Add(wxART_BORDER_BOTTOM); 
    list.Add(wxART_BORDER_CLEAR); 
    list.Add(wxART_BORDER_COLOR); 
    list.Add(wxART_BORDER_HORIZONTAL); 
    list.Add(wxART_BORDER_INNER); 
    list.Add(wxART_BORDER_LEFT); 
    list.Add(wxART_BORDER_OUTER); 
    list.Add(wxART_BORDER_RIGHT); 
    list.Add(wxART_BORDER_STYLE); 
    list.Add(wxART_BORDER_TOP); 
    list.Add(wxART_BORDER_VERTICAL); 
    list.Add(wxART_BOY); 
    list.Add(wxART_BRANDING_WATERMARK); 
    list.Add(wxART_BREAKFAST_DINING); 
    list.Add(wxART_BRIGHTNESS_1); 
    list.Add(wxART_BRIGHTNESS_2); 
    list.Add(wxART_BRIGHTNESS_3); 
    list.Add(wxART_BRIGHTNESS_4); 
    list.Add(wxART_BRIGHTNESS_5); 
    list.Add(wxART_BRIGHTNESS_6); 
    list.Add(wxART_BRIGHTNESS_7); 
    list.Add(wxART_BRIGHTNESS_AUTO); 
    list.Add(wxART_BRIGHTNESS_HIGH); 
    list.Add(wxART_BRIGHTNESS_LOW); 
    list.Add(wxART_BRIGHTNESS_MEDIUM); 
    list.Add(wxART_BROADCAST_ON_HOME); 
    list.Add(wxART_BROADCAST_ON_PERSONAL); 
    list.Add(wxART_BROKEN_IMAGE); 
    list.Add(wxART_BROWSE_GALLERY); 
    list.Add(wxART_BROWSER_NOT_SUPPORTED); 
    list.Add(wxART_BROWSER_UPDATED); 
    list.Add(wxART_BRUNCH_DINING); 
    list.Add(wxART_BRUSH); 
    list.Add(wxART_BUBBLE_CHART); 
    list.Add(wxART_BUG_REPORT); 
    list.Add(wxART_BUILD); 
    list.Add(wxART_BUILD_CIRCLE); 
    list.Add(wxART_BUNGALOW); 
    list.Add(wxART_BURST_MODE); 
    list.Add(wxART_BUS_ALERT); 
    list.Add(wxART_BUSINESS); 
    list.Add(wxART_BUSINESS_CENTER); 
    list.Add(wxART_CABIN); 
    list.Add(wxART_CABLE); 
    list.Add(wxART_CACHED); 
    list.Add(wxART_CAKE); 
    list.Add(wxART_CALCULATE); 
    list.Add(wxART_CALENDAR_MONTH); 
    list.Add(wxART_CALENDAR_TODAY); 
    list.Add(wxART_CALENDAR_VIEW_DAY); 
    list.Add(wxART_CALENDAR_VIEW_MONTH); 
    list.Add(wxART_CALENDAR_VIEW_WEEK); 
    list.Add(wxART_CALL); 
    list.Add(wxART_CALL_END); 
    list.Add(wxART_CALL_MADE); 
    list.Add(wxART_CALL_MERGE); 
    list.Add(wxART_CALL_MISSED); 
    list.Add(wxART_CALL_MISSED_OUTGOING); 
    list.Add(wxART_CALL_RECEIVED); 
    list.Add(wxART_CALL_SPLIT); 
    list.Add(wxART_CALL_TO_ACTION); 
    list.Add(wxART_CAMERA); 
    list.Add(wxART_CAMERA_ALT); 
    list.Add(wxART_CAMERA_ENHANCE); 
    list.Add(wxART_CAMERA_FRONT); 
    list.Add(wxART_CAMERA_INDOOR); 
    list.Add(wxART_CAMERA_OUTDOOR); 
    list.Add(wxART_CAMERA_REAR); 
    list.Add(wxART_CAMERA_ROLL); 
    list.Add(wxART_CAMERASWITCH); 
    list.Add(wxART_CAMPAIGN); 
    list.Add(wxART_CANCEL); 
    list.Add(wxART_CANCEL_PRESENTATION); 
    list.Add(wxART_CANCEL_SCHEDULE_SEND); 
    list.Add(wxART_CANDLESTICK_CHART); 
    list.Add(wxART_CAR_CRASH); 
    list.Add(wxART_CAR_RENTAL); 
    list.Add(wxART_CAR_REPAIR); 
    list.Add(wxART_CARD_GIFTCARD); 
    list.Add(wxART_CARD_MEMBERSHIP); 
    list.Add(wxART_CARD_TRAVEL); 
    list.Add(wxART_CARPENTER); 
    list.Add(wxART_CASES); 
    list.Add(wxART_CASINO); 
    list.Add(wxART_CAST); 
    list.Add(wxART_CAST_CONNECTED); 
    list.Add(wxART_CAST_FOR_EDUCATION); 
    list.Add(wxART_CASTLE); 
    list.Add(wxART_CATCHING_POKEMON); 
    list.Add(wxART_CATEGORY); 
    list.Add(wxART_CELEBRATION); 
    list.Add(wxART_CELL_TOWER); 
    list.Add(wxART_CELL_WIFI); 
    list.Add(wxART_CENTER_FOCUS_STRONG); 
    list.Add(wxART_CENTER_FOCUS_WEAK); 
    list.Add(wxART_CHAIR); 
    list.Add(wxART_CHAIR_ALT); 
    list.Add(wxART_CHALET); 
    list.Add(wxART_CHANGE_CIRCLE); 
    list.Add(wxART_CHANGE_HISTORY); 
    list.Add(wxART_CHARGING_STATION); 
    list.Add(wxART_CHAT); 
    list.Add(wxART_CHAT_BUBBLE); 
    list.Add(wxART_CHAT_BUBBLE_OUTLINE); 
    list.Add(wxART_CHECK); 
    list.Add(wxART_CHECK_BOX); 
    list.Add(wxART_CHECK_BOX_OUTLINE_BLANK); 
    list.Add(wxART_CHECK_CIRCLE); 
    list.Add(wxART_CHECK_CIRCLE_OUTLINE); 
    list.Add(wxART_CHECKLIST); 
    list.Add(wxART_CHECKLIST_RTL); 
    list.Add(wxART_CHECKROOM); 
    list.Add(wxART_CHEVRON_LEFT); 
    list.Add(wxART_CHEVRON_RIGHT); 
    list.Add(wxART_CHILD_CARE); 
    list.Add(wxART_CHILD_FRIENDLY); 
    list.Add(wxART_CHROME_READER_MODE); 
    list.Add(wxART_CHURCH); 
    list.Add(wxART_CIRCLE); 
    list.Add(wxART_CIRCLE_NOTIFICATIONS); 
    list.Add(wxART_CLASS); 
    list.Add(wxART_CLEAN_HANDS); 
    list.Add(wxART_CLEANING_SERVICES); 
    list.Add(wxART_CLEAR); 
    list.Add(wxART_CLEAR_ALL); 
    list.Add(wxART_CLOSE); 
    list.Add(wxART_CLOSE_FULLSCREEN); 
    list.Add(wxART_CLOSED_CAPTION); 
    list.Add(wxART_CLOSED_CAPTION_DISABLED); 
    list.Add(wxART_CLOSED_CAPTION_OFF); 
    list.Add(wxART_CLOUD); 
    list.Add(wxART_CLOUD_CIRCLE); 
    list.Add(wxART_CLOUD_DONE); 
    list.Add(wxART_CLOUD_DOWNLOAD); 
    list.Add(wxART_CLOUD_OFF); 
    list.Add(wxART_CLOUD_QUEUE); 
    list.Add(wxART_CLOUD_SYNC); 
    list.Add(wxART_CLOUD_UPLOAD); 
    list.Add(wxART_CO2); 
    list.Add(wxART_CO_PRESENT); 
    list.Add(wxART_CODE); 
    list.Add(wxART_CODE_OFF); 
    list.Add(wxART_COFFEE); 
    list.Add(wxART_COFFEE_MAKER); 
    list.Add(wxART_COLLECTIONS); 
    list.Add(wxART_COLLECTIONS_BOOKMARK); 
    list.Add(wxART_COLOR_LENS); 
    list.Add(wxART_COLORIZE); 
    list.Add(wxART_COMMENT); 
    list.Add(wxART_COMMENT_BANK); 
    list.Add(wxART_COMMENTS_DISABLED); 
    list.Add(wxART_COMMIT); 
    list.Add(wxART_COMMUTE); 
    list.Add(wxART_COMPARE); 
    list.Add(wxART_COMPARE_ARROWS); 
    list.Add(wxART_COMPASS_CALIBRATION); 
    list.Add(wxART_COMPOST); 
    list.Add(wxART_COMPRESS); 
    list.Add(wxART_COMPUTER); 
    list.Add(wxART_CONFIRMATION_NUMBER); 
    list.Add(wxART_CONNECT_WITHOUT_CONTACT); 
    list.Add(wxART_CONNECTED_TV); 
    list.Add(wxART_CONNECTING_AIRPORTS); 
    list.Add(wxART_CONSTRUCTION); 
    list.Add(wxART_CONTACT_EMERGENCY); 
    list.Add(wxART_CONTACT_MAIL); 
    list.Add(wxART_CONTACT_PAGE); 
    list.Add(wxART_CONTACT_PHONE); 
    list.Add(wxART_CONTACT_SUPPORT); 
    list.Add(wxART_CONTACTLESS); 
    list.Add(wxART_CONTACTS); 
    list.Add(wxART_CONTENT_COPY); 
    list.Add(wxART_CONTENT_CUT); 
    list.Add(wxART_CONTENT_PASTE); 
    list.Add(wxART_CONTENT_PASTE_GO); 
    list.Add(wxART_CONTENT_PASTE_OFF); 
    list.Add(wxART_CONTENT_PASTE_SEARCH); 
    list.Add(wxART_CONTRAST); 
    list.Add(wxART_CONTROL_CAMERA); 
    list.Add(wxART_CONTROL_POINT); 
    list.Add(wxART_CONTROL_POINT_DUPLICATE); 
    list.Add(wxART_COOKIE); 
    list.Add(wxART_COPY_ALL); 
    list.Add(wxART_COPYRIGHT); 
    list.Add(wxART_CORONAVIRUS); 
    list.Add(wxART_CORPORATE_FARE); 
    list.Add(wxART_COTTAGE); 
    list.Add(wxART_COUNTERTOPS); 
    list.Add(wxART_CREATE); 
    list.Add(wxART_CREATE_NEW_FOLDER); 
    list.Add(wxART_CREDIT_CARD); 
    list.Add(wxART_CREDIT_CARD_OFF); 
    list.Add(wxART_CREDIT_SCORE); 
    list.Add(wxART_CRIB); 
    list.Add(wxART_CRISIS_ALERT); 
    list.Add(wxART_CROP); 
    list.Add(wxART_CROP_16_9); 
    list.Add(wxART_CROP_3_2); 
    list.Add(wxART_CROP_5_4); 
    list.Add(wxART_CROP_7_5); 
    list.Add(wxART_CROP_DIN); 
    list.Add(wxART_CROP_FREE); 
    list.Add(wxART_CROP_LANDSCAPE); 
    list.Add(wxART_CROP_ORIGINAL); 
    list.Add(wxART_CROP_PORTRAIT); 
    list.Add(wxART_CROP_ROTATE); 
    list.Add(wxART_CROP_SQUARE); 
    list.Add(wxART_CRUELTY_FREE); 
    list.Add(wxART_CSS); 
    list.Add(wxART_CURRENCY_BITCOIN); 
    list.Add(wxART_CURRENCY_EXCHANGE); 
    list.Add(wxART_CURRENCY_FRANC); 
    list.Add(wxART_CURRENCY_LIRA); 
    list.Add(wxART_CURRENCY_POUND); 
    list.Add(wxART_CURRENCY_RUBLE); 
    list.Add(wxART_CURRENCY_RUPEE); 
    list.Add(wxART_CURRENCY_YEN); 
    list.Add(wxART_CURRENCY_YUAN); 
    list.Add(wxART_CURTAINS); 
    list.Add(wxART_CURTAINS_CLOSED); 
    list.Add(wxART_CYCLONE); 
    list.Add(wxART_DANGEROUS); 
    list.Add(wxART_DARK_MODE); 
    list.Add(wxART_DASHBOARD); 
    list.Add(wxART_DASHBOARD_CUSTOMIZE); 
    list.Add(wxART_DATA_ARRAY); 
    list.Add(wxART_DATA_EXPLORATION); 
    list.Add(wxART_DATA_OBJECT); 
    list.Add(wxART_DATA_SAVER_OFF); 
    list.Add(wxART_DATA_SAVER_ON); 
    list.Add(wxART_DATA_THRESHOLDING); 
    list.Add(wxART_DATA_USAGE); 
    list.Add(wxART_DATASET); 
    list.Add(wxART_DATASET_LINKED); 
    list.Add(wxART_DATE_RANGE); 
    list.Add(wxART_DEBLUR); 
    list.Add(wxART_DECK); 
    list.Add(wxART_DEHAZE); 
    list.Add(wxART_DELETE); 
    list.Add(wxART_DELETE_FOREVER); 
    list.Add(wxART_DELETE_OUTLINE); 
    list.Add(wxART_DELETE_SWEEP); 
    list.Add(wxART_DELIVERY_DINING); 
    list.Add(wxART_DENSITY_LARGE); 
    list.Add(wxART_DENSITY_MEDIUM); 
    list.Add(wxART_DENSITY_SMALL); 
    list.Add(wxART_DEPARTURE_BOARD); 
    list.Add(wxART_DESCRIPTION); 
    list.Add(wxART_DESELECT); 
    list.Add(wxART_DESIGN_SERVICES); 
    list.Add(wxART_DESK); 
    list.Add(wxART_DESKTOP_ACCESS_DISABLED); 
    list.Add(wxART_DESKTOP_MAC); 
    list.Add(wxART_DESKTOP_WINDOWS); 
    list.Add(wxART_DETAILS); 
    list.Add(wxART_DEVELOPER_BOARD); 
    list.Add(wxART_DEVELOPER_BOARD_OFF); 
    list.Add(wxART_DEVELOPER_MODE); 
    list.Add(wxART_DEVICE_HUB); 
    list.Add(wxART_DEVICE_THERMOSTAT); 
    list.Add(wxART_DEVICE_UNKNOWN); 
    list.Add(wxART_DEVICES); 
    list.Add(wxART_DEVICES_FOLD); 
    list.Add(wxART_DEVICES_OTHER); 
    list.Add(wxART_DIALER_SIP); 
    list.Add(wxART_DIALPAD); 
    list.Add(wxART_DIAMOND); 
    list.Add(wxART_DIFFERENCE); 
    list.Add(wxART_DINING); 
    list.Add(wxART_DINNER_DINING); 
    list.Add(wxART_DIRECTIONS); 
    list.Add(wxART_DIRECTIONS_BIKE); 
    list.Add(wxART_DIRECTIONS_BOAT); 
    list.Add(wxART_DIRECTIONS_BOAT_FILLED); 
    list.Add(wxART_DIRECTIONS_BUS); 
    list.Add(wxART_DIRECTIONS_BUS_FILLED); 
    list.Add(wxART_DIRECTIONS_CAR); 
    list.Add(wxART_DIRECTIONS_CAR_FILLED); 
    list.Add(wxART_DIRECTIONS_OFF); 
    list.Add(wxART_DIRECTIONS_RAILWAY); 
    list.Add(wxART_DIRECTIONS_RAILWAY_FILLED); 
    list.Add(wxART_DIRECTIONS_RUN); 
    list.Add(wxART_DIRECTIONS_SUBWAY); 
    list.Add(wxART_DIRECTIONS_SUBWAY_FILLED); 
    list.Add(wxART_DIRECTIONS_TRANSIT); 
    list.Add(wxART_DIRECTIONS_TRANSIT_FILLED); 
    list.Add(wxART_DIRECTIONS_WALK); 
    list.Add(wxART_DIRTY_LENS); 
    list.Add(wxART_DISABLED_BY_DEFAULT); 
    list.Add(wxART_DISABLED_VISIBLE); 
    list.Add(wxART_DISC_FULL); 
    list.Add(wxART_DISCOUNT); 
    list.Add(wxART_DISPLAY_SETTINGS); 
    list.Add(wxART_DIVERSITY_1); 
    list.Add(wxART_DIVERSITY_2); 
    list.Add(wxART_DIVERSITY_3); 
    list.Add(wxART_DNS); 
    list.Add(wxART_DO_DISTURB); 
    list.Add(wxART_DO_DISTURB_ALT); 
    list.Add(wxART_DO_DISTURB_OFF); 
    list.Add(wxART_DO_DISTURB_ON); 
    list.Add(wxART_DO_NOT_DISTURB); 
    list.Add(wxART_DO_NOT_DISTURB_ALT); 
    list.Add(wxART_DO_NOT_DISTURB_OFF); 
    list.Add(wxART_DO_NOT_DISTURB_ON); 
    list.Add(wxART_DO_NOT_DISTURB_ON_TOTAL_SILENCE); 
    list.Add(wxART_DO_NOT_STEP); 
    list.Add(wxART_DO_NOT_TOUCH); 
    list.Add(wxART_DOCK); 
    list.Add(wxART_DOCUMENT_SCANNER); 
    list.Add(wxART_DOMAIN); 
    list.Add(wxART_DOMAIN_ADD); 
    list.Add(wxART_DOMAIN_DISABLED); 
    list.Add(wxART_DOMAIN_VERIFICATION); 
    list.Add(wxART_DONE); 
    list.Add(wxART_DONE_ALL); 
    list.Add(wxART_DONE_OUTLINE); 
    list.Add(wxART_DONUT_LARGE); 
    list.Add(wxART_DONUT_SMALL); 
    list.Add(wxART_DOOR_BACK); 
    list.Add(wxART_DOOR_FRONT); 
    list.Add(wxART_DOOR_SLIDING); 
    list.Add(wxART_DOORBELL); 
    list.Add(wxART_DOUBLE_ARROW); 
    list.Add(wxART_DOWNHILL_SKIING); 
    list.Add(wxART_DOWNLOAD); 
    list.Add(wxART_DOWNLOAD_DONE); 
    list.Add(wxART_DOWNLOAD_FOR_OFFLINE); 
    list.Add(wxART_DOWNLOADING); 
    list.Add(wxART_DRAFTS); 
    list.Add(wxART_DRAG_HANDLE); 
    list.Add(wxART_DRAG_INDICATOR); 
    list.Add(wxART_DRAW); 
    list.Add(wxART_DRIVE_ETA); 
    list.Add(wxART_DRIVE_FILE_MOVE); 
    list.Add(wxART_DRIVE_FILE_MOVE_RTL); 
    list.Add(wxART_DRIVE_FILE_RENAME_OUTLINE); 
    list.Add(wxART_DRIVE_FOLDER_UPLOAD); 
    list.Add(wxART_DRY); 
    list.Add(wxART_DRY_CLEANING); 
    list.Add(wxART_DUO); 
    list.Add(wxART_DVR); 
    list.Add(wxART_DYNAMIC_FEED); 
    list.Add(wxART_DYNAMIC_FORM); 
    list.Add(wxART_E_MOBILEDATA); 
    list.Add(wxART_EARBUDS); 
    list.Add(wxART_EARBUDS_BATTERY); 
    list.Add(wxART_EAST); 
    list.Add(wxART_EDGESENSOR_HIGH); 
    list.Add(wxART_EDGESENSOR_LOW); 
    list.Add(wxART_EDIT); 
    list.Add(wxART_EDIT_ATTRIBUTES); 
    list.Add(wxART_EDIT_CALENDAR); 
    list.Add(wxART_EDIT_LOCATION); 
    list.Add(wxART_EDIT_LOCATION_ALT); 
    list.Add(wxART_EDIT_NOTE); 
    list.Add(wxART_EDIT_NOTIFICATIONS); 
    list.Add(wxART_EDIT_OFF); 
    list.Add(wxART_EDIT_ROAD); 
    list.Add(wxART_EGG); 
    list.Add(wxART_EGG_ALT); 
    list.Add(wxART_EJECT); 
    list.Add(wxART_ELDERLY); 
    list.Add(wxART_ELDERLY_WOMAN); 
    list.Add(wxART_ELECTRIC_BIKE); 
    list.Add(wxART_ELECTRIC_BOLT); 
    list.Add(wxART_ELECTRIC_CAR); 
    list.Add(wxART_ELECTRIC_METER); 
    list.Add(wxART_ELECTRIC_MOPED); 
    list.Add(wxART_ELECTRIC_RICKSHAW); 
    list.Add(wxART_ELECTRIC_SCOOTER); 
    list.Add(wxART_ELECTRICAL_SERVICES); 
    list.Add(wxART_ELEVATOR); 
    list.Add(wxART_EMAIL); 
    list.Add(wxART_EMERGENCY); 
    list.Add(wxART_EMERGENCY_RECORDING); 
    list.Add(wxART_EMERGENCY_SHARE); 
    list.Add(wxART_EMOJI_EMOTIONS); 
    list.Add(wxART_EMOJI_EVENTS); 
    list.Add(wxART_EMOJI_FOOD_BEVERAGE); 
    list.Add(wxART_EMOJI_NATURE); 
    list.Add(wxART_EMOJI_OBJECTS); 
    list.Add(wxART_EMOJI_PEOPLE); 
    list.Add(wxART_EMOJI_SYMBOLS); 
    list.Add(wxART_EMOJI_TRANSPORTATION); 
    list.Add(wxART_ENERGY_SAVINGS_LEAF); 
    list.Add(wxART_ENGINEERING); 
    list.Add(wxART_ENHANCED_ENCRYPTION); 
    list.Add(wxART_EQUALIZER); 
    list.Add(wxART_ERROR); 
    list.Add(wxART_ERROR_OUTLINE); 
    list.Add(wxART_ESCALATOR); 
    list.Add(wxART_ESCALATOR_WARNING); 
    list.Add(wxART_EURO); 
    list.Add(wxART_EURO_SYMBOL); 
    list.Add(wxART_EV_STATION); 
    list.Add(wxART_EVENT); 
    list.Add(wxART_EVENT_AVAILABLE); 
    list.Add(wxART_EVENT_BUSY); 
    list.Add(wxART_EVENT_NOTE); 
    list.Add(wxART_EVENT_REPEAT); 
    list.Add(wxART_EVENT_SEAT); 
    list.Add(wxART_EXIT_TO_APP); 
    list.Add(wxART_EXPAND); 
    list.Add(wxART_EXPAND_CIRCLE_DOWN); 
    list.Add(wxART_EXPAND_LESS); 
    list.Add(wxART_EXPAND_MORE); 
    list.Add(wxART_EXPLICIT); 
    list.Add(wxART_EXPLORE); 
    list.Add(wxART_EXPLORE_OFF); 
    list.Add(wxART_EXPOSURE); 
    list.Add(wxART_EXPOSURE_NEG_1); 
    list.Add(wxART_EXPOSURE_NEG_2); 
    list.Add(wxART_EXPOSURE_PLUS_1); 
    list.Add(wxART_EXPOSURE_PLUS_2); 
    list.Add(wxART_EXPOSURE_ZERO); 
    list.Add(wxART_EXTENSION); 
    list.Add(wxART_EXTENSION_OFF); 
    list.Add(wxART_FACE); 
    list.Add(wxART_FACE_2); 
    list.Add(wxART_FACE_3); 
    list.Add(wxART_FACE_4); 
    list.Add(wxART_FACE_5); 
    list.Add(wxART_FACE_6); 
    list.Add(wxART_FACE_RETOUCHING_NATURAL); 
    list.Add(wxART_FACE_RETOUCHING_OFF); 
    list.Add(wxART_FACT_CHECK); 
    list.Add(wxART_FACTORY); 
    list.Add(wxART_FAMILY_RESTROOM); 
    list.Add(wxART_FAST_FORWARD); 
    list.Add(wxART_FAST_REWIND); 
    list.Add(wxART_FASTFOOD); 
    list.Add(wxART_FAVORITE); 
    list.Add(wxART_FAVORITE_BORDER); 
    list.Add(wxART_FAX); 
    list.Add(wxART_FEATURED_PLAY_LIST); 
    list.Add(wxART_FEATURED_VIDEO); 
    list.Add(wxART_FEED); 
    list.Add(wxART_FEEDBACK); 
    list.Add(wxART_FEMALE); 
    list.Add(wxART_FENCE); 
    list.Add(wxART_FESTIVAL); 
    list.Add(wxART_FIBER_DVR); 
    list.Add(wxART_FIBER_MANUAL_RECORD); 
    list.Add(wxART_FIBER_NEW); 
    list.Add(wxART_FIBER_PIN); 
    list.Add(wxART_FIBER_SMART_RECORD); 
    list.Add(wxART_FILE_COPY); 
    list.Add(wxART_FILE_DOWNLOAD); 
    list.Add(wxART_FILE_DOWNLOAD_DONE); 
    list.Add(wxART_FILE_DOWNLOAD_OFF); 
    list.Add(wxART_FILE_OPEN); 
    list.Add(wxART_FILE_PRESENT); 
    list.Add(wxART_FILE_UPLOAD); 
    list.Add(wxART_FILTER); 
    list.Add(wxART_FILTER_1); 
    list.Add(wxART_FILTER_2); 
    list.Add(wxART_FILTER_3); 
    list.Add(wxART_FILTER_4); 
    list.Add(wxART_FILTER_5); 
    list.Add(wxART_FILTER_6); 
    list.Add(wxART_FILTER_7); 
    list.Add(wxART_FILTER_8); 
    list.Add(wxART_FILTER_9); 
    list.Add(wxART_FILTER_9_PLUS); 
    list.Add(wxART_FILTER_ALT); 
    list.Add(wxART_FILTER_ALT_OFF); 
    list.Add(wxART_FILTER_B_AND_W); 
    list.Add(wxART_FILTER_CENTER_FOCUS); 
    list.Add(wxART_FILTER_DRAMA); 
    list.Add(wxART_FILTER_FRAMES); 
    list.Add(wxART_FILTER_HDR); 
    list.Add(wxART_FILTER_LIST); 
    list.Add(wxART_FILTER_LIST_OFF); 
    list.Add(wxART_FILTER_NONE); 
    list.Add(wxART_FILTER_TILT_SHIFT); 
    list.Add(wxART_FILTER_VINTAGE); 
    list.Add(wxART_FIND_IN_PAGE); 
    list.Add(wxART_FIND_REPLACE); 
    list.Add(wxART_FINGERPRINT); 
    list.Add(wxART_FIRE_EXTINGUISHER); 
    list.Add(wxART_FIRE_HYDRANT_ALT); 
    list.Add(wxART_FIRE_TRUCK); 
    list.Add(wxART_FIREPLACE); 
    list.Add(wxART_FIRST_PAGE); 
    list.Add(wxART_FIT_SCREEN); 
    list.Add(wxART_FITBIT); 
    list.Add(wxART_FITNESS_CENTER); 
    list.Add(wxART_FLAG); 
    list.Add(wxART_FLAG_CIRCLE); 
    list.Add(wxART_FLAKY); 
    list.Add(wxART_FLARE); 
    list.Add(wxART_FLASH_AUTO); 
    list.Add(wxART_FLASH_OFF); 
    list.Add(wxART_FLASH_ON); 
    list.Add(wxART_FLASHLIGHT_OFF); 
    list.Add(wxART_FLASHLIGHT_ON); 
    list.Add(wxART_FLATWARE); 
    list.Add(wxART_FLIGHT); 
    list.Add(wxART_FLIGHT_CLASS); 
    list.Add(wxART_FLIGHT_LAND); 
    list.Add(wxART_FLIGHT_TAKEOFF); 
    list.Add(wxART_FLIP); 
    list.Add(wxART_FLIP_CAMERA_ANDROID); 
    list.Add(wxART_FLIP_CAMERA_IOS); 
    list.Add(wxART_FLIP_TO_BACK); 
    list.Add(wxART_FLIP_TO_FRONT); 
    list.Add(wxART_FLOOD); 
    list.Add(wxART_FLUORESCENT); 
    list.Add(wxART_FLUTTER_DASH); 
    list.Add(wxART_FMD_BAD); 
    list.Add(wxART_FMD_GOOD); 
    list.Add(wxART_FOLDER); 
    list.Add(wxART_FOLDER_COPY); 
    list.Add(wxART_FOLDER_DELETE); 
    list.Add(wxART_FOLDER_OFF); 
    list.Add(wxART_FOLDER_OPEN); 
    list.Add(wxART_FOLDER_SHARED); 
    list.Add(wxART_FOLDER_SPECIAL); 
    list.Add(wxART_FOLDER_ZIP); 
    list.Add(wxART_FOLLOW_THE_SIGNS); 
    list.Add(wxART_FONT_DOWNLOAD); 
    list.Add(wxART_FONT_DOWNLOAD_OFF); 
    list.Add(wxART_FOOD_BANK); 
    list.Add(wxART_FOREST); 
    list.Add(wxART_FORK_LEFT); 
    list.Add(wxART_FORK_RIGHT); 
    list.Add(wxART_FORMAT_ALIGN_CENTER); 
    list.Add(wxART_FORMAT_ALIGN_JUSTIFY); 
    list.Add(wxART_FORMAT_ALIGN_LEFT); 
    list.Add(wxART_FORMAT_ALIGN_RIGHT); 
    list.Add(wxART_FORMAT_BOLD); 
    list.Add(wxART_FORMAT_CLEAR); 
    list.Add(wxART_FORMAT_COLOR_FILL); 
    list.Add(wxART_FORMAT_COLOR_RESET); 
    list.Add(wxART_FORMAT_COLOR_TEXT); 
    list.Add(wxART_FORMAT_INDENT_DECREASE); 
    list.Add(wxART_FORMAT_INDENT_INCREASE); 
    list.Add(wxART_FORMAT_ITALIC); 
    list.Add(wxART_FORMAT_LINE_SPACING); 
    list.Add(wxART_FORMAT_LIST_BULLETED); 
    list.Add(wxART_FORMAT_LIST_NUMBERED); 
    list.Add(wxART_FORMAT_LIST_NUMBERED_RTL); 
    list.Add(wxART_FORMAT_OVERLINE); 
    list.Add(wxART_FORMAT_PAINT); 
    list.Add(wxART_FORMAT_QUOTE); 
    list.Add(wxART_FORMAT_SHAPES); 
    list.Add(wxART_FORMAT_SIZE); 
    list.Add(wxART_FORMAT_STRIKETHROUGH); 
    list.Add(wxART_FORMAT_TEXTDIRECTION_L_TO_R); 
    list.Add(wxART_FORMAT_TEXTDIRECTION_R_TO_L); 
    list.Add(wxART_FORMAT_UNDERLINED); 
    list.Add(wxART_FORUM); 
    list.Add(wxART_FORWARD); 
    list.Add(wxART_FORWARD_10); 
    list.Add(wxART_FORWARD_30); 
    list.Add(wxART_FORWARD_5); 
    list.Add(wxART_FORWARD_TO_INBOX); 
    list.Add(wxART_FOUNDATION); 
    list.Add(wxART_FREE_BREAKFAST); 
    list.Add(wxART_FREE_CANCELLATION); 
    list.Add(wxART_FRONT_HAND); 
    list.Add(wxART_FULLSCREEN); 
    list.Add(wxART_FULLSCREEN_EXIT); 
    list.Add(wxART_FUNCTIONS); 
    list.Add(wxART_G_MOBILEDATA); 
    list.Add(wxART_G_TRANSLATE); 
    list.Add(wxART_GAMEPAD); 
    list.Add(wxART_GAMES); 
    list.Add(wxART_GARAGE); 
    list.Add(wxART_GAS_METER); 
    list.Add(wxART_GAVEL); 
    list.Add(wxART_GENERATING_TOKENS); 
    list.Add(wxART_GESTURE); 
    list.Add(wxART_GET_APP); 
    list.Add(wxART_GIF); 
    list.Add(wxART_GIF_BOX); 
    list.Add(wxART_GIRL); 
    list.Add(wxART_GITE); 
    list.Add(wxART_GOLF_COURSE); 
    list.Add(wxART_GPP_BAD); 
    list.Add(wxART_GPP_GOOD); 
    list.Add(wxART_GPP_MAYBE); 
    list.Add(wxART_GPS_FIXED); 
    list.Add(wxART_GPS_NOT_FIXED); 
    list.Add(wxART_GPS_OFF); 
    list.Add(wxART_GRADE); 
    list.Add(wxART_GRADIENT); 
    list.Add(wxART_GRADING); 
    list.Add(wxART_GRAIN); 
    list.Add(wxART_GRAPHIC_EQ); 
    list.Add(wxART_GRASS); 
    list.Add(wxART_GRID_3X3); 
    list.Add(wxART_GRID_4X4); 
    list.Add(wxART_GRID_GOLDENRATIO); 
    list.Add(wxART_GRID_OFF); 
    list.Add(wxART_GRID_ON); 
    list.Add(wxART_GRID_VIEW); 
    list.Add(wxART_GROUP); 
    list.Add(wxART_GROUP_ADD); 
    list.Add(wxART_GROUP_OFF); 
    list.Add(wxART_GROUP_REMOVE); 
    list.Add(wxART_GROUP_WORK); 
    list.Add(wxART_GROUPS); 
    list.Add(wxART_GROUPS_2); 
    list.Add(wxART_GROUPS_3); 
    list.Add(wxART_H_MOBILEDATA); 
    list.Add(wxART_H_PLUS_MOBILEDATA); 
    list.Add(wxART_HAIL); 
    list.Add(wxART_HANDSHAKE); 
    list.Add(wxART_HANDYMAN); 
    list.Add(wxART_HARDWARE); 
    list.Add(wxART_HD); 
    list.Add(wxART_HDR_AUTO); 
    list.Add(wxART_HDR_AUTO_SELECT); 
    list.Add(wxART_HDR_ENHANCED_SELECT); 
    list.Add(wxART_HDR_OFF); 
    list.Add(wxART_HDR_OFF_SELECT); 
    list.Add(wxART_HDR_ON); 
    list.Add(wxART_HDR_ON_SELECT); 
    list.Add(wxART_HDR_PLUS); 
    list.Add(wxART_HDR_STRONG); 
    list.Add(wxART_HDR_WEAK); 
    list.Add(wxART_HEADPHONES); 
    list.Add(wxART_HEADPHONES_BATTERY); 
    list.Add(wxART_HEADSET); 
    list.Add(wxART_HEADSET_MIC); 
    list.Add(wxART_HEADSET_OFF); 
    list.Add(wxART_HEALING); 
    list.Add(wxART_HEALTH_AND_SAFETY); 
    list.Add(wxART_HEARING); 
    list.Add(wxART_HEARING_DISABLED); 
    list.Add(wxART_HEART_BROKEN); 
    list.Add(wxART_HEAT_PUMP); 
    list.Add(wxART_HEIGHT); 
    list.Add(wxART_HELP); 
    list.Add(wxART_HELP_CENTER); 
    list.Add(wxART_HELP_OUTLINE); 
    list.Add(wxART_HEVC); 
    list.Add(wxART_HEXAGON); 
    list.Add(wxART_HIDE_IMAGE); 
    list.Add(wxART_HIDE_SOURCE); 
    list.Add(wxART_HIGH_QUALITY); 
    list.Add(wxART_HIGHLIGHT); 
    list.Add(wxART_HIGHLIGHT_ALT); 
    list.Add(wxART_HIGHLIGHT_OFF); 
    list.Add(wxART_HIKING); 
    list.Add(wxART_HISTORY); 
    list.Add(wxART_HISTORY_EDU); 
    list.Add(wxART_HISTORY_TOGGLE_OFF); 
    list.Add(wxART_HIVE); 
    list.Add(wxART_HLS); 
    list.Add(wxART_HLS_OFF); 
    list.Add(wxART_HOLIDAY_VILLAGE); 
    list.Add(wxART_HOME); 
    list.Add(wxART_HOME_MAX); 
    list.Add(wxART_HOME_MINI); 
    list.Add(wxART_HOME_REPAIR_SERVICE); 
    list.Add(wxART_HOME_WORK); 
    list.Add(wxART_HORIZONTAL_DISTRIBUTE); 
    list.Add(wxART_HORIZONTAL_RULE); 
    list.Add(wxART_HORIZONTAL_SPLIT); 
    list.Add(wxART_HOT_TUB); 
    list.Add(wxART_HOTEL); 
    list.Add(wxART_HOTEL_CLASS); 
    list.Add(wxART_HOURGLASS_BOTTOM); 
    list.Add(wxART_HOURGLASS_DISABLED); 
    list.Add(wxART_HOURGLASS_EMPTY); 
    list.Add(wxART_HOURGLASS_FULL); 
    list.Add(wxART_HOURGLASS_TOP); 
    list.Add(wxART_HOUSE); 
    list.Add(wxART_HOUSE_SIDING); 
    list.Add(wxART_HOUSEBOAT); 
    list.Add(wxART_HOW_TO_REG); 
    list.Add(wxART_HOW_TO_VOTE); 
    list.Add(wxART_HTML); 
    list.Add(wxART_HTTP); 
    list.Add(wxART_HTTPS); 
    list.Add(wxART_HUB); 
    list.Add(wxART_HVAC); 
    list.Add(wxART_ICE_SKATING); 
    list.Add(wxART_ICECREAM); 
    list.Add(wxART_IMAGE); 
    list.Add(wxART_IMAGE_ASPECT_RATIO); 
    list.Add(wxART_IMAGE_NOT_SUPPORTED); 
    list.Add(wxART_IMAGE_SEARCH); 
    list.Add(wxART_IMAGESEARCH_ROLLER); 
    list.Add(wxART_IMPORT_CONTACTS); 
    list.Add(wxART_IMPORT_EXPORT); 
    list.Add(wxART_IMPORTANT_DEVICES); 
    list.Add(wxART_INBOX); 
    list.Add(wxART_INCOMPLETE_CIRCLE); 
    list.Add(wxART_INDETERMINATE_CHECK_BOX); 
    list.Add(wxART_INFO); 
    list.Add(wxART_INPUT); 
    list.Add(wxART_INSERT_CHART); 
    list.Add(wxART_INSERT_CHART_OUTLINED); 
    list.Add(wxART_INSERT_COMMENT); 
    list.Add(wxART_INSERT_DRIVE_FILE); 
    list.Add(wxART_INSERT_EMOTICON); 
    list.Add(wxART_INSERT_INVITATION); 
    list.Add(wxART_INSERT_LINK); 
    list.Add(wxART_INSERT_PAGE_BREAK); 
    list.Add(wxART_INSERT_PHOTO); 
    list.Add(wxART_INSIGHTS); 
    list.Add(wxART_INSTALL_DESKTOP); 
    list.Add(wxART_INSTALL_MOBILE); 
    list.Add(wxART_INTEGRATION_INSTRUCTIONS); 
    list.Add(wxART_INTERESTS); 
    list.Add(wxART_INTERPRETER_MODE); 
    list.Add(wxART_INVENTORY); 
    list.Add(wxART_INVENTORY_2); 
    list.Add(wxART_INVERT_COLORS); 
    list.Add(wxART_INVERT_COLORS_OFF); 
    list.Add(wxART_IOS_SHARE); 
    list.Add(wxART_IRON); 
    list.Add(wxART_ISO); 
    list.Add(wxART_JAVASCRIPT); 
    list.Add(wxART_JOIN_FULL); 
    list.Add(wxART_JOIN_INNER); 
    list.Add(wxART_JOIN_LEFT); 
    list.Add(wxART_JOIN_RIGHT); 
    list.Add(wxART_KAYAKING); 
    list.Add(wxART_KEBAB_DINING); 
    list.Add(wxART_KEY); 
    list.Add(wxART_KEY_OFF); 
    list.Add(wxART_KEYBOARD); 
    list.Add(wxART_KEYBOARD_ALT); 
    list.Add(wxART_KEYBOARD_ARROW_DOWN); 
    list.Add(wxART_KEYBOARD_ARROW_LEFT); 
    list.Add(wxART_KEYBOARD_ARROW_RIGHT); 
    list.Add(wxART_KEYBOARD_ARROW_UP); 
    list.Add(wxART_KEYBOARD_BACKSPACE); 
    list.Add(wxART_KEYBOARD_CAPSLOCK); 
    list.Add(wxART_KEYBOARD_COMMAND_KEY); 
    list.Add(wxART_KEYBOARD_CONTROL_KEY); 
    list.Add(wxART_KEYBOARD_DOUBLE_ARROW_DOWN); 
    list.Add(wxART_KEYBOARD_DOUBLE_ARROW_LEFT); 
    list.Add(wxART_KEYBOARD_DOUBLE_ARROW_RIGHT); 
    list.Add(wxART_KEYBOARD_DOUBLE_ARROW_UP); 
    list.Add(wxART_KEYBOARD_HIDE); 
    list.Add(wxART_KEYBOARD_OPTION_KEY); 
    list.Add(wxART_KEYBOARD_RETURN); 
    list.Add(wxART_KEYBOARD_TAB); 
    list.Add(wxART_KEYBOARD_VOICE); 
    list.Add(wxART_KING_BED); 
    list.Add(wxART_KITCHEN); 
    list.Add(wxART_KITESURFING); 
    list.Add(wxART_LABEL); 
    list.Add(wxART_LABEL_IMPORTANT); 
    list.Add(wxART_LABEL_OFF); 
    list.Add(wxART_LAN); 
    list.Add(wxART_LANDSCAPE); 
    list.Add(wxART_LANDSLIDE); 
    list.Add(wxART_LANGUAGE); 
    list.Add(wxART_LAPTOP); 
    list.Add(wxART_LAPTOP_CHROMEBOOK); 
    list.Add(wxART_LAPTOP_MAC); 
    list.Add(wxART_LAPTOP_WINDOWS); 
    list.Add(wxART_LAST_PAGE); 
    list.Add(wxART_LAUNCH); 
    list.Add(wxART_LAYERS); 
    list.Add(wxART_LAYERS_CLEAR); 
    list.Add(wxART_LEADERBOARD); 
    list.Add(wxART_LEAK_ADD); 
    list.Add(wxART_LEAK_REMOVE); 
    list.Add(wxART_LEGEND_TOGGLE); 
    list.Add(wxART_LENS); 
    list.Add(wxART_LENS_BLUR); 
    list.Add(wxART_LIBRARY_ADD); 
    list.Add(wxART_LIBRARY_ADD_CHECK); 
    list.Add(wxART_LIBRARY_BOOKS); 
    list.Add(wxART_LIBRARY_MUSIC); 
    list.Add(wxART_LIGHT); 
    list.Add(wxART_LIGHT_MODE); 
    list.Add(wxART_LIGHTBULB); 
    list.Add(wxART_LIGHTBULB_CIRCLE); 
    list.Add(wxART_LINE_AXIS); 
    list.Add(wxART_LINE_STYLE); 
    list.Add(wxART_LINE_WEIGHT); 
    list.Add(wxART_LINEAR_SCALE); 
    list.Add(wxART_LINK); 
    list.Add(wxART_LINK_OFF); 
    list.Add(wxART_LINKED_CAMERA); 
    list.Add(wxART_LIQUOR); 
    list.Add(wxART_LIST); 
    list.Add(wxART_LIST_ALT); 
    list.Add(wxART_LIVE_HELP); 
    list.Add(wxART_LIVE_TV); 
    list.Add(wxART_LIVING); 
    list.Add(wxART_LOCAL_ACTIVITY); 
    list.Add(wxART_LOCAL_AIRPORT); 
    list.Add(wxART_LOCAL_ATM); 
    list.Add(wxART_LOCAL_BAR); 
    list.Add(wxART_LOCAL_CAFE); 
    list.Add(wxART_LOCAL_CAR_WASH); 
    list.Add(wxART_LOCAL_CONVENIENCE_STORE); 
    list.Add(wxART_LOCAL_DINING); 
    list.Add(wxART_LOCAL_DRINK); 
    list.Add(wxART_LOCAL_FIRE_DEPARTMENT); 
    list.Add(wxART_LOCAL_FLORIST); 
    list.Add(wxART_LOCAL_GAS_STATION); 
    list.Add(wxART_LOCAL_GROCERY_STORE); 
    list.Add(wxART_LOCAL_HOSPITAL); 
    list.Add(wxART_LOCAL_HOTEL); 
    list.Add(wxART_LOCAL_LAUNDRY_SERVICE); 
    list.Add(wxART_LOCAL_LIBRARY); 
    list.Add(wxART_LOCAL_MALL); 
    list.Add(wxART_LOCAL_MOVIES); 
    list.Add(wxART_LOCAL_OFFER); 
    list.Add(wxART_LOCAL_PARKING); 
    list.Add(wxART_LOCAL_PHARMACY); 
    list.Add(wxART_LOCAL_PHONE); 
    list.Add(wxART_LOCAL_PIZZA); 
    list.Add(wxART_LOCAL_PLAY); 
    list.Add(wxART_LOCAL_POLICE); 
    list.Add(wxART_LOCAL_POST_OFFICE); 
    list.Add(wxART_LOCAL_PRINTSHOP); 
    list.Add(wxART_LOCAL_SEE); 
    list.Add(wxART_LOCAL_SHIPPING); 
    list.Add(wxART_LOCAL_TAXI); 
    list.Add(wxART_LOCATION_CITY); 
    list.Add(wxART_LOCATION_DISABLED); 
    list.Add(wxART_LOCATION_OFF); 
    list.Add(wxART_LOCATION_ON); 
    list.Add(wxART_LOCATION_SEARCHING); 
    list.Add(wxART_LOCK); 
    list.Add(wxART_LOCK_CLOCK); 
    list.Add(wxART_LOCK_OPEN); 
    list.Add(wxART_LOCK_PERSON); 
    list.Add(wxART_LOCK_RESET); 
    list.Add(wxART_LOGIN); 
    list.Add(wxART_LOGO_DEV); 
    list.Add(wxART_LOGOUT); 
    list.Add(wxART_LOOKS); 
    list.Add(wxART_LOOKS_3); 
    list.Add(wxART_LOOKS_4); 
    list.Add(wxART_LOOKS_5); 
    list.Add(wxART_LOOKS_6); 
    list.Add(wxART_LOOKS_ONE); 
    list.Add(wxART_LOOKS_TWO); 
    list.Add(wxART_LOOP); 
    list.Add(wxART_LOUPE); 
    list.Add(wxART_LOW_PRIORITY); 
    list.Add(wxART_LOYALTY); 
    list.Add(wxART_LTE_MOBILEDATA); 
    list.Add(wxART_LTE_PLUS_MOBILEDATA); 
    list.Add(wxART_LUGGAGE); 
    list.Add(wxART_LUNCH_DINING); 
    list.Add(wxART_LYRICS); 
    list.Add(wxART_MACRO_OFF); 
    list.Add(wxART_MAIL); 
    list.Add(wxART_MAIL_LOCK); 
    list.Add(wxART_MAIL_OUTLINE); 
    list.Add(wxART_MALE); 
    list.Add(wxART_MAN); 
    list.Add(wxART_MAN_2); 
    list.Add(wxART_MAN_3); 
    list.Add(wxART_MAN_4); 
    list.Add(wxART_MANAGE_ACCOUNTS); 
    list.Add(wxART_MANAGE_HISTORY); 
    list.Add(wxART_MANAGE_SEARCH); 
    list.Add(wxART_MAP); 
    list.Add(wxART_MAPS_HOME_WORK); 
    list.Add(wxART_MAPS_UGC); 
    list.Add(wxART_MARGIN); 
    list.Add(wxART_MARK_AS_UNREAD); 
    list.Add(wxART_MARK_CHAT_READ); 
    list.Add(wxART_MARK_CHAT_UNREAD); 
    list.Add(wxART_MARK_EMAIL_READ); 
    list.Add(wxART_MARK_EMAIL_UNREAD); 
    list.Add(wxART_MARK_UNREAD_CHAT_ALT); 
    list.Add(wxART_MARKUNREAD); 
    list.Add(wxART_MARKUNREAD_MAILBOX); 
    list.Add(wxART_MASKS); 
    list.Add(wxART_MAXIMIZE); 
    list.Add(wxART_MEDIA_BLUETOOTH_OFF); 
    list.Add(wxART_MEDIA_BLUETOOTH_ON); 
    list.Add(wxART_MEDIATION); 
    list.Add(wxART_MEDICAL_INFORMATION); 
    list.Add(wxART_MEDICAL_SERVICES); 
    list.Add(wxART_MEDICATION); 
    list.Add(wxART_MEDICATION_LIQUID); 
    list.Add(wxART_MEETING_ROOM); 
    list.Add(wxART_MEMORY); 
    list.Add(wxART_MENU); 
    list.Add(wxART_MENU_BOOK); 
    list.Add(wxART_MENU_OPEN); 
    list.Add(wxART_MERGE); 
    list.Add(wxART_MERGE_TYPE); 
    list.Add(wxART_MESSAGE); 
    list.Add(wxART_MIC); 
    list.Add(wxART_MIC_EXTERNAL_OFF); 
    list.Add(wxART_MIC_EXTERNAL_ON); 
    list.Add(wxART_MIC_NONE); 
    list.Add(wxART_MIC_OFF); 
    list.Add(wxART_MICROWAVE); 
    list.Add(wxART_MILITARY_TECH); 
    list.Add(wxART_MINIMIZE); 
    list.Add(wxART_MINOR_CRASH); 
    list.Add(wxART_MISCELLANEOUS_SERVICES); 
    list.Add(wxART_MISSED_VIDEO_CALL); 
    list.Add(wxART_MMS); 
    list.Add(wxART_MOBILE_FRIENDLY); 
    list.Add(wxART_MOBILE_OFF); 
    list.Add(wxART_MOBILE_SCREEN_SHARE); 
    list.Add(wxART_MOBILEDATA_OFF); 
    list.Add(wxART_MODE); 
    list.Add(wxART_MODE_COMMENT); 
    list.Add(wxART_MODE_EDIT); 
    list.Add(wxART_MODE_EDIT_OUTLINE); 
    list.Add(wxART_MODE_FAN_OFF); 
    list.Add(wxART_MODE_NIGHT); 
    list.Add(wxART_MODE_OF_TRAVEL); 
    list.Add(wxART_MODE_STANDBY); 
    list.Add(wxART_MODEL_TRAINING); 
    list.Add(wxART_MONETIZATION_ON); 
    list.Add(wxART_MONEY); 
    list.Add(wxART_MONEY_OFF); 
    list.Add(wxART_MONEY_OFF_CSRED); 
    list.Add(wxART_MONITOR); 
    list.Add(wxART_MONITOR_HEART); 
    list.Add(wxART_MONITOR_WEIGHT); 
    list.Add(wxART_MONOCHROME_PHOTOS); 
    list.Add(wxART_MOOD); 
    list.Add(wxART_MOOD_BAD); 
    list.Add(wxART_MOPED); 
    list.Add(wxART_MORE); 
    list.Add(wxART_MORE_HORIZ); 
    list.Add(wxART_MORE_TIME); 
    list.Add(wxART_MORE_VERT); 
    list.Add(wxART_MOSQUE); 
    list.Add(wxART_MOTION_PHOTOS_AUTO); 
    list.Add(wxART_MOTION_PHOTOS_OFF); 
    list.Add(wxART_MOTION_PHOTOS_ON); 
    list.Add(wxART_MOTION_PHOTOS_PAUSE); 
    list.Add(wxART_MOTION_PHOTOS_PAUSED); 
    list.Add(wxART_MOUSE); 
    list.Add(wxART_MOVE_DOWN); 
    list.Add(wxART_MOVE_TO_INBOX); 
    list.Add(wxART_MOVE_UP); 
    list.Add(wxART_MOVIE); 
    list.Add(wxART_MOVIE_CREATION); 
    list.Add(wxART_MOVIE_FILTER); 
    list.Add(wxART_MOVING); 
    list.Add(wxART_MP); 
    list.Add(wxART_MULTILINE_CHART); 
    list.Add(wxART_MULTIPLE_STOP); 
    list.Add(wxART_MUSEUM); 
    list.Add(wxART_MUSIC_NOTE); 
    list.Add(wxART_MUSIC_OFF); 
    list.Add(wxART_MUSIC_VIDEO); 
    list.Add(wxART_MY_LOCATION); 
    list.Add(wxART_NAT); 
    list.Add(wxART_NATURE); 
    list.Add(wxART_NATURE_PEOPLE); 
    list.Add(wxART_NAVIGATE_BEFORE); 
    list.Add(wxART_NAVIGATE_NEXT); 
    list.Add(wxART_NAVIGATION); 
    list.Add(wxART_NEAR_ME); 
    list.Add(wxART_NEAR_ME_DISABLED); 
    list.Add(wxART_NEARBY_ERROR); 
    list.Add(wxART_NEARBY_OFF); 
    list.Add(wxART_NEST_CAM_WIRED_STAND); 
    list.Add(wxART_NETWORK_CELL); 
    list.Add(wxART_NETWORK_CHECK); 
    list.Add(wxART_NETWORK_LOCKED); 
    list.Add(wxART_NETWORK_PING); 
    list.Add(wxART_NETWORK_WIFI); 
    list.Add(wxART_NETWORK_WIFI_1_BAR); 
    list.Add(wxART_NETWORK_WIFI_2_BAR); 
    list.Add(wxART_NETWORK_WIFI_3_BAR); 
    list.Add(wxART_NEW_LABEL); 
    list.Add(wxART_NEW_RELEASES); 
    list.Add(wxART_NEWSPAPER); 
    list.Add(wxART_NEXT_PLAN); 
    list.Add(wxART_NEXT_WEEK); 
    list.Add(wxART_NFC); 
    list.Add(wxART_NIGHT_SHELTER); 
    list.Add(wxART_NIGHTLIFE); 
    list.Add(wxART_NIGHTLIGHT); 
    list.Add(wxART_NIGHTLIGHT_ROUND); 
    list.Add(wxART_NIGHTS_STAY); 
    list.Add(wxART_NO_ACCOUNTS); 
    list.Add(wxART_NO_ADULT_CONTENT); 
    list.Add(wxART_NO_BACKPACK); 
    list.Add(wxART_NO_CELL); 
    list.Add(wxART_NO_CRASH); 
    list.Add(wxART_NO_DRINKS); 
    list.Add(wxART_NO_ENCRYPTION); 
    list.Add(wxART_NO_ENCRYPTION_GMAILERRORRED); 
    list.Add(wxART_NO_FLASH); 
    list.Add(wxART_NO_FOOD); 
    list.Add(wxART_NO_LUGGAGE); 
    list.Add(wxART_NO_MEALS); 
    list.Add(wxART_NO_MEETING_ROOM); 
    list.Add(wxART_NO_PHOTOGRAPHY); 
    list.Add(wxART_NO_SIM); 
    list.Add(wxART_NO_STROLLER); 
    list.Add(wxART_NO_TRANSFER); 
    list.Add(wxART_NOISE_AWARE); 
    list.Add(wxART_NOISE_CONTROL_OFF); 
    list.Add(wxART_NORDIC_WALKING); 
    list.Add(wxART_NORTH); 
    list.Add(wxART_NORTH_EAST); 
    list.Add(wxART_NORTH_WEST); 
    list.Add(wxART_NOT_ACCESSIBLE); 
    list.Add(wxART_NOT_INTERESTED); 
    list.Add(wxART_NOT_LISTED_LOCATION); 
    list.Add(wxART_NOT_STARTED); 
    list.Add(wxART_NOTE); 
    list.Add(wxART_NOTE_ADD); 
    list.Add(wxART_NOTE_ALT); 
    list.Add(wxART_NOTES); 
    list.Add(wxART_NOTIFICATION_ADD); 
    list.Add(wxART_NOTIFICATION_IMPORTANT); 
    list.Add(wxART_NOTIFICATIONS); 
    list.Add(wxART_NOTIFICATIONS_ACTIVE); 
    list.Add(wxART_NOTIFICATIONS_NONE); 
    list.Add(wxART_NOTIFICATIONS_OFF); 
    list.Add(wxART_NOTIFICATIONS_PAUSED); 
    list.Add(wxART_NUMBERS); 
    list.Add(wxART_OFFLINE_BOLT); 
    list.Add(wxART_OFFLINE_PIN); 
    list.Add(wxART_OFFLINE_SHARE); 
    list.Add(wxART_OIL_BARREL); 
    list.Add(wxART_ON_DEVICE_TRAINING); 
    list.Add(wxART_ONDEMAND_VIDEO); 
    list.Add(wxART_ONLINE_PREDICTION); 
    list.Add(wxART_OPACITY); 
    list.Add(wxART_OPEN_IN_BROWSER); 
    list.Add(wxART_OPEN_IN_FULL); 
    list.Add(wxART_OPEN_IN_NEW); 
    list.Add(wxART_OPEN_IN_NEW_OFF); 
    list.Add(wxART_OPEN_WITH); 
    list.Add(wxART_OTHER_HOUSES); 
    list.Add(wxART_OUTBOUND); 
    list.Add(wxART_OUTBOX); 
    list.Add(wxART_OUTDOOR_GRILL); 
    list.Add(wxART_OUTLET); 
    list.Add(wxART_OUTLINED_FLAG); 
    list.Add(wxART_OUTPUT); 
    list.Add(wxART_PADDING); 
    list.Add(wxART_PAGES); 
    list.Add(wxART_PAGEVIEW); 
    list.Add(wxART_PAID); 
    list.Add(wxART_PALETTE); 
    list.Add(wxART_PAN_TOOL); 
    list.Add(wxART_PAN_TOOL_ALT); 
    list.Add(wxART_PANORAMA); 
    list.Add(wxART_PANORAMA_FISH_EYE); 
    list.Add(wxART_PANORAMA_HORIZONTAL); 
    list.Add(wxART_PANORAMA_HORIZONTAL_SELECT); 
    list.Add(wxART_PANORAMA_PHOTOSPHERE); 
    list.Add(wxART_PANORAMA_PHOTOSPHERE_SELECT); 
    list.Add(wxART_PANORAMA_VERTICAL); 
    list.Add(wxART_PANORAMA_VERTICAL_SELECT); 
    list.Add(wxART_PANORAMA_WIDE_ANGLE); 
    list.Add(wxART_PANORAMA_WIDE_ANGLE_SELECT); 
    list.Add(wxART_PARAGLIDING); 
    list.Add(wxART_PARK); 
    list.Add(wxART_PARTY_MODE); 
    list.Add(wxART_PASSWORD); 
    list.Add(wxART_PATTERN); 
    list.Add(wxART_PAUSE); 
    list.Add(wxART_PAUSE_CIRCLE); 
    list.Add(wxART_PAUSE_CIRCLE_FILLED); 
    list.Add(wxART_PAUSE_CIRCLE_OUTLINE); 
    list.Add(wxART_PAUSE_PRESENTATION); 
    list.Add(wxART_PAYMENT); 
    list.Add(wxART_PAYMENTS); 
    list.Add(wxART_PEDAL_BIKE); 
    list.Add(wxART_PENDING); 
    list.Add(wxART_PENDING_ACTIONS); 
    list.Add(wxART_PENTAGON); 
    list.Add(wxART_PEOPLE); 
    list.Add(wxART_PEOPLE_ALT); 
    list.Add(wxART_PEOPLE_OUTLINE); 
    list.Add(wxART_PERCENT); 
    list.Add(wxART_PERM_CAMERA_MIC); 
    list.Add(wxART_PERM_CONTACT_CALENDAR); 
    list.Add(wxART_PERM_DATA_SETTING); 
    list.Add(wxART_PERM_DEVICE_INFORMATION); 
    list.Add(wxART_PERM_IDENTITY); 
    list.Add(wxART_PERM_MEDIA); 
    list.Add(wxART_PERM_PHONE_MSG); 
    list.Add(wxART_PERM_SCAN_WIFI); 
    list.Add(wxART_PERSON); 
    list.Add(wxART_PERSON_2); 
    list.Add(wxART_PERSON_3); 
    list.Add(wxART_PERSON_4); 
    list.Add(wxART_PERSON_ADD); 
    list.Add(wxART_PERSON_ADD_ALT); 
    list.Add(wxART_PERSON_ADD_ALT_1); 
    list.Add(wxART_PERSON_ADD_DISABLED); 
    list.Add(wxART_PERSON_OFF); 
    list.Add(wxART_PERSON_OUTLINE); 
    list.Add(wxART_PERSON_PIN); 
    list.Add(wxART_PERSON_PIN_CIRCLE); 
    list.Add(wxART_PERSON_REMOVE); 
    list.Add(wxART_PERSON_REMOVE_ALT_1); 
    list.Add(wxART_PERSON_SEARCH); 
    list.Add(wxART_PERSONAL_INJURY); 
    list.Add(wxART_PERSONAL_VIDEO); 
    list.Add(wxART_PEST_CONTROL); 
    list.Add(wxART_PEST_CONTROL_RODENT); 
    list.Add(wxART_PETS); 
    list.Add(wxART_PHISHING); 
    list.Add(wxART_PHONE); 
    list.Add(wxART_PHONE_ANDROID); 
    list.Add(wxART_PHONE_BLUETOOTH_SPEAKER); 
    list.Add(wxART_PHONE_CALLBACK); 
    list.Add(wxART_PHONE_DISABLED); 
    list.Add(wxART_PHONE_ENABLED); 
    list.Add(wxART_PHONE_FORWARDED); 
    list.Add(wxART_PHONE_IPHONE); 
    list.Add(wxART_PHONE_LOCKED); 
    list.Add(wxART_PHONE_MISSED); 
    list.Add(wxART_PHONE_PAUSED); 
    list.Add(wxART_PHONELINK); 
    list.Add(wxART_PHONELINK_ERASE); 
    list.Add(wxART_PHONELINK_LOCK); 
    list.Add(wxART_PHONELINK_OFF); 
    list.Add(wxART_PHONELINK_RING); 
    list.Add(wxART_PHONELINK_SETUP); 
    list.Add(wxART_PHOTO); 
    list.Add(wxART_PHOTO_ALBUM); 
    list.Add(wxART_PHOTO_CAMERA); 
    list.Add(wxART_PHOTO_CAMERA_BACK); 
    list.Add(wxART_PHOTO_CAMERA_FRONT); 
    list.Add(wxART_PHOTO_FILTER); 
    list.Add(wxART_PHOTO_LIBRARY); 
    list.Add(wxART_PHOTO_SIZE_SELECT_ACTUAL); 
    list.Add(wxART_PHOTO_SIZE_SELECT_LARGE); 
    list.Add(wxART_PHOTO_SIZE_SELECT_SMALL); 
    list.Add(wxART_PHP); 
    list.Add(wxART_PIANO); 
    list.Add(wxART_PIANO_OFF); 
    list.Add(wxART_PICTURE_AS_PDF); 
    list.Add(wxART_PICTURE_IN_PICTURE); 
    list.Add(wxART_PICTURE_IN_PICTURE_ALT); 
    list.Add(wxART_PIE_CHART); 
    list.Add(wxART_PIE_CHART_OUTLINE); 
    list.Add(wxART_PIN); 
    list.Add(wxART_PIN_DROP); 
    list.Add(wxART_PIN_END); 
    list.Add(wxART_PIN_INVOKE); 
    list.Add(wxART_PINCH); 
    list.Add(wxART_PIVOT_TABLE_CHART); 
    list.Add(wxART_PIX); 
    list.Add(wxART_PLACE); 
    list.Add(wxART_PLAGIARISM); 
    list.Add(wxART_PLAY_ARROW); 
    list.Add(wxART_PLAY_CIRCLE); 
    list.Add(wxART_PLAY_CIRCLE_FILLED); 
    list.Add(wxART_PLAY_CIRCLE_OUTLINE); 
    list.Add(wxART_PLAY_DISABLED); 
    list.Add(wxART_PLAY_FOR_WORK); 
    list.Add(wxART_PLAY_LESSON); 
    list.Add(wxART_PLAYLIST_ADD); 
    list.Add(wxART_PLAYLIST_ADD_CHECK); 
    list.Add(wxART_PLAYLIST_ADD_CHECK_CIRCLE); 
    list.Add(wxART_PLAYLIST_ADD_CIRCLE); 
    list.Add(wxART_PLAYLIST_PLAY); 
    list.Add(wxART_PLAYLIST_REMOVE); 
    list.Add(wxART_PLUMBING); 
    list.Add(wxART_PLUS_ONE); 
    list.Add(wxART_PODCASTS); 
    list.Add(wxART_POINT_OF_SALE); 
    list.Add(wxART_POLICY); 
    list.Add(wxART_POLL); 
    list.Add(wxART_POLYLINE); 
    list.Add(wxART_POLYMER); 
    list.Add(wxART_POOL); 
    list.Add(wxART_PORTABLE_WIFI_OFF); 
    list.Add(wxART_PORTRAIT); 
    list.Add(wxART_POST_ADD); 
    list.Add(wxART_POWER); 
    list.Add(wxART_POWER_INPUT); 
    list.Add(wxART_POWER_OFF); 
    list.Add(wxART_POWER_SETTINGS_NEW); 
    list.Add(wxART_PRECISION_MANUFACTURING); 
    list.Add(wxART_PREGNANT_WOMAN); 
    list.Add(wxART_PRESENT_TO_ALL); 
    list.Add(wxART_PREVIEW); 
    list.Add(wxART_PRICE_CHANGE); 
    list.Add(wxART_PRICE_CHECK); 
    list.Add(wxART_PRINT); 
    list.Add(wxART_PRINT_DISABLED); 
    list.Add(wxART_PRIORITY_HIGH); 
    list.Add(wxART_PRIVACY_TIP); 
    list.Add(wxART_PRIVATE_CONNECTIVITY); 
    list.Add(wxART_PRODUCTION_QUANTITY_LIMITS); 
    list.Add(wxART_PROPANE); 
    list.Add(wxART_PROPANE_TANK); 
    list.Add(wxART_PSYCHOLOGY); 
    list.Add(wxART_PSYCHOLOGY_ALT); 
    list.Add(wxART_PUBLIC); 
    list.Add(wxART_PUBLIC_OFF); 
    list.Add(wxART_PUBLISH); 
    list.Add(wxART_PUBLISHED_WITH_CHANGES); 
    list.Add(wxART_PUNCH_CLOCK); 
    list.Add(wxART_PUSH_PIN); 
    list.Add(wxART_QR_CODE); 
    list.Add(wxART_QR_CODE_2); 
    list.Add(wxART_QR_CODE_SCANNER); 
    list.Add(wxART_QUERY_BUILDER); 
    list.Add(wxART_QUERY_STATS); 
    list.Add(wxART_QUESTION_ANSWER); 
    list.Add(wxART_QUESTION_MARK); 
    list.Add(wxART_QUEUE); 
    list.Add(wxART_QUEUE_MUSIC); 
    list.Add(wxART_QUEUE_PLAY_NEXT); 
    list.Add(wxART_QUICKREPLY); 
    list.Add(wxART_QUIZ); 
    list.Add(wxART_R_MOBILEDATA); 
    list.Add(wxART_RADAR); 
    list.Add(wxART_RADIO); 
    list.Add(wxART_RADIO_BUTTON_CHECKED); 
    list.Add(wxART_RADIO_BUTTON_UNCHECKED); 
    list.Add(wxART_RAILWAY_ALERT); 
    list.Add(wxART_RAMEN_DINING); 
    list.Add(wxART_RAMP_LEFT); 
    list.Add(wxART_RAMP_RIGHT); 
    list.Add(wxART_RATE_REVIEW); 
    list.Add(wxART_RAW_OFF); 
    list.Add(wxART_RAW_ON); 
    list.Add(wxART_READ_MORE); 
    list.Add(wxART_REAL_ESTATE_AGENT); 
    list.Add(wxART_RECEIPT); 
    list.Add(wxART_RECEIPT_LONG); 
    list.Add(wxART_RECENT_ACTORS); 
    list.Add(wxART_RECOMMEND); 
    list.Add(wxART_RECORD_VOICE_OVER); 
    list.Add(wxART_RECTANGLE); 
    list.Add(wxART_RECYCLING); 
    list.Add(wxART_REDEEM); 
    list.Add(wxART_REDO); 
    list.Add(wxART_REDUCE_CAPACITY); 
    list.Add(wxART_REFRESH); 
    list.Add(wxART_REMEMBER_ME); 
    list.Add(wxART_REMOVE); 
    list.Add(wxART_REMOVE_CIRCLE); 
    list.Add(wxART_REMOVE_CIRCLE_OUTLINE); 
    list.Add(wxART_REMOVE_DONE); 
    list.Add(wxART_REMOVE_FROM_QUEUE); 
    list.Add(wxART_REMOVE_MODERATOR); 
    list.Add(wxART_REMOVE_RED_EYE); 
    list.Add(wxART_REMOVE_ROAD); 
    list.Add(wxART_REMOVE_SHOPPING_CART); 
    list.Add(wxART_REORDER); 
    list.Add(wxART_REPARTITION); 
    list.Add(wxART_REPEAT); 
    list.Add(wxART_REPEAT_ON); 
    list.Add(wxART_REPEAT_ONE); 
    list.Add(wxART_REPEAT_ONE_ON); 
    list.Add(wxART_REPLAY); 
    list.Add(wxART_REPLAY_10); 
    list.Add(wxART_REPLAY_30); 
    list.Add(wxART_REPLAY_5); 
    list.Add(wxART_REPLAY_CIRCLE_FILLED); 
    list.Add(wxART_REPLY); 
    list.Add(wxART_REPLY_ALL); 
    list.Add(wxART_REPORT); 
    list.Add(wxART_REPORT_GMAILERRORRED); 
    list.Add(wxART_REPORT_OFF); 
    list.Add(wxART_REPORT_PROBLEM); 
    list.Add(wxART_REQUEST_PAGE); 
    list.Add(wxART_REQUEST_QUOTE); 
    list.Add(wxART_RESET_TV); 
    list.Add(wxART_RESTART_ALT); 
    list.Add(wxART_RESTAURANT); 
    list.Add(wxART_RESTAURANT_MENU); 
    list.Add(wxART_RESTORE); 
    list.Add(wxART_RESTORE_FROM_TRASH); 
    list.Add(wxART_RESTORE_PAGE); 
    list.Add(wxART_REVIEWS); 
    list.Add(wxART_RICE_BOWL); 
    list.Add(wxART_RING_VOLUME); 
    list.Add(wxART_ROCKET); 
    list.Add(wxART_ROCKET_LAUNCH); 
    list.Add(wxART_ROLLER_SHADES); 
    list.Add(wxART_ROLLER_SHADES_CLOSED); 
    list.Add(wxART_ROLLER_SKATING); 
    list.Add(wxART_ROOFING); 
    list.Add(wxART_ROOM); 
    list.Add(wxART_ROOM_PREFERENCES); 
    list.Add(wxART_ROOM_SERVICE); 
    list.Add(wxART_ROTATE_90_DEGREES_CCW); 
    list.Add(wxART_ROTATE_90_DEGREES_CW); 
    list.Add(wxART_ROTATE_LEFT); 
    list.Add(wxART_ROTATE_RIGHT); 
    list.Add(wxART_ROUNDABOUT_LEFT); 
    list.Add(wxART_ROUNDABOUT_RIGHT); 
    list.Add(wxART_ROUNDED_CORNER); 
    list.Add(wxART_ROUTE); 
    list.Add(wxART_ROUTER); 
    list.Add(wxART_ROWING); 
    list.Add(wxART_RSS_FEED); 
    list.Add(wxART_RSVP); 
    list.Add(wxART_RTT); 
    list.Add(wxART_RULE); 
    list.Add(wxART_RULE_FOLDER); 
    list.Add(wxART_RUN_CIRCLE); 
    list.Add(wxART_RUNNING_WITH_ERRORS); 
    list.Add(wxART_RV_HOOKUP); 
    list.Add(wxART_SAFETY_CHECK); 
    list.Add(wxART_SAFETY_DIVIDER); 
    list.Add(wxART_SAILING); 
    list.Add(wxART_SANITIZER); 
    list.Add(wxART_SATELLITE); 
    list.Add(wxART_SATELLITE_ALT); 
    list.Add(wxART_SAVE); 
    list.Add(wxART_SAVE_ALT); 
    list.Add(wxART_SAVE_AS); 
    list.Add(wxART_SAVED_SEARCH); 
    list.Add(wxART_SAVINGS); 
    list.Add(wxART_SCALE); 
    list.Add(wxART_SCANNER); 
    list.Add(wxART_SCATTER_PLOT); 
    list.Add(wxART_SCHEDULE); 
    list.Add(wxART_SCHEDULE_SEND); 
    list.Add(wxART_SCHEMA); 
    list.Add(wxART_SCHOOL); 
    list.Add(wxART_SCIENCE); 
    list.Add(wxART_SCORE); 
    list.Add(wxART_SCOREBOARD); 
    list.Add(wxART_SCREEN_LOCK_LANDSCAPE); 
    list.Add(wxART_SCREEN_LOCK_PORTRAIT); 
    list.Add(wxART_SCREEN_LOCK_ROTATION); 
    list.Add(wxART_SCREEN_ROTATION); 
    list.Add(wxART_SCREEN_ROTATION_ALT); 
    list.Add(wxART_SCREEN_SEARCH_DESKTOP); 
    list.Add(wxART_SCREEN_SHARE); 
    list.Add(wxART_SCREENSHOT); 
    list.Add(wxART_SCREENSHOT_MONITOR); 
    list.Add(wxART_SCUBA_DIVING); 
    list.Add(wxART_SD); 
    list.Add(wxART_SD_CARD); 
    list.Add(wxART_SD_CARD_ALERT); 
    list.Add(wxART_SD_STORAGE); 
    list.Add(wxART_SEARCH); 
    list.Add(wxART_SEARCH_OFF); 
    list.Add(wxART_SECURITY); 
    list.Add(wxART_SECURITY_UPDATE); 
    list.Add(wxART_SECURITY_UPDATE_GOOD); 
    list.Add(wxART_SECURITY_UPDATE_WARNING); 
    list.Add(wxART_SEGMENT); 
    list.Add(wxART_SELECT_ALL); 
    list.Add(wxART_SELF_IMPROVEMENT); 
    list.Add(wxART_SELL); 
    list.Add(wxART_SEND); 
    list.Add(wxART_SEND_AND_ARCHIVE); 
    list.Add(wxART_SEND_TIME_EXTENSION); 
    list.Add(wxART_SEND_TO_MOBILE); 
    list.Add(wxART_SENSOR_DOOR); 
    list.Add(wxART_SENSOR_OCCUPIED); 
    list.Add(wxART_SENSOR_WINDOW); 
    list.Add(wxART_SENSORS); 
    list.Add(wxART_SENSORS_OFF); 
    list.Add(wxART_SENTIMENT_DISSATISFIED); 
    list.Add(wxART_SENTIMENT_NEUTRAL); 
    list.Add(wxART_SENTIMENT_SATISFIED); 
    list.Add(wxART_SENTIMENT_SATISFIED_ALT); 
    list.Add(wxART_SENTIMENT_VERY_DISSATISFIED); 
    list.Add(wxART_SENTIMENT_VERY_SATISFIED); 
    list.Add(wxART_SET_MEAL); 
    list.Add(wxART_SETTINGS); 
    list.Add(wxART_SETTINGS_ACCESSIBILITY); 
    list.Add(wxART_SETTINGS_APPLICATIONS); 
    list.Add(wxART_SETTINGS_BACKUP_RESTORE); 
    list.Add(wxART_SETTINGS_BLUETOOTH); 
    list.Add(wxART_SETTINGS_BRIGHTNESS); 
    list.Add(wxART_SETTINGS_CELL); 
    list.Add(wxART_SETTINGS_ETHERNET); 
    list.Add(wxART_SETTINGS_INPUT_ANTENNA); 
    list.Add(wxART_SETTINGS_INPUT_COMPONENT); 
    list.Add(wxART_SETTINGS_INPUT_COMPOSITE); 
    list.Add(wxART_SETTINGS_INPUT_HDMI); 
    list.Add(wxART_SETTINGS_INPUT_SVIDEO); 
    list.Add(wxART_SETTINGS_OVERSCAN); 
    list.Add(wxART_SETTINGS_PHONE); 
    list.Add(wxART_SETTINGS_POWER); 
    list.Add(wxART_SETTINGS_REMOTE); 
    list.Add(wxART_SETTINGS_SUGGEST); 
    list.Add(wxART_SETTINGS_SYSTEM_DAYDREAM); 
    list.Add(wxART_SETTINGS_VOICE); 
    list.Add(wxART_SEVERE_COLD); 
    list.Add(wxART_SHAPE_LINE); 
    list.Add(wxART_SHARE); 
    list.Add(wxART_SHARE_LOCATION); 
    list.Add(wxART_SHIELD); 
    list.Add(wxART_SHIELD_MOON); 
    list.Add(wxART_SHOP); 
    list.Add(wxART_SHOP_2); 
    list.Add(wxART_SHOP_TWO); 
    list.Add(wxART_SHOPPING_BAG); 
    list.Add(wxART_SHOPPING_BASKET); 
    list.Add(wxART_SHOPPING_CART); 
    list.Add(wxART_SHOPPING_CART_CHECKOUT); 
    list.Add(wxART_SHORT_TEXT); 
    list.Add(wxART_SHORTCUT); 
    list.Add(wxART_SHOW_CHART); 
    list.Add(wxART_SHOWER); 
    list.Add(wxART_SHUFFLE); 
    list.Add(wxART_SHUFFLE_ON); 
    list.Add(wxART_SHUTTER_SPEED); 
    list.Add(wxART_SICK); 
    list.Add(wxART_SIGN_LANGUAGE); 
    list.Add(wxART_SIGNAL_CELLULAR_0_BAR); 
    list.Add(wxART_SIGNAL_CELLULAR_4_BAR); 
    list.Add(wxART_SIGNAL_CELLULAR_ALT); 
    list.Add(wxART_SIGNAL_CELLULAR_ALT_1_BAR); 
    list.Add(wxART_SIGNAL_CELLULAR_ALT_2_BAR); 
    list.Add(wxART_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_0_BAR); 
    list.Add(wxART_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_4_BAR); 
    list.Add(wxART_SIGNAL_CELLULAR_NO_SIM); 
    list.Add(wxART_SIGNAL_CELLULAR_NODATA); 
    list.Add(wxART_SIGNAL_CELLULAR_NULL); 
    list.Add(wxART_SIGNAL_CELLULAR_OFF); 
    list.Add(wxART_SIGNAL_WIFI_0_BAR); 
    list.Add(wxART_SIGNAL_WIFI_4_BAR); 
    list.Add(wxART_SIGNAL_WIFI_4_BAR_LOCK); 
    list.Add(wxART_SIGNAL_WIFI_BAD); 
    list.Add(wxART_SIGNAL_WIFI_CONNECTED_NO_INTERNET_4); 
    list.Add(wxART_SIGNAL_WIFI_OFF); 
    list.Add(wxART_SIGNAL_WIFI_STATUSBAR_4_BAR); 
    list.Add(wxART_SIGNAL_WIFI_STATUSBAR_CONNECTED_NO_INTERNET_4); 
    list.Add(wxART_SIGNAL_WIFI_STATUSBAR_NULL); 
    list.Add(wxART_SIGNPOST); 
    list.Add(wxART_SIM_CARD); 
    list.Add(wxART_SIM_CARD_ALERT); 
    list.Add(wxART_SIM_CARD_DOWNLOAD); 
    list.Add(wxART_SINGLE_BED); 
    list.Add(wxART_SIP); 
    list.Add(wxART_SKATEBOARDING); 
    list.Add(wxART_SKIP_NEXT); 
    list.Add(wxART_SKIP_PREVIOUS); 
    list.Add(wxART_SLEDDING); 
    list.Add(wxART_SLIDESHOW); 
    list.Add(wxART_SLOW_MOTION_VIDEO); 
    list.Add(wxART_SMART_BUTTON); 
    list.Add(wxART_SMART_DISPLAY); 
    list.Add(wxART_SMART_SCREEN); 
    list.Add(wxART_SMART_TOY); 
    list.Add(wxART_SMARTPHONE); 
    list.Add(wxART_SMOKE_FREE); 
    list.Add(wxART_SMOKING_ROOMS); 
    list.Add(wxART_SMS); 
    list.Add(wxART_SMS_FAILED); 
    list.Add(wxART_SNIPPET_FOLDER); 
    list.Add(wxART_SNOOZE); 
    list.Add(wxART_SNOWBOARDING); 
    list.Add(wxART_SNOWMOBILE); 
    list.Add(wxART_SNOWSHOEING); 
    list.Add(wxART_SOAP); 
    list.Add(wxART_SOCIAL_DISTANCE); 
    list.Add(wxART_SOLAR_POWER); 
    list.Add(wxART_SORT); 
    list.Add(wxART_SORT_BY_ALPHA); 
    list.Add(wxART_SOS); 
    list.Add(wxART_SOUP_KITCHEN); 
    list.Add(wxART_SOURCE); 
    list.Add(wxART_SOUTH); 
    list.Add(wxART_SOUTH_AMERICA); 
    list.Add(wxART_SOUTH_EAST); 
    list.Add(wxART_SOUTH_WEST); 
    list.Add(wxART_SPA); 
    list.Add(wxART_SPACE_BAR); 
    list.Add(wxART_SPACE_DASHBOARD); 
    list.Add(wxART_SPATIAL_AUDIO); 
    list.Add(wxART_SPATIAL_AUDIO_OFF); 
    list.Add(wxART_SPATIAL_TRACKING); 
    list.Add(wxART_SPEAKER); 
    list.Add(wxART_SPEAKER_GROUP); 
    list.Add(wxART_SPEAKER_NOTES); 
    list.Add(wxART_SPEAKER_NOTES_OFF); 
    list.Add(wxART_SPEAKER_PHONE); 
    list.Add(wxART_SPEED); 
    list.Add(wxART_SPELLCHECK); 
    list.Add(wxART_SPLITSCREEN); 
    list.Add(wxART_SPOKE); 
    list.Add(wxART_SPORTS); 
    list.Add(wxART_SPORTS_BAR); 
    list.Add(wxART_SPORTS_BASEBALL); 
    list.Add(wxART_SPORTS_BASKETBALL); 
    list.Add(wxART_SPORTS_CRICKET); 
    list.Add(wxART_SPORTS_ESPORTS); 
    list.Add(wxART_SPORTS_FOOTBALL); 
    list.Add(wxART_SPORTS_GOLF); 
    list.Add(wxART_SPORTS_GYMNASTICS); 
    list.Add(wxART_SPORTS_HANDBALL); 
    list.Add(wxART_SPORTS_HOCKEY); 
    list.Add(wxART_SPORTS_KABADDI); 
    list.Add(wxART_SPORTS_MARTIAL_ARTS); 
    list.Add(wxART_SPORTS_MMA); 
    list.Add(wxART_SPORTS_MOTORSPORTS); 
    list.Add(wxART_SPORTS_RUGBY); 
    list.Add(wxART_SPORTS_SCORE); 
    list.Add(wxART_SPORTS_SOCCER); 
    list.Add(wxART_SPORTS_TENNIS); 
    list.Add(wxART_SPORTS_VOLLEYBALL); 
    list.Add(wxART_SQUARE); 
    list.Add(wxART_SQUARE_FOOT); 
    list.Add(wxART_SSID_CHART); 
    list.Add(wxART_STACKED_BAR_CHART); 
    list.Add(wxART_STACKED_LINE_CHART); 
    list.Add(wxART_STADIUM); 
    list.Add(wxART_STAIRS); 
    list.Add(wxART_STAR); 
    list.Add(wxART_STAR_BORDER); 
    list.Add(wxART_STAR_BORDER_PURPLE500); 
    list.Add(wxART_STAR_HALF); 
    list.Add(wxART_STAR_OUTLINE); 
    list.Add(wxART_STAR_PURPLE500); 
    list.Add(wxART_STAR_RATE); 
    list.Add(wxART_STARS); 
    list.Add(wxART_START); 
    list.Add(wxART_STAY_CURRENT_LANDSCAPE); 
    list.Add(wxART_STAY_CURRENT_PORTRAIT); 
    list.Add(wxART_STAY_PRIMARY_LANDSCAPE); 
    list.Add(wxART_STAY_PRIMARY_PORTRAIT); 
    list.Add(wxART_STICKY_NOTE_2); 
    list.Add(wxART_STOP); 
    list.Add(wxART_STOP_CIRCLE); 
    list.Add(wxART_STOP_SCREEN_SHARE); 
    list.Add(wxART_STORAGE); 
    list.Add(wxART_STORE); 
    list.Add(wxART_STORE_MALL_DIRECTORY); 
    list.Add(wxART_STOREFRONT); 
    list.Add(wxART_STORM); 
    list.Add(wxART_STRAIGHT); 
    list.Add(wxART_STRAIGHTEN); 
    list.Add(wxART_STREAM); 
    list.Add(wxART_STREETVIEW); 
    list.Add(wxART_STRIKETHROUGH_S); 
    list.Add(wxART_STROLLER); 
    list.Add(wxART_STYLE); 
    list.Add(wxART_SUBDIRECTORY_ARROW_LEFT); 
    list.Add(wxART_SUBDIRECTORY_ARROW_RIGHT); 
    list.Add(wxART_SUBJECT); 
    list.Add(wxART_SUBSCRIPT); 
    list.Add(wxART_SUBSCRIPTIONS); 
    list.Add(wxART_SUBTITLES); 
    list.Add(wxART_SUBTITLES_OFF); 
    list.Add(wxART_SUBWAY); 
    list.Add(wxART_SUMMARIZE); 
    list.Add(wxART_SUPERSCRIPT); 
    list.Add(wxART_SUPERVISED_USER_CIRCLE); 
    list.Add(wxART_SUPERVISOR_ACCOUNT); 
    list.Add(wxART_SUPPORT); 
    list.Add(wxART_SUPPORT_AGENT); 
    list.Add(wxART_SURFING); 
    list.Add(wxART_SURROUND_SOUND); 
    list.Add(wxART_SWAP_CALLS); 
    list.Add(wxART_SWAP_HORIZ); 
    list.Add(wxART_SWAP_HORIZONTAL_CIRCLE); 
    list.Add(wxART_SWAP_VERT); 
    list.Add(wxART_SWAP_VERTICAL_CIRCLE); 
    list.Add(wxART_SWIPE); 
    list.Add(wxART_SWIPE_DOWN); 
    list.Add(wxART_SWIPE_DOWN_ALT); 
    list.Add(wxART_SWIPE_LEFT); 
    list.Add(wxART_SWIPE_LEFT_ALT); 
    list.Add(wxART_SWIPE_RIGHT); 
    list.Add(wxART_SWIPE_RIGHT_ALT); 
    list.Add(wxART_SWIPE_UP); 
    list.Add(wxART_SWIPE_UP_ALT); 
    list.Add(wxART_SWIPE_VERTICAL); 
    list.Add(wxART_SWITCH_ACCESS_SHORTCUT); 
    list.Add(wxART_SWITCH_ACCESS_SHORTCUT_ADD); 
    list.Add(wxART_SWITCH_ACCOUNT); 
    list.Add(wxART_SWITCH_CAMERA); 
    list.Add(wxART_SWITCH_LEFT); 
    list.Add(wxART_SWITCH_RIGHT); 
    list.Add(wxART_SWITCH_VIDEO); 
    list.Add(wxART_SYNAGOGUE); 
    list.Add(wxART_SYNC); 
    list.Add(wxART_SYNC_ALT); 
    list.Add(wxART_SYNC_DISABLED); 
    list.Add(wxART_SYNC_LOCK); 
    list.Add(wxART_SYNC_PROBLEM); 
    list.Add(wxART_SYSTEM_SECURITY_UPDATE); 
    list.Add(wxART_SYSTEM_SECURITY_UPDATE_GOOD); 
    list.Add(wxART_SYSTEM_SECURITY_UPDATE_WARNING); 
    list.Add(wxART_SYSTEM_UPDATE); 
    list.Add(wxART_SYSTEM_UPDATE_ALT); 
    list.Add(wxART_TAB); 
    list.Add(wxART_TAB_UNSELECTED); 
    list.Add(wxART_TABLE_BAR); 
    list.Add(wxART_TABLE_CHART); 
    list.Add(wxART_TABLE_RESTAURANT); 
    list.Add(wxART_TABLE_ROWS); 
    list.Add(wxART_TABLE_VIEW); 
    list.Add(wxART_TABLET); 
    list.Add(wxART_TABLET_ANDROID); 
    list.Add(wxART_TABLET_MAC); 
    list.Add(wxART_TAG); 
    list.Add(wxART_TAG_FACES); 
    list.Add(wxART_TAKEOUT_DINING); 
    list.Add(wxART_TAP_AND_PLAY); 
    list.Add(wxART_TAPAS); 
    list.Add(wxART_TASK); 
    list.Add(wxART_TASK_ALT); 
    list.Add(wxART_TAXI_ALERT); 
    list.Add(wxART_TEMPLE_BUDDHIST); 
    list.Add(wxART_TEMPLE_HINDU); 
    list.Add(wxART_TERMINAL); 
    list.Add(wxART_TERRAIN); 
    list.Add(wxART_TEXT_DECREASE); 
    list.Add(wxART_TEXT_FIELDS); 
    list.Add(wxART_TEXT_FORMAT); 
    list.Add(wxART_TEXT_INCREASE); 
    list.Add(wxART_TEXT_ROTATE_UP); 
    list.Add(wxART_TEXT_ROTATE_VERTICAL); 
    list.Add(wxART_TEXT_ROTATION_ANGLEDOWN); 
    list.Add(wxART_TEXT_ROTATION_ANGLEUP); 
    list.Add(wxART_TEXT_ROTATION_DOWN); 
    list.Add(wxART_TEXT_ROTATION_NONE); 
    list.Add(wxART_TEXT_SNIPPET); 
    list.Add(wxART_TEXTSMS); 
    list.Add(wxART_TEXTURE); 
    list.Add(wxART_THEATER_COMEDY); 
    list.Add(wxART_THEATERS); 
    list.Add(wxART_THERMOSTAT); 
    list.Add(wxART_THERMOSTAT_AUTO); 
    list.Add(wxART_THUMB_DOWN); 
    list.Add(wxART_THUMB_DOWN_ALT); 
    list.Add(wxART_THUMB_DOWN_OFF_ALT); 
    list.Add(wxART_THUMB_UP); 
    list.Add(wxART_THUMB_UP_ALT); 
    list.Add(wxART_THUMB_UP_OFF_ALT); 
    list.Add(wxART_THUMBS_UP_DOWN); 
    list.Add(wxART_THUNDERSTORM); 
    list.Add(wxART_TIME_TO_LEAVE); 
    list.Add(wxART_TIMELAPSE); 
    list.Add(wxART_TIMELINE); 
    list.Add(wxART_TIMER); 
    list.Add(wxART_TIMER_10); 
    list.Add(wxART_TIMER_10_SELECT); 
    list.Add(wxART_TIMER_3); 
    list.Add(wxART_TIMER_3_SELECT); 
    list.Add(wxART_TIMER_OFF); 
    list.Add(wxART_TIPS_AND_UPDATES); 
    list.Add(wxART_TIRE_REPAIR); 
    list.Add(wxART_TITLE); 
    list.Add(wxART_TOC); 
    list.Add(wxART_TODAY); 
    list.Add(wxART_TOGGLE_OFF); 
    list.Add(wxART_TOGGLE_ON); 
    list.Add(wxART_TOKEN); 
    list.Add(wxART_TOLL); 
    list.Add(wxART_TONALITY); 
    list.Add(wxART_TOPIC); 
    list.Add(wxART_TORNADO); 
    list.Add(wxART_TOUCH_APP); 
    list.Add(wxART_TOUR); 
    list.Add(wxART_TOYS); 
    list.Add(wxART_TRACK_CHANGES); 
    list.Add(wxART_TRAFFIC); 
    list.Add(wxART_TRAIN); 
    list.Add(wxART_TRAM); 
    list.Add(wxART_TRANSCRIBE); 
    list.Add(wxART_TRANSFER_WITHIN_A_STATION); 
    list.Add(wxART_TRANSFORM); 
    list.Add(wxART_TRANSGENDER); 
    list.Add(wxART_TRANSIT_ENTEREXIT); 
    list.Add(wxART_TRANSLATE); 
    list.Add(wxART_TRAVEL_EXPLORE); 
    list.Add(wxART_TRENDING_DOWN); 
    list.Add(wxART_TRENDING_FLAT); 
    list.Add(wxART_TRENDING_UP); 
    list.Add(wxART_TRIP_ORIGIN); 
    list.Add(wxART_TROUBLESHOOT); 
    list.Add(wxART_TRY); 
    list.Add(wxART_TSUNAMI); 
    list.Add(wxART_TTY); 
    list.Add(wxART_TUNE); 
    list.Add(wxART_TUNGSTEN); 
    list.Add(wxART_TURN_LEFT); 
    list.Add(wxART_TURN_RIGHT); 
    list.Add(wxART_TURN_SHARP_LEFT); 
    list.Add(wxART_TURN_SHARP_RIGHT); 
    list.Add(wxART_TURN_SLIGHT_LEFT); 
    list.Add(wxART_TURN_SLIGHT_RIGHT); 
    list.Add(wxART_TURNED_IN); 
    list.Add(wxART_TURNED_IN_NOT); 
    list.Add(wxART_TV); 
    list.Add(wxART_TV_OFF); 
    list.Add(wxART_TWO_WHEELER); 
    list.Add(wxART_TYPE_SPECIMEN); 
    list.Add(wxART_U_TURN_LEFT); 
    list.Add(wxART_U_TURN_RIGHT); 
    list.Add(wxART_UMBRELLA); 
    list.Add(wxART_UNARCHIVE); 
    list.Add(wxART_UNDO); 
    list.Add(wxART_UNFOLD_LESS); 
    list.Add(wxART_UNFOLD_LESS_DOUBLE); 
    list.Add(wxART_UNFOLD_MORE); 
    list.Add(wxART_UNFOLD_MORE_DOUBLE); 
    list.Add(wxART_UNPUBLISHED); 
    list.Add(wxART_UNSUBSCRIBE); 
    list.Add(wxART_UPCOMING); 
    list.Add(wxART_UPDATE); 
    list.Add(wxART_UPDATE_DISABLED); 
    list.Add(wxART_UPGRADE); 
    list.Add(wxART_UPLOAD); 
    list.Add(wxART_UPLOAD_FILE); 
    list.Add(wxART_USB); 
    list.Add(wxART_USB_OFF); 
    list.Add(wxART_VACCINES); 
    list.Add(wxART_VAPE_FREE); 
    list.Add(wxART_VAPING_ROOMS); 
    list.Add(wxART_VERIFIED); 
    list.Add(wxART_VERIFIED_USER); 
    list.Add(wxART_VERTICAL_ALIGN_BOTTOM); 
    list.Add(wxART_VERTICAL_ALIGN_CENTER); 
    list.Add(wxART_VERTICAL_ALIGN_TOP); 
    list.Add(wxART_VERTICAL_DISTRIBUTE); 
    list.Add(wxART_VERTICAL_SHADES); 
    list.Add(wxART_VERTICAL_SHADES_CLOSED); 
    list.Add(wxART_VERTICAL_SPLIT); 
    list.Add(wxART_VIBRATION); 
    list.Add(wxART_VIDEO_CALL); 
    list.Add(wxART_VIDEO_CAMERA_BACK); 
    list.Add(wxART_VIDEO_CAMERA_FRONT); 
    list.Add(wxART_VIDEO_CHAT); 
    list.Add(wxART_VIDEO_FILE); 
    list.Add(wxART_VIDEO_LABEL); 
    list.Add(wxART_VIDEO_LIBRARY); 
    list.Add(wxART_VIDEO_SETTINGS); 
    list.Add(wxART_VIDEO_STABLE); 
    list.Add(wxART_VIDEOCAM); 
    list.Add(wxART_VIDEOCAM_OFF); 
    list.Add(wxART_VIDEOGAME_ASSET); 
    list.Add(wxART_VIDEOGAME_ASSET_OFF); 
    list.Add(wxART_VIEW_AGENDA); 
    list.Add(wxART_VIEW_ARRAY); 
    list.Add(wxART_VIEW_CAROUSEL); 
    list.Add(wxART_VIEW_COLUMN); 
    list.Add(wxART_VIEW_COMFY); 
    list.Add(wxART_VIEW_COMFY_ALT); 
    list.Add(wxART_VIEW_COMPACT); 
    list.Add(wxART_VIEW_COMPACT_ALT); 
    list.Add(wxART_VIEW_COZY); 
    list.Add(wxART_VIEW_DAY); 
    list.Add(wxART_VIEW_HEADLINE); 
    list.Add(wxART_VIEW_IN_AR); 
    list.Add(wxART_VIEW_KANBAN); 
    list.Add(wxART_VIEW_LIST); 
    list.Add(wxART_VIEW_MODULE); 
    list.Add(wxART_VIEW_QUILT); 
    list.Add(wxART_VIEW_SIDEBAR); 
    list.Add(wxART_VIEW_STREAM); 
    list.Add(wxART_VIEW_TIMELINE); 
    list.Add(wxART_VIEW_WEEK); 
    list.Add(wxART_VIGNETTE); 
    list.Add(wxART_VILLA); 
    list.Add(wxART_VISIBILITY); 
    list.Add(wxART_VISIBILITY_OFF); 
    list.Add(wxART_VOICE_CHAT); 
    list.Add(wxART_VOICE_OVER_OFF); 
    list.Add(wxART_VOICEMAIL); 
    list.Add(wxART_VOLCANO); 
    list.Add(wxART_VOLUME_DOWN); 
    list.Add(wxART_VOLUME_MUTE); 
    list.Add(wxART_VOLUME_OFF); 
    list.Add(wxART_VOLUME_UP); 
    list.Add(wxART_VOLUNTEER_ACTIVISM); 
    list.Add(wxART_VPN_KEY); 
    list.Add(wxART_VPN_KEY_OFF); 
    list.Add(wxART_VPN_LOCK); 
    list.Add(wxART_VRPANO); 
    list.Add(wxART_WALLET); 
    list.Add(wxART_WALLPAPER); 
    list.Add(wxART_WAREHOUSE); 
    list.Add(wxART_WARNING); 
    list.Add(wxART_WARNING_AMBER); 
    list.Add(wxART_WASH); 
    list.Add(wxART_WATCH); 
    list.Add(wxART_WATCH_LATER); 
    list.Add(wxART_WATCH_OFF); 
    list.Add(wxART_WATER); 
    list.Add(wxART_WATER_DAMAGE); 
    list.Add(wxART_WATER_DROP); 
    list.Add(wxART_WATERFALL_CHART); 
    list.Add(wxART_WAVES); 
    list.Add(wxART_WAVING_HAND); 
    list.Add(wxART_WB_AUTO); 
    list.Add(wxART_WB_CLOUDY); 
    list.Add(wxART_WB_INCANDESCENT); 
    list.Add(wxART_WB_IRIDESCENT); 
    list.Add(wxART_WB_SHADE); 
    list.Add(wxART_WB_SUNNY); 
    list.Add(wxART_WB_TWILIGHT); 
    list.Add(wxART_WC); 
    list.Add(wxART_WEB); 
    list.Add(wxART_WEB_ASSET); 
    list.Add(wxART_WEB_ASSET_OFF); 
    list.Add(wxART_WEB_STORIES); 
    list.Add(wxART_WEBHOOK); 
    list.Add(wxART_WEEKEND); 
    list.Add(wxART_WEST); 
    list.Add(wxART_WHATSHOT); 
    list.Add(wxART_WHEELCHAIR_PICKUP); 
    list.Add(wxART_WHERE_TO_VOTE); 
    list.Add(wxART_WIDGETS); 
    list.Add(wxART_WIDTH_FULL); 
    list.Add(wxART_WIDTH_NORMAL); 
    list.Add(wxART_WIDTH_WIDE); 
    list.Add(wxART_WIFI); 
    list.Add(wxART_WIFI_1_BAR); 
    list.Add(wxART_WIFI_2_BAR); 
    list.Add(wxART_WIFI_CALLING); 
    list.Add(wxART_WIFI_CALLING_3); 
    list.Add(wxART_WIFI_CHANNEL); 
    list.Add(wxART_WIFI_FIND); 
    list.Add(wxART_WIFI_LOCK); 
    list.Add(wxART_WIFI_OFF); 
    list.Add(wxART_WIFI_PASSWORD); 
    list.Add(wxART_WIFI_PROTECTED_SETUP); 
    list.Add(wxART_WIFI_TETHERING); 
    list.Add(wxART_WIFI_TETHERING_ERROR); 
    list.Add(wxART_WIFI_TETHERING_OFF); 
    list.Add(wxART_WIND_POWER); 
    list.Add(wxART_WINDOW); 
    list.Add(wxART_WINE_BAR); 
    list.Add(wxART_WOMAN); 
    list.Add(wxART_WOMAN_2); 
    list.Add(wxART_WORK); 
    list.Add(wxART_WORK_HISTORY); 
    list.Add(wxART_WORK_OFF); 
    list.Add(wxART_WORK_OUTLINE); 
    list.Add(wxART_WORKSPACE_PREMIUM); 
    list.Add(wxART_WORKSPACES); 
    list.Add(wxART_WRAP_TEXT); 
    list.Add(wxART_WRONG_LOCATION); 
    list.Add(wxART_WYSIWYG); 
    list.Add(wxART_YARD); 
    list.Add(wxART_YOUTUBE_SEARCHED_FOR); 
    list.Add(wxART_ZOOM_IN); 
    list.Add(wxART_ZOOM_IN_MAP); 
    list.Add(wxART_ZOOM_OUT); 
    list.Add(wxART_ZOOM_OUT_MAP); 
    return list; 
}


// Return SVG for the current ID as a wxBitmap 
wxBitmap CreateTwoToneMaterialArtBitmapByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxString svg = TwoToneMaterialArtColorSVGByID(id,color); 
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
wxBitmapBundle CreateTwoToneMaterialArtBitmapBundleByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxBitmapBundle bundle; 
  wxString svg = TwoToneMaterialArtColorSVGByID(id,color); 
  if (svg.IsEmpty()) return bundle; 

  // Create bundle and get bitmap from it 
  wxSize useSize = size==wxDefaultSize? wxSize(24,24) : size;
  bundle = wxBitmapBundle::FromSVG(svg.mb_str(),useSize);
  return bundle; 
}


