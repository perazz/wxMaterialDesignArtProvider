#include "wxMaterialFilledArt.hpp" 
#include <wx/regex.h> 

// Return SVG for the current ID as a string 
wxString FilledMaterialArtSVGByID(const wxArtID& id)
{
  if (wxASCII_STR(id) == wxASCII_STR(wxART_10K))  
      return wxString(SVG_MATERIAL_FILLED_10K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_10MP))  
      return wxString(SVG_MATERIAL_FILLED_10MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_11MP))  
      return wxString(SVG_MATERIAL_FILLED_11MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_123))  
      return wxString(SVG_MATERIAL_FILLED_123);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_12MP))  
      return wxString(SVG_MATERIAL_FILLED_12MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_13MP))  
      return wxString(SVG_MATERIAL_FILLED_13MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_14MP))  
      return wxString(SVG_MATERIAL_FILLED_14MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_15MP))  
      return wxString(SVG_MATERIAL_FILLED_15MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_16MP))  
      return wxString(SVG_MATERIAL_FILLED_16MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_17MP))  
      return wxString(SVG_MATERIAL_FILLED_17MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_18_UP_RATING))  
      return wxString(SVG_MATERIAL_FILLED_18_UP_RATING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_18MP))  
      return wxString(SVG_MATERIAL_FILLED_18MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_19MP))  
      return wxString(SVG_MATERIAL_FILLED_19MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_1K))  
      return wxString(SVG_MATERIAL_FILLED_1K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_1K_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_1K_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_1X_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_1X_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_20MP))  
      return wxString(SVG_MATERIAL_FILLED_20MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_21MP))  
      return wxString(SVG_MATERIAL_FILLED_21MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_22MP))  
      return wxString(SVG_MATERIAL_FILLED_22MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_23MP))  
      return wxString(SVG_MATERIAL_FILLED_23MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_24MP))  
      return wxString(SVG_MATERIAL_FILLED_24MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_2K))  
      return wxString(SVG_MATERIAL_FILLED_2K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_2K_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_2K_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_2MP))  
      return wxString(SVG_MATERIAL_FILLED_2MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_30FPS))  
      return wxString(SVG_MATERIAL_FILLED_30FPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_30FPS_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_30FPS_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_360))  
      return wxString(SVG_MATERIAL_FILLED_360);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_3D_ROTATION))  
      return wxString(SVG_MATERIAL_FILLED_3D_ROTATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_3G_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_3G_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_3K))  
      return wxString(SVG_MATERIAL_FILLED_3K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_3K_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_3K_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_3MP))  
      return wxString(SVG_MATERIAL_FILLED_3MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_3P))  
      return wxString(SVG_MATERIAL_FILLED_3P);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_4G_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_4G_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_4G_PLUS_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_4G_PLUS_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_4K))  
      return wxString(SVG_MATERIAL_FILLED_4K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_4K_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_4K_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_4MP))  
      return wxString(SVG_MATERIAL_FILLED_4MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_5G))  
      return wxString(SVG_MATERIAL_FILLED_5G);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_5K))  
      return wxString(SVG_MATERIAL_FILLED_5K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_5K_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_5K_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_5MP))  
      return wxString(SVG_MATERIAL_FILLED_5MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_60FPS))  
      return wxString(SVG_MATERIAL_FILLED_60FPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_60FPS_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_60FPS_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_6_FT_APART))  
      return wxString(SVG_MATERIAL_FILLED_6_FT_APART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_6K))  
      return wxString(SVG_MATERIAL_FILLED_6K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_6K_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_6K_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_6MP))  
      return wxString(SVG_MATERIAL_FILLED_6MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_7K))  
      return wxString(SVG_MATERIAL_FILLED_7K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_7K_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_7K_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_7MP))  
      return wxString(SVG_MATERIAL_FILLED_7MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_8K))  
      return wxString(SVG_MATERIAL_FILLED_8K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_8K_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_8K_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_8MP))  
      return wxString(SVG_MATERIAL_FILLED_8MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_9K))  
      return wxString(SVG_MATERIAL_FILLED_9K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_9K_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_9K_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_9MP))  
      return wxString(SVG_MATERIAL_FILLED_9MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ABC))  
      return wxString(SVG_MATERIAL_FILLED_ABC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AC_UNIT))  
      return wxString(SVG_MATERIAL_FILLED_AC_UNIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCESS_ALARM))  
      return wxString(SVG_MATERIAL_FILLED_ACCESS_ALARM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCESS_ALARMS))  
      return wxString(SVG_MATERIAL_FILLED_ACCESS_ALARMS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCESS_TIME))  
      return wxString(SVG_MATERIAL_FILLED_ACCESS_TIME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCESS_TIME_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_ACCESS_TIME_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCESSIBILITY))  
      return wxString(SVG_MATERIAL_FILLED_ACCESSIBILITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCESSIBILITY_NEW))  
      return wxString(SVG_MATERIAL_FILLED_ACCESSIBILITY_NEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCESSIBLE))  
      return wxString(SVG_MATERIAL_FILLED_ACCESSIBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCESSIBLE_FORWARD))  
      return wxString(SVG_MATERIAL_FILLED_ACCESSIBLE_FORWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCOUNT_BALANCE))  
      return wxString(SVG_MATERIAL_FILLED_ACCOUNT_BALANCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCOUNT_BALANCE_WALLET))  
      return wxString(SVG_MATERIAL_FILLED_ACCOUNT_BALANCE_WALLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCOUNT_BOX))  
      return wxString(SVG_MATERIAL_FILLED_ACCOUNT_BOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCOUNT_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_ACCOUNT_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCOUNT_TREE))  
      return wxString(SVG_MATERIAL_FILLED_ACCOUNT_TREE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AD_UNITS))  
      return wxString(SVG_MATERIAL_FILLED_AD_UNITS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADB))  
      return wxString(SVG_MATERIAL_FILLED_ADB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD))  
      return wxString(SVG_MATERIAL_FILLED_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_A_PHOTO))  
      return wxString(SVG_MATERIAL_FILLED_ADD_A_PHOTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_ALARM))  
      return wxString(SVG_MATERIAL_FILLED_ADD_ALARM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_ALERT))  
      return wxString(SVG_MATERIAL_FILLED_ADD_ALERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_BOX))  
      return wxString(SVG_MATERIAL_FILLED_ADD_BOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_BUSINESS))  
      return wxString(SVG_MATERIAL_FILLED_ADD_BUSINESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_CARD))  
      return wxString(SVG_MATERIAL_FILLED_ADD_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_CHART))  
      return wxString(SVG_MATERIAL_FILLED_ADD_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_ADD_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_CIRCLE_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_ADD_CIRCLE_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_COMMENT))  
      return wxString(SVG_MATERIAL_FILLED_ADD_COMMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_HOME))  
      return wxString(SVG_MATERIAL_FILLED_ADD_HOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_HOME_WORK))  
      return wxString(SVG_MATERIAL_FILLED_ADD_HOME_WORK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_IC_CALL))  
      return wxString(SVG_MATERIAL_FILLED_ADD_IC_CALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_LINK))  
      return wxString(SVG_MATERIAL_FILLED_ADD_LINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_LOCATION))  
      return wxString(SVG_MATERIAL_FILLED_ADD_LOCATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_LOCATION_ALT))  
      return wxString(SVG_MATERIAL_FILLED_ADD_LOCATION_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_MODERATOR))  
      return wxString(SVG_MATERIAL_FILLED_ADD_MODERATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_PHOTO_ALTERNATE))  
      return wxString(SVG_MATERIAL_FILLED_ADD_PHOTO_ALTERNATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_REACTION))  
      return wxString(SVG_MATERIAL_FILLED_ADD_REACTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_ROAD))  
      return wxString(SVG_MATERIAL_FILLED_ADD_ROAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_SHOPPING_CART))  
      return wxString(SVG_MATERIAL_FILLED_ADD_SHOPPING_CART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_TASK))  
      return wxString(SVG_MATERIAL_FILLED_ADD_TASK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_TO_DRIVE))  
      return wxString(SVG_MATERIAL_FILLED_ADD_TO_DRIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_TO_HOME_SCREEN))  
      return wxString(SVG_MATERIAL_FILLED_ADD_TO_HOME_SCREEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_TO_PHOTOS))  
      return wxString(SVG_MATERIAL_FILLED_ADD_TO_PHOTOS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADD_TO_QUEUE))  
      return wxString(SVG_MATERIAL_FILLED_ADD_TO_QUEUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADDCHART))  
      return wxString(SVG_MATERIAL_FILLED_ADDCHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADF_SCANNER))  
      return wxString(SVG_MATERIAL_FILLED_ADF_SCANNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADJUST))  
      return wxString(SVG_MATERIAL_FILLED_ADJUST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADMIN_PANEL_SETTINGS))  
      return wxString(SVG_MATERIAL_FILLED_ADMIN_PANEL_SETTINGS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADS_CLICK))  
      return wxString(SVG_MATERIAL_FILLED_ADS_CLICK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AGRICULTURE))  
      return wxString(SVG_MATERIAL_FILLED_AGRICULTURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIR))  
      return wxString(SVG_MATERIAL_FILLED_AIR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINE_SEAT_FLAT))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINE_SEAT_FLAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINE_SEAT_FLAT_ANGLED))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINE_SEAT_FLAT_ANGLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINE_SEAT_INDIVIDUAL_SUITE))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINE_SEAT_INDIVIDUAL_SUITE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINE_SEAT_LEGROOM_EXTRA))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINE_SEAT_LEGROOM_EXTRA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINE_SEAT_LEGROOM_NORMAL))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINE_SEAT_LEGROOM_NORMAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINE_SEAT_LEGROOM_REDUCED))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINE_SEAT_LEGROOM_REDUCED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINE_SEAT_RECLINE_EXTRA))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINE_SEAT_RECLINE_EXTRA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINE_SEAT_RECLINE_NORMAL))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINE_SEAT_RECLINE_NORMAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINE_STOPS))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINE_STOPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRLINES))  
      return wxString(SVG_MATERIAL_FILLED_AIRLINES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRPLANE_TICKET))  
      return wxString(SVG_MATERIAL_FILLED_AIRPLANE_TICKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRPLANEMODE_ACTIVE))  
      return wxString(SVG_MATERIAL_FILLED_AIRPLANEMODE_ACTIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRPLANEMODE_INACTIVE))  
      return wxString(SVG_MATERIAL_FILLED_AIRPLANEMODE_INACTIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRPLAY))  
      return wxString(SVG_MATERIAL_FILLED_AIRPLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRPORT_SHUTTLE))  
      return wxString(SVG_MATERIAL_FILLED_AIRPORT_SHUTTLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALARM))  
      return wxString(SVG_MATERIAL_FILLED_ALARM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALARM_ADD))  
      return wxString(SVG_MATERIAL_FILLED_ALARM_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALARM_OFF))  
      return wxString(SVG_MATERIAL_FILLED_ALARM_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALARM_ON))  
      return wxString(SVG_MATERIAL_FILLED_ALARM_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALBUM))  
      return wxString(SVG_MATERIAL_FILLED_ALBUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_HORIZONTAL_CENTER))  
      return wxString(SVG_MATERIAL_FILLED_ALIGN_HORIZONTAL_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_HORIZONTAL_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_ALIGN_HORIZONTAL_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_HORIZONTAL_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_ALIGN_HORIZONTAL_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_VERTICAL_BOTTOM))  
      return wxString(SVG_MATERIAL_FILLED_ALIGN_VERTICAL_BOTTOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_VERTICAL_CENTER))  
      return wxString(SVG_MATERIAL_FILLED_ALIGN_VERTICAL_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIGN_VERTICAL_TOP))  
      return wxString(SVG_MATERIAL_FILLED_ALIGN_VERTICAL_TOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALL_INBOX))  
      return wxString(SVG_MATERIAL_FILLED_ALL_INBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALL_INCLUSIVE))  
      return wxString(SVG_MATERIAL_FILLED_ALL_INCLUSIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALL_OUT))  
      return wxString(SVG_MATERIAL_FILLED_ALL_OUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALT_ROUTE))  
      return wxString(SVG_MATERIAL_FILLED_ALT_ROUTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALTERNATE_EMAIL))  
      return wxString(SVG_MATERIAL_FILLED_ALTERNATE_EMAIL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANALYTICS))  
      return wxString(SVG_MATERIAL_FILLED_ANALYTICS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANCHOR))  
      return wxString(SVG_MATERIAL_FILLED_ANCHOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANDROID))  
      return wxString(SVG_MATERIAL_FILLED_ANDROID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANIMATION))  
      return wxString(SVG_MATERIAL_FILLED_ANIMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANNOUNCEMENT))  
      return wxString(SVG_MATERIAL_FILLED_ANNOUNCEMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AOD))  
      return wxString(SVG_MATERIAL_FILLED_AOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APARTMENT))  
      return wxString(SVG_MATERIAL_FILLED_APARTMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_API))  
      return wxString(SVG_MATERIAL_FILLED_API);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APP_BLOCKING))  
      return wxString(SVG_MATERIAL_FILLED_APP_BLOCKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APP_REGISTRATION))  
      return wxString(SVG_MATERIAL_FILLED_APP_REGISTRATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APP_SETTINGS_ALT))  
      return wxString(SVG_MATERIAL_FILLED_APP_SETTINGS_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APP_SHORTCUT))  
      return wxString(SVG_MATERIAL_FILLED_APP_SHORTCUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APPROVAL))  
      return wxString(SVG_MATERIAL_FILLED_APPROVAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APPS))  
      return wxString(SVG_MATERIAL_FILLED_APPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APPS_OUTAGE))  
      return wxString(SVG_MATERIAL_FILLED_APPS_OUTAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARCHITECTURE))  
      return wxString(SVG_MATERIAL_FILLED_ARCHITECTURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARCHIVE))  
      return wxString(SVG_MATERIAL_FILLED_ARCHIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AREA_CHART))  
      return wxString(SVG_MATERIAL_FILLED_AREA_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_BACK))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_BACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_BACK_IOS))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_BACK_IOS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_BACK_IOS_NEW))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_BACK_IOS_NEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_CIRCLE_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_CIRCLE_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_CIRCLE_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_CIRCLE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_CIRCLE_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_CIRCLE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_CIRCLE_UP))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_CIRCLE_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DOWNWARD))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_DOWNWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DROP_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_DROP_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DROP_DOWN_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_DROP_DOWN_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_DROP_UP))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_DROP_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_FORWARD))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_FORWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_FORWARD_IOS))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_FORWARD_IOS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_OUTWARD))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_OUTWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_RIGHT_ALT))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_RIGHT_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARROW_UPWARD))  
      return wxString(SVG_MATERIAL_FILLED_ARROW_UPWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ART_TRACK))  
      return wxString(SVG_MATERIAL_FILLED_ART_TRACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARTICLE))  
      return wxString(SVG_MATERIAL_FILLED_ARTICLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASPECT_RATIO))  
      return wxString(SVG_MATERIAL_FILLED_ASPECT_RATIO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSESSMENT))  
      return wxString(SVG_MATERIAL_FILLED_ASSESSMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSIGNMENT))  
      return wxString(SVG_MATERIAL_FILLED_ASSIGNMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSIGNMENT_IND))  
      return wxString(SVG_MATERIAL_FILLED_ASSIGNMENT_IND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSIGNMENT_LATE))  
      return wxString(SVG_MATERIAL_FILLED_ASSIGNMENT_LATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSIGNMENT_RETURN))  
      return wxString(SVG_MATERIAL_FILLED_ASSIGNMENT_RETURN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSIGNMENT_RETURNED))  
      return wxString(SVG_MATERIAL_FILLED_ASSIGNMENT_RETURNED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSIGNMENT_TURNED_IN))  
      return wxString(SVG_MATERIAL_FILLED_ASSIGNMENT_TURNED_IN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSIST_WALKER))  
      return wxString(SVG_MATERIAL_FILLED_ASSIST_WALKER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSISTANT))  
      return wxString(SVG_MATERIAL_FILLED_ASSISTANT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSISTANT_DIRECTION))  
      return wxString(SVG_MATERIAL_FILLED_ASSISTANT_DIRECTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSISTANT_PHOTO))  
      return wxString(SVG_MATERIAL_FILLED_ASSISTANT_PHOTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASSURED_WORKLOAD))  
      return wxString(SVG_MATERIAL_FILLED_ASSURED_WORKLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ATM))  
      return wxString(SVG_MATERIAL_FILLED_ATM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ATTACH_EMAIL))  
      return wxString(SVG_MATERIAL_FILLED_ATTACH_EMAIL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ATTACH_FILE))  
      return wxString(SVG_MATERIAL_FILLED_ATTACH_FILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ATTACH_MONEY))  
      return wxString(SVG_MATERIAL_FILLED_ATTACH_MONEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ATTACHMENT))  
      return wxString(SVG_MATERIAL_FILLED_ATTACHMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ATTRACTIONS))  
      return wxString(SVG_MATERIAL_FILLED_ATTRACTIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ATTRIBUTION))  
      return wxString(SVG_MATERIAL_FILLED_ATTRIBUTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUDIO_FILE))  
      return wxString(SVG_MATERIAL_FILLED_AUDIO_FILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUDIOTRACK))  
      return wxString(SVG_MATERIAL_FILLED_AUDIOTRACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_AWESOME))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_AWESOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_AWESOME_MOSAIC))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_AWESOME_MOSAIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_AWESOME_MOTION))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_AWESOME_MOTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_DELETE))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_DELETE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_FIX_HIGH))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_FIX_HIGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_FIX_NORMAL))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_FIX_NORMAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_FIX_OFF))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_FIX_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_GRAPH))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_GRAPH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_MODE))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_MODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTO_STORIES))  
      return wxString(SVG_MATERIAL_FILLED_AUTO_STORIES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTOFPS_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_AUTOFPS_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTORENEW))  
      return wxString(SVG_MATERIAL_FILLED_AUTORENEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AV_TIMER))  
      return wxString(SVG_MATERIAL_FILLED_AV_TIMER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BABY_CHANGING_STATION))  
      return wxString(SVG_MATERIAL_FILLED_BABY_CHANGING_STATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACK_HAND))  
      return wxString(SVG_MATERIAL_FILLED_BACK_HAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACKPACK))  
      return wxString(SVG_MATERIAL_FILLED_BACKPACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACKSPACE))  
      return wxString(SVG_MATERIAL_FILLED_BACKSPACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACKUP))  
      return wxString(SVG_MATERIAL_FILLED_BACKUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BACKUP_TABLE))  
      return wxString(SVG_MATERIAL_FILLED_BACKUP_TABLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BADGE))  
      return wxString(SVG_MATERIAL_FILLED_BADGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BAKERY_DINING))  
      return wxString(SVG_MATERIAL_FILLED_BAKERY_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BALANCE))  
      return wxString(SVG_MATERIAL_FILLED_BALANCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BALCONY))  
      return wxString(SVG_MATERIAL_FILLED_BALCONY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BALLOT))  
      return wxString(SVG_MATERIAL_FILLED_BALLOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BAR_CHART))  
      return wxString(SVG_MATERIAL_FILLED_BAR_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATCH_PREDICTION))  
      return wxString(SVG_MATERIAL_FILLED_BATCH_PREDICTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATHROOM))  
      return wxString(SVG_MATERIAL_FILLED_BATHROOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATHTUB))  
      return wxString(SVG_MATERIAL_FILLED_BATHTUB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_0_BAR))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_0_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_1_BAR))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_1_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_2_BAR))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_2_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_3_BAR))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_3_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_4_BAR))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_4_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_5_BAR))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_5_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_6_BAR))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_6_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_ALERT))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_ALERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_CHARGING_FULL))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_CHARGING_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_FULL))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_SAVER))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_SAVER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_STD))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_STD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTERY_UNKNOWN))  
      return wxString(SVG_MATERIAL_FILLED_BATTERY_UNKNOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEACH_ACCESS))  
      return wxString(SVG_MATERIAL_FILLED_BEACH_ACCESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BED))  
      return wxString(SVG_MATERIAL_FILLED_BED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEDROOM_BABY))  
      return wxString(SVG_MATERIAL_FILLED_BEDROOM_BABY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEDROOM_CHILD))  
      return wxString(SVG_MATERIAL_FILLED_BEDROOM_CHILD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEDROOM_PARENT))  
      return wxString(SVG_MATERIAL_FILLED_BEDROOM_PARENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEDTIME))  
      return wxString(SVG_MATERIAL_FILLED_BEDTIME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEDTIME_OFF))  
      return wxString(SVG_MATERIAL_FILLED_BEDTIME_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEENHERE))  
      return wxString(SVG_MATERIAL_FILLED_BEENHERE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BENTO))  
      return wxString(SVG_MATERIAL_FILLED_BENTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BIKE_SCOOTER))  
      return wxString(SVG_MATERIAL_FILLED_BIKE_SCOOTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BIOTECH))  
      return wxString(SVG_MATERIAL_FILLED_BIOTECH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLENDER))  
      return wxString(SVG_MATERIAL_FILLED_BLENDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLIND))  
      return wxString(SVG_MATERIAL_FILLED_BLIND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLINDS))  
      return wxString(SVG_MATERIAL_FILLED_BLINDS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLINDS_CLOSED))  
      return wxString(SVG_MATERIAL_FILLED_BLINDS_CLOSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLOCK))  
      return wxString(SVG_MATERIAL_FILLED_BLOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLOODTYPE))  
      return wxString(SVG_MATERIAL_FILLED_BLOODTYPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUETOOTH))  
      return wxString(SVG_MATERIAL_FILLED_BLUETOOTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUETOOTH_AUDIO))  
      return wxString(SVG_MATERIAL_FILLED_BLUETOOTH_AUDIO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUETOOTH_CONNECTED))  
      return wxString(SVG_MATERIAL_FILLED_BLUETOOTH_CONNECTED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUETOOTH_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_BLUETOOTH_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUETOOTH_DRIVE))  
      return wxString(SVG_MATERIAL_FILLED_BLUETOOTH_DRIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUETOOTH_SEARCHING))  
      return wxString(SVG_MATERIAL_FILLED_BLUETOOTH_SEARCHING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUR_CIRCULAR))  
      return wxString(SVG_MATERIAL_FILLED_BLUR_CIRCULAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUR_LINEAR))  
      return wxString(SVG_MATERIAL_FILLED_BLUR_LINEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUR_OFF))  
      return wxString(SVG_MATERIAL_FILLED_BLUR_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUR_ON))  
      return wxString(SVG_MATERIAL_FILLED_BLUR_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOLT))  
      return wxString(SVG_MATERIAL_FILLED_BOLT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK))  
      return wxString(SVG_MATERIAL_FILLED_BOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOK_ONLINE))  
      return wxString(SVG_MATERIAL_FILLED_BOOK_ONLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOKMARK))  
      return wxString(SVG_MATERIAL_FILLED_BOOKMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOKMARK_ADD))  
      return wxString(SVG_MATERIAL_FILLED_BOOKMARK_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOKMARK_ADDED))  
      return wxString(SVG_MATERIAL_FILLED_BOOKMARK_ADDED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOKMARK_BORDER))  
      return wxString(SVG_MATERIAL_FILLED_BOOKMARK_BORDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOKMARK_REMOVE))  
      return wxString(SVG_MATERIAL_FILLED_BOOKMARK_REMOVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOKMARKS))  
      return wxString(SVG_MATERIAL_FILLED_BOOKMARKS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_ALL))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_ALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_BOTTOM))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_BOTTOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_CLEAR))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_CLEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_COLOR))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_COLOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_HORIZONTAL))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_HORIZONTAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_INNER))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_INNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_OUTER))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_OUTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_STYLE))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_STYLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_TOP))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_TOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BORDER_VERTICAL))  
      return wxString(SVG_MATERIAL_FILLED_BORDER_VERTICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOY))  
      return wxString(SVG_MATERIAL_FILLED_BOY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRANDING_WATERMARK))  
      return wxString(SVG_MATERIAL_FILLED_BRANDING_WATERMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BREAKFAST_DINING))  
      return wxString(SVG_MATERIAL_FILLED_BREAKFAST_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_1))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_2))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_3))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_4))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_5))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_5);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_6))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_6);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_7))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_7);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_AUTO))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_AUTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_HIGH))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_HIGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_LOW))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_LOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRIGHTNESS_MEDIUM))  
      return wxString(SVG_MATERIAL_FILLED_BRIGHTNESS_MEDIUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BROADCAST_ON_HOME))  
      return wxString(SVG_MATERIAL_FILLED_BROADCAST_ON_HOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BROADCAST_ON_PERSONAL))  
      return wxString(SVG_MATERIAL_FILLED_BROADCAST_ON_PERSONAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BROKEN_IMAGE))  
      return wxString(SVG_MATERIAL_FILLED_BROKEN_IMAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BROWSE_GALLERY))  
      return wxString(SVG_MATERIAL_FILLED_BROWSE_GALLERY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BROWSER_NOT_SUPPORTED))  
      return wxString(SVG_MATERIAL_FILLED_BROWSER_NOT_SUPPORTED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BROWSER_UPDATED))  
      return wxString(SVG_MATERIAL_FILLED_BROWSER_UPDATED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRUNCH_DINING))  
      return wxString(SVG_MATERIAL_FILLED_BRUNCH_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BRUSH))  
      return wxString(SVG_MATERIAL_FILLED_BRUSH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUBBLE_CHART))  
      return wxString(SVG_MATERIAL_FILLED_BUBBLE_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUG_REPORT))  
      return wxString(SVG_MATERIAL_FILLED_BUG_REPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILD))  
      return wxString(SVG_MATERIAL_FILLED_BUILD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILD_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_BUILD_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUNGALOW))  
      return wxString(SVG_MATERIAL_FILLED_BUNGALOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BURST_MODE))  
      return wxString(SVG_MATERIAL_FILLED_BURST_MODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUS_ALERT))  
      return wxString(SVG_MATERIAL_FILLED_BUS_ALERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUSINESS))  
      return wxString(SVG_MATERIAL_FILLED_BUSINESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUSINESS_CENTER))  
      return wxString(SVG_MATERIAL_FILLED_BUSINESS_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CABIN))  
      return wxString(SVG_MATERIAL_FILLED_CABIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CABLE))  
      return wxString(SVG_MATERIAL_FILLED_CABLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CACHED))  
      return wxString(SVG_MATERIAL_FILLED_CACHED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAKE))  
      return wxString(SVG_MATERIAL_FILLED_CAKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALCULATE))  
      return wxString(SVG_MATERIAL_FILLED_CALCULATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_MONTH))  
      return wxString(SVG_MATERIAL_FILLED_CALENDAR_MONTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_TODAY))  
      return wxString(SVG_MATERIAL_FILLED_CALENDAR_TODAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_VIEW_DAY))  
      return wxString(SVG_MATERIAL_FILLED_CALENDAR_VIEW_DAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_VIEW_MONTH))  
      return wxString(SVG_MATERIAL_FILLED_CALENDAR_VIEW_MONTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_VIEW_WEEK))  
      return wxString(SVG_MATERIAL_FILLED_CALENDAR_VIEW_WEEK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALL))  
      return wxString(SVG_MATERIAL_FILLED_CALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALL_END))  
      return wxString(SVG_MATERIAL_FILLED_CALL_END);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALL_MADE))  
      return wxString(SVG_MATERIAL_FILLED_CALL_MADE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALL_MERGE))  
      return wxString(SVG_MATERIAL_FILLED_CALL_MERGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALL_MISSED))  
      return wxString(SVG_MATERIAL_FILLED_CALL_MISSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALL_MISSED_OUTGOING))  
      return wxString(SVG_MATERIAL_FILLED_CALL_MISSED_OUTGOING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALL_RECEIVED))  
      return wxString(SVG_MATERIAL_FILLED_CALL_RECEIVED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALL_SPLIT))  
      return wxString(SVG_MATERIAL_FILLED_CALL_SPLIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALL_TO_ACTION))  
      return wxString(SVG_MATERIAL_FILLED_CALL_TO_ACTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA))  
      return wxString(SVG_MATERIAL_FILLED_CAMERA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA_ALT))  
      return wxString(SVG_MATERIAL_FILLED_CAMERA_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA_ENHANCE))  
      return wxString(SVG_MATERIAL_FILLED_CAMERA_ENHANCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA_FRONT))  
      return wxString(SVG_MATERIAL_FILLED_CAMERA_FRONT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA_INDOOR))  
      return wxString(SVG_MATERIAL_FILLED_CAMERA_INDOOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA_OUTDOOR))  
      return wxString(SVG_MATERIAL_FILLED_CAMERA_OUTDOOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA_REAR))  
      return wxString(SVG_MATERIAL_FILLED_CAMERA_REAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERA_ROLL))  
      return wxString(SVG_MATERIAL_FILLED_CAMERA_ROLL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMERASWITCH))  
      return wxString(SVG_MATERIAL_FILLED_CAMERASWITCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAMPAIGN))  
      return wxString(SVG_MATERIAL_FILLED_CAMPAIGN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CANCEL))  
      return wxString(SVG_MATERIAL_FILLED_CANCEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CANCEL_PRESENTATION))  
      return wxString(SVG_MATERIAL_FILLED_CANCEL_PRESENTATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CANCEL_SCHEDULE_SEND))  
      return wxString(SVG_MATERIAL_FILLED_CANCEL_SCHEDULE_SEND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CANDLESTICK_CHART))  
      return wxString(SVG_MATERIAL_FILLED_CANDLESTICK_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR_CRASH))  
      return wxString(SVG_MATERIAL_FILLED_CAR_CRASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR_RENTAL))  
      return wxString(SVG_MATERIAL_FILLED_CAR_RENTAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAR_REPAIR))  
      return wxString(SVG_MATERIAL_FILLED_CAR_REPAIR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARD_GIFTCARD))  
      return wxString(SVG_MATERIAL_FILLED_CARD_GIFTCARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARD_MEMBERSHIP))  
      return wxString(SVG_MATERIAL_FILLED_CARD_MEMBERSHIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARD_TRAVEL))  
      return wxString(SVG_MATERIAL_FILLED_CARD_TRAVEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CARPENTER))  
      return wxString(SVG_MATERIAL_FILLED_CARPENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CASES))  
      return wxString(SVG_MATERIAL_FILLED_CASES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CASINO))  
      return wxString(SVG_MATERIAL_FILLED_CASINO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAST))  
      return wxString(SVG_MATERIAL_FILLED_CAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAST_CONNECTED))  
      return wxString(SVG_MATERIAL_FILLED_CAST_CONNECTED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CAST_FOR_EDUCATION))  
      return wxString(SVG_MATERIAL_FILLED_CAST_FOR_EDUCATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CASTLE))  
      return wxString(SVG_MATERIAL_FILLED_CASTLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CATCHING_POKEMON))  
      return wxString(SVG_MATERIAL_FILLED_CATCHING_POKEMON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CATEGORY))  
      return wxString(SVG_MATERIAL_FILLED_CATEGORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CELEBRATION))  
      return wxString(SVG_MATERIAL_FILLED_CELEBRATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CELL_TOWER))  
      return wxString(SVG_MATERIAL_FILLED_CELL_TOWER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CELL_WIFI))  
      return wxString(SVG_MATERIAL_FILLED_CELL_WIFI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CENTER_FOCUS_STRONG))  
      return wxString(SVG_MATERIAL_FILLED_CENTER_FOCUS_STRONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CENTER_FOCUS_WEAK))  
      return wxString(SVG_MATERIAL_FILLED_CENTER_FOCUS_WEAK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHAIR))  
      return wxString(SVG_MATERIAL_FILLED_CHAIR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHAIR_ALT))  
      return wxString(SVG_MATERIAL_FILLED_CHAIR_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHALET))  
      return wxString(SVG_MATERIAL_FILLED_CHALET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHANGE_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_CHANGE_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHANGE_HISTORY))  
      return wxString(SVG_MATERIAL_FILLED_CHANGE_HISTORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHARGING_STATION))  
      return wxString(SVG_MATERIAL_FILLED_CHARGING_STATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHAT))  
      return wxString(SVG_MATERIAL_FILLED_CHAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHAT_BUBBLE))  
      return wxString(SVG_MATERIAL_FILLED_CHAT_BUBBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHAT_BUBBLE_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_CHAT_BUBBLE_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECK))  
      return wxString(SVG_MATERIAL_FILLED_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECK_BOX))  
      return wxString(SVG_MATERIAL_FILLED_CHECK_BOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECK_BOX_OUTLINE_BLANK))  
      return wxString(SVG_MATERIAL_FILLED_CHECK_BOX_OUTLINE_BLANK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECK_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_CHECK_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECK_CIRCLE_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_CHECK_CIRCLE_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECKLIST))  
      return wxString(SVG_MATERIAL_FILLED_CHECKLIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECKLIST_RTL))  
      return wxString(SVG_MATERIAL_FILLED_CHECKLIST_RTL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHECKROOM))  
      return wxString(SVG_MATERIAL_FILLED_CHECKROOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHEVRON_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_CHEVRON_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHEVRON_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_CHEVRON_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHILD_CARE))  
      return wxString(SVG_MATERIAL_FILLED_CHILD_CARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHILD_FRIENDLY))  
      return wxString(SVG_MATERIAL_FILLED_CHILD_FRIENDLY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHROME_READER_MODE))  
      return wxString(SVG_MATERIAL_FILLED_CHROME_READER_MODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHURCH))  
      return wxString(SVG_MATERIAL_FILLED_CHURCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_NOTIFICATIONS))  
      return wxString(SVG_MATERIAL_FILLED_CIRCLE_NOTIFICATIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLASS))  
      return wxString(SVG_MATERIAL_FILLED_CLASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLEAN_HANDS))  
      return wxString(SVG_MATERIAL_FILLED_CLEAN_HANDS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLEANING_SERVICES))  
      return wxString(SVG_MATERIAL_FILLED_CLEANING_SERVICES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLEAR))  
      return wxString(SVG_MATERIAL_FILLED_CLEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLEAR_ALL))  
      return wxString(SVG_MATERIAL_FILLED_CLEAR_ALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOSE))  
      return wxString(SVG_MATERIAL_FILLED_CLOSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOSE_FULLSCREEN))  
      return wxString(SVG_MATERIAL_FILLED_CLOSE_FULLSCREEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOSED_CAPTION))  
      return wxString(SVG_MATERIAL_FILLED_CLOSED_CAPTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOSED_CAPTION_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_CLOSED_CAPTION_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOSED_CAPTION_OFF))  
      return wxString(SVG_MATERIAL_FILLED_CLOSED_CAPTION_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD))  
      return wxString(SVG_MATERIAL_FILLED_CLOUD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_CLOUD_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_DONE))  
      return wxString(SVG_MATERIAL_FILLED_CLOUD_DONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_DOWNLOAD))  
      return wxString(SVG_MATERIAL_FILLED_CLOUD_DOWNLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_OFF))  
      return wxString(SVG_MATERIAL_FILLED_CLOUD_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_QUEUE))  
      return wxString(SVG_MATERIAL_FILLED_CLOUD_QUEUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_SYNC))  
      return wxString(SVG_MATERIAL_FILLED_CLOUD_SYNC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUD_UPLOAD))  
      return wxString(SVG_MATERIAL_FILLED_CLOUD_UPLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CO2))  
      return wxString(SVG_MATERIAL_FILLED_CO2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CO_PRESENT))  
      return wxString(SVG_MATERIAL_FILLED_CO_PRESENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODE))  
      return wxString(SVG_MATERIAL_FILLED_CODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODE_OFF))  
      return wxString(SVG_MATERIAL_FILLED_CODE_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COFFEE))  
      return wxString(SVG_MATERIAL_FILLED_COFFEE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COFFEE_MAKER))  
      return wxString(SVG_MATERIAL_FILLED_COFFEE_MAKER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COLLECTIONS))  
      return wxString(SVG_MATERIAL_FILLED_COLLECTIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COLLECTIONS_BOOKMARK))  
      return wxString(SVG_MATERIAL_FILLED_COLLECTIONS_BOOKMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COLOR_LENS))  
      return wxString(SVG_MATERIAL_FILLED_COLOR_LENS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COLORIZE))  
      return wxString(SVG_MATERIAL_FILLED_COLORIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT))  
      return wxString(SVG_MATERIAL_FILLED_COMMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT_BANK))  
      return wxString(SVG_MATERIAL_FILLED_COMMENT_BANK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENTS_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_COMMENTS_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMIT))  
      return wxString(SVG_MATERIAL_FILLED_COMMIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMUTE))  
      return wxString(SVG_MATERIAL_FILLED_COMMUTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPARE))  
      return wxString(SVG_MATERIAL_FILLED_COMPARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPARE_ARROWS))  
      return wxString(SVG_MATERIAL_FILLED_COMPARE_ARROWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPASS_CALIBRATION))  
      return wxString(SVG_MATERIAL_FILLED_COMPASS_CALIBRATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPOST))  
      return wxString(SVG_MATERIAL_FILLED_COMPOST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPRESS))  
      return wxString(SVG_MATERIAL_FILLED_COMPRESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPUTER))  
      return wxString(SVG_MATERIAL_FILLED_COMPUTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONFIRMATION_NUMBER))  
      return wxString(SVG_MATERIAL_FILLED_CONFIRMATION_NUMBER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONNECT_WITHOUT_CONTACT))  
      return wxString(SVG_MATERIAL_FILLED_CONNECT_WITHOUT_CONTACT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONNECTED_TV))  
      return wxString(SVG_MATERIAL_FILLED_CONNECTED_TV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONNECTING_AIRPORTS))  
      return wxString(SVG_MATERIAL_FILLED_CONNECTING_AIRPORTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONSTRUCTION))  
      return wxString(SVG_MATERIAL_FILLED_CONSTRUCTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTACT_EMERGENCY))  
      return wxString(SVG_MATERIAL_FILLED_CONTACT_EMERGENCY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTACT_MAIL))  
      return wxString(SVG_MATERIAL_FILLED_CONTACT_MAIL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTACT_PAGE))  
      return wxString(SVG_MATERIAL_FILLED_CONTACT_PAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTACT_PHONE))  
      return wxString(SVG_MATERIAL_FILLED_CONTACT_PHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTACT_SUPPORT))  
      return wxString(SVG_MATERIAL_FILLED_CONTACT_SUPPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTACTLESS))  
      return wxString(SVG_MATERIAL_FILLED_CONTACTLESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTACTS))  
      return wxString(SVG_MATERIAL_FILLED_CONTACTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTENT_COPY))  
      return wxString(SVG_MATERIAL_FILLED_CONTENT_COPY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTENT_CUT))  
      return wxString(SVG_MATERIAL_FILLED_CONTENT_CUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTENT_PASTE))  
      return wxString(SVG_MATERIAL_FILLED_CONTENT_PASTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTENT_PASTE_GO))  
      return wxString(SVG_MATERIAL_FILLED_CONTENT_PASTE_GO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTENT_PASTE_OFF))  
      return wxString(SVG_MATERIAL_FILLED_CONTENT_PASTE_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTENT_PASTE_SEARCH))  
      return wxString(SVG_MATERIAL_FILLED_CONTENT_PASTE_SEARCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTRAST))  
      return wxString(SVG_MATERIAL_FILLED_CONTRAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTROL_CAMERA))  
      return wxString(SVG_MATERIAL_FILLED_CONTROL_CAMERA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTROL_POINT))  
      return wxString(SVG_MATERIAL_FILLED_CONTROL_POINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTROL_POINT_DUPLICATE))  
      return wxString(SVG_MATERIAL_FILLED_CONTROL_POINT_DUPLICATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COOKIE))  
      return wxString(SVG_MATERIAL_FILLED_COOKIE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COPY_ALL))  
      return wxString(SVG_MATERIAL_FILLED_COPY_ALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COPYRIGHT))  
      return wxString(SVG_MATERIAL_FILLED_COPYRIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CORONAVIRUS))  
      return wxString(SVG_MATERIAL_FILLED_CORONAVIRUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CORPORATE_FARE))  
      return wxString(SVG_MATERIAL_FILLED_CORPORATE_FARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COTTAGE))  
      return wxString(SVG_MATERIAL_FILLED_COTTAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COUNTERTOPS))  
      return wxString(SVG_MATERIAL_FILLED_COUNTERTOPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATE))  
      return wxString(SVG_MATERIAL_FILLED_CREATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATE_NEW_FOLDER))  
      return wxString(SVG_MATERIAL_FILLED_CREATE_NEW_FOLDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREDIT_CARD))  
      return wxString(SVG_MATERIAL_FILLED_CREDIT_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREDIT_CARD_OFF))  
      return wxString(SVG_MATERIAL_FILLED_CREDIT_CARD_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREDIT_SCORE))  
      return wxString(SVG_MATERIAL_FILLED_CREDIT_SCORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CRIB))  
      return wxString(SVG_MATERIAL_FILLED_CRIB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CRISIS_ALERT))  
      return wxString(SVG_MATERIAL_FILLED_CRISIS_ALERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP))  
      return wxString(SVG_MATERIAL_FILLED_CROP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_16_9))  
      return wxString(SVG_MATERIAL_FILLED_CROP_16_9);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_3_2))  
      return wxString(SVG_MATERIAL_FILLED_CROP_3_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_5_4))  
      return wxString(SVG_MATERIAL_FILLED_CROP_5_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_7_5))  
      return wxString(SVG_MATERIAL_FILLED_CROP_7_5);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_DIN))  
      return wxString(SVG_MATERIAL_FILLED_CROP_DIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_FREE))  
      return wxString(SVG_MATERIAL_FILLED_CROP_FREE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_LANDSCAPE))  
      return wxString(SVG_MATERIAL_FILLED_CROP_LANDSCAPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_ORIGINAL))  
      return wxString(SVG_MATERIAL_FILLED_CROP_ORIGINAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_PORTRAIT))  
      return wxString(SVG_MATERIAL_FILLED_CROP_PORTRAIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_ROTATE))  
      return wxString(SVG_MATERIAL_FILLED_CROP_ROTATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CROP_SQUARE))  
      return wxString(SVG_MATERIAL_FILLED_CROP_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CRUELTY_FREE))  
      return wxString(SVG_MATERIAL_FILLED_CRUELTY_FREE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CSS))  
      return wxString(SVG_MATERIAL_FILLED_CSS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURRENCY_BITCOIN))  
      return wxString(SVG_MATERIAL_FILLED_CURRENCY_BITCOIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURRENCY_EXCHANGE))  
      return wxString(SVG_MATERIAL_FILLED_CURRENCY_EXCHANGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURRENCY_FRANC))  
      return wxString(SVG_MATERIAL_FILLED_CURRENCY_FRANC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURRENCY_LIRA))  
      return wxString(SVG_MATERIAL_FILLED_CURRENCY_LIRA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURRENCY_POUND))  
      return wxString(SVG_MATERIAL_FILLED_CURRENCY_POUND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURRENCY_RUBLE))  
      return wxString(SVG_MATERIAL_FILLED_CURRENCY_RUBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURRENCY_RUPEE))  
      return wxString(SVG_MATERIAL_FILLED_CURRENCY_RUPEE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURRENCY_YEN))  
      return wxString(SVG_MATERIAL_FILLED_CURRENCY_YEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURRENCY_YUAN))  
      return wxString(SVG_MATERIAL_FILLED_CURRENCY_YUAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURTAINS))  
      return wxString(SVG_MATERIAL_FILLED_CURTAINS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CURTAINS_CLOSED))  
      return wxString(SVG_MATERIAL_FILLED_CURTAINS_CLOSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CYCLONE))  
      return wxString(SVG_MATERIAL_FILLED_CYCLONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DANGEROUS))  
      return wxString(SVG_MATERIAL_FILLED_DANGEROUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DARK_MODE))  
      return wxString(SVG_MATERIAL_FILLED_DARK_MODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DASHBOARD))  
      return wxString(SVG_MATERIAL_FILLED_DASHBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DASHBOARD_CUSTOMIZE))  
      return wxString(SVG_MATERIAL_FILLED_DASHBOARD_CUSTOMIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATA_ARRAY))  
      return wxString(SVG_MATERIAL_FILLED_DATA_ARRAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATA_EXPLORATION))  
      return wxString(SVG_MATERIAL_FILLED_DATA_EXPLORATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATA_OBJECT))  
      return wxString(SVG_MATERIAL_FILLED_DATA_OBJECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATA_SAVER_OFF))  
      return wxString(SVG_MATERIAL_FILLED_DATA_SAVER_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATA_SAVER_ON))  
      return wxString(SVG_MATERIAL_FILLED_DATA_SAVER_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATA_THRESHOLDING))  
      return wxString(SVG_MATERIAL_FILLED_DATA_THRESHOLDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATA_USAGE))  
      return wxString(SVG_MATERIAL_FILLED_DATA_USAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATASET))  
      return wxString(SVG_MATERIAL_FILLED_DATASET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATASET_LINKED))  
      return wxString(SVG_MATERIAL_FILLED_DATASET_LINKED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DATE_RANGE))  
      return wxString(SVG_MATERIAL_FILLED_DATE_RANGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEBLUR))  
      return wxString(SVG_MATERIAL_FILLED_DEBLUR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DECK))  
      return wxString(SVG_MATERIAL_FILLED_DECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEHAZE))  
      return wxString(SVG_MATERIAL_FILLED_DEHAZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DELETE))  
      return wxString(SVG_MATERIAL_FILLED_DELETE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DELETE_FOREVER))  
      return wxString(SVG_MATERIAL_FILLED_DELETE_FOREVER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DELETE_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_DELETE_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DELETE_SWEEP))  
      return wxString(SVG_MATERIAL_FILLED_DELETE_SWEEP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DELIVERY_DINING))  
      return wxString(SVG_MATERIAL_FILLED_DELIVERY_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DENSITY_LARGE))  
      return wxString(SVG_MATERIAL_FILLED_DENSITY_LARGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DENSITY_MEDIUM))  
      return wxString(SVG_MATERIAL_FILLED_DENSITY_MEDIUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DENSITY_SMALL))  
      return wxString(SVG_MATERIAL_FILLED_DENSITY_SMALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEPARTURE_BOARD))  
      return wxString(SVG_MATERIAL_FILLED_DEPARTURE_BOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DESCRIPTION))  
      return wxString(SVG_MATERIAL_FILLED_DESCRIPTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DESELECT))  
      return wxString(SVG_MATERIAL_FILLED_DESELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DESIGN_SERVICES))  
      return wxString(SVG_MATERIAL_FILLED_DESIGN_SERVICES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DESK))  
      return wxString(SVG_MATERIAL_FILLED_DESK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DESKTOP_ACCESS_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_DESKTOP_ACCESS_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DESKTOP_MAC))  
      return wxString(SVG_MATERIAL_FILLED_DESKTOP_MAC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DESKTOP_WINDOWS))  
      return wxString(SVG_MATERIAL_FILLED_DESKTOP_WINDOWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DETAILS))  
      return wxString(SVG_MATERIAL_FILLED_DETAILS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVELOPER_BOARD))  
      return wxString(SVG_MATERIAL_FILLED_DEVELOPER_BOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVELOPER_BOARD_OFF))  
      return wxString(SVG_MATERIAL_FILLED_DEVELOPER_BOARD_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVELOPER_MODE))  
      return wxString(SVG_MATERIAL_FILLED_DEVELOPER_MODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVICE_HUB))  
      return wxString(SVG_MATERIAL_FILLED_DEVICE_HUB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVICE_THERMOSTAT))  
      return wxString(SVG_MATERIAL_FILLED_DEVICE_THERMOSTAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVICE_UNKNOWN))  
      return wxString(SVG_MATERIAL_FILLED_DEVICE_UNKNOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVICES))  
      return wxString(SVG_MATERIAL_FILLED_DEVICES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVICES_FOLD))  
      return wxString(SVG_MATERIAL_FILLED_DEVICES_FOLD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVICES_OTHER))  
      return wxString(SVG_MATERIAL_FILLED_DEVICES_OTHER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIALER_SIP))  
      return wxString(SVG_MATERIAL_FILLED_DIALER_SIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIALPAD))  
      return wxString(SVG_MATERIAL_FILLED_DIALPAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIAMOND))  
      return wxString(SVG_MATERIAL_FILLED_DIAMOND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIFFERENCE))  
      return wxString(SVG_MATERIAL_FILLED_DIFFERENCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DINING))  
      return wxString(SVG_MATERIAL_FILLED_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DINNER_DINING))  
      return wxString(SVG_MATERIAL_FILLED_DINNER_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_BIKE))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_BIKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_BOAT))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_BOAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_BOAT_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_BOAT_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_BUS))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_BUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_BUS_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_BUS_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_CAR))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_CAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_CAR_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_CAR_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_OFF))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_RAILWAY))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_RAILWAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_RAILWAY_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_RAILWAY_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_RUN))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_RUN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_SUBWAY))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_SUBWAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_SUBWAY_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_SUBWAY_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_TRANSIT))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_TRANSIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_TRANSIT_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_TRANSIT_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRECTIONS_WALK))  
      return wxString(SVG_MATERIAL_FILLED_DIRECTIONS_WALK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIRTY_LENS))  
      return wxString(SVG_MATERIAL_FILLED_DIRTY_LENS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DISABLED_BY_DEFAULT))  
      return wxString(SVG_MATERIAL_FILLED_DISABLED_BY_DEFAULT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DISABLED_VISIBLE))  
      return wxString(SVG_MATERIAL_FILLED_DISABLED_VISIBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DISC_FULL))  
      return wxString(SVG_MATERIAL_FILLED_DISC_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DISCOUNT))  
      return wxString(SVG_MATERIAL_FILLED_DISCOUNT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DISPLAY_SETTINGS))  
      return wxString(SVG_MATERIAL_FILLED_DISPLAY_SETTINGS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIVERSITY_1))  
      return wxString(SVG_MATERIAL_FILLED_DIVERSITY_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIVERSITY_2))  
      return wxString(SVG_MATERIAL_FILLED_DIVERSITY_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIVERSITY_3))  
      return wxString(SVG_MATERIAL_FILLED_DIVERSITY_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DNS))  
      return wxString(SVG_MATERIAL_FILLED_DNS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_DISTURB))  
      return wxString(SVG_MATERIAL_FILLED_DO_DISTURB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_DISTURB_ALT))  
      return wxString(SVG_MATERIAL_FILLED_DO_DISTURB_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_DISTURB_OFF))  
      return wxString(SVG_MATERIAL_FILLED_DO_DISTURB_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_DISTURB_ON))  
      return wxString(SVG_MATERIAL_FILLED_DO_DISTURB_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_NOT_DISTURB))  
      return wxString(SVG_MATERIAL_FILLED_DO_NOT_DISTURB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_NOT_DISTURB_ALT))  
      return wxString(SVG_MATERIAL_FILLED_DO_NOT_DISTURB_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_NOT_DISTURB_OFF))  
      return wxString(SVG_MATERIAL_FILLED_DO_NOT_DISTURB_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_NOT_DISTURB_ON))  
      return wxString(SVG_MATERIAL_FILLED_DO_NOT_DISTURB_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_NOT_DISTURB_ON_TOTAL_SILENCE))  
      return wxString(SVG_MATERIAL_FILLED_DO_NOT_DISTURB_ON_TOTAL_SILENCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_NOT_STEP))  
      return wxString(SVG_MATERIAL_FILLED_DO_NOT_STEP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DO_NOT_TOUCH))  
      return wxString(SVG_MATERIAL_FILLED_DO_NOT_TOUCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOCK))  
      return wxString(SVG_MATERIAL_FILLED_DOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOCUMENT_SCANNER))  
      return wxString(SVG_MATERIAL_FILLED_DOCUMENT_SCANNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOMAIN))  
      return wxString(SVG_MATERIAL_FILLED_DOMAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOMAIN_ADD))  
      return wxString(SVG_MATERIAL_FILLED_DOMAIN_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOMAIN_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_DOMAIN_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOMAIN_VERIFICATION))  
      return wxString(SVG_MATERIAL_FILLED_DOMAIN_VERIFICATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DONE))  
      return wxString(SVG_MATERIAL_FILLED_DONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DONE_ALL))  
      return wxString(SVG_MATERIAL_FILLED_DONE_ALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DONE_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_DONE_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DONUT_LARGE))  
      return wxString(SVG_MATERIAL_FILLED_DONUT_LARGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DONUT_SMALL))  
      return wxString(SVG_MATERIAL_FILLED_DONUT_SMALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOOR_BACK))  
      return wxString(SVG_MATERIAL_FILLED_DOOR_BACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOOR_FRONT))  
      return wxString(SVG_MATERIAL_FILLED_DOOR_FRONT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOOR_SLIDING))  
      return wxString(SVG_MATERIAL_FILLED_DOOR_SLIDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOORBELL))  
      return wxString(SVG_MATERIAL_FILLED_DOORBELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOUBLE_ARROW))  
      return wxString(SVG_MATERIAL_FILLED_DOUBLE_ARROW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOWNHILL_SKIING))  
      return wxString(SVG_MATERIAL_FILLED_DOWNHILL_SKIING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOWNLOAD))  
      return wxString(SVG_MATERIAL_FILLED_DOWNLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOWNLOAD_DONE))  
      return wxString(SVG_MATERIAL_FILLED_DOWNLOAD_DONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOWNLOAD_FOR_OFFLINE))  
      return wxString(SVG_MATERIAL_FILLED_DOWNLOAD_FOR_OFFLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOWNLOADING))  
      return wxString(SVG_MATERIAL_FILLED_DOWNLOADING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRAFTS))  
      return wxString(SVG_MATERIAL_FILLED_DRAFTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRAG_HANDLE))  
      return wxString(SVG_MATERIAL_FILLED_DRAG_HANDLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRAG_INDICATOR))  
      return wxString(SVG_MATERIAL_FILLED_DRAG_INDICATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRAW))  
      return wxString(SVG_MATERIAL_FILLED_DRAW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRIVE_ETA))  
      return wxString(SVG_MATERIAL_FILLED_DRIVE_ETA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRIVE_FILE_MOVE))  
      return wxString(SVG_MATERIAL_FILLED_DRIVE_FILE_MOVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRIVE_FILE_MOVE_RTL))  
      return wxString(SVG_MATERIAL_FILLED_DRIVE_FILE_MOVE_RTL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRIVE_FILE_RENAME_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_DRIVE_FILE_RENAME_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRIVE_FOLDER_UPLOAD))  
      return wxString(SVG_MATERIAL_FILLED_DRIVE_FOLDER_UPLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRY))  
      return wxString(SVG_MATERIAL_FILLED_DRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRY_CLEANING))  
      return wxString(SVG_MATERIAL_FILLED_DRY_CLEANING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DUO))  
      return wxString(SVG_MATERIAL_FILLED_DUO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DVR))  
      return wxString(SVG_MATERIAL_FILLED_DVR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DYNAMIC_FEED))  
      return wxString(SVG_MATERIAL_FILLED_DYNAMIC_FEED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DYNAMIC_FORM))  
      return wxString(SVG_MATERIAL_FILLED_DYNAMIC_FORM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_E_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_E_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EARBUDS))  
      return wxString(SVG_MATERIAL_FILLED_EARBUDS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EARBUDS_BATTERY))  
      return wxString(SVG_MATERIAL_FILLED_EARBUDS_BATTERY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EAST))  
      return wxString(SVG_MATERIAL_FILLED_EAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDGESENSOR_HIGH))  
      return wxString(SVG_MATERIAL_FILLED_EDGESENSOR_HIGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDGESENSOR_LOW))  
      return wxString(SVG_MATERIAL_FILLED_EDGESENSOR_LOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDIT))  
      return wxString(SVG_MATERIAL_FILLED_EDIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDIT_ATTRIBUTES))  
      return wxString(SVG_MATERIAL_FILLED_EDIT_ATTRIBUTES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDIT_CALENDAR))  
      return wxString(SVG_MATERIAL_FILLED_EDIT_CALENDAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDIT_LOCATION))  
      return wxString(SVG_MATERIAL_FILLED_EDIT_LOCATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDIT_LOCATION_ALT))  
      return wxString(SVG_MATERIAL_FILLED_EDIT_LOCATION_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDIT_NOTE))  
      return wxString(SVG_MATERIAL_FILLED_EDIT_NOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDIT_NOTIFICATIONS))  
      return wxString(SVG_MATERIAL_FILLED_EDIT_NOTIFICATIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDIT_OFF))  
      return wxString(SVG_MATERIAL_FILLED_EDIT_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDIT_ROAD))  
      return wxString(SVG_MATERIAL_FILLED_EDIT_ROAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EGG))  
      return wxString(SVG_MATERIAL_FILLED_EGG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EGG_ALT))  
      return wxString(SVG_MATERIAL_FILLED_EGG_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EJECT))  
      return wxString(SVG_MATERIAL_FILLED_EJECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELDERLY))  
      return wxString(SVG_MATERIAL_FILLED_ELDERLY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELDERLY_WOMAN))  
      return wxString(SVG_MATERIAL_FILLED_ELDERLY_WOMAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELECTRIC_BIKE))  
      return wxString(SVG_MATERIAL_FILLED_ELECTRIC_BIKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELECTRIC_BOLT))  
      return wxString(SVG_MATERIAL_FILLED_ELECTRIC_BOLT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELECTRIC_CAR))  
      return wxString(SVG_MATERIAL_FILLED_ELECTRIC_CAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELECTRIC_METER))  
      return wxString(SVG_MATERIAL_FILLED_ELECTRIC_METER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELECTRIC_MOPED))  
      return wxString(SVG_MATERIAL_FILLED_ELECTRIC_MOPED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELECTRIC_RICKSHAW))  
      return wxString(SVG_MATERIAL_FILLED_ELECTRIC_RICKSHAW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELECTRIC_SCOOTER))  
      return wxString(SVG_MATERIAL_FILLED_ELECTRIC_SCOOTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELECTRICAL_SERVICES))  
      return wxString(SVG_MATERIAL_FILLED_ELECTRICAL_SERVICES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELEVATOR))  
      return wxString(SVG_MATERIAL_FILLED_ELEVATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMAIL))  
      return wxString(SVG_MATERIAL_FILLED_EMAIL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMERGENCY))  
      return wxString(SVG_MATERIAL_FILLED_EMERGENCY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMERGENCY_RECORDING))  
      return wxString(SVG_MATERIAL_FILLED_EMERGENCY_RECORDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMERGENCY_SHARE))  
      return wxString(SVG_MATERIAL_FILLED_EMERGENCY_SHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMOJI_EMOTIONS))  
      return wxString(SVG_MATERIAL_FILLED_EMOJI_EMOTIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMOJI_EVENTS))  
      return wxString(SVG_MATERIAL_FILLED_EMOJI_EVENTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMOJI_FOOD_BEVERAGE))  
      return wxString(SVG_MATERIAL_FILLED_EMOJI_FOOD_BEVERAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMOJI_NATURE))  
      return wxString(SVG_MATERIAL_FILLED_EMOJI_NATURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMOJI_OBJECTS))  
      return wxString(SVG_MATERIAL_FILLED_EMOJI_OBJECTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMOJI_PEOPLE))  
      return wxString(SVG_MATERIAL_FILLED_EMOJI_PEOPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMOJI_SYMBOLS))  
      return wxString(SVG_MATERIAL_FILLED_EMOJI_SYMBOLS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMOJI_TRANSPORTATION))  
      return wxString(SVG_MATERIAL_FILLED_EMOJI_TRANSPORTATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENERGY_SAVINGS_LEAF))  
      return wxString(SVG_MATERIAL_FILLED_ENERGY_SAVINGS_LEAF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENGINEERING))  
      return wxString(SVG_MATERIAL_FILLED_ENGINEERING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENHANCED_ENCRYPTION))  
      return wxString(SVG_MATERIAL_FILLED_ENHANCED_ENCRYPTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EQUALIZER))  
      return wxString(SVG_MATERIAL_FILLED_EQUALIZER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ERROR))  
      return wxString(SVG_MATERIAL_FILLED_ERROR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ERROR_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_ERROR_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ESCALATOR))  
      return wxString(SVG_MATERIAL_FILLED_ESCALATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ESCALATOR_WARNING))  
      return wxString(SVG_MATERIAL_FILLED_ESCALATOR_WARNING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EURO))  
      return wxString(SVG_MATERIAL_FILLED_EURO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EURO_SYMBOL))  
      return wxString(SVG_MATERIAL_FILLED_EURO_SYMBOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EV_STATION))  
      return wxString(SVG_MATERIAL_FILLED_EV_STATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EVENT))  
      return wxString(SVG_MATERIAL_FILLED_EVENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EVENT_AVAILABLE))  
      return wxString(SVG_MATERIAL_FILLED_EVENT_AVAILABLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EVENT_BUSY))  
      return wxString(SVG_MATERIAL_FILLED_EVENT_BUSY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EVENT_NOTE))  
      return wxString(SVG_MATERIAL_FILLED_EVENT_NOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EVENT_REPEAT))  
      return wxString(SVG_MATERIAL_FILLED_EVENT_REPEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EVENT_SEAT))  
      return wxString(SVG_MATERIAL_FILLED_EVENT_SEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXIT_TO_APP))  
      return wxString(SVG_MATERIAL_FILLED_EXIT_TO_APP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPAND))  
      return wxString(SVG_MATERIAL_FILLED_EXPAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPAND_CIRCLE_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_EXPAND_CIRCLE_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPAND_LESS))  
      return wxString(SVG_MATERIAL_FILLED_EXPAND_LESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPAND_MORE))  
      return wxString(SVG_MATERIAL_FILLED_EXPAND_MORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPLICIT))  
      return wxString(SVG_MATERIAL_FILLED_EXPLICIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPLORE))  
      return wxString(SVG_MATERIAL_FILLED_EXPLORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPLORE_OFF))  
      return wxString(SVG_MATERIAL_FILLED_EXPLORE_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPOSURE))  
      return wxString(SVG_MATERIAL_FILLED_EXPOSURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPOSURE_NEG_1))  
      return wxString(SVG_MATERIAL_FILLED_EXPOSURE_NEG_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPOSURE_NEG_2))  
      return wxString(SVG_MATERIAL_FILLED_EXPOSURE_NEG_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPOSURE_PLUS_1))  
      return wxString(SVG_MATERIAL_FILLED_EXPOSURE_PLUS_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPOSURE_PLUS_2))  
      return wxString(SVG_MATERIAL_FILLED_EXPOSURE_PLUS_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPOSURE_ZERO))  
      return wxString(SVG_MATERIAL_FILLED_EXPOSURE_ZERO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXTENSION))  
      return wxString(SVG_MATERIAL_FILLED_EXTENSION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXTENSION_OFF))  
      return wxString(SVG_MATERIAL_FILLED_EXTENSION_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE))  
      return wxString(SVG_MATERIAL_FILLED_FACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_2))  
      return wxString(SVG_MATERIAL_FILLED_FACE_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_3))  
      return wxString(SVG_MATERIAL_FILLED_FACE_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_4))  
      return wxString(SVG_MATERIAL_FILLED_FACE_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_5))  
      return wxString(SVG_MATERIAL_FILLED_FACE_5);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_6))  
      return wxString(SVG_MATERIAL_FILLED_FACE_6);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_RETOUCHING_NATURAL))  
      return wxString(SVG_MATERIAL_FILLED_FACE_RETOUCHING_NATURAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_RETOUCHING_OFF))  
      return wxString(SVG_MATERIAL_FILLED_FACE_RETOUCHING_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACT_CHECK))  
      return wxString(SVG_MATERIAL_FILLED_FACT_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACTORY))  
      return wxString(SVG_MATERIAL_FILLED_FACTORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAMILY_RESTROOM))  
      return wxString(SVG_MATERIAL_FILLED_FAMILY_RESTROOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAST_FORWARD))  
      return wxString(SVG_MATERIAL_FILLED_FAST_FORWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAST_REWIND))  
      return wxString(SVG_MATERIAL_FILLED_FAST_REWIND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FASTFOOD))  
      return wxString(SVG_MATERIAL_FILLED_FASTFOOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAVORITE))  
      return wxString(SVG_MATERIAL_FILLED_FAVORITE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAVORITE_BORDER))  
      return wxString(SVG_MATERIAL_FILLED_FAVORITE_BORDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FAX))  
      return wxString(SVG_MATERIAL_FILLED_FAX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FEATURED_PLAY_LIST))  
      return wxString(SVG_MATERIAL_FILLED_FEATURED_PLAY_LIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FEATURED_VIDEO))  
      return wxString(SVG_MATERIAL_FILLED_FEATURED_VIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FEED))  
      return wxString(SVG_MATERIAL_FILLED_FEED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FEEDBACK))  
      return wxString(SVG_MATERIAL_FILLED_FEEDBACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FEMALE))  
      return wxString(SVG_MATERIAL_FILLED_FEMALE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FENCE))  
      return wxString(SVG_MATERIAL_FILLED_FENCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FESTIVAL))  
      return wxString(SVG_MATERIAL_FILLED_FESTIVAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIBER_DVR))  
      return wxString(SVG_MATERIAL_FILLED_FIBER_DVR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIBER_MANUAL_RECORD))  
      return wxString(SVG_MATERIAL_FILLED_FIBER_MANUAL_RECORD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIBER_NEW))  
      return wxString(SVG_MATERIAL_FILLED_FIBER_NEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIBER_PIN))  
      return wxString(SVG_MATERIAL_FILLED_FIBER_PIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIBER_SMART_RECORD))  
      return wxString(SVG_MATERIAL_FILLED_FIBER_SMART_RECORD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_COPY))  
      return wxString(SVG_MATERIAL_FILLED_FILE_COPY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_DOWNLOAD))  
      return wxString(SVG_MATERIAL_FILLED_FILE_DOWNLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_DOWNLOAD_DONE))  
      return wxString(SVG_MATERIAL_FILLED_FILE_DOWNLOAD_DONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_DOWNLOAD_OFF))  
      return wxString(SVG_MATERIAL_FILLED_FILE_DOWNLOAD_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_OPEN))  
      return wxString(SVG_MATERIAL_FILLED_FILE_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_PRESENT))  
      return wxString(SVG_MATERIAL_FILLED_FILE_PRESENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_UPLOAD))  
      return wxString(SVG_MATERIAL_FILLED_FILE_UPLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER))  
      return wxString(SVG_MATERIAL_FILLED_FILTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_1))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_2))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_3))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_4))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_5))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_5);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_6))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_6);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_7))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_7);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_8))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_8);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_9))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_9);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_9_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_9_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_ALT))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_ALT_OFF))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_ALT_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_B_AND_W))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_B_AND_W);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_CENTER_FOCUS))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_CENTER_FOCUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_DRAMA))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_DRAMA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_FRAMES))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_FRAMES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_HDR))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_HDR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_LIST))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_LIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_LIST_OFF))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_LIST_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_NONE))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_NONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_TILT_SHIFT))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_TILT_SHIFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILTER_VINTAGE))  
      return wxString(SVG_MATERIAL_FILLED_FILTER_VINTAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIND_IN_PAGE))  
      return wxString(SVG_MATERIAL_FILLED_FIND_IN_PAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIND_REPLACE))  
      return wxString(SVG_MATERIAL_FILLED_FIND_REPLACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FINGERPRINT))  
      return wxString(SVG_MATERIAL_FILLED_FINGERPRINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRE_EXTINGUISHER))  
      return wxString(SVG_MATERIAL_FILLED_FIRE_EXTINGUISHER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRE_HYDRANT_ALT))  
      return wxString(SVG_MATERIAL_FILLED_FIRE_HYDRANT_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRE_TRUCK))  
      return wxString(SVG_MATERIAL_FILLED_FIRE_TRUCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIREPLACE))  
      return wxString(SVG_MATERIAL_FILLED_FIREPLACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRST_PAGE))  
      return wxString(SVG_MATERIAL_FILLED_FIRST_PAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIT_SCREEN))  
      return wxString(SVG_MATERIAL_FILLED_FIT_SCREEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FITBIT))  
      return wxString(SVG_MATERIAL_FILLED_FITBIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FITNESS_CENTER))  
      return wxString(SVG_MATERIAL_FILLED_FITNESS_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLAG))  
      return wxString(SVG_MATERIAL_FILLED_FLAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLAG_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_FLAG_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLAKY))  
      return wxString(SVG_MATERIAL_FILLED_FLAKY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLARE))  
      return wxString(SVG_MATERIAL_FILLED_FLARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLASH_AUTO))  
      return wxString(SVG_MATERIAL_FILLED_FLASH_AUTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLASH_OFF))  
      return wxString(SVG_MATERIAL_FILLED_FLASH_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLASH_ON))  
      return wxString(SVG_MATERIAL_FILLED_FLASH_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLASHLIGHT_OFF))  
      return wxString(SVG_MATERIAL_FILLED_FLASHLIGHT_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLASHLIGHT_ON))  
      return wxString(SVG_MATERIAL_FILLED_FLASHLIGHT_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLATWARE))  
      return wxString(SVG_MATERIAL_FILLED_FLATWARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIGHT))  
      return wxString(SVG_MATERIAL_FILLED_FLIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIGHT_CLASS))  
      return wxString(SVG_MATERIAL_FILLED_FLIGHT_CLASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIGHT_LAND))  
      return wxString(SVG_MATERIAL_FILLED_FLIGHT_LAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIGHT_TAKEOFF))  
      return wxString(SVG_MATERIAL_FILLED_FLIGHT_TAKEOFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIP))  
      return wxString(SVG_MATERIAL_FILLED_FLIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIP_CAMERA_ANDROID))  
      return wxString(SVG_MATERIAL_FILLED_FLIP_CAMERA_ANDROID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIP_CAMERA_IOS))  
      return wxString(SVG_MATERIAL_FILLED_FLIP_CAMERA_IOS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIP_TO_BACK))  
      return wxString(SVG_MATERIAL_FILLED_FLIP_TO_BACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIP_TO_FRONT))  
      return wxString(SVG_MATERIAL_FILLED_FLIP_TO_FRONT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLOOD))  
      return wxString(SVG_MATERIAL_FILLED_FLOOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLUORESCENT))  
      return wxString(SVG_MATERIAL_FILLED_FLUORESCENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLUTTER_DASH))  
      return wxString(SVG_MATERIAL_FILLED_FLUTTER_DASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FMD_BAD))  
      return wxString(SVG_MATERIAL_FILLED_FMD_BAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FMD_GOOD))  
      return wxString(SVG_MATERIAL_FILLED_FMD_GOOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER))  
      return wxString(SVG_MATERIAL_FILLED_FOLDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_COPY))  
      return wxString(SVG_MATERIAL_FILLED_FOLDER_COPY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_DELETE))  
      return wxString(SVG_MATERIAL_FILLED_FOLDER_DELETE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_OFF))  
      return wxString(SVG_MATERIAL_FILLED_FOLDER_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_OPEN))  
      return wxString(SVG_MATERIAL_FILLED_FOLDER_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_SHARED))  
      return wxString(SVG_MATERIAL_FILLED_FOLDER_SHARED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_SPECIAL))  
      return wxString(SVG_MATERIAL_FILLED_FOLDER_SPECIAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_ZIP))  
      return wxString(SVG_MATERIAL_FILLED_FOLDER_ZIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLLOW_THE_SIGNS))  
      return wxString(SVG_MATERIAL_FILLED_FOLLOW_THE_SIGNS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FONT_DOWNLOAD))  
      return wxString(SVG_MATERIAL_FILLED_FONT_DOWNLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FONT_DOWNLOAD_OFF))  
      return wxString(SVG_MATERIAL_FILLED_FONT_DOWNLOAD_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOOD_BANK))  
      return wxString(SVG_MATERIAL_FILLED_FOOD_BANK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOREST))  
      return wxString(SVG_MATERIAL_FILLED_FOREST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORK_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_FORK_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORK_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_FORK_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_ALIGN_CENTER))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_ALIGN_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_ALIGN_JUSTIFY))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_ALIGN_JUSTIFY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_ALIGN_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_ALIGN_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_ALIGN_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_ALIGN_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_BOLD))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_BOLD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_CLEAR))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_CLEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_COLOR_FILL))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_COLOR_FILL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_COLOR_RESET))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_COLOR_RESET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_COLOR_TEXT))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_COLOR_TEXT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_INDENT_DECREASE))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_INDENT_DECREASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_INDENT_INCREASE))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_INDENT_INCREASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_ITALIC))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_ITALIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_LINE_SPACING))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_LINE_SPACING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_LIST_BULLETED))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_LIST_BULLETED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_LIST_NUMBERED))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_LIST_NUMBERED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_LIST_NUMBERED_RTL))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_LIST_NUMBERED_RTL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_OVERLINE))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_OVERLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_PAINT))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_PAINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_QUOTE))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_QUOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_SHAPES))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_SHAPES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_SIZE))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_SIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_STRIKETHROUGH))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_STRIKETHROUGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_TEXTDIRECTION_L_TO_R))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_TEXTDIRECTION_L_TO_R);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_TEXTDIRECTION_R_TO_L))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_TEXTDIRECTION_R_TO_L);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORMAT_UNDERLINED))  
      return wxString(SVG_MATERIAL_FILLED_FORMAT_UNDERLINED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORUM))  
      return wxString(SVG_MATERIAL_FILLED_FORUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORWARD))  
      return wxString(SVG_MATERIAL_FILLED_FORWARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORWARD_10))  
      return wxString(SVG_MATERIAL_FILLED_FORWARD_10);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORWARD_30))  
      return wxString(SVG_MATERIAL_FILLED_FORWARD_30);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORWARD_5))  
      return wxString(SVG_MATERIAL_FILLED_FORWARD_5);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORWARD_TO_INBOX))  
      return wxString(SVG_MATERIAL_FILLED_FORWARD_TO_INBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOUNDATION))  
      return wxString(SVG_MATERIAL_FILLED_FOUNDATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FREE_BREAKFAST))  
      return wxString(SVG_MATERIAL_FILLED_FREE_BREAKFAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FREE_CANCELLATION))  
      return wxString(SVG_MATERIAL_FILLED_FREE_CANCELLATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FRONT_HAND))  
      return wxString(SVG_MATERIAL_FILLED_FRONT_HAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FULLSCREEN))  
      return wxString(SVG_MATERIAL_FILLED_FULLSCREEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FULLSCREEN_EXIT))  
      return wxString(SVG_MATERIAL_FILLED_FULLSCREEN_EXIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FUNCTIONS))  
      return wxString(SVG_MATERIAL_FILLED_FUNCTIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_G_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_G_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_G_TRANSLATE))  
      return wxString(SVG_MATERIAL_FILLED_G_TRANSLATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAMEPAD))  
      return wxString(SVG_MATERIAL_FILLED_GAMEPAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAMES))  
      return wxString(SVG_MATERIAL_FILLED_GAMES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GARAGE))  
      return wxString(SVG_MATERIAL_FILLED_GARAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAS_METER))  
      return wxString(SVG_MATERIAL_FILLED_GAS_METER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GAVEL))  
      return wxString(SVG_MATERIAL_FILLED_GAVEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GENERATING_TOKENS))  
      return wxString(SVG_MATERIAL_FILLED_GENERATING_TOKENS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GESTURE))  
      return wxString(SVG_MATERIAL_FILLED_GESTURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GET_APP))  
      return wxString(SVG_MATERIAL_FILLED_GET_APP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GIF))  
      return wxString(SVG_MATERIAL_FILLED_GIF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GIF_BOX))  
      return wxString(SVG_MATERIAL_FILLED_GIF_BOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GIRL))  
      return wxString(SVG_MATERIAL_FILLED_GIRL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GITE))  
      return wxString(SVG_MATERIAL_FILLED_GITE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOLF_COURSE))  
      return wxString(SVG_MATERIAL_FILLED_GOLF_COURSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GPP_BAD))  
      return wxString(SVG_MATERIAL_FILLED_GPP_BAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GPP_GOOD))  
      return wxString(SVG_MATERIAL_FILLED_GPP_GOOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GPP_MAYBE))  
      return wxString(SVG_MATERIAL_FILLED_GPP_MAYBE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GPS_FIXED))  
      return wxString(SVG_MATERIAL_FILLED_GPS_FIXED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GPS_NOT_FIXED))  
      return wxString(SVG_MATERIAL_FILLED_GPS_NOT_FIXED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GPS_OFF))  
      return wxString(SVG_MATERIAL_FILLED_GPS_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRADE))  
      return wxString(SVG_MATERIAL_FILLED_GRADE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRADIENT))  
      return wxString(SVG_MATERIAL_FILLED_GRADIENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRADING))  
      return wxString(SVG_MATERIAL_FILLED_GRADING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRAIN))  
      return wxString(SVG_MATERIAL_FILLED_GRAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRAPHIC_EQ))  
      return wxString(SVG_MATERIAL_FILLED_GRAPHIC_EQ);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRASS))  
      return wxString(SVG_MATERIAL_FILLED_GRASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRID_3X3))  
      return wxString(SVG_MATERIAL_FILLED_GRID_3X3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRID_4X4))  
      return wxString(SVG_MATERIAL_FILLED_GRID_4X4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRID_GOLDENRATIO))  
      return wxString(SVG_MATERIAL_FILLED_GRID_GOLDENRATIO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRID_OFF))  
      return wxString(SVG_MATERIAL_FILLED_GRID_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRID_ON))  
      return wxString(SVG_MATERIAL_FILLED_GRID_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRID_VIEW))  
      return wxString(SVG_MATERIAL_FILLED_GRID_VIEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GROUP))  
      return wxString(SVG_MATERIAL_FILLED_GROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GROUP_ADD))  
      return wxString(SVG_MATERIAL_FILLED_GROUP_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GROUP_OFF))  
      return wxString(SVG_MATERIAL_FILLED_GROUP_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GROUP_REMOVE))  
      return wxString(SVG_MATERIAL_FILLED_GROUP_REMOVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GROUP_WORK))  
      return wxString(SVG_MATERIAL_FILLED_GROUP_WORK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GROUPS))  
      return wxString(SVG_MATERIAL_FILLED_GROUPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GROUPS_2))  
      return wxString(SVG_MATERIAL_FILLED_GROUPS_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GROUPS_3))  
      return wxString(SVG_MATERIAL_FILLED_GROUPS_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_H_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_H_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_H_PLUS_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_H_PLUS_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAIL))  
      return wxString(SVG_MATERIAL_FILLED_HAIL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDSHAKE))  
      return wxString(SVG_MATERIAL_FILLED_HANDSHAKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDYMAN))  
      return wxString(SVG_MATERIAL_FILLED_HANDYMAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HARDWARE))  
      return wxString(SVG_MATERIAL_FILLED_HARDWARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HD))  
      return wxString(SVG_MATERIAL_FILLED_HD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_AUTO))  
      return wxString(SVG_MATERIAL_FILLED_HDR_AUTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_AUTO_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_HDR_AUTO_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_ENHANCED_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_HDR_ENHANCED_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_OFF))  
      return wxString(SVG_MATERIAL_FILLED_HDR_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_OFF_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_HDR_OFF_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_ON))  
      return wxString(SVG_MATERIAL_FILLED_HDR_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_ON_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_HDR_ON_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_PLUS))  
      return wxString(SVG_MATERIAL_FILLED_HDR_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_STRONG))  
      return wxString(SVG_MATERIAL_FILLED_HDR_STRONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HDR_WEAK))  
      return wxString(SVG_MATERIAL_FILLED_HDR_WEAK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEADPHONES))  
      return wxString(SVG_MATERIAL_FILLED_HEADPHONES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEADPHONES_BATTERY))  
      return wxString(SVG_MATERIAL_FILLED_HEADPHONES_BATTERY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEADSET))  
      return wxString(SVG_MATERIAL_FILLED_HEADSET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEADSET_MIC))  
      return wxString(SVG_MATERIAL_FILLED_HEADSET_MIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEADSET_OFF))  
      return wxString(SVG_MATERIAL_FILLED_HEADSET_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEALING))  
      return wxString(SVG_MATERIAL_FILLED_HEALING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEALTH_AND_SAFETY))  
      return wxString(SVG_MATERIAL_FILLED_HEALTH_AND_SAFETY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEARING))  
      return wxString(SVG_MATERIAL_FILLED_HEARING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEARING_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_HEARING_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART_BROKEN))  
      return wxString(SVG_MATERIAL_FILLED_HEART_BROKEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEAT_PUMP))  
      return wxString(SVG_MATERIAL_FILLED_HEAT_PUMP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEIGHT))  
      return wxString(SVG_MATERIAL_FILLED_HEIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HELP))  
      return wxString(SVG_MATERIAL_FILLED_HELP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HELP_CENTER))  
      return wxString(SVG_MATERIAL_FILLED_HELP_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HELP_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_HELP_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEVC))  
      return wxString(SVG_MATERIAL_FILLED_HEVC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEXAGON))  
      return wxString(SVG_MATERIAL_FILLED_HEXAGON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIDE_IMAGE))  
      return wxString(SVG_MATERIAL_FILLED_HIDE_IMAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIDE_SOURCE))  
      return wxString(SVG_MATERIAL_FILLED_HIDE_SOURCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIGH_QUALITY))  
      return wxString(SVG_MATERIAL_FILLED_HIGH_QUALITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIGHLIGHT))  
      return wxString(SVG_MATERIAL_FILLED_HIGHLIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIGHLIGHT_ALT))  
      return wxString(SVG_MATERIAL_FILLED_HIGHLIGHT_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIGHLIGHT_OFF))  
      return wxString(SVG_MATERIAL_FILLED_HIGHLIGHT_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIKING))  
      return wxString(SVG_MATERIAL_FILLED_HIKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HISTORY))  
      return wxString(SVG_MATERIAL_FILLED_HISTORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HISTORY_EDU))  
      return wxString(SVG_MATERIAL_FILLED_HISTORY_EDU);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HISTORY_TOGGLE_OFF))  
      return wxString(SVG_MATERIAL_FILLED_HISTORY_TOGGLE_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIVE))  
      return wxString(SVG_MATERIAL_FILLED_HIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HLS))  
      return wxString(SVG_MATERIAL_FILLED_HLS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HLS_OFF))  
      return wxString(SVG_MATERIAL_FILLED_HLS_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOLIDAY_VILLAGE))  
      return wxString(SVG_MATERIAL_FILLED_HOLIDAY_VILLAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOME))  
      return wxString(SVG_MATERIAL_FILLED_HOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOME_MAX))  
      return wxString(SVG_MATERIAL_FILLED_HOME_MAX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOME_MINI))  
      return wxString(SVG_MATERIAL_FILLED_HOME_MINI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOME_REPAIR_SERVICE))  
      return wxString(SVG_MATERIAL_FILLED_HOME_REPAIR_SERVICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOME_WORK))  
      return wxString(SVG_MATERIAL_FILLED_HOME_WORK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HORIZONTAL_DISTRIBUTE))  
      return wxString(SVG_MATERIAL_FILLED_HORIZONTAL_DISTRIBUTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HORIZONTAL_RULE))  
      return wxString(SVG_MATERIAL_FILLED_HORIZONTAL_RULE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HORIZONTAL_SPLIT))  
      return wxString(SVG_MATERIAL_FILLED_HORIZONTAL_SPLIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOT_TUB))  
      return wxString(SVG_MATERIAL_FILLED_HOT_TUB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOTEL))  
      return wxString(SVG_MATERIAL_FILLED_HOTEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOTEL_CLASS))  
      return wxString(SVG_MATERIAL_FILLED_HOTEL_CLASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS_BOTTOM))  
      return wxString(SVG_MATERIAL_FILLED_HOURGLASS_BOTTOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_HOURGLASS_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS_EMPTY))  
      return wxString(SVG_MATERIAL_FILLED_HOURGLASS_EMPTY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS_FULL))  
      return wxString(SVG_MATERIAL_FILLED_HOURGLASS_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS_TOP))  
      return wxString(SVG_MATERIAL_FILLED_HOURGLASS_TOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE))  
      return wxString(SVG_MATERIAL_FILLED_HOUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSE_SIDING))  
      return wxString(SVG_MATERIAL_FILLED_HOUSE_SIDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUSEBOAT))  
      return wxString(SVG_MATERIAL_FILLED_HOUSEBOAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOW_TO_REG))  
      return wxString(SVG_MATERIAL_FILLED_HOW_TO_REG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOW_TO_VOTE))  
      return wxString(SVG_MATERIAL_FILLED_HOW_TO_VOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HTML))  
      return wxString(SVG_MATERIAL_FILLED_HTML);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HTTP))  
      return wxString(SVG_MATERIAL_FILLED_HTTP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HTTPS))  
      return wxString(SVG_MATERIAL_FILLED_HTTPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HUB))  
      return wxString(SVG_MATERIAL_FILLED_HUB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HVAC))  
      return wxString(SVG_MATERIAL_FILLED_HVAC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ICE_SKATING))  
      return wxString(SVG_MATERIAL_FILLED_ICE_SKATING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ICECREAM))  
      return wxString(SVG_MATERIAL_FILLED_ICECREAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGE))  
      return wxString(SVG_MATERIAL_FILLED_IMAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGE_ASPECT_RATIO))  
      return wxString(SVG_MATERIAL_FILLED_IMAGE_ASPECT_RATIO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGE_NOT_SUPPORTED))  
      return wxString(SVG_MATERIAL_FILLED_IMAGE_NOT_SUPPORTED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGE_SEARCH))  
      return wxString(SVG_MATERIAL_FILLED_IMAGE_SEARCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGESEARCH_ROLLER))  
      return wxString(SVG_MATERIAL_FILLED_IMAGESEARCH_ROLLER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMPORT_CONTACTS))  
      return wxString(SVG_MATERIAL_FILLED_IMPORT_CONTACTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMPORT_EXPORT))  
      return wxString(SVG_MATERIAL_FILLED_IMPORT_EXPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMPORTANT_DEVICES))  
      return wxString(SVG_MATERIAL_FILLED_IMPORTANT_DEVICES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INBOX))  
      return wxString(SVG_MATERIAL_FILLED_INBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INCOMPLETE_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_INCOMPLETE_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INDETERMINATE_CHECK_BOX))  
      return wxString(SVG_MATERIAL_FILLED_INDETERMINATE_CHECK_BOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INFO))  
      return wxString(SVG_MATERIAL_FILLED_INFO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INPUT))  
      return wxString(SVG_MATERIAL_FILLED_INPUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSERT_CHART))  
      return wxString(SVG_MATERIAL_FILLED_INSERT_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSERT_CHART_OUTLINED))  
      return wxString(SVG_MATERIAL_FILLED_INSERT_CHART_OUTLINED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSERT_COMMENT))  
      return wxString(SVG_MATERIAL_FILLED_INSERT_COMMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSERT_DRIVE_FILE))  
      return wxString(SVG_MATERIAL_FILLED_INSERT_DRIVE_FILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSERT_EMOTICON))  
      return wxString(SVG_MATERIAL_FILLED_INSERT_EMOTICON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSERT_INVITATION))  
      return wxString(SVG_MATERIAL_FILLED_INSERT_INVITATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSERT_LINK))  
      return wxString(SVG_MATERIAL_FILLED_INSERT_LINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSERT_PAGE_BREAK))  
      return wxString(SVG_MATERIAL_FILLED_INSERT_PAGE_BREAK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSERT_PHOTO))  
      return wxString(SVG_MATERIAL_FILLED_INSERT_PHOTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSIGHTS))  
      return wxString(SVG_MATERIAL_FILLED_INSIGHTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSTALL_DESKTOP))  
      return wxString(SVG_MATERIAL_FILLED_INSTALL_DESKTOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSTALL_MOBILE))  
      return wxString(SVG_MATERIAL_FILLED_INSTALL_MOBILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INTEGRATION_INSTRUCTIONS))  
      return wxString(SVG_MATERIAL_FILLED_INTEGRATION_INSTRUCTIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INTERESTS))  
      return wxString(SVG_MATERIAL_FILLED_INTERESTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INTERPRETER_MODE))  
      return wxString(SVG_MATERIAL_FILLED_INTERPRETER_MODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INVENTORY))  
      return wxString(SVG_MATERIAL_FILLED_INVENTORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INVENTORY_2))  
      return wxString(SVG_MATERIAL_FILLED_INVENTORY_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INVERT_COLORS))  
      return wxString(SVG_MATERIAL_FILLED_INVERT_COLORS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INVERT_COLORS_OFF))  
      return wxString(SVG_MATERIAL_FILLED_INVERT_COLORS_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IOS_SHARE))  
      return wxString(SVG_MATERIAL_FILLED_IOS_SHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IRON))  
      return wxString(SVG_MATERIAL_FILLED_IRON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ISO))  
      return wxString(SVG_MATERIAL_FILLED_ISO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JAVASCRIPT))  
      return wxString(SVG_MATERIAL_FILLED_JAVASCRIPT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JOIN_FULL))  
      return wxString(SVG_MATERIAL_FILLED_JOIN_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JOIN_INNER))  
      return wxString(SVG_MATERIAL_FILLED_JOIN_INNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JOIN_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_JOIN_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JOIN_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_JOIN_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KAYAKING))  
      return wxString(SVG_MATERIAL_FILLED_KAYAKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEBAB_DINING))  
      return wxString(SVG_MATERIAL_FILLED_KEBAB_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEY))  
      return wxString(SVG_MATERIAL_FILLED_KEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEY_OFF))  
      return wxString(SVG_MATERIAL_FILLED_KEY_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_ALT))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_ARROW_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_ARROW_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_ARROW_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_ARROW_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_ARROW_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_ARROW_UP))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_ARROW_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_BACKSPACE))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_BACKSPACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_CAPSLOCK))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_CAPSLOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_COMMAND_KEY))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_COMMAND_KEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_CONTROL_KEY))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_CONTROL_KEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_DOUBLE_ARROW_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_DOUBLE_ARROW_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_DOUBLE_ARROW_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_DOUBLE_ARROW_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_DOUBLE_ARROW_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_DOUBLE_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_DOUBLE_ARROW_UP))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_DOUBLE_ARROW_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_HIDE))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_HIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_OPTION_KEY))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_OPTION_KEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_RETURN))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_RETURN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_TAB))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_TAB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD_VOICE))  
      return wxString(SVG_MATERIAL_FILLED_KEYBOARD_VOICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KING_BED))  
      return wxString(SVG_MATERIAL_FILLED_KING_BED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KITCHEN))  
      return wxString(SVG_MATERIAL_FILLED_KITCHEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KITESURFING))  
      return wxString(SVG_MATERIAL_FILLED_KITESURFING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LABEL))  
      return wxString(SVG_MATERIAL_FILLED_LABEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LABEL_IMPORTANT))  
      return wxString(SVG_MATERIAL_FILLED_LABEL_IMPORTANT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LABEL_OFF))  
      return wxString(SVG_MATERIAL_FILLED_LABEL_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAN))  
      return wxString(SVG_MATERIAL_FILLED_LAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LANDSCAPE))  
      return wxString(SVG_MATERIAL_FILLED_LANDSCAPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LANDSLIDE))  
      return wxString(SVG_MATERIAL_FILLED_LANDSLIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LANGUAGE))  
      return wxString(SVG_MATERIAL_FILLED_LANGUAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAPTOP))  
      return wxString(SVG_MATERIAL_FILLED_LAPTOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAPTOP_CHROMEBOOK))  
      return wxString(SVG_MATERIAL_FILLED_LAPTOP_CHROMEBOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAPTOP_MAC))  
      return wxString(SVG_MATERIAL_FILLED_LAPTOP_MAC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAPTOP_WINDOWS))  
      return wxString(SVG_MATERIAL_FILLED_LAPTOP_WINDOWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAST_PAGE))  
      return wxString(SVG_MATERIAL_FILLED_LAST_PAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAUNCH))  
      return wxString(SVG_MATERIAL_FILLED_LAUNCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAYERS))  
      return wxString(SVG_MATERIAL_FILLED_LAYERS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LAYERS_CLEAR))  
      return wxString(SVG_MATERIAL_FILLED_LAYERS_CLEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEADERBOARD))  
      return wxString(SVG_MATERIAL_FILLED_LEADERBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEAK_ADD))  
      return wxString(SVG_MATERIAL_FILLED_LEAK_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEAK_REMOVE))  
      return wxString(SVG_MATERIAL_FILLED_LEAK_REMOVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEGEND_TOGGLE))  
      return wxString(SVG_MATERIAL_FILLED_LEGEND_TOGGLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LENS))  
      return wxString(SVG_MATERIAL_FILLED_LENS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LENS_BLUR))  
      return wxString(SVG_MATERIAL_FILLED_LENS_BLUR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIBRARY_ADD))  
      return wxString(SVG_MATERIAL_FILLED_LIBRARY_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIBRARY_ADD_CHECK))  
      return wxString(SVG_MATERIAL_FILLED_LIBRARY_ADD_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIBRARY_BOOKS))  
      return wxString(SVG_MATERIAL_FILLED_LIBRARY_BOOKS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIBRARY_MUSIC))  
      return wxString(SVG_MATERIAL_FILLED_LIBRARY_MUSIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIGHT))  
      return wxString(SVG_MATERIAL_FILLED_LIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIGHT_MODE))  
      return wxString(SVG_MATERIAL_FILLED_LIGHT_MODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIGHTBULB))  
      return wxString(SVG_MATERIAL_FILLED_LIGHTBULB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIGHTBULB_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_LIGHTBULB_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINE_AXIS))  
      return wxString(SVG_MATERIAL_FILLED_LINE_AXIS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINE_STYLE))  
      return wxString(SVG_MATERIAL_FILLED_LINE_STYLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINE_WEIGHT))  
      return wxString(SVG_MATERIAL_FILLED_LINE_WEIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINEAR_SCALE))  
      return wxString(SVG_MATERIAL_FILLED_LINEAR_SCALE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINK))  
      return wxString(SVG_MATERIAL_FILLED_LINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINK_OFF))  
      return wxString(SVG_MATERIAL_FILLED_LINK_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINKED_CAMERA))  
      return wxString(SVG_MATERIAL_FILLED_LINKED_CAMERA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIQUOR))  
      return wxString(SVG_MATERIAL_FILLED_LIQUOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIST))  
      return wxString(SVG_MATERIAL_FILLED_LIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIST_ALT))  
      return wxString(SVG_MATERIAL_FILLED_LIST_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIVE_HELP))  
      return wxString(SVG_MATERIAL_FILLED_LIVE_HELP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIVE_TV))  
      return wxString(SVG_MATERIAL_FILLED_LIVE_TV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIVING))  
      return wxString(SVG_MATERIAL_FILLED_LIVING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_ACTIVITY))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_ACTIVITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_AIRPORT))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_AIRPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_ATM))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_ATM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_BAR))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_CAFE))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_CAFE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_CAR_WASH))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_CAR_WASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_CONVENIENCE_STORE))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_CONVENIENCE_STORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_DINING))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_DRINK))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_DRINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_FIRE_DEPARTMENT))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_FIRE_DEPARTMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_FLORIST))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_FLORIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_GAS_STATION))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_GAS_STATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_GROCERY_STORE))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_GROCERY_STORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_HOSPITAL))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_HOSPITAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_HOTEL))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_HOTEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_LAUNDRY_SERVICE))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_LAUNDRY_SERVICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_LIBRARY))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_LIBRARY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_MALL))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_MALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_MOVIES))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_MOVIES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_OFFER))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_OFFER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_PARKING))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_PARKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_PHARMACY))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_PHARMACY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_PHONE))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_PHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_PIZZA))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_PIZZA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_PLAY))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_PLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_POLICE))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_POLICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_POST_OFFICE))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_POST_OFFICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_PRINTSHOP))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_PRINTSHOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_SEE))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_SEE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_SHIPPING))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_SHIPPING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCAL_TAXI))  
      return wxString(SVG_MATERIAL_FILLED_LOCAL_TAXI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_CITY))  
      return wxString(SVG_MATERIAL_FILLED_LOCATION_CITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_LOCATION_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_OFF))  
      return wxString(SVG_MATERIAL_FILLED_LOCATION_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_ON))  
      return wxString(SVG_MATERIAL_FILLED_LOCATION_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCATION_SEARCHING))  
      return wxString(SVG_MATERIAL_FILLED_LOCATION_SEARCHING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCK))  
      return wxString(SVG_MATERIAL_FILLED_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCK_CLOCK))  
      return wxString(SVG_MATERIAL_FILLED_LOCK_CLOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCK_OPEN))  
      return wxString(SVG_MATERIAL_FILLED_LOCK_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCK_PERSON))  
      return wxString(SVG_MATERIAL_FILLED_LOCK_PERSON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOCK_RESET))  
      return wxString(SVG_MATERIAL_FILLED_LOCK_RESET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOGIN))  
      return wxString(SVG_MATERIAL_FILLED_LOGIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOGO_DEV))  
      return wxString(SVG_MATERIAL_FILLED_LOGO_DEV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOGOUT))  
      return wxString(SVG_MATERIAL_FILLED_LOGOUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOOKS))  
      return wxString(SVG_MATERIAL_FILLED_LOOKS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOOKS_3))  
      return wxString(SVG_MATERIAL_FILLED_LOOKS_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOOKS_4))  
      return wxString(SVG_MATERIAL_FILLED_LOOKS_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOOKS_5))  
      return wxString(SVG_MATERIAL_FILLED_LOOKS_5);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOOKS_6))  
      return wxString(SVG_MATERIAL_FILLED_LOOKS_6);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOOKS_ONE))  
      return wxString(SVG_MATERIAL_FILLED_LOOKS_ONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOOKS_TWO))  
      return wxString(SVG_MATERIAL_FILLED_LOOKS_TWO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOOP))  
      return wxString(SVG_MATERIAL_FILLED_LOOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOUPE))  
      return wxString(SVG_MATERIAL_FILLED_LOUPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOW_PRIORITY))  
      return wxString(SVG_MATERIAL_FILLED_LOW_PRIORITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LOYALTY))  
      return wxString(SVG_MATERIAL_FILLED_LOYALTY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LTE_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_LTE_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LTE_PLUS_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_LTE_PLUS_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LUGGAGE))  
      return wxString(SVG_MATERIAL_FILLED_LUGGAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LUNCH_DINING))  
      return wxString(SVG_MATERIAL_FILLED_LUNCH_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LYRICS))  
      return wxString(SVG_MATERIAL_FILLED_LYRICS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MACRO_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MACRO_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAIL))  
      return wxString(SVG_MATERIAL_FILLED_MAIL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAIL_LOCK))  
      return wxString(SVG_MATERIAL_FILLED_MAIL_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAIL_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_MAIL_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MALE))  
      return wxString(SVG_MATERIAL_FILLED_MALE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAN))  
      return wxString(SVG_MATERIAL_FILLED_MAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAN_2))  
      return wxString(SVG_MATERIAL_FILLED_MAN_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAN_3))  
      return wxString(SVG_MATERIAL_FILLED_MAN_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAN_4))  
      return wxString(SVG_MATERIAL_FILLED_MAN_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MANAGE_ACCOUNTS))  
      return wxString(SVG_MATERIAL_FILLED_MANAGE_ACCOUNTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MANAGE_HISTORY))  
      return wxString(SVG_MATERIAL_FILLED_MANAGE_HISTORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MANAGE_SEARCH))  
      return wxString(SVG_MATERIAL_FILLED_MANAGE_SEARCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAP))  
      return wxString(SVG_MATERIAL_FILLED_MAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAPS_HOME_WORK))  
      return wxString(SVG_MATERIAL_FILLED_MAPS_HOME_WORK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAPS_UGC))  
      return wxString(SVG_MATERIAL_FILLED_MAPS_UGC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARGIN))  
      return wxString(SVG_MATERIAL_FILLED_MARGIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARK_AS_UNREAD))  
      return wxString(SVG_MATERIAL_FILLED_MARK_AS_UNREAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARK_CHAT_READ))  
      return wxString(SVG_MATERIAL_FILLED_MARK_CHAT_READ);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARK_CHAT_UNREAD))  
      return wxString(SVG_MATERIAL_FILLED_MARK_CHAT_UNREAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARK_EMAIL_READ))  
      return wxString(SVG_MATERIAL_FILLED_MARK_EMAIL_READ);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARK_EMAIL_UNREAD))  
      return wxString(SVG_MATERIAL_FILLED_MARK_EMAIL_UNREAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARK_UNREAD_CHAT_ALT))  
      return wxString(SVG_MATERIAL_FILLED_MARK_UNREAD_CHAT_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARKUNREAD))  
      return wxString(SVG_MATERIAL_FILLED_MARKUNREAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARKUNREAD_MAILBOX))  
      return wxString(SVG_MATERIAL_FILLED_MARKUNREAD_MAILBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MASKS))  
      return wxString(SVG_MATERIAL_FILLED_MASKS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAXIMIZE))  
      return wxString(SVG_MATERIAL_FILLED_MAXIMIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDIA_BLUETOOTH_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MEDIA_BLUETOOTH_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDIA_BLUETOOTH_ON))  
      return wxString(SVG_MATERIAL_FILLED_MEDIA_BLUETOOTH_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDIATION))  
      return wxString(SVG_MATERIAL_FILLED_MEDIATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDICAL_INFORMATION))  
      return wxString(SVG_MATERIAL_FILLED_MEDICAL_INFORMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDICAL_SERVICES))  
      return wxString(SVG_MATERIAL_FILLED_MEDICAL_SERVICES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDICATION))  
      return wxString(SVG_MATERIAL_FILLED_MEDICATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDICATION_LIQUID))  
      return wxString(SVG_MATERIAL_FILLED_MEDICATION_LIQUID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEETING_ROOM))  
      return wxString(SVG_MATERIAL_FILLED_MEETING_ROOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEMORY))  
      return wxString(SVG_MATERIAL_FILLED_MEMORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MENU))  
      return wxString(SVG_MATERIAL_FILLED_MENU);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MENU_BOOK))  
      return wxString(SVG_MATERIAL_FILLED_MENU_BOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MENU_OPEN))  
      return wxString(SVG_MATERIAL_FILLED_MENU_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MERGE))  
      return wxString(SVG_MATERIAL_FILLED_MERGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MERGE_TYPE))  
      return wxString(SVG_MATERIAL_FILLED_MERGE_TYPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MESSAGE))  
      return wxString(SVG_MATERIAL_FILLED_MESSAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MIC))  
      return wxString(SVG_MATERIAL_FILLED_MIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MIC_EXTERNAL_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MIC_EXTERNAL_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MIC_EXTERNAL_ON))  
      return wxString(SVG_MATERIAL_FILLED_MIC_EXTERNAL_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MIC_NONE))  
      return wxString(SVG_MATERIAL_FILLED_MIC_NONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MIC_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MIC_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MICROWAVE))  
      return wxString(SVG_MATERIAL_FILLED_MICROWAVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MILITARY_TECH))  
      return wxString(SVG_MATERIAL_FILLED_MILITARY_TECH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MINIMIZE))  
      return wxString(SVG_MATERIAL_FILLED_MINIMIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MINOR_CRASH))  
      return wxString(SVG_MATERIAL_FILLED_MINOR_CRASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MISCELLANEOUS_SERVICES))  
      return wxString(SVG_MATERIAL_FILLED_MISCELLANEOUS_SERVICES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MISSED_VIDEO_CALL))  
      return wxString(SVG_MATERIAL_FILLED_MISSED_VIDEO_CALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MMS))  
      return wxString(SVG_MATERIAL_FILLED_MMS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOBILE_FRIENDLY))  
      return wxString(SVG_MATERIAL_FILLED_MOBILE_FRIENDLY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOBILE_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MOBILE_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOBILE_SCREEN_SHARE))  
      return wxString(SVG_MATERIAL_FILLED_MOBILE_SCREEN_SHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOBILEDATA_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MOBILEDATA_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODE))  
      return wxString(SVG_MATERIAL_FILLED_MODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODE_COMMENT))  
      return wxString(SVG_MATERIAL_FILLED_MODE_COMMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODE_EDIT))  
      return wxString(SVG_MATERIAL_FILLED_MODE_EDIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODE_EDIT_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_MODE_EDIT_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODE_FAN_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MODE_FAN_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODE_NIGHT))  
      return wxString(SVG_MATERIAL_FILLED_MODE_NIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODE_OF_TRAVEL))  
      return wxString(SVG_MATERIAL_FILLED_MODE_OF_TRAVEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODE_STANDBY))  
      return wxString(SVG_MATERIAL_FILLED_MODE_STANDBY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODEL_TRAINING))  
      return wxString(SVG_MATERIAL_FILLED_MODEL_TRAINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONETIZATION_ON))  
      return wxString(SVG_MATERIAL_FILLED_MONETIZATION_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY))  
      return wxString(SVG_MATERIAL_FILLED_MONEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MONEY_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_OFF_CSRED))  
      return wxString(SVG_MATERIAL_FILLED_MONEY_OFF_CSRED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONITOR))  
      return wxString(SVG_MATERIAL_FILLED_MONITOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONITOR_HEART))  
      return wxString(SVG_MATERIAL_FILLED_MONITOR_HEART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONITOR_WEIGHT))  
      return wxString(SVG_MATERIAL_FILLED_MONITOR_WEIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONOCHROME_PHOTOS))  
      return wxString(SVG_MATERIAL_FILLED_MONOCHROME_PHOTOS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOOD))  
      return wxString(SVG_MATERIAL_FILLED_MOOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOOD_BAD))  
      return wxString(SVG_MATERIAL_FILLED_MOOD_BAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOPED))  
      return wxString(SVG_MATERIAL_FILLED_MOPED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MORE))  
      return wxString(SVG_MATERIAL_FILLED_MORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MORE_HORIZ))  
      return wxString(SVG_MATERIAL_FILLED_MORE_HORIZ);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MORE_TIME))  
      return wxString(SVG_MATERIAL_FILLED_MORE_TIME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MORE_VERT))  
      return wxString(SVG_MATERIAL_FILLED_MORE_VERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOSQUE))  
      return wxString(SVG_MATERIAL_FILLED_MOSQUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOTION_PHOTOS_AUTO))  
      return wxString(SVG_MATERIAL_FILLED_MOTION_PHOTOS_AUTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOTION_PHOTOS_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MOTION_PHOTOS_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOTION_PHOTOS_ON))  
      return wxString(SVG_MATERIAL_FILLED_MOTION_PHOTOS_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOTION_PHOTOS_PAUSE))  
      return wxString(SVG_MATERIAL_FILLED_MOTION_PHOTOS_PAUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOTION_PHOTOS_PAUSED))  
      return wxString(SVG_MATERIAL_FILLED_MOTION_PHOTOS_PAUSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOUSE))  
      return wxString(SVG_MATERIAL_FILLED_MOUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOVE_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_MOVE_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOVE_TO_INBOX))  
      return wxString(SVG_MATERIAL_FILLED_MOVE_TO_INBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOVE_UP))  
      return wxString(SVG_MATERIAL_FILLED_MOVE_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOVIE))  
      return wxString(SVG_MATERIAL_FILLED_MOVIE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOVIE_CREATION))  
      return wxString(SVG_MATERIAL_FILLED_MOVIE_CREATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOVIE_FILTER))  
      return wxString(SVG_MATERIAL_FILLED_MOVIE_FILTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOVING))  
      return wxString(SVG_MATERIAL_FILLED_MOVING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MP))  
      return wxString(SVG_MATERIAL_FILLED_MP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MULTILINE_CHART))  
      return wxString(SVG_MATERIAL_FILLED_MULTILINE_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MULTIPLE_STOP))  
      return wxString(SVG_MATERIAL_FILLED_MULTIPLE_STOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MUSEUM))  
      return wxString(SVG_MATERIAL_FILLED_MUSEUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MUSIC_NOTE))  
      return wxString(SVG_MATERIAL_FILLED_MUSIC_NOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MUSIC_OFF))  
      return wxString(SVG_MATERIAL_FILLED_MUSIC_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MUSIC_VIDEO))  
      return wxString(SVG_MATERIAL_FILLED_MUSIC_VIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MY_LOCATION))  
      return wxString(SVG_MATERIAL_FILLED_MY_LOCATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NAT))  
      return wxString(SVG_MATERIAL_FILLED_NAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NATURE))  
      return wxString(SVG_MATERIAL_FILLED_NATURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NATURE_PEOPLE))  
      return wxString(SVG_MATERIAL_FILLED_NATURE_PEOPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NAVIGATE_BEFORE))  
      return wxString(SVG_MATERIAL_FILLED_NAVIGATE_BEFORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NAVIGATE_NEXT))  
      return wxString(SVG_MATERIAL_FILLED_NAVIGATE_NEXT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NAVIGATION))  
      return wxString(SVG_MATERIAL_FILLED_NAVIGATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEAR_ME))  
      return wxString(SVG_MATERIAL_FILLED_NEAR_ME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEAR_ME_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_NEAR_ME_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEARBY_ERROR))  
      return wxString(SVG_MATERIAL_FILLED_NEARBY_ERROR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEARBY_OFF))  
      return wxString(SVG_MATERIAL_FILLED_NEARBY_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEST_CAM_WIRED_STAND))  
      return wxString(SVG_MATERIAL_FILLED_NEST_CAM_WIRED_STAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NETWORK_CELL))  
      return wxString(SVG_MATERIAL_FILLED_NETWORK_CELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NETWORK_CHECK))  
      return wxString(SVG_MATERIAL_FILLED_NETWORK_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NETWORK_LOCKED))  
      return wxString(SVG_MATERIAL_FILLED_NETWORK_LOCKED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NETWORK_PING))  
      return wxString(SVG_MATERIAL_FILLED_NETWORK_PING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NETWORK_WIFI))  
      return wxString(SVG_MATERIAL_FILLED_NETWORK_WIFI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NETWORK_WIFI_1_BAR))  
      return wxString(SVG_MATERIAL_FILLED_NETWORK_WIFI_1_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NETWORK_WIFI_2_BAR))  
      return wxString(SVG_MATERIAL_FILLED_NETWORK_WIFI_2_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NETWORK_WIFI_3_BAR))  
      return wxString(SVG_MATERIAL_FILLED_NETWORK_WIFI_3_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEW_LABEL))  
      return wxString(SVG_MATERIAL_FILLED_NEW_LABEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEW_RELEASES))  
      return wxString(SVG_MATERIAL_FILLED_NEW_RELEASES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEWSPAPER))  
      return wxString(SVG_MATERIAL_FILLED_NEWSPAPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEXT_PLAN))  
      return wxString(SVG_MATERIAL_FILLED_NEXT_PLAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEXT_WEEK))  
      return wxString(SVG_MATERIAL_FILLED_NEXT_WEEK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NFC))  
      return wxString(SVG_MATERIAL_FILLED_NFC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NIGHT_SHELTER))  
      return wxString(SVG_MATERIAL_FILLED_NIGHT_SHELTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NIGHTLIFE))  
      return wxString(SVG_MATERIAL_FILLED_NIGHTLIFE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NIGHTLIGHT))  
      return wxString(SVG_MATERIAL_FILLED_NIGHTLIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NIGHTLIGHT_ROUND))  
      return wxString(SVG_MATERIAL_FILLED_NIGHTLIGHT_ROUND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NIGHTS_STAY))  
      return wxString(SVG_MATERIAL_FILLED_NIGHTS_STAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_ACCOUNTS))  
      return wxString(SVG_MATERIAL_FILLED_NO_ACCOUNTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_ADULT_CONTENT))  
      return wxString(SVG_MATERIAL_FILLED_NO_ADULT_CONTENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_BACKPACK))  
      return wxString(SVG_MATERIAL_FILLED_NO_BACKPACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_CELL))  
      return wxString(SVG_MATERIAL_FILLED_NO_CELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_CRASH))  
      return wxString(SVG_MATERIAL_FILLED_NO_CRASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_DRINKS))  
      return wxString(SVG_MATERIAL_FILLED_NO_DRINKS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_ENCRYPTION))  
      return wxString(SVG_MATERIAL_FILLED_NO_ENCRYPTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_ENCRYPTION_GMAILERRORRED))  
      return wxString(SVG_MATERIAL_FILLED_NO_ENCRYPTION_GMAILERRORRED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_FLASH))  
      return wxString(SVG_MATERIAL_FILLED_NO_FLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_FOOD))  
      return wxString(SVG_MATERIAL_FILLED_NO_FOOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_LUGGAGE))  
      return wxString(SVG_MATERIAL_FILLED_NO_LUGGAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_MEALS))  
      return wxString(SVG_MATERIAL_FILLED_NO_MEALS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_MEETING_ROOM))  
      return wxString(SVG_MATERIAL_FILLED_NO_MEETING_ROOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_PHOTOGRAPHY))  
      return wxString(SVG_MATERIAL_FILLED_NO_PHOTOGRAPHY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_SIM))  
      return wxString(SVG_MATERIAL_FILLED_NO_SIM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_STROLLER))  
      return wxString(SVG_MATERIAL_FILLED_NO_STROLLER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NO_TRANSFER))  
      return wxString(SVG_MATERIAL_FILLED_NO_TRANSFER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOISE_AWARE))  
      return wxString(SVG_MATERIAL_FILLED_NOISE_AWARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOISE_CONTROL_OFF))  
      return wxString(SVG_MATERIAL_FILLED_NOISE_CONTROL_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NORDIC_WALKING))  
      return wxString(SVG_MATERIAL_FILLED_NORDIC_WALKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NORTH))  
      return wxString(SVG_MATERIAL_FILLED_NORTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NORTH_EAST))  
      return wxString(SVG_MATERIAL_FILLED_NORTH_EAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NORTH_WEST))  
      return wxString(SVG_MATERIAL_FILLED_NORTH_WEST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOT_ACCESSIBLE))  
      return wxString(SVG_MATERIAL_FILLED_NOT_ACCESSIBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOT_INTERESTED))  
      return wxString(SVG_MATERIAL_FILLED_NOT_INTERESTED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOT_LISTED_LOCATION))  
      return wxString(SVG_MATERIAL_FILLED_NOT_LISTED_LOCATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOT_STARTED))  
      return wxString(SVG_MATERIAL_FILLED_NOT_STARTED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTE))  
      return wxString(SVG_MATERIAL_FILLED_NOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTE_ADD))  
      return wxString(SVG_MATERIAL_FILLED_NOTE_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTE_ALT))  
      return wxString(SVG_MATERIAL_FILLED_NOTE_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTES))  
      return wxString(SVG_MATERIAL_FILLED_NOTES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTIFICATION_ADD))  
      return wxString(SVG_MATERIAL_FILLED_NOTIFICATION_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTIFICATION_IMPORTANT))  
      return wxString(SVG_MATERIAL_FILLED_NOTIFICATION_IMPORTANT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTIFICATIONS))  
      return wxString(SVG_MATERIAL_FILLED_NOTIFICATIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTIFICATIONS_ACTIVE))  
      return wxString(SVG_MATERIAL_FILLED_NOTIFICATIONS_ACTIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTIFICATIONS_NONE))  
      return wxString(SVG_MATERIAL_FILLED_NOTIFICATIONS_NONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTIFICATIONS_OFF))  
      return wxString(SVG_MATERIAL_FILLED_NOTIFICATIONS_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTIFICATIONS_PAUSED))  
      return wxString(SVG_MATERIAL_FILLED_NOTIFICATIONS_PAUSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NUMBERS))  
      return wxString(SVG_MATERIAL_FILLED_NUMBERS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OFFLINE_BOLT))  
      return wxString(SVG_MATERIAL_FILLED_OFFLINE_BOLT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OFFLINE_PIN))  
      return wxString(SVG_MATERIAL_FILLED_OFFLINE_PIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OFFLINE_SHARE))  
      return wxString(SVG_MATERIAL_FILLED_OFFLINE_SHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OIL_BARREL))  
      return wxString(SVG_MATERIAL_FILLED_OIL_BARREL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ON_DEVICE_TRAINING))  
      return wxString(SVG_MATERIAL_FILLED_ON_DEVICE_TRAINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ONDEMAND_VIDEO))  
      return wxString(SVG_MATERIAL_FILLED_ONDEMAND_VIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ONLINE_PREDICTION))  
      return wxString(SVG_MATERIAL_FILLED_ONLINE_PREDICTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPACITY))  
      return wxString(SVG_MATERIAL_FILLED_OPACITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPEN_IN_BROWSER))  
      return wxString(SVG_MATERIAL_FILLED_OPEN_IN_BROWSER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPEN_IN_FULL))  
      return wxString(SVG_MATERIAL_FILLED_OPEN_IN_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPEN_IN_NEW))  
      return wxString(SVG_MATERIAL_FILLED_OPEN_IN_NEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPEN_IN_NEW_OFF))  
      return wxString(SVG_MATERIAL_FILLED_OPEN_IN_NEW_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPEN_WITH))  
      return wxString(SVG_MATERIAL_FILLED_OPEN_WITH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OTHER_HOUSES))  
      return wxString(SVG_MATERIAL_FILLED_OTHER_HOUSES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OUTBOUND))  
      return wxString(SVG_MATERIAL_FILLED_OUTBOUND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OUTBOX))  
      return wxString(SVG_MATERIAL_FILLED_OUTBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OUTDOOR_GRILL))  
      return wxString(SVG_MATERIAL_FILLED_OUTDOOR_GRILL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OUTLET))  
      return wxString(SVG_MATERIAL_FILLED_OUTLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OUTLINED_FLAG))  
      return wxString(SVG_MATERIAL_FILLED_OUTLINED_FLAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OUTPUT))  
      return wxString(SVG_MATERIAL_FILLED_OUTPUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PADDING))  
      return wxString(SVG_MATERIAL_FILLED_PADDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAGES))  
      return wxString(SVG_MATERIAL_FILLED_PAGES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAGEVIEW))  
      return wxString(SVG_MATERIAL_FILLED_PAGEVIEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAID))  
      return wxString(SVG_MATERIAL_FILLED_PAID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PALETTE))  
      return wxString(SVG_MATERIAL_FILLED_PALETTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAN_TOOL))  
      return wxString(SVG_MATERIAL_FILLED_PAN_TOOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAN_TOOL_ALT))  
      return wxString(SVG_MATERIAL_FILLED_PAN_TOOL_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA_FISH_EYE))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA_FISH_EYE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA_HORIZONTAL))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA_HORIZONTAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA_HORIZONTAL_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA_HORIZONTAL_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA_PHOTOSPHERE))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA_PHOTOSPHERE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA_PHOTOSPHERE_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA_PHOTOSPHERE_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA_VERTICAL))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA_VERTICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA_VERTICAL_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA_VERTICAL_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA_WIDE_ANGLE))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA_WIDE_ANGLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PANORAMA_WIDE_ANGLE_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_PANORAMA_WIDE_ANGLE_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PARAGLIDING))  
      return wxString(SVG_MATERIAL_FILLED_PARAGLIDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PARK))  
      return wxString(SVG_MATERIAL_FILLED_PARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PARTY_MODE))  
      return wxString(SVG_MATERIAL_FILLED_PARTY_MODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PASSWORD))  
      return wxString(SVG_MATERIAL_FILLED_PASSWORD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PATTERN))  
      return wxString(SVG_MATERIAL_FILLED_PATTERN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAUSE))  
      return wxString(SVG_MATERIAL_FILLED_PAUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAUSE_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_PAUSE_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAUSE_CIRCLE_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_PAUSE_CIRCLE_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAUSE_CIRCLE_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_PAUSE_CIRCLE_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAUSE_PRESENTATION))  
      return wxString(SVG_MATERIAL_FILLED_PAUSE_PRESENTATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAYMENT))  
      return wxString(SVG_MATERIAL_FILLED_PAYMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAYMENTS))  
      return wxString(SVG_MATERIAL_FILLED_PAYMENTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEDAL_BIKE))  
      return wxString(SVG_MATERIAL_FILLED_PEDAL_BIKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PENDING))  
      return wxString(SVG_MATERIAL_FILLED_PENDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PENDING_ACTIONS))  
      return wxString(SVG_MATERIAL_FILLED_PENDING_ACTIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PENTAGON))  
      return wxString(SVG_MATERIAL_FILLED_PENTAGON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE))  
      return wxString(SVG_MATERIAL_FILLED_PEOPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE_ALT))  
      return wxString(SVG_MATERIAL_FILLED_PEOPLE_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEOPLE_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_PEOPLE_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERCENT))  
      return wxString(SVG_MATERIAL_FILLED_PERCENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERM_CAMERA_MIC))  
      return wxString(SVG_MATERIAL_FILLED_PERM_CAMERA_MIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERM_CONTACT_CALENDAR))  
      return wxString(SVG_MATERIAL_FILLED_PERM_CONTACT_CALENDAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERM_DATA_SETTING))  
      return wxString(SVG_MATERIAL_FILLED_PERM_DATA_SETTING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERM_DEVICE_INFORMATION))  
      return wxString(SVG_MATERIAL_FILLED_PERM_DEVICE_INFORMATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERM_IDENTITY))  
      return wxString(SVG_MATERIAL_FILLED_PERM_IDENTITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERM_MEDIA))  
      return wxString(SVG_MATERIAL_FILLED_PERM_MEDIA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERM_PHONE_MSG))  
      return wxString(SVG_MATERIAL_FILLED_PERM_PHONE_MSG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERM_SCAN_WIFI))  
      return wxString(SVG_MATERIAL_FILLED_PERM_SCAN_WIFI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON))  
      return wxString(SVG_MATERIAL_FILLED_PERSON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_2))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_3))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_4))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_ADD))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_ADD_ALT))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_ADD_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_ADD_ALT_1))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_ADD_ALT_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_ADD_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_ADD_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_OFF))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_PIN))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_PIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_PIN_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_PIN_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_REMOVE))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_REMOVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_REMOVE_ALT_1))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_REMOVE_ALT_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSON_SEARCH))  
      return wxString(SVG_MATERIAL_FILLED_PERSON_SEARCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSONAL_INJURY))  
      return wxString(SVG_MATERIAL_FILLED_PERSONAL_INJURY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERSONAL_VIDEO))  
      return wxString(SVG_MATERIAL_FILLED_PERSONAL_VIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEST_CONTROL))  
      return wxString(SVG_MATERIAL_FILLED_PEST_CONTROL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEST_CONTROL_RODENT))  
      return wxString(SVG_MATERIAL_FILLED_PEST_CONTROL_RODENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PETS))  
      return wxString(SVG_MATERIAL_FILLED_PETS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHISHING))  
      return wxString(SVG_MATERIAL_FILLED_PHISHING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE))  
      return wxString(SVG_MATERIAL_FILLED_PHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_ANDROID))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_ANDROID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_BLUETOOTH_SPEAKER))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_BLUETOOTH_SPEAKER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_CALLBACK))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_CALLBACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_ENABLED))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_ENABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_FORWARDED))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_FORWARDED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_IPHONE))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_IPHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_LOCKED))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_LOCKED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_MISSED))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_MISSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONE_PAUSED))  
      return wxString(SVG_MATERIAL_FILLED_PHONE_PAUSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONELINK))  
      return wxString(SVG_MATERIAL_FILLED_PHONELINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONELINK_ERASE))  
      return wxString(SVG_MATERIAL_FILLED_PHONELINK_ERASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONELINK_LOCK))  
      return wxString(SVG_MATERIAL_FILLED_PHONELINK_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONELINK_OFF))  
      return wxString(SVG_MATERIAL_FILLED_PHONELINK_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONELINK_RING))  
      return wxString(SVG_MATERIAL_FILLED_PHONELINK_RING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHONELINK_SETUP))  
      return wxString(SVG_MATERIAL_FILLED_PHONELINK_SETUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_ALBUM))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO_ALBUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_CAMERA))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO_CAMERA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_CAMERA_BACK))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO_CAMERA_BACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_CAMERA_FRONT))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO_CAMERA_FRONT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_FILTER))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO_FILTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_LIBRARY))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO_LIBRARY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_SIZE_SELECT_ACTUAL))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO_SIZE_SELECT_ACTUAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_SIZE_SELECT_LARGE))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO_SIZE_SELECT_LARGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOTO_SIZE_SELECT_SMALL))  
      return wxString(SVG_MATERIAL_FILLED_PHOTO_SIZE_SELECT_SMALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHP))  
      return wxString(SVG_MATERIAL_FILLED_PHP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIANO))  
      return wxString(SVG_MATERIAL_FILLED_PIANO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIANO_OFF))  
      return wxString(SVG_MATERIAL_FILLED_PIANO_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PICTURE_AS_PDF))  
      return wxString(SVG_MATERIAL_FILLED_PICTURE_AS_PDF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PICTURE_IN_PICTURE))  
      return wxString(SVG_MATERIAL_FILLED_PICTURE_IN_PICTURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PICTURE_IN_PICTURE_ALT))  
      return wxString(SVG_MATERIAL_FILLED_PICTURE_IN_PICTURE_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIE_CHART))  
      return wxString(SVG_MATERIAL_FILLED_PIE_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIE_CHART_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_PIE_CHART_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIN))  
      return wxString(SVG_MATERIAL_FILLED_PIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIN_DROP))  
      return wxString(SVG_MATERIAL_FILLED_PIN_DROP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIN_END))  
      return wxString(SVG_MATERIAL_FILLED_PIN_END);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIN_INVOKE))  
      return wxString(SVG_MATERIAL_FILLED_PIN_INVOKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PINCH))  
      return wxString(SVG_MATERIAL_FILLED_PINCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIVOT_TABLE_CHART))  
      return wxString(SVG_MATERIAL_FILLED_PIVOT_TABLE_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIX))  
      return wxString(SVG_MATERIAL_FILLED_PIX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLACE))  
      return wxString(SVG_MATERIAL_FILLED_PLACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAGIARISM))  
      return wxString(SVG_MATERIAL_FILLED_PLAGIARISM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAY_ARROW))  
      return wxString(SVG_MATERIAL_FILLED_PLAY_ARROW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAY_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_PLAY_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAY_CIRCLE_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_PLAY_CIRCLE_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAY_CIRCLE_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_PLAY_CIRCLE_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAY_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_PLAY_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAY_FOR_WORK))  
      return wxString(SVG_MATERIAL_FILLED_PLAY_FOR_WORK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAY_LESSON))  
      return wxString(SVG_MATERIAL_FILLED_PLAY_LESSON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAYLIST_ADD))  
      return wxString(SVG_MATERIAL_FILLED_PLAYLIST_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAYLIST_ADD_CHECK))  
      return wxString(SVG_MATERIAL_FILLED_PLAYLIST_ADD_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAYLIST_ADD_CHECK_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_PLAYLIST_ADD_CHECK_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAYLIST_ADD_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_PLAYLIST_ADD_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAYLIST_PLAY))  
      return wxString(SVG_MATERIAL_FILLED_PLAYLIST_PLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAYLIST_REMOVE))  
      return wxString(SVG_MATERIAL_FILLED_PLAYLIST_REMOVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUMBING))  
      return wxString(SVG_MATERIAL_FILLED_PLUMBING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLUS_ONE))  
      return wxString(SVG_MATERIAL_FILLED_PLUS_ONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PODCASTS))  
      return wxString(SVG_MATERIAL_FILLED_PODCASTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POINT_OF_SALE))  
      return wxString(SVG_MATERIAL_FILLED_POINT_OF_SALE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POLICY))  
      return wxString(SVG_MATERIAL_FILLED_POLICY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POLL))  
      return wxString(SVG_MATERIAL_FILLED_POLL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POLYLINE))  
      return wxString(SVG_MATERIAL_FILLED_POLYLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POLYMER))  
      return wxString(SVG_MATERIAL_FILLED_POLYMER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POOL))  
      return wxString(SVG_MATERIAL_FILLED_POOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PORTABLE_WIFI_OFF))  
      return wxString(SVG_MATERIAL_FILLED_PORTABLE_WIFI_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PORTRAIT))  
      return wxString(SVG_MATERIAL_FILLED_PORTRAIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POST_ADD))  
      return wxString(SVG_MATERIAL_FILLED_POST_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POWER))  
      return wxString(SVG_MATERIAL_FILLED_POWER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POWER_INPUT))  
      return wxString(SVG_MATERIAL_FILLED_POWER_INPUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POWER_OFF))  
      return wxString(SVG_MATERIAL_FILLED_POWER_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_POWER_SETTINGS_NEW))  
      return wxString(SVG_MATERIAL_FILLED_POWER_SETTINGS_NEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRECISION_MANUFACTURING))  
      return wxString(SVG_MATERIAL_FILLED_PRECISION_MANUFACTURING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PREGNANT_WOMAN))  
      return wxString(SVG_MATERIAL_FILLED_PREGNANT_WOMAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRESENT_TO_ALL))  
      return wxString(SVG_MATERIAL_FILLED_PRESENT_TO_ALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PREVIEW))  
      return wxString(SVG_MATERIAL_FILLED_PREVIEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRICE_CHANGE))  
      return wxString(SVG_MATERIAL_FILLED_PRICE_CHANGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRICE_CHECK))  
      return wxString(SVG_MATERIAL_FILLED_PRICE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRINT))  
      return wxString(SVG_MATERIAL_FILLED_PRINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRINT_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_PRINT_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRIORITY_HIGH))  
      return wxString(SVG_MATERIAL_FILLED_PRIORITY_HIGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRIVACY_TIP))  
      return wxString(SVG_MATERIAL_FILLED_PRIVACY_TIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRIVATE_CONNECTIVITY))  
      return wxString(SVG_MATERIAL_FILLED_PRIVATE_CONNECTIVITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRODUCTION_QUANTITY_LIMITS))  
      return wxString(SVG_MATERIAL_FILLED_PRODUCTION_QUANTITY_LIMITS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PROPANE))  
      return wxString(SVG_MATERIAL_FILLED_PROPANE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PROPANE_TANK))  
      return wxString(SVG_MATERIAL_FILLED_PROPANE_TANK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PSYCHOLOGY))  
      return wxString(SVG_MATERIAL_FILLED_PSYCHOLOGY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PSYCHOLOGY_ALT))  
      return wxString(SVG_MATERIAL_FILLED_PSYCHOLOGY_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUBLIC))  
      return wxString(SVG_MATERIAL_FILLED_PUBLIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUBLIC_OFF))  
      return wxString(SVG_MATERIAL_FILLED_PUBLIC_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUBLISH))  
      return wxString(SVG_MATERIAL_FILLED_PUBLISH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUBLISHED_WITH_CHANGES))  
      return wxString(SVG_MATERIAL_FILLED_PUBLISHED_WITH_CHANGES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUNCH_CLOCK))  
      return wxString(SVG_MATERIAL_FILLED_PUNCH_CLOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUSH_PIN))  
      return wxString(SVG_MATERIAL_FILLED_PUSH_PIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QR_CODE))  
      return wxString(SVG_MATERIAL_FILLED_QR_CODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QR_CODE_2))  
      return wxString(SVG_MATERIAL_FILLED_QR_CODE_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QR_CODE_SCANNER))  
      return wxString(SVG_MATERIAL_FILLED_QR_CODE_SCANNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUERY_BUILDER))  
      return wxString(SVG_MATERIAL_FILLED_QUERY_BUILDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUERY_STATS))  
      return wxString(SVG_MATERIAL_FILLED_QUERY_STATS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUESTION_ANSWER))  
      return wxString(SVG_MATERIAL_FILLED_QUESTION_ANSWER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUESTION_MARK))  
      return wxString(SVG_MATERIAL_FILLED_QUESTION_MARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUEUE))  
      return wxString(SVG_MATERIAL_FILLED_QUEUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUEUE_MUSIC))  
      return wxString(SVG_MATERIAL_FILLED_QUEUE_MUSIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUEUE_PLAY_NEXT))  
      return wxString(SVG_MATERIAL_FILLED_QUEUE_PLAY_NEXT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUICKREPLY))  
      return wxString(SVG_MATERIAL_FILLED_QUICKREPLY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUIZ))  
      return wxString(SVG_MATERIAL_FILLED_QUIZ);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_R_MOBILEDATA))  
      return wxString(SVG_MATERIAL_FILLED_R_MOBILEDATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RADAR))  
      return wxString(SVG_MATERIAL_FILLED_RADAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RADIO))  
      return wxString(SVG_MATERIAL_FILLED_RADIO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RADIO_BUTTON_CHECKED))  
      return wxString(SVG_MATERIAL_FILLED_RADIO_BUTTON_CHECKED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RADIO_BUTTON_UNCHECKED))  
      return wxString(SVG_MATERIAL_FILLED_RADIO_BUTTON_UNCHECKED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RAILWAY_ALERT))  
      return wxString(SVG_MATERIAL_FILLED_RAILWAY_ALERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RAMEN_DINING))  
      return wxString(SVG_MATERIAL_FILLED_RAMEN_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RAMP_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_RAMP_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RAMP_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_RAMP_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RATE_REVIEW))  
      return wxString(SVG_MATERIAL_FILLED_RATE_REVIEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RAW_OFF))  
      return wxString(SVG_MATERIAL_FILLED_RAW_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RAW_ON))  
      return wxString(SVG_MATERIAL_FILLED_RAW_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_READ_MORE))  
      return wxString(SVG_MATERIAL_FILLED_READ_MORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REAL_ESTATE_AGENT))  
      return wxString(SVG_MATERIAL_FILLED_REAL_ESTATE_AGENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECEIPT))  
      return wxString(SVG_MATERIAL_FILLED_RECEIPT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECEIPT_LONG))  
      return wxString(SVG_MATERIAL_FILLED_RECEIPT_LONG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECENT_ACTORS))  
      return wxString(SVG_MATERIAL_FILLED_RECENT_ACTORS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECOMMEND))  
      return wxString(SVG_MATERIAL_FILLED_RECOMMEND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECORD_VOICE_OVER))  
      return wxString(SVG_MATERIAL_FILLED_RECORD_VOICE_OVER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECTANGLE))  
      return wxString(SVG_MATERIAL_FILLED_RECTANGLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECYCLING))  
      return wxString(SVG_MATERIAL_FILLED_RECYCLING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REDEEM))  
      return wxString(SVG_MATERIAL_FILLED_REDEEM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REDO))  
      return wxString(SVG_MATERIAL_FILLED_REDO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REDUCE_CAPACITY))  
      return wxString(SVG_MATERIAL_FILLED_REDUCE_CAPACITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REFRESH))  
      return wxString(SVG_MATERIAL_FILLED_REFRESH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMEMBER_ME))  
      return wxString(SVG_MATERIAL_FILLED_REMEMBER_ME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMOVE))  
      return wxString(SVG_MATERIAL_FILLED_REMOVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMOVE_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_REMOVE_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMOVE_CIRCLE_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_REMOVE_CIRCLE_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMOVE_DONE))  
      return wxString(SVG_MATERIAL_FILLED_REMOVE_DONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMOVE_FROM_QUEUE))  
      return wxString(SVG_MATERIAL_FILLED_REMOVE_FROM_QUEUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMOVE_MODERATOR))  
      return wxString(SVG_MATERIAL_FILLED_REMOVE_MODERATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMOVE_RED_EYE))  
      return wxString(SVG_MATERIAL_FILLED_REMOVE_RED_EYE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMOVE_ROAD))  
      return wxString(SVG_MATERIAL_FILLED_REMOVE_ROAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REMOVE_SHOPPING_CART))  
      return wxString(SVG_MATERIAL_FILLED_REMOVE_SHOPPING_CART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REORDER))  
      return wxString(SVG_MATERIAL_FILLED_REORDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPARTITION))  
      return wxString(SVG_MATERIAL_FILLED_REPARTITION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPEAT))  
      return wxString(SVG_MATERIAL_FILLED_REPEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPEAT_ON))  
      return wxString(SVG_MATERIAL_FILLED_REPEAT_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPEAT_ONE))  
      return wxString(SVG_MATERIAL_FILLED_REPEAT_ONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPEAT_ONE_ON))  
      return wxString(SVG_MATERIAL_FILLED_REPEAT_ONE_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLAY))  
      return wxString(SVG_MATERIAL_FILLED_REPLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLAY_10))  
      return wxString(SVG_MATERIAL_FILLED_REPLAY_10);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLAY_30))  
      return wxString(SVG_MATERIAL_FILLED_REPLAY_30);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLAY_5))  
      return wxString(SVG_MATERIAL_FILLED_REPLAY_5);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLAY_CIRCLE_FILLED))  
      return wxString(SVG_MATERIAL_FILLED_REPLAY_CIRCLE_FILLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLY))  
      return wxString(SVG_MATERIAL_FILLED_REPLY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLY_ALL))  
      return wxString(SVG_MATERIAL_FILLED_REPLY_ALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPORT))  
      return wxString(SVG_MATERIAL_FILLED_REPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPORT_GMAILERRORRED))  
      return wxString(SVG_MATERIAL_FILLED_REPORT_GMAILERRORRED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPORT_OFF))  
      return wxString(SVG_MATERIAL_FILLED_REPORT_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPORT_PROBLEM))  
      return wxString(SVG_MATERIAL_FILLED_REPORT_PROBLEM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REQUEST_PAGE))  
      return wxString(SVG_MATERIAL_FILLED_REQUEST_PAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REQUEST_QUOTE))  
      return wxString(SVG_MATERIAL_FILLED_REQUEST_QUOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESET_TV))  
      return wxString(SVG_MATERIAL_FILLED_RESET_TV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESTART_ALT))  
      return wxString(SVG_MATERIAL_FILLED_RESTART_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESTAURANT))  
      return wxString(SVG_MATERIAL_FILLED_RESTAURANT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESTAURANT_MENU))  
      return wxString(SVG_MATERIAL_FILLED_RESTAURANT_MENU);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESTORE))  
      return wxString(SVG_MATERIAL_FILLED_RESTORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESTORE_FROM_TRASH))  
      return wxString(SVG_MATERIAL_FILLED_RESTORE_FROM_TRASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESTORE_PAGE))  
      return wxString(SVG_MATERIAL_FILLED_RESTORE_PAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REVIEWS))  
      return wxString(SVG_MATERIAL_FILLED_REVIEWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RICE_BOWL))  
      return wxString(SVG_MATERIAL_FILLED_RICE_BOWL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RING_VOLUME))  
      return wxString(SVG_MATERIAL_FILLED_RING_VOLUME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROCKET))  
      return wxString(SVG_MATERIAL_FILLED_ROCKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROCKET_LAUNCH))  
      return wxString(SVG_MATERIAL_FILLED_ROCKET_LAUNCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROLLER_SHADES))  
      return wxString(SVG_MATERIAL_FILLED_ROLLER_SHADES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROLLER_SHADES_CLOSED))  
      return wxString(SVG_MATERIAL_FILLED_ROLLER_SHADES_CLOSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROLLER_SKATING))  
      return wxString(SVG_MATERIAL_FILLED_ROLLER_SKATING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROOFING))  
      return wxString(SVG_MATERIAL_FILLED_ROOFING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROOM))  
      return wxString(SVG_MATERIAL_FILLED_ROOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROOM_PREFERENCES))  
      return wxString(SVG_MATERIAL_FILLED_ROOM_PREFERENCES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROOM_SERVICE))  
      return wxString(SVG_MATERIAL_FILLED_ROOM_SERVICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROTATE_90_DEGREES_CCW))  
      return wxString(SVG_MATERIAL_FILLED_ROTATE_90_DEGREES_CCW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROTATE_90_DEGREES_CW))  
      return wxString(SVG_MATERIAL_FILLED_ROTATE_90_DEGREES_CW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROTATE_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_ROTATE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROTATE_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_ROTATE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROUNDABOUT_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_ROUNDABOUT_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROUNDABOUT_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_ROUNDABOUT_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROUNDED_CORNER))  
      return wxString(SVG_MATERIAL_FILLED_ROUNDED_CORNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROUTE))  
      return wxString(SVG_MATERIAL_FILLED_ROUTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROUTER))  
      return wxString(SVG_MATERIAL_FILLED_ROUTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROWING))  
      return wxString(SVG_MATERIAL_FILLED_ROWING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RSS_FEED))  
      return wxString(SVG_MATERIAL_FILLED_RSS_FEED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RSVP))  
      return wxString(SVG_MATERIAL_FILLED_RSVP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RTT))  
      return wxString(SVG_MATERIAL_FILLED_RTT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RULE))  
      return wxString(SVG_MATERIAL_FILLED_RULE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RULE_FOLDER))  
      return wxString(SVG_MATERIAL_FILLED_RULE_FOLDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RUN_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_RUN_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RUNNING_WITH_ERRORS))  
      return wxString(SVG_MATERIAL_FILLED_RUNNING_WITH_ERRORS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RV_HOOKUP))  
      return wxString(SVG_MATERIAL_FILLED_RV_HOOKUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAFETY_CHECK))  
      return wxString(SVG_MATERIAL_FILLED_SAFETY_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAFETY_DIVIDER))  
      return wxString(SVG_MATERIAL_FILLED_SAFETY_DIVIDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAILING))  
      return wxString(SVG_MATERIAL_FILLED_SAILING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SANITIZER))  
      return wxString(SVG_MATERIAL_FILLED_SANITIZER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SATELLITE))  
      return wxString(SVG_MATERIAL_FILLED_SATELLITE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SATELLITE_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SATELLITE_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAVE))  
      return wxString(SVG_MATERIAL_FILLED_SAVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAVE_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SAVE_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAVE_AS))  
      return wxString(SVG_MATERIAL_FILLED_SAVE_AS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAVED_SEARCH))  
      return wxString(SVG_MATERIAL_FILLED_SAVED_SEARCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAVINGS))  
      return wxString(SVG_MATERIAL_FILLED_SAVINGS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCALE))  
      return wxString(SVG_MATERIAL_FILLED_SCALE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCANNER))  
      return wxString(SVG_MATERIAL_FILLED_SCANNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCATTER_PLOT))  
      return wxString(SVG_MATERIAL_FILLED_SCATTER_PLOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHEDULE))  
      return wxString(SVG_MATERIAL_FILLED_SCHEDULE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHEDULE_SEND))  
      return wxString(SVG_MATERIAL_FILLED_SCHEDULE_SEND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHEMA))  
      return wxString(SVG_MATERIAL_FILLED_SCHEMA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHOOL))  
      return wxString(SVG_MATERIAL_FILLED_SCHOOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCIENCE))  
      return wxString(SVG_MATERIAL_FILLED_SCIENCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCORE))  
      return wxString(SVG_MATERIAL_FILLED_SCORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCOREBOARD))  
      return wxString(SVG_MATERIAL_FILLED_SCOREBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREEN_LOCK_LANDSCAPE))  
      return wxString(SVG_MATERIAL_FILLED_SCREEN_LOCK_LANDSCAPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREEN_LOCK_PORTRAIT))  
      return wxString(SVG_MATERIAL_FILLED_SCREEN_LOCK_PORTRAIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREEN_LOCK_ROTATION))  
      return wxString(SVG_MATERIAL_FILLED_SCREEN_LOCK_ROTATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREEN_ROTATION))  
      return wxString(SVG_MATERIAL_FILLED_SCREEN_ROTATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREEN_ROTATION_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SCREEN_ROTATION_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREEN_SEARCH_DESKTOP))  
      return wxString(SVG_MATERIAL_FILLED_SCREEN_SEARCH_DESKTOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREEN_SHARE))  
      return wxString(SVG_MATERIAL_FILLED_SCREEN_SHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREENSHOT))  
      return wxString(SVG_MATERIAL_FILLED_SCREENSHOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREENSHOT_MONITOR))  
      return wxString(SVG_MATERIAL_FILLED_SCREENSHOT_MONITOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCUBA_DIVING))  
      return wxString(SVG_MATERIAL_FILLED_SCUBA_DIVING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SD))  
      return wxString(SVG_MATERIAL_FILLED_SD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SD_CARD))  
      return wxString(SVG_MATERIAL_FILLED_SD_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SD_CARD_ALERT))  
      return wxString(SVG_MATERIAL_FILLED_SD_CARD_ALERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SD_STORAGE))  
      return wxString(SVG_MATERIAL_FILLED_SD_STORAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEARCH))  
      return wxString(SVG_MATERIAL_FILLED_SEARCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEARCH_OFF))  
      return wxString(SVG_MATERIAL_FILLED_SEARCH_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SECURITY))  
      return wxString(SVG_MATERIAL_FILLED_SECURITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SECURITY_UPDATE))  
      return wxString(SVG_MATERIAL_FILLED_SECURITY_UPDATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SECURITY_UPDATE_GOOD))  
      return wxString(SVG_MATERIAL_FILLED_SECURITY_UPDATE_GOOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SECURITY_UPDATE_WARNING))  
      return wxString(SVG_MATERIAL_FILLED_SECURITY_UPDATE_WARNING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEGMENT))  
      return wxString(SVG_MATERIAL_FILLED_SEGMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SELECT_ALL))  
      return wxString(SVG_MATERIAL_FILLED_SELECT_ALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SELF_IMPROVEMENT))  
      return wxString(SVG_MATERIAL_FILLED_SELF_IMPROVEMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SELL))  
      return wxString(SVG_MATERIAL_FILLED_SELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEND))  
      return wxString(SVG_MATERIAL_FILLED_SEND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEND_AND_ARCHIVE))  
      return wxString(SVG_MATERIAL_FILLED_SEND_AND_ARCHIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEND_TIME_EXTENSION))  
      return wxString(SVG_MATERIAL_FILLED_SEND_TIME_EXTENSION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEND_TO_MOBILE))  
      return wxString(SVG_MATERIAL_FILLED_SEND_TO_MOBILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENSOR_DOOR))  
      return wxString(SVG_MATERIAL_FILLED_SENSOR_DOOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENSOR_OCCUPIED))  
      return wxString(SVG_MATERIAL_FILLED_SENSOR_OCCUPIED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENSOR_WINDOW))  
      return wxString(SVG_MATERIAL_FILLED_SENSOR_WINDOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENSORS))  
      return wxString(SVG_MATERIAL_FILLED_SENSORS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENSORS_OFF))  
      return wxString(SVG_MATERIAL_FILLED_SENSORS_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENTIMENT_DISSATISFIED))  
      return wxString(SVG_MATERIAL_FILLED_SENTIMENT_DISSATISFIED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENTIMENT_NEUTRAL))  
      return wxString(SVG_MATERIAL_FILLED_SENTIMENT_NEUTRAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENTIMENT_SATISFIED))  
      return wxString(SVG_MATERIAL_FILLED_SENTIMENT_SATISFIED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENTIMENT_SATISFIED_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SENTIMENT_SATISFIED_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENTIMENT_VERY_DISSATISFIED))  
      return wxString(SVG_MATERIAL_FILLED_SENTIMENT_VERY_DISSATISFIED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SENTIMENT_VERY_SATISFIED))  
      return wxString(SVG_MATERIAL_FILLED_SENTIMENT_VERY_SATISFIED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SET_MEAL))  
      return wxString(SVG_MATERIAL_FILLED_SET_MEAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_ACCESSIBILITY))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_ACCESSIBILITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_APPLICATIONS))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_APPLICATIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_BACKUP_RESTORE))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_BACKUP_RESTORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_BLUETOOTH))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_BLUETOOTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_BRIGHTNESS))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_BRIGHTNESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_CELL))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_CELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_ETHERNET))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_ETHERNET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_INPUT_ANTENNA))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_INPUT_ANTENNA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_INPUT_COMPONENT))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_INPUT_COMPONENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_INPUT_COMPOSITE))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_INPUT_COMPOSITE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_INPUT_HDMI))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_INPUT_HDMI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_INPUT_SVIDEO))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_INPUT_SVIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_OVERSCAN))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_OVERSCAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_PHONE))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_PHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_POWER))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_POWER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_REMOTE))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_REMOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_SUGGEST))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_SUGGEST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_SYSTEM_DAYDREAM))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_SYSTEM_DAYDREAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SETTINGS_VOICE))  
      return wxString(SVG_MATERIAL_FILLED_SETTINGS_VOICE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEVERE_COLD))  
      return wxString(SVG_MATERIAL_FILLED_SEVERE_COLD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHAPE_LINE))  
      return wxString(SVG_MATERIAL_FILLED_SHAPE_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHARE))  
      return wxString(SVG_MATERIAL_FILLED_SHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHARE_LOCATION))  
      return wxString(SVG_MATERIAL_FILLED_SHARE_LOCATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIELD))  
      return wxString(SVG_MATERIAL_FILLED_SHIELD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIELD_MOON))  
      return wxString(SVG_MATERIAL_FILLED_SHIELD_MOON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOP))  
      return wxString(SVG_MATERIAL_FILLED_SHOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOP_2))  
      return wxString(SVG_MATERIAL_FILLED_SHOP_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOP_TWO))  
      return wxString(SVG_MATERIAL_FILLED_SHOP_TWO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOPPING_BAG))  
      return wxString(SVG_MATERIAL_FILLED_SHOPPING_BAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOPPING_BASKET))  
      return wxString(SVG_MATERIAL_FILLED_SHOPPING_BASKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOPPING_CART))  
      return wxString(SVG_MATERIAL_FILLED_SHOPPING_CART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOPPING_CART_CHECKOUT))  
      return wxString(SVG_MATERIAL_FILLED_SHOPPING_CART_CHECKOUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHORT_TEXT))  
      return wxString(SVG_MATERIAL_FILLED_SHORT_TEXT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHORTCUT))  
      return wxString(SVG_MATERIAL_FILLED_SHORTCUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOW_CHART))  
      return wxString(SVG_MATERIAL_FILLED_SHOW_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOWER))  
      return wxString(SVG_MATERIAL_FILLED_SHOWER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHUFFLE))  
      return wxString(SVG_MATERIAL_FILLED_SHUFFLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHUFFLE_ON))  
      return wxString(SVG_MATERIAL_FILLED_SHUFFLE_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHUTTER_SPEED))  
      return wxString(SVG_MATERIAL_FILLED_SHUTTER_SPEED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SICK))  
      return wxString(SVG_MATERIAL_FILLED_SICK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGN_LANGUAGE))  
      return wxString(SVG_MATERIAL_FILLED_SIGN_LANGUAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_0_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_0_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_4_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_4_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_ALT_1_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_ALT_1_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_ALT_2_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_ALT_2_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_0_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_0_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_4_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_CONNECTED_NO_INTERNET_4_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_NO_SIM))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_NO_SIM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_NODATA))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_NODATA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_NULL))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_NULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_CELLULAR_OFF))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_CELLULAR_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_WIFI_0_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_WIFI_0_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_WIFI_4_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_WIFI_4_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_WIFI_4_BAR_LOCK))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_WIFI_4_BAR_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_WIFI_BAD))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_WIFI_BAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_WIFI_CONNECTED_NO_INTERNET_4))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_WIFI_CONNECTED_NO_INTERNET_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_WIFI_OFF))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_WIFI_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_WIFI_STATUSBAR_4_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_WIFI_STATUSBAR_4_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_WIFI_STATUSBAR_CONNECTED_NO_INTERNET_4))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_WIFI_STATUSBAR_CONNECTED_NO_INTERNET_4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNAL_WIFI_STATUSBAR_NULL))  
      return wxString(SVG_MATERIAL_FILLED_SIGNAL_WIFI_STATUSBAR_NULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIGNPOST))  
      return wxString(SVG_MATERIAL_FILLED_SIGNPOST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIM_CARD))  
      return wxString(SVG_MATERIAL_FILLED_SIM_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIM_CARD_ALERT))  
      return wxString(SVG_MATERIAL_FILLED_SIM_CARD_ALERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIM_CARD_DOWNLOAD))  
      return wxString(SVG_MATERIAL_FILLED_SIM_CARD_DOWNLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SINGLE_BED))  
      return wxString(SVG_MATERIAL_FILLED_SINGLE_BED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIP))  
      return wxString(SVG_MATERIAL_FILLED_SIP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SKATEBOARDING))  
      return wxString(SVG_MATERIAL_FILLED_SKATEBOARDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SKIP_NEXT))  
      return wxString(SVG_MATERIAL_FILLED_SKIP_NEXT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SKIP_PREVIOUS))  
      return wxString(SVG_MATERIAL_FILLED_SKIP_PREVIOUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SLEDDING))  
      return wxString(SVG_MATERIAL_FILLED_SLEDDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SLIDESHOW))  
      return wxString(SVG_MATERIAL_FILLED_SLIDESHOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SLOW_MOTION_VIDEO))  
      return wxString(SVG_MATERIAL_FILLED_SLOW_MOTION_VIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMART_BUTTON))  
      return wxString(SVG_MATERIAL_FILLED_SMART_BUTTON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMART_DISPLAY))  
      return wxString(SVG_MATERIAL_FILLED_SMART_DISPLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMART_SCREEN))  
      return wxString(SVG_MATERIAL_FILLED_SMART_SCREEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMART_TOY))  
      return wxString(SVG_MATERIAL_FILLED_SMART_TOY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMARTPHONE))  
      return wxString(SVG_MATERIAL_FILLED_SMARTPHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMOKE_FREE))  
      return wxString(SVG_MATERIAL_FILLED_SMOKE_FREE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMOKING_ROOMS))  
      return wxString(SVG_MATERIAL_FILLED_SMOKING_ROOMS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMS))  
      return wxString(SVG_MATERIAL_FILLED_SMS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SMS_FAILED))  
      return wxString(SVG_MATERIAL_FILLED_SMS_FAILED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNIPPET_FOLDER))  
      return wxString(SVG_MATERIAL_FILLED_SNIPPET_FOLDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNOOZE))  
      return wxString(SVG_MATERIAL_FILLED_SNOOZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNOWBOARDING))  
      return wxString(SVG_MATERIAL_FILLED_SNOWBOARDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNOWMOBILE))  
      return wxString(SVG_MATERIAL_FILLED_SNOWMOBILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNOWSHOEING))  
      return wxString(SVG_MATERIAL_FILLED_SNOWSHOEING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOAP))  
      return wxString(SVG_MATERIAL_FILLED_SOAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOCIAL_DISTANCE))  
      return wxString(SVG_MATERIAL_FILLED_SOCIAL_DISTANCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOLAR_POWER))  
      return wxString(SVG_MATERIAL_FILLED_SOLAR_POWER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SORT))  
      return wxString(SVG_MATERIAL_FILLED_SORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SORT_BY_ALPHA))  
      return wxString(SVG_MATERIAL_FILLED_SORT_BY_ALPHA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOS))  
      return wxString(SVG_MATERIAL_FILLED_SOS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOUP_KITCHEN))  
      return wxString(SVG_MATERIAL_FILLED_SOUP_KITCHEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOURCE))  
      return wxString(SVG_MATERIAL_FILLED_SOURCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOUTH))  
      return wxString(SVG_MATERIAL_FILLED_SOUTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOUTH_AMERICA))  
      return wxString(SVG_MATERIAL_FILLED_SOUTH_AMERICA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOUTH_EAST))  
      return wxString(SVG_MATERIAL_FILLED_SOUTH_EAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOUTH_WEST))  
      return wxString(SVG_MATERIAL_FILLED_SOUTH_WEST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPA))  
      return wxString(SVG_MATERIAL_FILLED_SPA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPACE_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SPACE_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPACE_DASHBOARD))  
      return wxString(SVG_MATERIAL_FILLED_SPACE_DASHBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPATIAL_AUDIO))  
      return wxString(SVG_MATERIAL_FILLED_SPATIAL_AUDIO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPATIAL_AUDIO_OFF))  
      return wxString(SVG_MATERIAL_FILLED_SPATIAL_AUDIO_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPATIAL_TRACKING))  
      return wxString(SVG_MATERIAL_FILLED_SPATIAL_TRACKING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPEAKER))  
      return wxString(SVG_MATERIAL_FILLED_SPEAKER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPEAKER_GROUP))  
      return wxString(SVG_MATERIAL_FILLED_SPEAKER_GROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPEAKER_NOTES))  
      return wxString(SVG_MATERIAL_FILLED_SPEAKER_NOTES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPEAKER_NOTES_OFF))  
      return wxString(SVG_MATERIAL_FILLED_SPEAKER_NOTES_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPEAKER_PHONE))  
      return wxString(SVG_MATERIAL_FILLED_SPEAKER_PHONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPEED))  
      return wxString(SVG_MATERIAL_FILLED_SPEED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPELLCHECK))  
      return wxString(SVG_MATERIAL_FILLED_SPELLCHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPLITSCREEN))  
      return wxString(SVG_MATERIAL_FILLED_SPLITSCREEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPOKE))  
      return wxString(SVG_MATERIAL_FILLED_SPOKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_BAR))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_BASEBALL))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_BASEBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_BASKETBALL))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_BASKETBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_CRICKET))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_CRICKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_ESPORTS))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_ESPORTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_FOOTBALL))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_FOOTBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_GOLF))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_GOLF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_GYMNASTICS))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_GYMNASTICS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_HANDBALL))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_HANDBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_HOCKEY))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_HOCKEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_KABADDI))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_KABADDI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_MARTIAL_ARTS))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_MARTIAL_ARTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_MMA))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_MMA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_MOTORSPORTS))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_MOTORSPORTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_RUGBY))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_RUGBY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_SCORE))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_SCORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_SOCCER))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_SOCCER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_TENNIS))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_TENNIS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPORTS_VOLLEYBALL))  
      return wxString(SVG_MATERIAL_FILLED_SPORTS_VOLLEYBALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE))  
      return wxString(SVG_MATERIAL_FILLED_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_FOOT))  
      return wxString(SVG_MATERIAL_FILLED_SQUARE_FOOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SSID_CHART))  
      return wxString(SVG_MATERIAL_FILLED_SSID_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STACKED_BAR_CHART))  
      return wxString(SVG_MATERIAL_FILLED_STACKED_BAR_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STACKED_LINE_CHART))  
      return wxString(SVG_MATERIAL_FILLED_STACKED_LINE_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STADIUM))  
      return wxString(SVG_MATERIAL_FILLED_STADIUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAIRS))  
      return wxString(SVG_MATERIAL_FILLED_STAIRS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR))  
      return wxString(SVG_MATERIAL_FILLED_STAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_BORDER))  
      return wxString(SVG_MATERIAL_FILLED_STAR_BORDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_BORDER_PURPLE500))  
      return wxString(SVG_MATERIAL_FILLED_STAR_BORDER_PURPLE500);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_HALF))  
      return wxString(SVG_MATERIAL_FILLED_STAR_HALF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_STAR_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_PURPLE500))  
      return wxString(SVG_MATERIAL_FILLED_STAR_PURPLE500);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_RATE))  
      return wxString(SVG_MATERIAL_FILLED_STAR_RATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STARS))  
      return wxString(SVG_MATERIAL_FILLED_STARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_START))  
      return wxString(SVG_MATERIAL_FILLED_START);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAY_CURRENT_LANDSCAPE))  
      return wxString(SVG_MATERIAL_FILLED_STAY_CURRENT_LANDSCAPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAY_CURRENT_PORTRAIT))  
      return wxString(SVG_MATERIAL_FILLED_STAY_CURRENT_PORTRAIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAY_PRIMARY_LANDSCAPE))  
      return wxString(SVG_MATERIAL_FILLED_STAY_PRIMARY_LANDSCAPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAY_PRIMARY_PORTRAIT))  
      return wxString(SVG_MATERIAL_FILLED_STAY_PRIMARY_PORTRAIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STICKY_NOTE_2))  
      return wxString(SVG_MATERIAL_FILLED_STICKY_NOTE_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STOP))  
      return wxString(SVG_MATERIAL_FILLED_STOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STOP_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_STOP_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STOP_SCREEN_SHARE))  
      return wxString(SVG_MATERIAL_FILLED_STOP_SCREEN_SHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STORAGE))  
      return wxString(SVG_MATERIAL_FILLED_STORAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STORE))  
      return wxString(SVG_MATERIAL_FILLED_STORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STORE_MALL_DIRECTORY))  
      return wxString(SVG_MATERIAL_FILLED_STORE_MALL_DIRECTORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STOREFRONT))  
      return wxString(SVG_MATERIAL_FILLED_STOREFRONT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STORM))  
      return wxString(SVG_MATERIAL_FILLED_STORM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STRAIGHT))  
      return wxString(SVG_MATERIAL_FILLED_STRAIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STRAIGHTEN))  
      return wxString(SVG_MATERIAL_FILLED_STRAIGHTEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STREAM))  
      return wxString(SVG_MATERIAL_FILLED_STREAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STREETVIEW))  
      return wxString(SVG_MATERIAL_FILLED_STREETVIEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STRIKETHROUGH_S))  
      return wxString(SVG_MATERIAL_FILLED_STRIKETHROUGH_S);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STROLLER))  
      return wxString(SVG_MATERIAL_FILLED_STROLLER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STYLE))  
      return wxString(SVG_MATERIAL_FILLED_STYLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUBDIRECTORY_ARROW_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_SUBDIRECTORY_ARROW_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUBDIRECTORY_ARROW_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_SUBDIRECTORY_ARROW_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUBJECT))  
      return wxString(SVG_MATERIAL_FILLED_SUBJECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUBSCRIPT))  
      return wxString(SVG_MATERIAL_FILLED_SUBSCRIPT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUBSCRIPTIONS))  
      return wxString(SVG_MATERIAL_FILLED_SUBSCRIPTIONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUBTITLES))  
      return wxString(SVG_MATERIAL_FILLED_SUBTITLES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUBTITLES_OFF))  
      return wxString(SVG_MATERIAL_FILLED_SUBTITLES_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUBWAY))  
      return wxString(SVG_MATERIAL_FILLED_SUBWAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUMMARIZE))  
      return wxString(SVG_MATERIAL_FILLED_SUMMARIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUPERSCRIPT))  
      return wxString(SVG_MATERIAL_FILLED_SUPERSCRIPT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUPERVISED_USER_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_SUPERVISED_USER_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUPERVISOR_ACCOUNT))  
      return wxString(SVG_MATERIAL_FILLED_SUPERVISOR_ACCOUNT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUPPORT))  
      return wxString(SVG_MATERIAL_FILLED_SUPPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUPPORT_AGENT))  
      return wxString(SVG_MATERIAL_FILLED_SUPPORT_AGENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SURFING))  
      return wxString(SVG_MATERIAL_FILLED_SURFING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SURROUND_SOUND))  
      return wxString(SVG_MATERIAL_FILLED_SURROUND_SOUND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWAP_CALLS))  
      return wxString(SVG_MATERIAL_FILLED_SWAP_CALLS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWAP_HORIZ))  
      return wxString(SVG_MATERIAL_FILLED_SWAP_HORIZ);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWAP_HORIZONTAL_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_SWAP_HORIZONTAL_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWAP_VERT))  
      return wxString(SVG_MATERIAL_FILLED_SWAP_VERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWAP_VERTICAL_CIRCLE))  
      return wxString(SVG_MATERIAL_FILLED_SWAP_VERTICAL_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE_DOWN_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE_DOWN_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE_LEFT_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE_LEFT_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE_RIGHT_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE_RIGHT_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE_UP))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE_UP_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE_UP_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIPE_VERTICAL))  
      return wxString(SVG_MATERIAL_FILLED_SWIPE_VERTICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWITCH_ACCESS_SHORTCUT))  
      return wxString(SVG_MATERIAL_FILLED_SWITCH_ACCESS_SHORTCUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWITCH_ACCESS_SHORTCUT_ADD))  
      return wxString(SVG_MATERIAL_FILLED_SWITCH_ACCESS_SHORTCUT_ADD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWITCH_ACCOUNT))  
      return wxString(SVG_MATERIAL_FILLED_SWITCH_ACCOUNT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWITCH_CAMERA))  
      return wxString(SVG_MATERIAL_FILLED_SWITCH_CAMERA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWITCH_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_SWITCH_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWITCH_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_SWITCH_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWITCH_VIDEO))  
      return wxString(SVG_MATERIAL_FILLED_SWITCH_VIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYNAGOGUE))  
      return wxString(SVG_MATERIAL_FILLED_SYNAGOGUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYNC))  
      return wxString(SVG_MATERIAL_FILLED_SYNC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYNC_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SYNC_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYNC_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_SYNC_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYNC_LOCK))  
      return wxString(SVG_MATERIAL_FILLED_SYNC_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYNC_PROBLEM))  
      return wxString(SVG_MATERIAL_FILLED_SYNC_PROBLEM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYSTEM_SECURITY_UPDATE))  
      return wxString(SVG_MATERIAL_FILLED_SYSTEM_SECURITY_UPDATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYSTEM_SECURITY_UPDATE_GOOD))  
      return wxString(SVG_MATERIAL_FILLED_SYSTEM_SECURITY_UPDATE_GOOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYSTEM_SECURITY_UPDATE_WARNING))  
      return wxString(SVG_MATERIAL_FILLED_SYSTEM_SECURITY_UPDATE_WARNING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYSTEM_UPDATE))  
      return wxString(SVG_MATERIAL_FILLED_SYSTEM_UPDATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYSTEM_UPDATE_ALT))  
      return wxString(SVG_MATERIAL_FILLED_SYSTEM_UPDATE_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAB))  
      return wxString(SVG_MATERIAL_FILLED_TAB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAB_UNSELECTED))  
      return wxString(SVG_MATERIAL_FILLED_TAB_UNSELECTED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_BAR))  
      return wxString(SVG_MATERIAL_FILLED_TABLE_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_CHART))  
      return wxString(SVG_MATERIAL_FILLED_TABLE_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_RESTAURANT))  
      return wxString(SVG_MATERIAL_FILLED_TABLE_RESTAURANT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_ROWS))  
      return wxString(SVG_MATERIAL_FILLED_TABLE_ROWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLE_VIEW))  
      return wxString(SVG_MATERIAL_FILLED_TABLE_VIEW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLET))  
      return wxString(SVG_MATERIAL_FILLED_TABLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLET_ANDROID))  
      return wxString(SVG_MATERIAL_FILLED_TABLET_ANDROID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TABLET_MAC))  
      return wxString(SVG_MATERIAL_FILLED_TABLET_MAC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAG))  
      return wxString(SVG_MATERIAL_FILLED_TAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAG_FACES))  
      return wxString(SVG_MATERIAL_FILLED_TAG_FACES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAKEOUT_DINING))  
      return wxString(SVG_MATERIAL_FILLED_TAKEOUT_DINING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAP_AND_PLAY))  
      return wxString(SVG_MATERIAL_FILLED_TAP_AND_PLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAPAS))  
      return wxString(SVG_MATERIAL_FILLED_TAPAS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TASK))  
      return wxString(SVG_MATERIAL_FILLED_TASK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TASK_ALT))  
      return wxString(SVG_MATERIAL_FILLED_TASK_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TAXI_ALERT))  
      return wxString(SVG_MATERIAL_FILLED_TAXI_ALERT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPLE_BUDDHIST))  
      return wxString(SVG_MATERIAL_FILLED_TEMPLE_BUDDHIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEMPLE_HINDU))  
      return wxString(SVG_MATERIAL_FILLED_TEMPLE_HINDU);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TERMINAL))  
      return wxString(SVG_MATERIAL_FILLED_TERMINAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TERRAIN))  
      return wxString(SVG_MATERIAL_FILLED_TERRAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_DECREASE))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_DECREASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_FIELDS))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_FIELDS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_FORMAT))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_FORMAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_INCREASE))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_INCREASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_ROTATE_UP))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_ROTATE_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_ROTATE_VERTICAL))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_ROTATE_VERTICAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_ROTATION_ANGLEDOWN))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_ROTATION_ANGLEDOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_ROTATION_ANGLEUP))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_ROTATION_ANGLEUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_ROTATION_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_ROTATION_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_ROTATION_NONE))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_ROTATION_NONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXT_SNIPPET))  
      return wxString(SVG_MATERIAL_FILLED_TEXT_SNIPPET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXTSMS))  
      return wxString(SVG_MATERIAL_FILLED_TEXTSMS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEXTURE))  
      return wxString(SVG_MATERIAL_FILLED_TEXTURE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THEATER_COMEDY))  
      return wxString(SVG_MATERIAL_FILLED_THEATER_COMEDY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THEATERS))  
      return wxString(SVG_MATERIAL_FILLED_THEATERS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THERMOSTAT))  
      return wxString(SVG_MATERIAL_FILLED_THERMOSTAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THERMOSTAT_AUTO))  
      return wxString(SVG_MATERIAL_FILLED_THERMOSTAT_AUTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMB_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_THUMB_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMB_DOWN_ALT))  
      return wxString(SVG_MATERIAL_FILLED_THUMB_DOWN_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMB_DOWN_OFF_ALT))  
      return wxString(SVG_MATERIAL_FILLED_THUMB_DOWN_OFF_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMB_UP))  
      return wxString(SVG_MATERIAL_FILLED_THUMB_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMB_UP_ALT))  
      return wxString(SVG_MATERIAL_FILLED_THUMB_UP_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMB_UP_OFF_ALT))  
      return wxString(SVG_MATERIAL_FILLED_THUMB_UP_OFF_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMBS_UP_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_THUMBS_UP_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUNDERSTORM))  
      return wxString(SVG_MATERIAL_FILLED_THUNDERSTORM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIME_TO_LEAVE))  
      return wxString(SVG_MATERIAL_FILLED_TIME_TO_LEAVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIMELAPSE))  
      return wxString(SVG_MATERIAL_FILLED_TIMELAPSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIMELINE))  
      return wxString(SVG_MATERIAL_FILLED_TIMELINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIMER))  
      return wxString(SVG_MATERIAL_FILLED_TIMER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIMER_10))  
      return wxString(SVG_MATERIAL_FILLED_TIMER_10);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIMER_10_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_TIMER_10_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIMER_3))  
      return wxString(SVG_MATERIAL_FILLED_TIMER_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIMER_3_SELECT))  
      return wxString(SVG_MATERIAL_FILLED_TIMER_3_SELECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIMER_OFF))  
      return wxString(SVG_MATERIAL_FILLED_TIMER_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIPS_AND_UPDATES))  
      return wxString(SVG_MATERIAL_FILLED_TIPS_AND_UPDATES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIRE_REPAIR))  
      return wxString(SVG_MATERIAL_FILLED_TIRE_REPAIR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TITLE))  
      return wxString(SVG_MATERIAL_FILLED_TITLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOC))  
      return wxString(SVG_MATERIAL_FILLED_TOC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TODAY))  
      return wxString(SVG_MATERIAL_FILLED_TODAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOGGLE_OFF))  
      return wxString(SVG_MATERIAL_FILLED_TOGGLE_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOGGLE_ON))  
      return wxString(SVG_MATERIAL_FILLED_TOGGLE_ON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOKEN))  
      return wxString(SVG_MATERIAL_FILLED_TOKEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOLL))  
      return wxString(SVG_MATERIAL_FILLED_TOLL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TONALITY))  
      return wxString(SVG_MATERIAL_FILLED_TONALITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOPIC))  
      return wxString(SVG_MATERIAL_FILLED_TOPIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TORNADO))  
      return wxString(SVG_MATERIAL_FILLED_TORNADO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOUCH_APP))  
      return wxString(SVG_MATERIAL_FILLED_TOUCH_APP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOUR))  
      return wxString(SVG_MATERIAL_FILLED_TOUR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TOYS))  
      return wxString(SVG_MATERIAL_FILLED_TOYS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRACK_CHANGES))  
      return wxString(SVG_MATERIAL_FILLED_TRACK_CHANGES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRAFFIC))  
      return wxString(SVG_MATERIAL_FILLED_TRAFFIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRAIN))  
      return wxString(SVG_MATERIAL_FILLED_TRAIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRAM))  
      return wxString(SVG_MATERIAL_FILLED_TRAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRANSCRIBE))  
      return wxString(SVG_MATERIAL_FILLED_TRANSCRIBE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRANSFER_WITHIN_A_STATION))  
      return wxString(SVG_MATERIAL_FILLED_TRANSFER_WITHIN_A_STATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRANSFORM))  
      return wxString(SVG_MATERIAL_FILLED_TRANSFORM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRANSGENDER))  
      return wxString(SVG_MATERIAL_FILLED_TRANSGENDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRANSIT_ENTEREXIT))  
      return wxString(SVG_MATERIAL_FILLED_TRANSIT_ENTEREXIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRANSLATE))  
      return wxString(SVG_MATERIAL_FILLED_TRANSLATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRAVEL_EXPLORE))  
      return wxString(SVG_MATERIAL_FILLED_TRAVEL_EXPLORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRENDING_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_TRENDING_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRENDING_FLAT))  
      return wxString(SVG_MATERIAL_FILLED_TRENDING_FLAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRENDING_UP))  
      return wxString(SVG_MATERIAL_FILLED_TRENDING_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRIP_ORIGIN))  
      return wxString(SVG_MATERIAL_FILLED_TRIP_ORIGIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TROUBLESHOOT))  
      return wxString(SVG_MATERIAL_FILLED_TROUBLESHOOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRY))  
      return wxString(SVG_MATERIAL_FILLED_TRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TSUNAMI))  
      return wxString(SVG_MATERIAL_FILLED_TSUNAMI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TTY))  
      return wxString(SVG_MATERIAL_FILLED_TTY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TUNE))  
      return wxString(SVG_MATERIAL_FILLED_TUNE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TUNGSTEN))  
      return wxString(SVG_MATERIAL_FILLED_TUNGSTEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURN_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_TURN_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURN_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_TURN_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURN_SHARP_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_TURN_SHARP_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURN_SHARP_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_TURN_SHARP_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURN_SLIGHT_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_TURN_SLIGHT_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURN_SLIGHT_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_TURN_SLIGHT_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURNED_IN))  
      return wxString(SVG_MATERIAL_FILLED_TURNED_IN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TURNED_IN_NOT))  
      return wxString(SVG_MATERIAL_FILLED_TURNED_IN_NOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TV))  
      return wxString(SVG_MATERIAL_FILLED_TV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TV_OFF))  
      return wxString(SVG_MATERIAL_FILLED_TV_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TWO_WHEELER))  
      return wxString(SVG_MATERIAL_FILLED_TWO_WHEELER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TYPE_SPECIMEN))  
      return wxString(SVG_MATERIAL_FILLED_TYPE_SPECIMEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_U_TURN_LEFT))  
      return wxString(SVG_MATERIAL_FILLED_U_TURN_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_U_TURN_RIGHT))  
      return wxString(SVG_MATERIAL_FILLED_U_TURN_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UMBRELLA))  
      return wxString(SVG_MATERIAL_FILLED_UMBRELLA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNARCHIVE))  
      return wxString(SVG_MATERIAL_FILLED_UNARCHIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNDO))  
      return wxString(SVG_MATERIAL_FILLED_UNDO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNFOLD_LESS))  
      return wxString(SVG_MATERIAL_FILLED_UNFOLD_LESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNFOLD_LESS_DOUBLE))  
      return wxString(SVG_MATERIAL_FILLED_UNFOLD_LESS_DOUBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNFOLD_MORE))  
      return wxString(SVG_MATERIAL_FILLED_UNFOLD_MORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNFOLD_MORE_DOUBLE))  
      return wxString(SVG_MATERIAL_FILLED_UNFOLD_MORE_DOUBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNPUBLISHED))  
      return wxString(SVG_MATERIAL_FILLED_UNPUBLISHED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNSUBSCRIBE))  
      return wxString(SVG_MATERIAL_FILLED_UNSUBSCRIBE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UPCOMING))  
      return wxString(SVG_MATERIAL_FILLED_UPCOMING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UPDATE))  
      return wxString(SVG_MATERIAL_FILLED_UPDATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UPDATE_DISABLED))  
      return wxString(SVG_MATERIAL_FILLED_UPDATE_DISABLED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UPGRADE))  
      return wxString(SVG_MATERIAL_FILLED_UPGRADE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UPLOAD))  
      return wxString(SVG_MATERIAL_FILLED_UPLOAD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UPLOAD_FILE))  
      return wxString(SVG_MATERIAL_FILLED_UPLOAD_FILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USB))  
      return wxString(SVG_MATERIAL_FILLED_USB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USB_OFF))  
      return wxString(SVG_MATERIAL_FILLED_USB_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VACCINES))  
      return wxString(SVG_MATERIAL_FILLED_VACCINES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VAPE_FREE))  
      return wxString(SVG_MATERIAL_FILLED_VAPE_FREE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VAPING_ROOMS))  
      return wxString(SVG_MATERIAL_FILLED_VAPING_ROOMS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VERIFIED))  
      return wxString(SVG_MATERIAL_FILLED_VERIFIED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VERIFIED_USER))  
      return wxString(SVG_MATERIAL_FILLED_VERIFIED_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VERTICAL_ALIGN_BOTTOM))  
      return wxString(SVG_MATERIAL_FILLED_VERTICAL_ALIGN_BOTTOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VERTICAL_ALIGN_CENTER))  
      return wxString(SVG_MATERIAL_FILLED_VERTICAL_ALIGN_CENTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VERTICAL_ALIGN_TOP))  
      return wxString(SVG_MATERIAL_FILLED_VERTICAL_ALIGN_TOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VERTICAL_DISTRIBUTE))  
      return wxString(SVG_MATERIAL_FILLED_VERTICAL_DISTRIBUTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VERTICAL_SHADES))  
      return wxString(SVG_MATERIAL_FILLED_VERTICAL_SHADES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VERTICAL_SHADES_CLOSED))  
      return wxString(SVG_MATERIAL_FILLED_VERTICAL_SHADES_CLOSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VERTICAL_SPLIT))  
      return wxString(SVG_MATERIAL_FILLED_VERTICAL_SPLIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIBRATION))  
      return wxString(SVG_MATERIAL_FILLED_VIBRATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_CALL))  
      return wxString(SVG_MATERIAL_FILLED_VIDEO_CALL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_CAMERA_BACK))  
      return wxString(SVG_MATERIAL_FILLED_VIDEO_CAMERA_BACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_CAMERA_FRONT))  
      return wxString(SVG_MATERIAL_FILLED_VIDEO_CAMERA_FRONT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_CHAT))  
      return wxString(SVG_MATERIAL_FILLED_VIDEO_CHAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_FILE))  
      return wxString(SVG_MATERIAL_FILLED_VIDEO_FILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_LABEL))  
      return wxString(SVG_MATERIAL_FILLED_VIDEO_LABEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_LIBRARY))  
      return wxString(SVG_MATERIAL_FILLED_VIDEO_LIBRARY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_SETTINGS))  
      return wxString(SVG_MATERIAL_FILLED_VIDEO_SETTINGS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEO_STABLE))  
      return wxString(SVG_MATERIAL_FILLED_VIDEO_STABLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEOCAM))  
      return wxString(SVG_MATERIAL_FILLED_VIDEOCAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEOCAM_OFF))  
      return wxString(SVG_MATERIAL_FILLED_VIDEOCAM_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEOGAME_ASSET))  
      return wxString(SVG_MATERIAL_FILLED_VIDEOGAME_ASSET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIDEOGAME_ASSET_OFF))  
      return wxString(SVG_MATERIAL_FILLED_VIDEOGAME_ASSET_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_AGENDA))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_AGENDA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_ARRAY))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_ARRAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_CAROUSEL))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_CAROUSEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_COLUMN))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_COLUMN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_COMFY))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_COMFY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_COMFY_ALT))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_COMFY_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_COMPACT))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_COMPACT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_COMPACT_ALT))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_COMPACT_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_COZY))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_COZY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_DAY))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_DAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_HEADLINE))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_HEADLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_IN_AR))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_IN_AR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_KANBAN))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_KANBAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_LIST))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_LIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_MODULE))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_MODULE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_QUILT))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_QUILT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_SIDEBAR))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_SIDEBAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_STREAM))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_STREAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_TIMELINE))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_TIMELINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIEW_WEEK))  
      return wxString(SVG_MATERIAL_FILLED_VIEW_WEEK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIGNETTE))  
      return wxString(SVG_MATERIAL_FILLED_VIGNETTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VILLA))  
      return wxString(SVG_MATERIAL_FILLED_VILLA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VISIBILITY))  
      return wxString(SVG_MATERIAL_FILLED_VISIBILITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VISIBILITY_OFF))  
      return wxString(SVG_MATERIAL_FILLED_VISIBILITY_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOICE_CHAT))  
      return wxString(SVG_MATERIAL_FILLED_VOICE_CHAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOICE_OVER_OFF))  
      return wxString(SVG_MATERIAL_FILLED_VOICE_OVER_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOICEMAIL))  
      return wxString(SVG_MATERIAL_FILLED_VOICEMAIL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLCANO))  
      return wxString(SVG_MATERIAL_FILLED_VOLCANO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLUME_DOWN))  
      return wxString(SVG_MATERIAL_FILLED_VOLUME_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLUME_MUTE))  
      return wxString(SVG_MATERIAL_FILLED_VOLUME_MUTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLUME_OFF))  
      return wxString(SVG_MATERIAL_FILLED_VOLUME_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLUME_UP))  
      return wxString(SVG_MATERIAL_FILLED_VOLUME_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VOLUNTEER_ACTIVISM))  
      return wxString(SVG_MATERIAL_FILLED_VOLUNTEER_ACTIVISM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VPN_KEY))  
      return wxString(SVG_MATERIAL_FILLED_VPN_KEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VPN_KEY_OFF))  
      return wxString(SVG_MATERIAL_FILLED_VPN_KEY_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VPN_LOCK))  
      return wxString(SVG_MATERIAL_FILLED_VPN_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VRPANO))  
      return wxString(SVG_MATERIAL_FILLED_VRPANO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WALLET))  
      return wxString(SVG_MATERIAL_FILLED_WALLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WALLPAPER))  
      return wxString(SVG_MATERIAL_FILLED_WALLPAPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WAREHOUSE))  
      return wxString(SVG_MATERIAL_FILLED_WAREHOUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WARNING))  
      return wxString(SVG_MATERIAL_FILLED_WARNING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WARNING_AMBER))  
      return wxString(SVG_MATERIAL_FILLED_WARNING_AMBER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WASH))  
      return wxString(SVG_MATERIAL_FILLED_WASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATCH))  
      return wxString(SVG_MATERIAL_FILLED_WATCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATCH_LATER))  
      return wxString(SVG_MATERIAL_FILLED_WATCH_LATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATCH_OFF))  
      return wxString(SVG_MATERIAL_FILLED_WATCH_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATER))  
      return wxString(SVG_MATERIAL_FILLED_WATER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATER_DAMAGE))  
      return wxString(SVG_MATERIAL_FILLED_WATER_DAMAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATER_DROP))  
      return wxString(SVG_MATERIAL_FILLED_WATER_DROP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATERFALL_CHART))  
      return wxString(SVG_MATERIAL_FILLED_WATERFALL_CHART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WAVES))  
      return wxString(SVG_MATERIAL_FILLED_WAVES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WAVING_HAND))  
      return wxString(SVG_MATERIAL_FILLED_WAVING_HAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WB_AUTO))  
      return wxString(SVG_MATERIAL_FILLED_WB_AUTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WB_CLOUDY))  
      return wxString(SVG_MATERIAL_FILLED_WB_CLOUDY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WB_INCANDESCENT))  
      return wxString(SVG_MATERIAL_FILLED_WB_INCANDESCENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WB_IRIDESCENT))  
      return wxString(SVG_MATERIAL_FILLED_WB_IRIDESCENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WB_SHADE))  
      return wxString(SVG_MATERIAL_FILLED_WB_SHADE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WB_SUNNY))  
      return wxString(SVG_MATERIAL_FILLED_WB_SUNNY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WB_TWILIGHT))  
      return wxString(SVG_MATERIAL_FILLED_WB_TWILIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WC))  
      return wxString(SVG_MATERIAL_FILLED_WC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEB))  
      return wxString(SVG_MATERIAL_FILLED_WEB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEB_ASSET))  
      return wxString(SVG_MATERIAL_FILLED_WEB_ASSET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEB_ASSET_OFF))  
      return wxString(SVG_MATERIAL_FILLED_WEB_ASSET_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEB_STORIES))  
      return wxString(SVG_MATERIAL_FILLED_WEB_STORIES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEBHOOK))  
      return wxString(SVG_MATERIAL_FILLED_WEBHOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEEKEND))  
      return wxString(SVG_MATERIAL_FILLED_WEEKEND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEST))  
      return wxString(SVG_MATERIAL_FILLED_WEST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHATSHOT))  
      return wxString(SVG_MATERIAL_FILLED_WHATSHOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHEELCHAIR_PICKUP))  
      return wxString(SVG_MATERIAL_FILLED_WHEELCHAIR_PICKUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHERE_TO_VOTE))  
      return wxString(SVG_MATERIAL_FILLED_WHERE_TO_VOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIDGETS))  
      return wxString(SVG_MATERIAL_FILLED_WIDGETS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIDTH_FULL))  
      return wxString(SVG_MATERIAL_FILLED_WIDTH_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIDTH_NORMAL))  
      return wxString(SVG_MATERIAL_FILLED_WIDTH_NORMAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIDTH_WIDE))  
      return wxString(SVG_MATERIAL_FILLED_WIDTH_WIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI))  
      return wxString(SVG_MATERIAL_FILLED_WIFI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_1_BAR))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_1_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_2_BAR))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_2_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_CALLING))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_CALLING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_CALLING_3))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_CALLING_3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_CHANNEL))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_CHANNEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_FIND))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_FIND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_LOCK))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_LOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_OFF))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_PASSWORD))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_PASSWORD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_PROTECTED_SETUP))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_PROTECTED_SETUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_TETHERING))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_TETHERING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_TETHERING_ERROR))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_TETHERING_ERROR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIFI_TETHERING_OFF))  
      return wxString(SVG_MATERIAL_FILLED_WIFI_TETHERING_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIND_POWER))  
      return wxString(SVG_MATERIAL_FILLED_WIND_POWER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINDOW))  
      return wxString(SVG_MATERIAL_FILLED_WINDOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINE_BAR))  
      return wxString(SVG_MATERIAL_FILLED_WINE_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WOMAN))  
      return wxString(SVG_MATERIAL_FILLED_WOMAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WOMAN_2))  
      return wxString(SVG_MATERIAL_FILLED_WOMAN_2);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WORK))  
      return wxString(SVG_MATERIAL_FILLED_WORK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WORK_HISTORY))  
      return wxString(SVG_MATERIAL_FILLED_WORK_HISTORY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WORK_OFF))  
      return wxString(SVG_MATERIAL_FILLED_WORK_OFF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WORK_OUTLINE))  
      return wxString(SVG_MATERIAL_FILLED_WORK_OUTLINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WORKSPACE_PREMIUM))  
      return wxString(SVG_MATERIAL_FILLED_WORKSPACE_PREMIUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WORKSPACES))  
      return wxString(SVG_MATERIAL_FILLED_WORKSPACES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WRAP_TEXT))  
      return wxString(SVG_MATERIAL_FILLED_WRAP_TEXT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WRONG_LOCATION))  
      return wxString(SVG_MATERIAL_FILLED_WRONG_LOCATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WYSIWYG))  
      return wxString(SVG_MATERIAL_FILLED_WYSIWYG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YARD))  
      return wxString(SVG_MATERIAL_FILLED_YARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YOUTUBE_SEARCHED_FOR))  
      return wxString(SVG_MATERIAL_FILLED_YOUTUBE_SEARCHED_FOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ZOOM_IN))  
      return wxString(SVG_MATERIAL_FILLED_ZOOM_IN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ZOOM_IN_MAP))  
      return wxString(SVG_MATERIAL_FILLED_ZOOM_IN_MAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ZOOM_OUT))  
      return wxString(SVG_MATERIAL_FILLED_ZOOM_OUT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ZOOM_OUT_MAP))  
      return wxString(SVG_MATERIAL_FILLED_ZOOM_OUT_MAP);


// Any IDs not implemented here will return a null string 
return wxString(); 
}


// Return SVG for the current ID as a string, with given color
wxString FilledMaterialArtColorSVGByID(const wxArtID& id, const wxColour& color)
{
wxString svg = FilledMaterialArtSVGByID(id); 
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
wxArrayString FilledMaterialArtIDs()
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
wxBitmap CreateFilledMaterialArtBitmapByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxString svg = FilledMaterialArtColorSVGByID(id,color); 
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
wxBitmapBundle CreateFilledMaterialArtBitmapBundleByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxBitmapBundle bundle; 
  wxString svg = FilledMaterialArtColorSVGByID(id,color); 
  if (svg.IsEmpty()) return bundle; 

  // Create bundle and get bitmap from it 
  wxSize useSize = size==wxDefaultSize? wxSize(24,24) : size;
  bundle = wxBitmapBundle::FromSVG(svg.mb_str(),useSize);
  return bundle; 
}


