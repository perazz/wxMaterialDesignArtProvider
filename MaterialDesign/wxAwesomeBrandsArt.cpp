#include "wxAwesomeBrandsArt.hpp" 
#include <wx/regex.h> 

// Return SVG for the current ID as a string 
wxString BrandsAwesomeArtSVGByID(const wxArtID& id)
{
  if (wxASCII_STR(id) == wxASCII_STR(wxART_42_GROUP))  
      return wxString(SVG_AWESOME_BRANDS_42_GROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_500PX))  
      return wxString(SVG_AWESOME_BRANDS_500PX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCESSIBLE_ICON))  
      return wxString(SVG_AWESOME_BRANDS_ACCESSIBLE_ICON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ACCUSOFT))  
      return wxString(SVG_AWESOME_BRANDS_ACCUSOFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADN))  
      return wxString(SVG_AWESOME_BRANDS_ADN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADVERSAL))  
      return wxString(SVG_AWESOME_BRANDS_ADVERSAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AFFILIATETHEME))  
      return wxString(SVG_AWESOME_BRANDS_AFFILIATETHEME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AIRBNB))  
      return wxString(SVG_AWESOME_BRANDS_AIRBNB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALGOLIA))  
      return wxString(SVG_AWESOME_BRANDS_ALGOLIA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ALIPAY))  
      return wxString(SVG_AWESOME_BRANDS_ALIPAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AMAZON_PAY))  
      return wxString(SVG_AWESOME_BRANDS_AMAZON_PAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AMAZON))  
      return wxString(SVG_AWESOME_BRANDS_AMAZON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AMILIA))  
      return wxString(SVG_AWESOME_BRANDS_AMILIA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANDROID))  
      return wxString(SVG_AWESOME_BRANDS_ANDROID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGELLIST))  
      return wxString(SVG_AWESOME_BRANDS_ANGELLIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGRYCREATIVE))  
      return wxString(SVG_AWESOME_BRANDS_ANGRYCREATIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ANGULAR))  
      return wxString(SVG_AWESOME_BRANDS_ANGULAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APP_STORE_IOS))  
      return wxString(SVG_AWESOME_BRANDS_APP_STORE_IOS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APP_STORE))  
      return wxString(SVG_AWESOME_BRANDS_APP_STORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APPER))  
      return wxString(SVG_AWESOME_BRANDS_APPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APPLE_PAY))  
      return wxString(SVG_AWESOME_BRANDS_APPLE_PAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_APPLE))  
      return wxString(SVG_AWESOME_BRANDS_APPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ARTSTATION))  
      return wxString(SVG_AWESOME_BRANDS_ARTSTATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ASYMMETRIK))  
      return wxString(SVG_AWESOME_BRANDS_ASYMMETRIK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ATLASSIAN))  
      return wxString(SVG_AWESOME_BRANDS_ATLASSIAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUDIBLE))  
      return wxString(SVG_AWESOME_BRANDS_AUDIBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AUTOPREFIXER))  
      return wxString(SVG_AWESOME_BRANDS_AUTOPREFIXER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AVIANEX))  
      return wxString(SVG_AWESOME_BRANDS_AVIANEX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AVIATO))  
      return wxString(SVG_AWESOME_BRANDS_AVIATO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_AWS))  
      return wxString(SVG_AWESOME_BRANDS_AWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BANDCAMP))  
      return wxString(SVG_AWESOME_BRANDS_BANDCAMP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BATTLE_NET))  
      return wxString(SVG_AWESOME_BRANDS_BATTLE_NET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BEHANCE))  
      return wxString(SVG_AWESOME_BRANDS_BEHANCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BILIBILI))  
      return wxString(SVG_AWESOME_BRANDS_BILIBILI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BIMOBJECT))  
      return wxString(SVG_AWESOME_BRANDS_BIMOBJECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BITBUCKET))  
      return wxString(SVG_AWESOME_BRANDS_BITBUCKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BITCOIN))  
      return wxString(SVG_AWESOME_BRANDS_BITCOIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BITY))  
      return wxString(SVG_AWESOME_BRANDS_BITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLACK_TIE))  
      return wxString(SVG_AWESOME_BRANDS_BLACK_TIE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLACKBERRY))  
      return wxString(SVG_AWESOME_BRANDS_BLACKBERRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLOGGER_B))  
      return wxString(SVG_AWESOME_BRANDS_BLOGGER_B);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLOGGER))  
      return wxString(SVG_AWESOME_BRANDS_BLOGGER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUETOOTH_B))  
      return wxString(SVG_AWESOME_BRANDS_BLUETOOTH_B);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BLUETOOTH))  
      return wxString(SVG_AWESOME_BRANDS_BLUETOOTH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOTSTRAP))  
      return wxString(SVG_AWESOME_BRANDS_BOOTSTRAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOTS))  
      return wxString(SVG_AWESOME_BRANDS_BOTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BTC))  
      return wxString(SVG_AWESOME_BRANDS_BTC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUFFER))  
      return wxString(SVG_AWESOME_BRANDS_BUFFER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUROMOBELEXPERTE))  
      return wxString(SVG_AWESOME_BRANDS_BUROMOBELEXPERTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUY_N_LARGE))  
      return wxString(SVG_AWESOME_BRANDS_BUY_N_LARGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUYSELLADS))  
      return wxString(SVG_AWESOME_BRANDS_BUYSELLADS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CANADIAN_MAPLE_LEAF))  
      return wxString(SVG_AWESOME_BRANDS_CANADIAN_MAPLE_LEAF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_AMAZON_PAY))  
      return wxString(SVG_AWESOME_BRANDS_CC_AMAZON_PAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_AMEX))  
      return wxString(SVG_AWESOME_BRANDS_CC_AMEX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_APPLE_PAY))  
      return wxString(SVG_AWESOME_BRANDS_CC_APPLE_PAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_DINERS_CLUB))  
      return wxString(SVG_AWESOME_BRANDS_CC_DINERS_CLUB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_DISCOVER))  
      return wxString(SVG_AWESOME_BRANDS_CC_DISCOVER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_JCB))  
      return wxString(SVG_AWESOME_BRANDS_CC_JCB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_MASTERCARD))  
      return wxString(SVG_AWESOME_BRANDS_CC_MASTERCARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_PAYPAL))  
      return wxString(SVG_AWESOME_BRANDS_CC_PAYPAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_STRIPE))  
      return wxString(SVG_AWESOME_BRANDS_CC_STRIPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CC_VISA))  
      return wxString(SVG_AWESOME_BRANDS_CC_VISA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CENTERCODE))  
      return wxString(SVG_AWESOME_BRANDS_CENTERCODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CENTOS))  
      return wxString(SVG_AWESOME_BRANDS_CENTOS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHROME))  
      return wxString(SVG_AWESOME_BRANDS_CHROME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHROMECAST))  
      return wxString(SVG_AWESOME_BRANDS_CHROMECAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUDFLARE))  
      return wxString(SVG_AWESOME_BRANDS_CLOUDFLARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUDSCALE))  
      return wxString(SVG_AWESOME_BRANDS_CLOUDSCALE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUDSMITH))  
      return wxString(SVG_AWESOME_BRANDS_CLOUDSMITH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOUDVERSIFY))  
      return wxString(SVG_AWESOME_BRANDS_CLOUDVERSIFY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CMPLID))  
      return wxString(SVG_AWESOME_BRANDS_CMPLID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODEPEN))  
      return wxString(SVG_AWESOME_BRANDS_CODEPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CODIEPIE))  
      return wxString(SVG_AWESOME_BRANDS_CODIEPIE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONFLUENCE))  
      return wxString(SVG_AWESOME_BRANDS_CONFLUENCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONNECTDEVELOP))  
      return wxString(SVG_AWESOME_BRANDS_CONNECTDEVELOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CONTAO))  
      return wxString(SVG_AWESOME_BRANDS_CONTAO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COTTON_BUREAU))  
      return wxString(SVG_AWESOME_BRANDS_COTTON_BUREAU);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CPANEL))  
      return wxString(SVG_AWESOME_BRANDS_CPANEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_BY))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_BY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_NC_EU))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_NC_EU);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_NC_JP))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_NC_JP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_NC))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_NC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_ND))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_ND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_PD_ALT))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_PD_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_PD))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_PD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_REMIX))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_REMIX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_SA))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_SA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_SAMPLING_PLUS))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_SAMPLING_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_SAMPLING))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_SAMPLING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_SHARE))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_SHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS_ZERO))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_ZERO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREATIVE_COMMONS))  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CRITICAL_ROLE))  
      return wxString(SVG_AWESOME_BRANDS_CRITICAL_ROLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CSS3_ALT))  
      return wxString(SVG_AWESOME_BRANDS_CSS3_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CSS3))  
      return wxString(SVG_AWESOME_BRANDS_CSS3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CUTTLEFISH))  
      return wxString(SVG_AWESOME_BRANDS_CUTTLEFISH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_D_AND_D_BEYOND))  
      return wxString(SVG_AWESOME_BRANDS_D_AND_D_BEYOND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_D_AND_D))  
      return wxString(SVG_AWESOME_BRANDS_D_AND_D);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DAILYMOTION))  
      return wxString(SVG_AWESOME_BRANDS_DAILYMOTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DASHCUBE))  
      return wxString(SVG_AWESOME_BRANDS_DASHCUBE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEBIAN))  
      return wxString(SVG_AWESOME_BRANDS_DEBIAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEEZER))  
      return wxString(SVG_AWESOME_BRANDS_DEEZER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DELICIOUS))  
      return wxString(SVG_AWESOME_BRANDS_DELICIOUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEPLOYDOG))  
      return wxString(SVG_AWESOME_BRANDS_DEPLOYDOG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DESKPRO))  
      return wxString(SVG_AWESOME_BRANDS_DESKPRO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEV))  
      return wxString(SVG_AWESOME_BRANDS_DEV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DEVIANTART))  
      return wxString(SVG_AWESOME_BRANDS_DEVIANTART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DHL))  
      return wxString(SVG_AWESOME_BRANDS_DHL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIASPORA))  
      return wxString(SVG_AWESOME_BRANDS_DIASPORA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIGG))  
      return wxString(SVG_AWESOME_BRANDS_DIGG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DIGITAL_OCEAN))  
      return wxString(SVG_AWESOME_BRANDS_DIGITAL_OCEAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DISCORD))  
      return wxString(SVG_AWESOME_BRANDS_DISCORD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DISCOURSE))  
      return wxString(SVG_AWESOME_BRANDS_DISCOURSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOCHUB))  
      return wxString(SVG_AWESOME_BRANDS_DOCHUB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DOCKER))  
      return wxString(SVG_AWESOME_BRANDS_DOCKER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRAFT2DIGITAL))  
      return wxString(SVG_AWESOME_BRANDS_DRAFT2DIGITAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRIBBBLE))  
      return wxString(SVG_AWESOME_BRANDS_DRIBBBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DROPBOX))  
      return wxString(SVG_AWESOME_BRANDS_DROPBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DRUPAL))  
      return wxString(SVG_AWESOME_BRANDS_DRUPAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_DYALOG))  
      return wxString(SVG_AWESOME_BRANDS_DYALOG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EARLYBIRDS))  
      return wxString(SVG_AWESOME_BRANDS_EARLYBIRDS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EBAY))  
      return wxString(SVG_AWESOME_BRANDS_EBAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDGE_LEGACY))  
      return wxString(SVG_AWESOME_BRANDS_EDGE_LEGACY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EDGE))  
      return wxString(SVG_AWESOME_BRANDS_EDGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELEMENTOR))  
      return wxString(SVG_AWESOME_BRANDS_ELEMENTOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ELLO))  
      return wxString(SVG_AWESOME_BRANDS_ELLO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMBER))  
      return wxString(SVG_AWESOME_BRANDS_EMBER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EMPIRE))  
      return wxString(SVG_AWESOME_BRANDS_EMPIRE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENVIRA))  
      return wxString(SVG_AWESOME_BRANDS_ENVIRA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ERLANG))  
      return wxString(SVG_AWESOME_BRANDS_ERLANG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ETHEREUM))  
      return wxString(SVG_AWESOME_BRANDS_ETHEREUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ETSY))  
      return wxString(SVG_AWESOME_BRANDS_ETSY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EVERNOTE))  
      return wxString(SVG_AWESOME_BRANDS_EVERNOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EXPEDITEDSSL))  
      return wxString(SVG_AWESOME_BRANDS_EXPEDITEDSSL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACEBOOK_F))  
      return wxString(SVG_AWESOME_BRANDS_FACEBOOK_F);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACEBOOK_MESSENGER))  
      return wxString(SVG_AWESOME_BRANDS_FACEBOOK_MESSENGER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACEBOOK))  
      return wxString(SVG_AWESOME_BRANDS_FACEBOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FANTASY_FLIGHT_GAMES))  
      return wxString(SVG_AWESOME_BRANDS_FANTASY_FLIGHT_GAMES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FEDEX))  
      return wxString(SVG_AWESOME_BRANDS_FEDEX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FEDORA))  
      return wxString(SVG_AWESOME_BRANDS_FEDORA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIGMA))  
      return wxString(SVG_AWESOME_BRANDS_FIGMA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIREFOX_BROWSER))  
      return wxString(SVG_AWESOME_BRANDS_FIREFOX_BROWSER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIREFOX))  
      return wxString(SVG_AWESOME_BRANDS_FIREFOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRST_ORDER_ALT))  
      return wxString(SVG_AWESOME_BRANDS_FIRST_ORDER_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRST_ORDER))  
      return wxString(SVG_AWESOME_BRANDS_FIRST_ORDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FIRSTDRAFT))  
      return wxString(SVG_AWESOME_BRANDS_FIRSTDRAFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLICKR))  
      return wxString(SVG_AWESOME_BRANDS_FLICKR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLIPBOARD))  
      return wxString(SVG_AWESOME_BRANDS_FLIPBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLY))  
      return wxString(SVG_AWESOME_BRANDS_FLY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FONT_AWESOME))  
      return wxString(SVG_AWESOME_BRANDS_FONT_AWESOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FONTICONS_FI))  
      return wxString(SVG_AWESOME_BRANDS_FONTICONS_FI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FONTICONS))  
      return wxString(SVG_AWESOME_BRANDS_FONTICONS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORT_AWESOME_ALT))  
      return wxString(SVG_AWESOME_BRANDS_FORT_AWESOME_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORT_AWESOME))  
      return wxString(SVG_AWESOME_BRANDS_FORT_AWESOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FORUMBEE))  
      return wxString(SVG_AWESOME_BRANDS_FORUMBEE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOURSQUARE))  
      return wxString(SVG_AWESOME_BRANDS_FOURSQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FREE_CODE_CAMP))  
      return wxString(SVG_AWESOME_BRANDS_FREE_CODE_CAMP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FREEBSD))  
      return wxString(SVG_AWESOME_BRANDS_FREEBSD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FULCRUM))  
      return wxString(SVG_AWESOME_BRANDS_FULCRUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GALACTIC_REPUBLIC))  
      return wxString(SVG_AWESOME_BRANDS_GALACTIC_REPUBLIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GALACTIC_SENATE))  
      return wxString(SVG_AWESOME_BRANDS_GALACTIC_SENATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GET_POCKET))  
      return wxString(SVG_AWESOME_BRANDS_GET_POCKET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GG_CIRCLE))  
      return wxString(SVG_AWESOME_BRANDS_GG_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GG))  
      return wxString(SVG_AWESOME_BRANDS_GG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GIT_ALT))  
      return wxString(SVG_AWESOME_BRANDS_GIT_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GIT))  
      return wxString(SVG_AWESOME_BRANDS_GIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GITHUB_ALT))  
      return wxString(SVG_AWESOME_BRANDS_GITHUB_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GITHUB))  
      return wxString(SVG_AWESOME_BRANDS_GITHUB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GITKRAKEN))  
      return wxString(SVG_AWESOME_BRANDS_GITKRAKEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GITLAB))  
      return wxString(SVG_AWESOME_BRANDS_GITLAB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GITTER))  
      return wxString(SVG_AWESOME_BRANDS_GITTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GLIDE_G))  
      return wxString(SVG_AWESOME_BRANDS_GLIDE_G);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GLIDE))  
      return wxString(SVG_AWESOME_BRANDS_GLIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOFORE))  
      return wxString(SVG_AWESOME_BRANDS_GOFORE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOLANG))  
      return wxString(SVG_AWESOME_BRANDS_GOLANG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOODREADS_G))  
      return wxString(SVG_AWESOME_BRANDS_GOODREADS_G);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOODREADS))  
      return wxString(SVG_AWESOME_BRANDS_GOODREADS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOOGLE_DRIVE))  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_DRIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOOGLE_PAY))  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_PAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOOGLE_PLAY))  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_PLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOOGLE_PLUS_G))  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_PLUS_G);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOOGLE_PLUS))  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOOGLE_WALLET))  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_WALLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GOOGLE))  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRATIPAY))  
      return wxString(SVG_AWESOME_BRANDS_GRATIPAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRAV))  
      return wxString(SVG_AWESOME_BRANDS_GRAV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRIPFIRE))  
      return wxString(SVG_AWESOME_BRANDS_GRIPFIRE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GRUNT))  
      return wxString(SVG_AWESOME_BRANDS_GRUNT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GUILDED))  
      return wxString(SVG_AWESOME_BRANDS_GUILDED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GULP))  
      return wxString(SVG_AWESOME_BRANDS_GULP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HACKER_NEWS))  
      return wxString(SVG_AWESOME_BRANDS_HACKER_NEWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HACKERRANK))  
      return wxString(SVG_AWESOME_BRANDS_HACKERRANK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HASHNODE))  
      return wxString(SVG_AWESOME_BRANDS_HASHNODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIPS))  
      return wxString(SVG_AWESOME_BRANDS_HIPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIRE_A_HELPER))  
      return wxString(SVG_AWESOME_BRANDS_HIRE_A_HELPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HIVE))  
      return wxString(SVG_AWESOME_BRANDS_HIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOOLI))  
      return wxString(SVG_AWESOME_BRANDS_HOOLI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HORNBILL))  
      return wxString(SVG_AWESOME_BRANDS_HORNBILL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOTJAR))  
      return wxString(SVG_AWESOME_BRANDS_HOTJAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOUZZ))  
      return wxString(SVG_AWESOME_BRANDS_HOUZZ);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HTML5))  
      return wxString(SVG_AWESOME_BRANDS_HTML5);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HUBSPOT))  
      return wxString(SVG_AWESOME_BRANDS_HUBSPOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IDEAL))  
      return wxString(SVG_AWESOME_BRANDS_IDEAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMDB))  
      return wxString(SVG_AWESOME_BRANDS_IMDB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSTAGRAM))  
      return wxString(SVG_AWESOME_BRANDS_INSTAGRAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INSTALOD))  
      return wxString(SVG_AWESOME_BRANDS_INSTALOD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INTERCOM))  
      return wxString(SVG_AWESOME_BRANDS_INTERCOM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INTERNET_EXPLORER))  
      return wxString(SVG_AWESOME_BRANDS_INTERNET_EXPLORER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_INVISION))  
      return wxString(SVG_AWESOME_BRANDS_INVISION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IOXHOST))  
      return wxString(SVG_AWESOME_BRANDS_IOXHOST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ITCH_IO))  
      return wxString(SVG_AWESOME_BRANDS_ITCH_IO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ITUNES_NOTE))  
      return wxString(SVG_AWESOME_BRANDS_ITUNES_NOTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ITUNES))  
      return wxString(SVG_AWESOME_BRANDS_ITUNES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JAVA))  
      return wxString(SVG_AWESOME_BRANDS_JAVA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JEDI_ORDER))  
      return wxString(SVG_AWESOME_BRANDS_JEDI_ORDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JENKINS))  
      return wxString(SVG_AWESOME_BRANDS_JENKINS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JIRA))  
      return wxString(SVG_AWESOME_BRANDS_JIRA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JOGET))  
      return wxString(SVG_AWESOME_BRANDS_JOGET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JOOMLA))  
      return wxString(SVG_AWESOME_BRANDS_JOOMLA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JS))  
      return wxString(SVG_AWESOME_BRANDS_JS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_JSFIDDLE))  
      return wxString(SVG_AWESOME_BRANDS_JSFIDDLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KAGGLE))  
      return wxString(SVG_AWESOME_BRANDS_KAGGLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBASE))  
      return wxString(SVG_AWESOME_BRANDS_KEYBASE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYCDN))  
      return wxString(SVG_AWESOME_BRANDS_KEYCDN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KICKSTARTER_K))  
      return wxString(SVG_AWESOME_BRANDS_KICKSTARTER_K);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KICKSTARTER))  
      return wxString(SVG_AWESOME_BRANDS_KICKSTARTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KORVUE))  
      return wxString(SVG_AWESOME_BRANDS_KORVUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LARAVEL))  
      return wxString(SVG_AWESOME_BRANDS_LARAVEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LASTFM))  
      return wxString(SVG_AWESOME_BRANDS_LASTFM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEANPUB))  
      return wxString(SVG_AWESOME_BRANDS_LEANPUB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LESS))  
      return wxString(SVG_AWESOME_BRANDS_LESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINE))  
      return wxString(SVG_AWESOME_BRANDS_LINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINKEDIN_IN))  
      return wxString(SVG_AWESOME_BRANDS_LINKEDIN_IN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINKEDIN))  
      return wxString(SVG_AWESOME_BRANDS_LINKEDIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINODE))  
      return wxString(SVG_AWESOME_BRANDS_LINODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LINUX))  
      return wxString(SVG_AWESOME_BRANDS_LINUX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LYFT))  
      return wxString(SVG_AWESOME_BRANDS_LYFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAGENTO))  
      return wxString(SVG_AWESOME_BRANDS_MAGENTO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAILCHIMP))  
      return wxString(SVG_AWESOME_BRANDS_MAILCHIMP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MANDALORIAN))  
      return wxString(SVG_AWESOME_BRANDS_MANDALORIAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MARKDOWN))  
      return wxString(SVG_AWESOME_BRANDS_MARKDOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MASTODON))  
      return wxString(SVG_AWESOME_BRANDS_MASTODON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAXCDN))  
      return wxString(SVG_AWESOME_BRANDS_MAXCDN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MDB))  
      return wxString(SVG_AWESOME_BRANDS_MDB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDAPPS))  
      return wxString(SVG_AWESOME_BRANDS_MEDAPPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDIUM))  
      return wxString(SVG_AWESOME_BRANDS_MEDIUM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEDRT))  
      return wxString(SVG_AWESOME_BRANDS_MEDRT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEETUP))  
      return wxString(SVG_AWESOME_BRANDS_MEETUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MEGAPORT))  
      return wxString(SVG_AWESOME_BRANDS_MEGAPORT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MENDELEY))  
      return wxString(SVG_AWESOME_BRANDS_MENDELEY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_META))  
      return wxString(SVG_AWESOME_BRANDS_META);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MICROBLOG))  
      return wxString(SVG_AWESOME_BRANDS_MICROBLOG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MICROSOFT))  
      return wxString(SVG_AWESOME_BRANDS_MICROSOFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MIX))  
      return wxString(SVG_AWESOME_BRANDS_MIX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MIXCLOUD))  
      return wxString(SVG_AWESOME_BRANDS_MIXCLOUD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MIXER))  
      return wxString(SVG_AWESOME_BRANDS_MIXER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MIZUNI))  
      return wxString(SVG_AWESOME_BRANDS_MIZUNI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MODX))  
      return wxString(SVG_AWESOME_BRANDS_MODX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONERO))  
      return wxString(SVG_AWESOME_BRANDS_MONERO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NAPSTER))  
      return wxString(SVG_AWESOME_BRANDS_NAPSTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEOS))  
      return wxString(SVG_AWESOME_BRANDS_NEOS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NFC_DIRECTIONAL))  
      return wxString(SVG_AWESOME_BRANDS_NFC_DIRECTIONAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NFC_SYMBOL))  
      return wxString(SVG_AWESOME_BRANDS_NFC_SYMBOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NIMBLR))  
      return wxString(SVG_AWESOME_BRANDS_NIMBLR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NODE_JS))  
      return wxString(SVG_AWESOME_BRANDS_NODE_JS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NODE))  
      return wxString(SVG_AWESOME_BRANDS_NODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NPM))  
      return wxString(SVG_AWESOME_BRANDS_NPM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NS8))  
      return wxString(SVG_AWESOME_BRANDS_NS8);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NUTRITIONIX))  
      return wxString(SVG_AWESOME_BRANDS_NUTRITIONIX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OCTOPUS_DEPLOY))  
      return wxString(SVG_AWESOME_BRANDS_OCTOPUS_DEPLOY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ODNOKLASSNIKI))  
      return wxString(SVG_AWESOME_BRANDS_ODNOKLASSNIKI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ODYSEE))  
      return wxString(SVG_AWESOME_BRANDS_ODYSEE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OLD_REPUBLIC))  
      return wxString(SVG_AWESOME_BRANDS_OLD_REPUBLIC);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPENCART))  
      return wxString(SVG_AWESOME_BRANDS_OPENCART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPENID))  
      return wxString(SVG_AWESOME_BRANDS_OPENID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPERA))  
      return wxString(SVG_AWESOME_BRANDS_OPERA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OPTIN_MONSTER))  
      return wxString(SVG_AWESOME_BRANDS_OPTIN_MONSTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ORCID))  
      return wxString(SVG_AWESOME_BRANDS_ORCID);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OSI))  
      return wxString(SVG_AWESOME_BRANDS_OSI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PADLET))  
      return wxString(SVG_AWESOME_BRANDS_PADLET);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAGE4))  
      return wxString(SVG_AWESOME_BRANDS_PAGE4);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAGELINES))  
      return wxString(SVG_AWESOME_BRANDS_PAGELINES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PALFED))  
      return wxString(SVG_AWESOME_BRANDS_PALFED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PATREON))  
      return wxString(SVG_AWESOME_BRANDS_PATREON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAYPAL))  
      return wxString(SVG_AWESOME_BRANDS_PAYPAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERBYTE))  
      return wxString(SVG_AWESOME_BRANDS_PERBYTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PERISCOPE))  
      return wxString(SVG_AWESOME_BRANDS_PERISCOPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHABRICATOR))  
      return wxString(SVG_AWESOME_BRANDS_PHABRICATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOENIX_FRAMEWORK))  
      return wxString(SVG_AWESOME_BRANDS_PHOENIX_FRAMEWORK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHOENIX_SQUADRON))  
      return wxString(SVG_AWESOME_BRANDS_PHOENIX_SQUADRON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PHP))  
      return wxString(SVG_AWESOME_BRANDS_PHP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIED_PIPER_ALT))  
      return wxString(SVG_AWESOME_BRANDS_PIED_PIPER_ALT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIED_PIPER_HAT))  
      return wxString(SVG_AWESOME_BRANDS_PIED_PIPER_HAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIED_PIPER_PP))  
      return wxString(SVG_AWESOME_BRANDS_PIED_PIPER_PP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIED_PIPER))  
      return wxString(SVG_AWESOME_BRANDS_PIED_PIPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PINTEREST_P))  
      return wxString(SVG_AWESOME_BRANDS_PINTEREST_P);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PINTEREST))  
      return wxString(SVG_AWESOME_BRANDS_PINTEREST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PIX))  
      return wxString(SVG_AWESOME_BRANDS_PIX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PLAYSTATION))  
      return wxString(SVG_AWESOME_BRANDS_PLAYSTATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PRODUCT_HUNT))  
      return wxString(SVG_AWESOME_BRANDS_PRODUCT_HUNT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PUSHED))  
      return wxString(SVG_AWESOME_BRANDS_PUSHED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PYTHON))  
      return wxString(SVG_AWESOME_BRANDS_PYTHON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QQ))  
      return wxString(SVG_AWESOME_BRANDS_QQ);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUINSCAPE))  
      return wxString(SVG_AWESOME_BRANDS_QUINSCAPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_QUORA))  
      return wxString(SVG_AWESOME_BRANDS_QUORA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_R_PROJECT))  
      return wxString(SVG_AWESOME_BRANDS_R_PROJECT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RASPBERRY_PI))  
      return wxString(SVG_AWESOME_BRANDS_RASPBERRY_PI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RAVELRY))  
      return wxString(SVG_AWESOME_BRANDS_RAVELRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REACT))  
      return wxString(SVG_AWESOME_BRANDS_REACT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REACTEUROPE))  
      return wxString(SVG_AWESOME_BRANDS_REACTEUROPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_README))  
      return wxString(SVG_AWESOME_BRANDS_README);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REBEL))  
      return wxString(SVG_AWESOME_BRANDS_REBEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RED_RIVER))  
      return wxString(SVG_AWESOME_BRANDS_RED_RIVER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REDDIT_ALIEN))  
      return wxString(SVG_AWESOME_BRANDS_REDDIT_ALIEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REDDIT))  
      return wxString(SVG_AWESOME_BRANDS_REDDIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REDHAT))  
      return wxString(SVG_AWESOME_BRANDS_REDHAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RENREN))  
      return wxString(SVG_AWESOME_BRANDS_RENREN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REPLYD))  
      return wxString(SVG_AWESOME_BRANDS_REPLYD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESEARCHGATE))  
      return wxString(SVG_AWESOME_BRANDS_RESEARCHGATE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RESOLVING))  
      return wxString(SVG_AWESOME_BRANDS_RESOLVING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REV))  
      return wxString(SVG_AWESOME_BRANDS_REV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROCKETCHAT))  
      return wxString(SVG_AWESOME_BRANDS_ROCKETCHAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ROCKRMS))  
      return wxString(SVG_AWESOME_BRANDS_ROCKRMS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RUST))  
      return wxString(SVG_AWESOME_BRANDS_RUST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SAFARI))  
      return wxString(SVG_AWESOME_BRANDS_SAFARI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SALESFORCE))  
      return wxString(SVG_AWESOME_BRANDS_SALESFORCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SASS))  
      return wxString(SVG_AWESOME_BRANDS_SASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCHLIX))  
      return wxString(SVG_AWESOME_BRANDS_SCHLIX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCREENPAL))  
      return wxString(SVG_AWESOME_BRANDS_SCREENPAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SCRIBD))  
      return wxString(SVG_AWESOME_BRANDS_SCRIBD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SEARCHENGIN))  
      return wxString(SVG_AWESOME_BRANDS_SEARCHENGIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SELLCAST))  
      return wxString(SVG_AWESOME_BRANDS_SELLCAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SELLSY))  
      return wxString(SVG_AWESOME_BRANDS_SELLSY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SERVICESTACK))  
      return wxString(SVG_AWESOME_BRANDS_SERVICESTACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHIRTSINBULK))  
      return wxString(SVG_AWESOME_BRANDS_SHIRTSINBULK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOPIFY))  
      return wxString(SVG_AWESOME_BRANDS_SHOPIFY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHOPWARE))  
      return wxString(SVG_AWESOME_BRANDS_SHOPWARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SIMPLYBUILT))  
      return wxString(SVG_AWESOME_BRANDS_SIMPLYBUILT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SISTRIX))  
      return wxString(SVG_AWESOME_BRANDS_SISTRIX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SITH))  
      return wxString(SVG_AWESOME_BRANDS_SITH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SITROX))  
      return wxString(SVG_AWESOME_BRANDS_SITROX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SKETCH))  
      return wxString(SVG_AWESOME_BRANDS_SKETCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SKYATLAS))  
      return wxString(SVG_AWESOME_BRANDS_SKYATLAS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SKYPE))  
      return wxString(SVG_AWESOME_BRANDS_SKYPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SLACK))  
      return wxString(SVG_AWESOME_BRANDS_SLACK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SLIDESHARE))  
      return wxString(SVG_AWESOME_BRANDS_SLIDESHARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNAPCHAT))  
      return wxString(SVG_AWESOME_BRANDS_SNAPCHAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOUNDCLOUD))  
      return wxString(SVG_AWESOME_BRANDS_SOUNDCLOUD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SOURCETREE))  
      return wxString(SVG_AWESOME_BRANDS_SOURCETREE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPACE_AWESOME))  
      return wxString(SVG_AWESOME_BRANDS_SPACE_AWESOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPEAKAP))  
      return wxString(SVG_AWESOME_BRANDS_SPEAKAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPEAKER_DECK))  
      return wxString(SVG_AWESOME_BRANDS_SPEAKER_DECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SPOTIFY))  
      return wxString(SVG_AWESOME_BRANDS_SPOTIFY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_BEHANCE))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_BEHANCE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_DRIBBBLE))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_DRIBBBLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_FACEBOOK))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_FACEBOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_FONT_AWESOME_STROKE))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_FONT_AWESOME_STROKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_FONT_AWESOME))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_FONT_AWESOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_GIT))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_GIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_GITHUB))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_GITHUB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_GITLAB))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_GITLAB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_GOOGLE_PLUS))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_GOOGLE_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_HACKER_NEWS))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_HACKER_NEWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_INSTAGRAM))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_INSTAGRAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_JS))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_JS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_LASTFM))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_LASTFM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_ODNOKLASSNIKI))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_ODNOKLASSNIKI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_PIED_PIPER))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_PIED_PIPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_PINTEREST))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_PINTEREST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_REDDIT))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_REDDIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_SNAPCHAT))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_SNAPCHAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_STEAM))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_STEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_THREADS))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_THREADS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_TUMBLR))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_TUMBLR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_TWITTER))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_TWITTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_VIADEO))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_VIADEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_VIMEO))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_VIMEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_WHATSAPP))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_WHATSAPP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_X_TWITTER))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_X_TWITTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_XING))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_XING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_YOUTUBE))  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_YOUTUBE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARESPACE))  
      return wxString(SVG_AWESOME_BRANDS_SQUARESPACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STACK_EXCHANGE))  
      return wxString(SVG_AWESOME_BRANDS_STACK_EXCHANGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STACK_OVERFLOW))  
      return wxString(SVG_AWESOME_BRANDS_STACK_OVERFLOW);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STACKPATH))  
      return wxString(SVG_AWESOME_BRANDS_STACKPATH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAYLINKED))  
      return wxString(SVG_AWESOME_BRANDS_STAYLINKED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STEAM_SYMBOL))  
      return wxString(SVG_AWESOME_BRANDS_STEAM_SYMBOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STEAM))  
      return wxString(SVG_AWESOME_BRANDS_STEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STICKER_MULE))  
      return wxString(SVG_AWESOME_BRANDS_STICKER_MULE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STRAVA))  
      return wxString(SVG_AWESOME_BRANDS_STRAVA);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STRIPE_S))  
      return wxString(SVG_AWESOME_BRANDS_STRIPE_S);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STRIPE))  
      return wxString(SVG_AWESOME_BRANDS_STRIPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STUBBER))  
      return wxString(SVG_AWESOME_BRANDS_STUBBER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STUDIOVINARI))  
      return wxString(SVG_AWESOME_BRANDS_STUDIOVINARI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STUMBLEUPON_CIRCLE))  
      return wxString(SVG_AWESOME_BRANDS_STUMBLEUPON_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STUMBLEUPON))  
      return wxString(SVG_AWESOME_BRANDS_STUMBLEUPON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUPERPOWERS))  
      return wxString(SVG_AWESOME_BRANDS_SUPERPOWERS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUPPLE))  
      return wxString(SVG_AWESOME_BRANDS_SUPPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUSE))  
      return wxString(SVG_AWESOME_BRANDS_SUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SWIFT))  
      return wxString(SVG_AWESOME_BRANDS_SWIFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SYMFONY))  
      return wxString(SVG_AWESOME_BRANDS_SYMFONY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TEAMSPEAK))  
      return wxString(SVG_AWESOME_BRANDS_TEAMSPEAK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TELEGRAM))  
      return wxString(SVG_AWESOME_BRANDS_TELEGRAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TENCENT_WEIBO))  
      return wxString(SVG_AWESOME_BRANDS_TENCENT_WEIBO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THE_RED_YETI))  
      return wxString(SVG_AWESOME_BRANDS_THE_RED_YETI);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THEMECO))  
      return wxString(SVG_AWESOME_BRANDS_THEMECO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THEMEISLE))  
      return wxString(SVG_AWESOME_BRANDS_THEMEISLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THINK_PEAKS))  
      return wxString(SVG_AWESOME_BRANDS_THINK_PEAKS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THREADS))  
      return wxString(SVG_AWESOME_BRANDS_THREADS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TIKTOK))  
      return wxString(SVG_AWESOME_BRANDS_TIKTOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRADE_FEDERATION))  
      return wxString(SVG_AWESOME_BRANDS_TRADE_FEDERATION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRELLO))  
      return wxString(SVG_AWESOME_BRANDS_TRELLO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TUMBLR))  
      return wxString(SVG_AWESOME_BRANDS_TUMBLR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TWITCH))  
      return wxString(SVG_AWESOME_BRANDS_TWITCH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TWITTER))  
      return wxString(SVG_AWESOME_BRANDS_TWITTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TYPO3))  
      return wxString(SVG_AWESOME_BRANDS_TYPO3);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UBER))  
      return wxString(SVG_AWESOME_BRANDS_UBER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UBUNTU))  
      return wxString(SVG_AWESOME_BRANDS_UBUNTU);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UIKIT))  
      return wxString(SVG_AWESOME_BRANDS_UIKIT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UMBRACO))  
      return wxString(SVG_AWESOME_BRANDS_UMBRACO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNCHARTED))  
      return wxString(SVG_AWESOME_BRANDS_UNCHARTED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNIREGISTRY))  
      return wxString(SVG_AWESOME_BRANDS_UNIREGISTRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNITY))  
      return wxString(SVG_AWESOME_BRANDS_UNITY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNSPLASH))  
      return wxString(SVG_AWESOME_BRANDS_UNSPLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UNTAPPD))  
      return wxString(SVG_AWESOME_BRANDS_UNTAPPD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_UPS))  
      return wxString(SVG_AWESOME_BRANDS_UPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USB))  
      return wxString(SVG_AWESOME_BRANDS_USB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USPS))  
      return wxString(SVG_AWESOME_BRANDS_USPS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USSUNNAH))  
      return wxString(SVG_AWESOME_BRANDS_USSUNNAH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VAADIN))  
      return wxString(SVG_AWESOME_BRANDS_VAADIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIACOIN))  
      return wxString(SVG_AWESOME_BRANDS_VIACOIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIADEO))  
      return wxString(SVG_AWESOME_BRANDS_VIADEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIBER))  
      return wxString(SVG_AWESOME_BRANDS_VIBER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIMEO_V))  
      return wxString(SVG_AWESOME_BRANDS_VIMEO_V);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VIMEO))  
      return wxString(SVG_AWESOME_BRANDS_VIMEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VINE))  
      return wxString(SVG_AWESOME_BRANDS_VINE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VK))  
      return wxString(SVG_AWESOME_BRANDS_VK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VNV))  
      return wxString(SVG_AWESOME_BRANDS_VNV);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_VUEJS))  
      return wxString(SVG_AWESOME_BRANDS_VUEJS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WATCHMAN_MONITORING))  
      return wxString(SVG_AWESOME_BRANDS_WATCHMAN_MONITORING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WAZE))  
      return wxString(SVG_AWESOME_BRANDS_WAZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEEBLY))  
      return wxString(SVG_AWESOME_BRANDS_WEEBLY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEIBO))  
      return wxString(SVG_AWESOME_BRANDS_WEIBO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WEIXIN))  
      return wxString(SVG_AWESOME_BRANDS_WEIXIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHATSAPP))  
      return wxString(SVG_AWESOME_BRANDS_WHATSAPP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WHMCS))  
      return wxString(SVG_AWESOME_BRANDS_WHMCS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIKIPEDIA_W))  
      return wxString(SVG_AWESOME_BRANDS_WIKIPEDIA_W);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINDOWS))  
      return wxString(SVG_AWESOME_BRANDS_WINDOWS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIRSINDHANDWERK))  
      return wxString(SVG_AWESOME_BRANDS_WIRSINDHANDWERK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIX))  
      return wxString(SVG_AWESOME_BRANDS_WIX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WIZARDS_OF_THE_COAST))  
      return wxString(SVG_AWESOME_BRANDS_WIZARDS_OF_THE_COAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WODU))  
      return wxString(SVG_AWESOME_BRANDS_WODU);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WOLF_PACK_BATTALION))  
      return wxString(SVG_AWESOME_BRANDS_WOLF_PACK_BATTALION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WORDPRESS_SIMPLE))  
      return wxString(SVG_AWESOME_BRANDS_WORDPRESS_SIMPLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WORDPRESS))  
      return wxString(SVG_AWESOME_BRANDS_WORDPRESS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WPBEGINNER))  
      return wxString(SVG_AWESOME_BRANDS_WPBEGINNER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WPEXPLORER))  
      return wxString(SVG_AWESOME_BRANDS_WPEXPLORER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WPFORMS))  
      return wxString(SVG_AWESOME_BRANDS_WPFORMS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WPRESSR))  
      return wxString(SVG_AWESOME_BRANDS_WPRESSR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_X_TWITTER))  
      return wxString(SVG_AWESOME_BRANDS_X_TWITTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_XBOX))  
      return wxString(SVG_AWESOME_BRANDS_XBOX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_XING))  
      return wxString(SVG_AWESOME_BRANDS_XING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_Y_COMBINATOR))  
      return wxString(SVG_AWESOME_BRANDS_Y_COMBINATOR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YAHOO))  
      return wxString(SVG_AWESOME_BRANDS_YAHOO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YAMMER))  
      return wxString(SVG_AWESOME_BRANDS_YAMMER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YANDEX_INTERNATIONAL))  
      return wxString(SVG_AWESOME_BRANDS_YANDEX_INTERNATIONAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YANDEX))  
      return wxString(SVG_AWESOME_BRANDS_YANDEX);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YARN))  
      return wxString(SVG_AWESOME_BRANDS_YARN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YELP))  
      return wxString(SVG_AWESOME_BRANDS_YELP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YOAST))  
      return wxString(SVG_AWESOME_BRANDS_YOAST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_YOUTUBE))  
      return wxString(SVG_AWESOME_BRANDS_YOUTUBE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ZHIHU))  
      return wxString(SVG_AWESOME_BRANDS_ZHIHU);


// Any IDs not implemented here will return a null string 
return wxString(); 
}


// Return SVG for the current ID as a string, with given color
wxString BrandsAwesomeArtColorSVGByID(const wxArtID& id, const wxColour& color)
{
wxString svg = BrandsAwesomeArtSVGByID(id); 
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
wxArrayString BrandsAwesomeArtIDs()
{
    wxArrayString list; 

    list.Add(wxART_42_GROUP); 
    list.Add(wxART_500PX); 
    list.Add(wxART_ACCESSIBLE_ICON); 
    list.Add(wxART_ACCUSOFT); 
    list.Add(wxART_ADN); 
    list.Add(wxART_ADVERSAL); 
    list.Add(wxART_AFFILIATETHEME); 
    list.Add(wxART_AIRBNB); 
    list.Add(wxART_ALGOLIA); 
    list.Add(wxART_ALIPAY); 
    list.Add(wxART_AMAZON_PAY); 
    list.Add(wxART_AMAZON); 
    list.Add(wxART_AMILIA); 
    list.Add(wxART_ANDROID); 
    list.Add(wxART_ANGELLIST); 
    list.Add(wxART_ANGRYCREATIVE); 
    list.Add(wxART_ANGULAR); 
    list.Add(wxART_APP_STORE_IOS); 
    list.Add(wxART_APP_STORE); 
    list.Add(wxART_APPER); 
    list.Add(wxART_APPLE_PAY); 
    list.Add(wxART_APPLE); 
    list.Add(wxART_ARTSTATION); 
    list.Add(wxART_ASYMMETRIK); 
    list.Add(wxART_ATLASSIAN); 
    list.Add(wxART_AUDIBLE); 
    list.Add(wxART_AUTOPREFIXER); 
    list.Add(wxART_AVIANEX); 
    list.Add(wxART_AVIATO); 
    list.Add(wxART_AWS); 
    list.Add(wxART_BANDCAMP); 
    list.Add(wxART_BATTLE_NET); 
    list.Add(wxART_BEHANCE); 
    list.Add(wxART_BILIBILI); 
    list.Add(wxART_BIMOBJECT); 
    list.Add(wxART_BITBUCKET); 
    list.Add(wxART_BITCOIN); 
    list.Add(wxART_BITY); 
    list.Add(wxART_BLACK_TIE); 
    list.Add(wxART_BLACKBERRY); 
    list.Add(wxART_BLOGGER_B); 
    list.Add(wxART_BLOGGER); 
    list.Add(wxART_BLUETOOTH_B); 
    list.Add(wxART_BLUETOOTH); 
    list.Add(wxART_BOOTSTRAP); 
    list.Add(wxART_BOTS); 
    list.Add(wxART_BTC); 
    list.Add(wxART_BUFFER); 
    list.Add(wxART_BUROMOBELEXPERTE); 
    list.Add(wxART_BUY_N_LARGE); 
    list.Add(wxART_BUYSELLADS); 
    list.Add(wxART_CANADIAN_MAPLE_LEAF); 
    list.Add(wxART_CC_AMAZON_PAY); 
    list.Add(wxART_CC_AMEX); 
    list.Add(wxART_CC_APPLE_PAY); 
    list.Add(wxART_CC_DINERS_CLUB); 
    list.Add(wxART_CC_DISCOVER); 
    list.Add(wxART_CC_JCB); 
    list.Add(wxART_CC_MASTERCARD); 
    list.Add(wxART_CC_PAYPAL); 
    list.Add(wxART_CC_STRIPE); 
    list.Add(wxART_CC_VISA); 
    list.Add(wxART_CENTERCODE); 
    list.Add(wxART_CENTOS); 
    list.Add(wxART_CHROME); 
    list.Add(wxART_CHROMECAST); 
    list.Add(wxART_CLOUDFLARE); 
    list.Add(wxART_CLOUDSCALE); 
    list.Add(wxART_CLOUDSMITH); 
    list.Add(wxART_CLOUDVERSIFY); 
    list.Add(wxART_CMPLID); 
    list.Add(wxART_CODEPEN); 
    list.Add(wxART_CODIEPIE); 
    list.Add(wxART_CONFLUENCE); 
    list.Add(wxART_CONNECTDEVELOP); 
    list.Add(wxART_CONTAO); 
    list.Add(wxART_COTTON_BUREAU); 
    list.Add(wxART_CPANEL); 
    list.Add(wxART_CREATIVE_COMMONS_BY); 
    list.Add(wxART_CREATIVE_COMMONS_NC_EU); 
    list.Add(wxART_CREATIVE_COMMONS_NC_JP); 
    list.Add(wxART_CREATIVE_COMMONS_NC); 
    list.Add(wxART_CREATIVE_COMMONS_ND); 
    list.Add(wxART_CREATIVE_COMMONS_PD_ALT); 
    list.Add(wxART_CREATIVE_COMMONS_PD); 
    list.Add(wxART_CREATIVE_COMMONS_REMIX); 
    list.Add(wxART_CREATIVE_COMMONS_SA); 
    list.Add(wxART_CREATIVE_COMMONS_SAMPLING_PLUS); 
    list.Add(wxART_CREATIVE_COMMONS_SAMPLING); 
    list.Add(wxART_CREATIVE_COMMONS_SHARE); 
    list.Add(wxART_CREATIVE_COMMONS_ZERO); 
    list.Add(wxART_CREATIVE_COMMONS); 
    list.Add(wxART_CRITICAL_ROLE); 
    list.Add(wxART_CSS3_ALT); 
    list.Add(wxART_CSS3); 
    list.Add(wxART_CUTTLEFISH); 
    list.Add(wxART_D_AND_D_BEYOND); 
    list.Add(wxART_D_AND_D); 
    list.Add(wxART_DAILYMOTION); 
    list.Add(wxART_DASHCUBE); 
    list.Add(wxART_DEBIAN); 
    list.Add(wxART_DEEZER); 
    list.Add(wxART_DELICIOUS); 
    list.Add(wxART_DEPLOYDOG); 
    list.Add(wxART_DESKPRO); 
    list.Add(wxART_DEV); 
    list.Add(wxART_DEVIANTART); 
    list.Add(wxART_DHL); 
    list.Add(wxART_DIASPORA); 
    list.Add(wxART_DIGG); 
    list.Add(wxART_DIGITAL_OCEAN); 
    list.Add(wxART_DISCORD); 
    list.Add(wxART_DISCOURSE); 
    list.Add(wxART_DOCHUB); 
    list.Add(wxART_DOCKER); 
    list.Add(wxART_DRAFT2DIGITAL); 
    list.Add(wxART_DRIBBBLE); 
    list.Add(wxART_DROPBOX); 
    list.Add(wxART_DRUPAL); 
    list.Add(wxART_DYALOG); 
    list.Add(wxART_EARLYBIRDS); 
    list.Add(wxART_EBAY); 
    list.Add(wxART_EDGE_LEGACY); 
    list.Add(wxART_EDGE); 
    list.Add(wxART_ELEMENTOR); 
    list.Add(wxART_ELLO); 
    list.Add(wxART_EMBER); 
    list.Add(wxART_EMPIRE); 
    list.Add(wxART_ENVIRA); 
    list.Add(wxART_ERLANG); 
    list.Add(wxART_ETHEREUM); 
    list.Add(wxART_ETSY); 
    list.Add(wxART_EVERNOTE); 
    list.Add(wxART_EXPEDITEDSSL); 
    list.Add(wxART_FACEBOOK_F); 
    list.Add(wxART_FACEBOOK_MESSENGER); 
    list.Add(wxART_FACEBOOK); 
    list.Add(wxART_FANTASY_FLIGHT_GAMES); 
    list.Add(wxART_FEDEX); 
    list.Add(wxART_FEDORA); 
    list.Add(wxART_FIGMA); 
    list.Add(wxART_FIREFOX_BROWSER); 
    list.Add(wxART_FIREFOX); 
    list.Add(wxART_FIRST_ORDER_ALT); 
    list.Add(wxART_FIRST_ORDER); 
    list.Add(wxART_FIRSTDRAFT); 
    list.Add(wxART_FLICKR); 
    list.Add(wxART_FLIPBOARD); 
    list.Add(wxART_FLY); 
    list.Add(wxART_FONT_AWESOME); 
    list.Add(wxART_FONTICONS_FI); 
    list.Add(wxART_FONTICONS); 
    list.Add(wxART_FORT_AWESOME_ALT); 
    list.Add(wxART_FORT_AWESOME); 
    list.Add(wxART_FORUMBEE); 
    list.Add(wxART_FOURSQUARE); 
    list.Add(wxART_FREE_CODE_CAMP); 
    list.Add(wxART_FREEBSD); 
    list.Add(wxART_FULCRUM); 
    list.Add(wxART_GALACTIC_REPUBLIC); 
    list.Add(wxART_GALACTIC_SENATE); 
    list.Add(wxART_GET_POCKET); 
    list.Add(wxART_GG_CIRCLE); 
    list.Add(wxART_GG); 
    list.Add(wxART_GIT_ALT); 
    list.Add(wxART_GIT); 
    list.Add(wxART_GITHUB_ALT); 
    list.Add(wxART_GITHUB); 
    list.Add(wxART_GITKRAKEN); 
    list.Add(wxART_GITLAB); 
    list.Add(wxART_GITTER); 
    list.Add(wxART_GLIDE_G); 
    list.Add(wxART_GLIDE); 
    list.Add(wxART_GOFORE); 
    list.Add(wxART_GOLANG); 
    list.Add(wxART_GOODREADS_G); 
    list.Add(wxART_GOODREADS); 
    list.Add(wxART_GOOGLE_DRIVE); 
    list.Add(wxART_GOOGLE_PAY); 
    list.Add(wxART_GOOGLE_PLAY); 
    list.Add(wxART_GOOGLE_PLUS_G); 
    list.Add(wxART_GOOGLE_PLUS); 
    list.Add(wxART_GOOGLE_WALLET); 
    list.Add(wxART_GOOGLE); 
    list.Add(wxART_GRATIPAY); 
    list.Add(wxART_GRAV); 
    list.Add(wxART_GRIPFIRE); 
    list.Add(wxART_GRUNT); 
    list.Add(wxART_GUILDED); 
    list.Add(wxART_GULP); 
    list.Add(wxART_HACKER_NEWS); 
    list.Add(wxART_HACKERRANK); 
    list.Add(wxART_HASHNODE); 
    list.Add(wxART_HIPS); 
    list.Add(wxART_HIRE_A_HELPER); 
    list.Add(wxART_HIVE); 
    list.Add(wxART_HOOLI); 
    list.Add(wxART_HORNBILL); 
    list.Add(wxART_HOTJAR); 
    list.Add(wxART_HOUZZ); 
    list.Add(wxART_HTML5); 
    list.Add(wxART_HUBSPOT); 
    list.Add(wxART_IDEAL); 
    list.Add(wxART_IMDB); 
    list.Add(wxART_INSTAGRAM); 
    list.Add(wxART_INSTALOD); 
    list.Add(wxART_INTERCOM); 
    list.Add(wxART_INTERNET_EXPLORER); 
    list.Add(wxART_INVISION); 
    list.Add(wxART_IOXHOST); 
    list.Add(wxART_ITCH_IO); 
    list.Add(wxART_ITUNES_NOTE); 
    list.Add(wxART_ITUNES); 
    list.Add(wxART_JAVA); 
    list.Add(wxART_JEDI_ORDER); 
    list.Add(wxART_JENKINS); 
    list.Add(wxART_JIRA); 
    list.Add(wxART_JOGET); 
    list.Add(wxART_JOOMLA); 
    list.Add(wxART_JS); 
    list.Add(wxART_JSFIDDLE); 
    list.Add(wxART_KAGGLE); 
    list.Add(wxART_KEYBASE); 
    list.Add(wxART_KEYCDN); 
    list.Add(wxART_KICKSTARTER_K); 
    list.Add(wxART_KICKSTARTER); 
    list.Add(wxART_KORVUE); 
    list.Add(wxART_LARAVEL); 
    list.Add(wxART_LASTFM); 
    list.Add(wxART_LEANPUB); 
    list.Add(wxART_LESS); 
    list.Add(wxART_LINE); 
    list.Add(wxART_LINKEDIN_IN); 
    list.Add(wxART_LINKEDIN); 
    list.Add(wxART_LINODE); 
    list.Add(wxART_LINUX); 
    list.Add(wxART_LYFT); 
    list.Add(wxART_MAGENTO); 
    list.Add(wxART_MAILCHIMP); 
    list.Add(wxART_MANDALORIAN); 
    list.Add(wxART_MARKDOWN); 
    list.Add(wxART_MASTODON); 
    list.Add(wxART_MAXCDN); 
    list.Add(wxART_MDB); 
    list.Add(wxART_MEDAPPS); 
    list.Add(wxART_MEDIUM); 
    list.Add(wxART_MEDRT); 
    list.Add(wxART_MEETUP); 
    list.Add(wxART_MEGAPORT); 
    list.Add(wxART_MENDELEY); 
    list.Add(wxART_META); 
    list.Add(wxART_MICROBLOG); 
    list.Add(wxART_MICROSOFT); 
    list.Add(wxART_MIX); 
    list.Add(wxART_MIXCLOUD); 
    list.Add(wxART_MIXER); 
    list.Add(wxART_MIZUNI); 
    list.Add(wxART_MODX); 
    list.Add(wxART_MONERO); 
    list.Add(wxART_NAPSTER); 
    list.Add(wxART_NEOS); 
    list.Add(wxART_NFC_DIRECTIONAL); 
    list.Add(wxART_NFC_SYMBOL); 
    list.Add(wxART_NIMBLR); 
    list.Add(wxART_NODE_JS); 
    list.Add(wxART_NODE); 
    list.Add(wxART_NPM); 
    list.Add(wxART_NS8); 
    list.Add(wxART_NUTRITIONIX); 
    list.Add(wxART_OCTOPUS_DEPLOY); 
    list.Add(wxART_ODNOKLASSNIKI); 
    list.Add(wxART_ODYSEE); 
    list.Add(wxART_OLD_REPUBLIC); 
    list.Add(wxART_OPENCART); 
    list.Add(wxART_OPENID); 
    list.Add(wxART_OPERA); 
    list.Add(wxART_OPTIN_MONSTER); 
    list.Add(wxART_ORCID); 
    list.Add(wxART_OSI); 
    list.Add(wxART_PADLET); 
    list.Add(wxART_PAGE4); 
    list.Add(wxART_PAGELINES); 
    list.Add(wxART_PALFED); 
    list.Add(wxART_PATREON); 
    list.Add(wxART_PAYPAL); 
    list.Add(wxART_PERBYTE); 
    list.Add(wxART_PERISCOPE); 
    list.Add(wxART_PHABRICATOR); 
    list.Add(wxART_PHOENIX_FRAMEWORK); 
    list.Add(wxART_PHOENIX_SQUADRON); 
    list.Add(wxART_PHP); 
    list.Add(wxART_PIED_PIPER_ALT); 
    list.Add(wxART_PIED_PIPER_HAT); 
    list.Add(wxART_PIED_PIPER_PP); 
    list.Add(wxART_PIED_PIPER); 
    list.Add(wxART_PINTEREST_P); 
    list.Add(wxART_PINTEREST); 
    list.Add(wxART_PIX); 
    list.Add(wxART_PLAYSTATION); 
    list.Add(wxART_PRODUCT_HUNT); 
    list.Add(wxART_PUSHED); 
    list.Add(wxART_PYTHON); 
    list.Add(wxART_QQ); 
    list.Add(wxART_QUINSCAPE); 
    list.Add(wxART_QUORA); 
    list.Add(wxART_R_PROJECT); 
    list.Add(wxART_RASPBERRY_PI); 
    list.Add(wxART_RAVELRY); 
    list.Add(wxART_REACT); 
    list.Add(wxART_REACTEUROPE); 
    list.Add(wxART_README); 
    list.Add(wxART_REBEL); 
    list.Add(wxART_RED_RIVER); 
    list.Add(wxART_REDDIT_ALIEN); 
    list.Add(wxART_REDDIT); 
    list.Add(wxART_REDHAT); 
    list.Add(wxART_RENREN); 
    list.Add(wxART_REPLYD); 
    list.Add(wxART_RESEARCHGATE); 
    list.Add(wxART_RESOLVING); 
    list.Add(wxART_REV); 
    list.Add(wxART_ROCKETCHAT); 
    list.Add(wxART_ROCKRMS); 
    list.Add(wxART_RUST); 
    list.Add(wxART_SAFARI); 
    list.Add(wxART_SALESFORCE); 
    list.Add(wxART_SASS); 
    list.Add(wxART_SCHLIX); 
    list.Add(wxART_SCREENPAL); 
    list.Add(wxART_SCRIBD); 
    list.Add(wxART_SEARCHENGIN); 
    list.Add(wxART_SELLCAST); 
    list.Add(wxART_SELLSY); 
    list.Add(wxART_SERVICESTACK); 
    list.Add(wxART_SHIRTSINBULK); 
    list.Add(wxART_SHOPIFY); 
    list.Add(wxART_SHOPWARE); 
    list.Add(wxART_SIMPLYBUILT); 
    list.Add(wxART_SISTRIX); 
    list.Add(wxART_SITH); 
    list.Add(wxART_SITROX); 
    list.Add(wxART_SKETCH); 
    list.Add(wxART_SKYATLAS); 
    list.Add(wxART_SKYPE); 
    list.Add(wxART_SLACK); 
    list.Add(wxART_SLIDESHARE); 
    list.Add(wxART_SNAPCHAT); 
    list.Add(wxART_SOUNDCLOUD); 
    list.Add(wxART_SOURCETREE); 
    list.Add(wxART_SPACE_AWESOME); 
    list.Add(wxART_SPEAKAP); 
    list.Add(wxART_SPEAKER_DECK); 
    list.Add(wxART_SPOTIFY); 
    list.Add(wxART_SQUARE_BEHANCE); 
    list.Add(wxART_SQUARE_DRIBBBLE); 
    list.Add(wxART_SQUARE_FACEBOOK); 
    list.Add(wxART_SQUARE_FONT_AWESOME_STROKE); 
    list.Add(wxART_SQUARE_FONT_AWESOME); 
    list.Add(wxART_SQUARE_GIT); 
    list.Add(wxART_SQUARE_GITHUB); 
    list.Add(wxART_SQUARE_GITLAB); 
    list.Add(wxART_SQUARE_GOOGLE_PLUS); 
    list.Add(wxART_SQUARE_HACKER_NEWS); 
    list.Add(wxART_SQUARE_INSTAGRAM); 
    list.Add(wxART_SQUARE_JS); 
    list.Add(wxART_SQUARE_LASTFM); 
    list.Add(wxART_SQUARE_ODNOKLASSNIKI); 
    list.Add(wxART_SQUARE_PIED_PIPER); 
    list.Add(wxART_SQUARE_PINTEREST); 
    list.Add(wxART_SQUARE_REDDIT); 
    list.Add(wxART_SQUARE_SNAPCHAT); 
    list.Add(wxART_SQUARE_STEAM); 
    list.Add(wxART_SQUARE_THREADS); 
    list.Add(wxART_SQUARE_TUMBLR); 
    list.Add(wxART_SQUARE_TWITTER); 
    list.Add(wxART_SQUARE_VIADEO); 
    list.Add(wxART_SQUARE_VIMEO); 
    list.Add(wxART_SQUARE_WHATSAPP); 
    list.Add(wxART_SQUARE_X_TWITTER); 
    list.Add(wxART_SQUARE_XING); 
    list.Add(wxART_SQUARE_YOUTUBE); 
    list.Add(wxART_SQUARESPACE); 
    list.Add(wxART_STACK_EXCHANGE); 
    list.Add(wxART_STACK_OVERFLOW); 
    list.Add(wxART_STACKPATH); 
    list.Add(wxART_STAYLINKED); 
    list.Add(wxART_STEAM_SYMBOL); 
    list.Add(wxART_STEAM); 
    list.Add(wxART_STICKER_MULE); 
    list.Add(wxART_STRAVA); 
    list.Add(wxART_STRIPE_S); 
    list.Add(wxART_STRIPE); 
    list.Add(wxART_STUBBER); 
    list.Add(wxART_STUDIOVINARI); 
    list.Add(wxART_STUMBLEUPON_CIRCLE); 
    list.Add(wxART_STUMBLEUPON); 
    list.Add(wxART_SUPERPOWERS); 
    list.Add(wxART_SUPPLE); 
    list.Add(wxART_SUSE); 
    list.Add(wxART_SWIFT); 
    list.Add(wxART_SYMFONY); 
    list.Add(wxART_TEAMSPEAK); 
    list.Add(wxART_TELEGRAM); 
    list.Add(wxART_TENCENT_WEIBO); 
    list.Add(wxART_THE_RED_YETI); 
    list.Add(wxART_THEMECO); 
    list.Add(wxART_THEMEISLE); 
    list.Add(wxART_THINK_PEAKS); 
    list.Add(wxART_THREADS); 
    list.Add(wxART_TIKTOK); 
    list.Add(wxART_TRADE_FEDERATION); 
    list.Add(wxART_TRELLO); 
    list.Add(wxART_TUMBLR); 
    list.Add(wxART_TWITCH); 
    list.Add(wxART_TWITTER); 
    list.Add(wxART_TYPO3); 
    list.Add(wxART_UBER); 
    list.Add(wxART_UBUNTU); 
    list.Add(wxART_UIKIT); 
    list.Add(wxART_UMBRACO); 
    list.Add(wxART_UNCHARTED); 
    list.Add(wxART_UNIREGISTRY); 
    list.Add(wxART_UNITY); 
    list.Add(wxART_UNSPLASH); 
    list.Add(wxART_UNTAPPD); 
    list.Add(wxART_UPS); 
    list.Add(wxART_USB); 
    list.Add(wxART_USPS); 
    list.Add(wxART_USSUNNAH); 
    list.Add(wxART_VAADIN); 
    list.Add(wxART_VIACOIN); 
    list.Add(wxART_VIADEO); 
    list.Add(wxART_VIBER); 
    list.Add(wxART_VIMEO_V); 
    list.Add(wxART_VIMEO); 
    list.Add(wxART_VINE); 
    list.Add(wxART_VK); 
    list.Add(wxART_VNV); 
    list.Add(wxART_VUEJS); 
    list.Add(wxART_WATCHMAN_MONITORING); 
    list.Add(wxART_WAZE); 
    list.Add(wxART_WEEBLY); 
    list.Add(wxART_WEIBO); 
    list.Add(wxART_WEIXIN); 
    list.Add(wxART_WHATSAPP); 
    list.Add(wxART_WHMCS); 
    list.Add(wxART_WIKIPEDIA_W); 
    list.Add(wxART_WINDOWS); 
    list.Add(wxART_WIRSINDHANDWERK); 
    list.Add(wxART_WIX); 
    list.Add(wxART_WIZARDS_OF_THE_COAST); 
    list.Add(wxART_WODU); 
    list.Add(wxART_WOLF_PACK_BATTALION); 
    list.Add(wxART_WORDPRESS_SIMPLE); 
    list.Add(wxART_WORDPRESS); 
    list.Add(wxART_WPBEGINNER); 
    list.Add(wxART_WPEXPLORER); 
    list.Add(wxART_WPFORMS); 
    list.Add(wxART_WPRESSR); 
    list.Add(wxART_X_TWITTER); 
    list.Add(wxART_XBOX); 
    list.Add(wxART_XING); 
    list.Add(wxART_Y_COMBINATOR); 
    list.Add(wxART_YAHOO); 
    list.Add(wxART_YAMMER); 
    list.Add(wxART_YANDEX_INTERNATIONAL); 
    list.Add(wxART_YANDEX); 
    list.Add(wxART_YARN); 
    list.Add(wxART_YELP); 
    list.Add(wxART_YOAST); 
    list.Add(wxART_YOUTUBE); 
    list.Add(wxART_ZHIHU); 
    return list; 
}


// Return SVG for the current ID as a wxBitmap 
wxBitmap CreateBrandsAwesomeArtBitmapByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxString svg = BrandsAwesomeArtColorSVGByID(id,color); 
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
wxBitmapBundle CreateBrandsAwesomeArtBitmapBundleByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxBitmapBundle bundle; 
  wxString svg = BrandsAwesomeArtColorSVGByID(id,color); 
  if (svg.IsEmpty()) return bundle; 

  // Create bundle and get bitmap from it 
  wxSize useSize = size==wxDefaultSize? wxSize(24,24) : size;
  bundle = wxBitmapBundle::FromSVG(svg.mb_str(),useSize);
  return bundle; 
}


