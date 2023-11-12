#include "wxAwesomeBrandsArt.hpp" 
#include <wx/regex.h> 

// Return SVG for the current ID as a string 
wxString BrandsAwesomeArtSVGByID(const wxArtID& id)
{
  if (id == wxART_42_GROUP)  
      return wxString(SVG_AWESOME_BRANDS_42_GROUP);
  if (id == wxART_500PX)  
      return wxString(SVG_AWESOME_BRANDS_500PX);
  if (id == wxART_ACCESSIBLE_ICON)  
      return wxString(SVG_AWESOME_BRANDS_ACCESSIBLE_ICON);
  if (id == wxART_ACCUSOFT)  
      return wxString(SVG_AWESOME_BRANDS_ACCUSOFT);
  if (id == wxART_ADN)  
      return wxString(SVG_AWESOME_BRANDS_ADN);
  if (id == wxART_ADVERSAL)  
      return wxString(SVG_AWESOME_BRANDS_ADVERSAL);
  if (id == wxART_AFFILIATETHEME)  
      return wxString(SVG_AWESOME_BRANDS_AFFILIATETHEME);
  if (id == wxART_AIRBNB)  
      return wxString(SVG_AWESOME_BRANDS_AIRBNB);
  if (id == wxART_ALGOLIA)  
      return wxString(SVG_AWESOME_BRANDS_ALGOLIA);
  if (id == wxART_ALIPAY)  
      return wxString(SVG_AWESOME_BRANDS_ALIPAY);
  if (id == wxART_AMAZON_PAY)  
      return wxString(SVG_AWESOME_BRANDS_AMAZON_PAY);
  if (id == wxART_AMAZON)  
      return wxString(SVG_AWESOME_BRANDS_AMAZON);
  if (id == wxART_AMILIA)  
      return wxString(SVG_AWESOME_BRANDS_AMILIA);
  if (id == wxART_ANDROID)  
      return wxString(SVG_AWESOME_BRANDS_ANDROID);
  if (id == wxART_ANGELLIST)  
      return wxString(SVG_AWESOME_BRANDS_ANGELLIST);
  if (id == wxART_ANGRYCREATIVE)  
      return wxString(SVG_AWESOME_BRANDS_ANGRYCREATIVE);
  if (id == wxART_ANGULAR)  
      return wxString(SVG_AWESOME_BRANDS_ANGULAR);
  if (id == wxART_APP_STORE_IOS)  
      return wxString(SVG_AWESOME_BRANDS_APP_STORE_IOS);
  if (id == wxART_APP_STORE)  
      return wxString(SVG_AWESOME_BRANDS_APP_STORE);
  if (id == wxART_APPER)  
      return wxString(SVG_AWESOME_BRANDS_APPER);
  if (id == wxART_APPLE_PAY)  
      return wxString(SVG_AWESOME_BRANDS_APPLE_PAY);
  if (id == wxART_APPLE)  
      return wxString(SVG_AWESOME_BRANDS_APPLE);
  if (id == wxART_ARTSTATION)  
      return wxString(SVG_AWESOME_BRANDS_ARTSTATION);
  if (id == wxART_ASYMMETRIK)  
      return wxString(SVG_AWESOME_BRANDS_ASYMMETRIK);
  if (id == wxART_ATLASSIAN)  
      return wxString(SVG_AWESOME_BRANDS_ATLASSIAN);
  if (id == wxART_AUDIBLE)  
      return wxString(SVG_AWESOME_BRANDS_AUDIBLE);
  if (id == wxART_AUTOPREFIXER)  
      return wxString(SVG_AWESOME_BRANDS_AUTOPREFIXER);
  if (id == wxART_AVIANEX)  
      return wxString(SVG_AWESOME_BRANDS_AVIANEX);
  if (id == wxART_AVIATO)  
      return wxString(SVG_AWESOME_BRANDS_AVIATO);
  if (id == wxART_AWS)  
      return wxString(SVG_AWESOME_BRANDS_AWS);
  if (id == wxART_BANDCAMP)  
      return wxString(SVG_AWESOME_BRANDS_BANDCAMP);
  if (id == wxART_BATTLE_NET)  
      return wxString(SVG_AWESOME_BRANDS_BATTLE_NET);
  if (id == wxART_BEHANCE)  
      return wxString(SVG_AWESOME_BRANDS_BEHANCE);
  if (id == wxART_BILIBILI)  
      return wxString(SVG_AWESOME_BRANDS_BILIBILI);
  if (id == wxART_BIMOBJECT)  
      return wxString(SVG_AWESOME_BRANDS_BIMOBJECT);
  if (id == wxART_BITBUCKET)  
      return wxString(SVG_AWESOME_BRANDS_BITBUCKET);
  if (id == wxART_BITCOIN)  
      return wxString(SVG_AWESOME_BRANDS_BITCOIN);
  if (id == wxART_BITY)  
      return wxString(SVG_AWESOME_BRANDS_BITY);
  if (id == wxART_BLACK_TIE)  
      return wxString(SVG_AWESOME_BRANDS_BLACK_TIE);
  if (id == wxART_BLACKBERRY)  
      return wxString(SVG_AWESOME_BRANDS_BLACKBERRY);
  if (id == wxART_BLOGGER_B)  
      return wxString(SVG_AWESOME_BRANDS_BLOGGER_B);
  if (id == wxART_BLOGGER)  
      return wxString(SVG_AWESOME_BRANDS_BLOGGER);
  if (id == wxART_BLUETOOTH_B)  
      return wxString(SVG_AWESOME_BRANDS_BLUETOOTH_B);
  if (id == wxART_BLUETOOTH)  
      return wxString(SVG_AWESOME_BRANDS_BLUETOOTH);
  if (id == wxART_BOOTSTRAP)  
      return wxString(SVG_AWESOME_BRANDS_BOOTSTRAP);
  if (id == wxART_BOTS)  
      return wxString(SVG_AWESOME_BRANDS_BOTS);
  if (id == wxART_BTC)  
      return wxString(SVG_AWESOME_BRANDS_BTC);
  if (id == wxART_BUFFER)  
      return wxString(SVG_AWESOME_BRANDS_BUFFER);
  if (id == wxART_BUROMOBELEXPERTE)  
      return wxString(SVG_AWESOME_BRANDS_BUROMOBELEXPERTE);
  if (id == wxART_BUY_N_LARGE)  
      return wxString(SVG_AWESOME_BRANDS_BUY_N_LARGE);
  if (id == wxART_BUYSELLADS)  
      return wxString(SVG_AWESOME_BRANDS_BUYSELLADS);
  if (id == wxART_CANADIAN_MAPLE_LEAF)  
      return wxString(SVG_AWESOME_BRANDS_CANADIAN_MAPLE_LEAF);
  if (id == wxART_CC_AMAZON_PAY)  
      return wxString(SVG_AWESOME_BRANDS_CC_AMAZON_PAY);
  if (id == wxART_CC_AMEX)  
      return wxString(SVG_AWESOME_BRANDS_CC_AMEX);
  if (id == wxART_CC_APPLE_PAY)  
      return wxString(SVG_AWESOME_BRANDS_CC_APPLE_PAY);
  if (id == wxART_CC_DINERS_CLUB)  
      return wxString(SVG_AWESOME_BRANDS_CC_DINERS_CLUB);
  if (id == wxART_CC_DISCOVER)  
      return wxString(SVG_AWESOME_BRANDS_CC_DISCOVER);
  if (id == wxART_CC_JCB)  
      return wxString(SVG_AWESOME_BRANDS_CC_JCB);
  if (id == wxART_CC_MASTERCARD)  
      return wxString(SVG_AWESOME_BRANDS_CC_MASTERCARD);
  if (id == wxART_CC_PAYPAL)  
      return wxString(SVG_AWESOME_BRANDS_CC_PAYPAL);
  if (id == wxART_CC_STRIPE)  
      return wxString(SVG_AWESOME_BRANDS_CC_STRIPE);
  if (id == wxART_CC_VISA)  
      return wxString(SVG_AWESOME_BRANDS_CC_VISA);
  if (id == wxART_CENTERCODE)  
      return wxString(SVG_AWESOME_BRANDS_CENTERCODE);
  if (id == wxART_CENTOS)  
      return wxString(SVG_AWESOME_BRANDS_CENTOS);
  if (id == wxART_CHROME)  
      return wxString(SVG_AWESOME_BRANDS_CHROME);
  if (id == wxART_CHROMECAST)  
      return wxString(SVG_AWESOME_BRANDS_CHROMECAST);
  if (id == wxART_CLOUDFLARE)  
      return wxString(SVG_AWESOME_BRANDS_CLOUDFLARE);
  if (id == wxART_CLOUDSCALE)  
      return wxString(SVG_AWESOME_BRANDS_CLOUDSCALE);
  if (id == wxART_CLOUDSMITH)  
      return wxString(SVG_AWESOME_BRANDS_CLOUDSMITH);
  if (id == wxART_CLOUDVERSIFY)  
      return wxString(SVG_AWESOME_BRANDS_CLOUDVERSIFY);
  if (id == wxART_CMPLID)  
      return wxString(SVG_AWESOME_BRANDS_CMPLID);
  if (id == wxART_CODEPEN)  
      return wxString(SVG_AWESOME_BRANDS_CODEPEN);
  if (id == wxART_CODIEPIE)  
      return wxString(SVG_AWESOME_BRANDS_CODIEPIE);
  if (id == wxART_CONFLUENCE)  
      return wxString(SVG_AWESOME_BRANDS_CONFLUENCE);
  if (id == wxART_CONNECTDEVELOP)  
      return wxString(SVG_AWESOME_BRANDS_CONNECTDEVELOP);
  if (id == wxART_CONTAO)  
      return wxString(SVG_AWESOME_BRANDS_CONTAO);
  if (id == wxART_COTTON_BUREAU)  
      return wxString(SVG_AWESOME_BRANDS_COTTON_BUREAU);
  if (id == wxART_CPANEL)  
      return wxString(SVG_AWESOME_BRANDS_CPANEL);
  if (id == wxART_CREATIVE_COMMONS_BY)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_BY);
  if (id == wxART_CREATIVE_COMMONS_NC_EU)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_NC_EU);
  if (id == wxART_CREATIVE_COMMONS_NC_JP)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_NC_JP);
  if (id == wxART_CREATIVE_COMMONS_NC)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_NC);
  if (id == wxART_CREATIVE_COMMONS_ND)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_ND);
  if (id == wxART_CREATIVE_COMMONS_PD_ALT)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_PD_ALT);
  if (id == wxART_CREATIVE_COMMONS_PD)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_PD);
  if (id == wxART_CREATIVE_COMMONS_REMIX)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_REMIX);
  if (id == wxART_CREATIVE_COMMONS_SA)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_SA);
  if (id == wxART_CREATIVE_COMMONS_SAMPLING_PLUS)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_SAMPLING_PLUS);
  if (id == wxART_CREATIVE_COMMONS_SAMPLING)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_SAMPLING);
  if (id == wxART_CREATIVE_COMMONS_SHARE)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_SHARE);
  if (id == wxART_CREATIVE_COMMONS_ZERO)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS_ZERO);
  if (id == wxART_CREATIVE_COMMONS)  
      return wxString(SVG_AWESOME_BRANDS_CREATIVE_COMMONS);
  if (id == wxART_CRITICAL_ROLE)  
      return wxString(SVG_AWESOME_BRANDS_CRITICAL_ROLE);
  if (id == wxART_CSS3_ALT)  
      return wxString(SVG_AWESOME_BRANDS_CSS3_ALT);
  if (id == wxART_CSS3)  
      return wxString(SVG_AWESOME_BRANDS_CSS3);
  if (id == wxART_CUTTLEFISH)  
      return wxString(SVG_AWESOME_BRANDS_CUTTLEFISH);
  if (id == wxART_D_AND_D_BEYOND)  
      return wxString(SVG_AWESOME_BRANDS_D_AND_D_BEYOND);
  if (id == wxART_D_AND_D)  
      return wxString(SVG_AWESOME_BRANDS_D_AND_D);
  if (id == wxART_DAILYMOTION)  
      return wxString(SVG_AWESOME_BRANDS_DAILYMOTION);
  if (id == wxART_DASHCUBE)  
      return wxString(SVG_AWESOME_BRANDS_DASHCUBE);
  if (id == wxART_DEBIAN)  
      return wxString(SVG_AWESOME_BRANDS_DEBIAN);
  if (id == wxART_DEEZER)  
      return wxString(SVG_AWESOME_BRANDS_DEEZER);
  if (id == wxART_DELICIOUS)  
      return wxString(SVG_AWESOME_BRANDS_DELICIOUS);
  if (id == wxART_DEPLOYDOG)  
      return wxString(SVG_AWESOME_BRANDS_DEPLOYDOG);
  if (id == wxART_DESKPRO)  
      return wxString(SVG_AWESOME_BRANDS_DESKPRO);
  if (id == wxART_DEV)  
      return wxString(SVG_AWESOME_BRANDS_DEV);
  if (id == wxART_DEVIANTART)  
      return wxString(SVG_AWESOME_BRANDS_DEVIANTART);
  if (id == wxART_DHL)  
      return wxString(SVG_AWESOME_BRANDS_DHL);
  if (id == wxART_DIASPORA)  
      return wxString(SVG_AWESOME_BRANDS_DIASPORA);
  if (id == wxART_DIGG)  
      return wxString(SVG_AWESOME_BRANDS_DIGG);
  if (id == wxART_DIGITAL_OCEAN)  
      return wxString(SVG_AWESOME_BRANDS_DIGITAL_OCEAN);
  if (id == wxART_DISCORD)  
      return wxString(SVG_AWESOME_BRANDS_DISCORD);
  if (id == wxART_DISCOURSE)  
      return wxString(SVG_AWESOME_BRANDS_DISCOURSE);
  if (id == wxART_DOCHUB)  
      return wxString(SVG_AWESOME_BRANDS_DOCHUB);
  if (id == wxART_DOCKER)  
      return wxString(SVG_AWESOME_BRANDS_DOCKER);
  if (id == wxART_DRAFT2DIGITAL)  
      return wxString(SVG_AWESOME_BRANDS_DRAFT2DIGITAL);
  if (id == wxART_DRIBBBLE)  
      return wxString(SVG_AWESOME_BRANDS_DRIBBBLE);
  if (id == wxART_DROPBOX)  
      return wxString(SVG_AWESOME_BRANDS_DROPBOX);
  if (id == wxART_DRUPAL)  
      return wxString(SVG_AWESOME_BRANDS_DRUPAL);
  if (id == wxART_DYALOG)  
      return wxString(SVG_AWESOME_BRANDS_DYALOG);
  if (id == wxART_EARLYBIRDS)  
      return wxString(SVG_AWESOME_BRANDS_EARLYBIRDS);
  if (id == wxART_EBAY)  
      return wxString(SVG_AWESOME_BRANDS_EBAY);
  if (id == wxART_EDGE_LEGACY)  
      return wxString(SVG_AWESOME_BRANDS_EDGE_LEGACY);
  if (id == wxART_EDGE)  
      return wxString(SVG_AWESOME_BRANDS_EDGE);
  if (id == wxART_ELEMENTOR)  
      return wxString(SVG_AWESOME_BRANDS_ELEMENTOR);
  if (id == wxART_ELLO)  
      return wxString(SVG_AWESOME_BRANDS_ELLO);
  if (id == wxART_EMBER)  
      return wxString(SVG_AWESOME_BRANDS_EMBER);
  if (id == wxART_EMPIRE)  
      return wxString(SVG_AWESOME_BRANDS_EMPIRE);
  if (id == wxART_ENVIRA)  
      return wxString(SVG_AWESOME_BRANDS_ENVIRA);
  if (id == wxART_ERLANG)  
      return wxString(SVG_AWESOME_BRANDS_ERLANG);
  if (id == wxART_ETHEREUM)  
      return wxString(SVG_AWESOME_BRANDS_ETHEREUM);
  if (id == wxART_ETSY)  
      return wxString(SVG_AWESOME_BRANDS_ETSY);
  if (id == wxART_EVERNOTE)  
      return wxString(SVG_AWESOME_BRANDS_EVERNOTE);
  if (id == wxART_EXPEDITEDSSL)  
      return wxString(SVG_AWESOME_BRANDS_EXPEDITEDSSL);
  if (id == wxART_FACEBOOK_F)  
      return wxString(SVG_AWESOME_BRANDS_FACEBOOK_F);
  if (id == wxART_FACEBOOK_MESSENGER)  
      return wxString(SVG_AWESOME_BRANDS_FACEBOOK_MESSENGER);
  if (id == wxART_FACEBOOK)  
      return wxString(SVG_AWESOME_BRANDS_FACEBOOK);
  if (id == wxART_FANTASY_FLIGHT_GAMES)  
      return wxString(SVG_AWESOME_BRANDS_FANTASY_FLIGHT_GAMES);
  if (id == wxART_FEDEX)  
      return wxString(SVG_AWESOME_BRANDS_FEDEX);
  if (id == wxART_FEDORA)  
      return wxString(SVG_AWESOME_BRANDS_FEDORA);
  if (id == wxART_FIGMA)  
      return wxString(SVG_AWESOME_BRANDS_FIGMA);
  if (id == wxART_FIREFOX_BROWSER)  
      return wxString(SVG_AWESOME_BRANDS_FIREFOX_BROWSER);
  if (id == wxART_FIREFOX)  
      return wxString(SVG_AWESOME_BRANDS_FIREFOX);
  if (id == wxART_FIRST_ORDER_ALT)  
      return wxString(SVG_AWESOME_BRANDS_FIRST_ORDER_ALT);
  if (id == wxART_FIRST_ORDER)  
      return wxString(SVG_AWESOME_BRANDS_FIRST_ORDER);
  if (id == wxART_FIRSTDRAFT)  
      return wxString(SVG_AWESOME_BRANDS_FIRSTDRAFT);
  if (id == wxART_FLICKR)  
      return wxString(SVG_AWESOME_BRANDS_FLICKR);
  if (id == wxART_FLIPBOARD)  
      return wxString(SVG_AWESOME_BRANDS_FLIPBOARD);
  if (id == wxART_FLY)  
      return wxString(SVG_AWESOME_BRANDS_FLY);
  if (id == wxART_FONT_AWESOME)  
      return wxString(SVG_AWESOME_BRANDS_FONT_AWESOME);
  if (id == wxART_FONTICONS_FI)  
      return wxString(SVG_AWESOME_BRANDS_FONTICONS_FI);
  if (id == wxART_FONTICONS)  
      return wxString(SVG_AWESOME_BRANDS_FONTICONS);
  if (id == wxART_FORT_AWESOME_ALT)  
      return wxString(SVG_AWESOME_BRANDS_FORT_AWESOME_ALT);
  if (id == wxART_FORT_AWESOME)  
      return wxString(SVG_AWESOME_BRANDS_FORT_AWESOME);
  if (id == wxART_FORUMBEE)  
      return wxString(SVG_AWESOME_BRANDS_FORUMBEE);
  if (id == wxART_FOURSQUARE)  
      return wxString(SVG_AWESOME_BRANDS_FOURSQUARE);
  if (id == wxART_FREE_CODE_CAMP)  
      return wxString(SVG_AWESOME_BRANDS_FREE_CODE_CAMP);
  if (id == wxART_FREEBSD)  
      return wxString(SVG_AWESOME_BRANDS_FREEBSD);
  if (id == wxART_FULCRUM)  
      return wxString(SVG_AWESOME_BRANDS_FULCRUM);
  if (id == wxART_GALACTIC_REPUBLIC)  
      return wxString(SVG_AWESOME_BRANDS_GALACTIC_REPUBLIC);
  if (id == wxART_GALACTIC_SENATE)  
      return wxString(SVG_AWESOME_BRANDS_GALACTIC_SENATE);
  if (id == wxART_GET_POCKET)  
      return wxString(SVG_AWESOME_BRANDS_GET_POCKET);
  if (id == wxART_GG_CIRCLE)  
      return wxString(SVG_AWESOME_BRANDS_GG_CIRCLE);
  if (id == wxART_GG)  
      return wxString(SVG_AWESOME_BRANDS_GG);
  if (id == wxART_GIT_ALT)  
      return wxString(SVG_AWESOME_BRANDS_GIT_ALT);
  if (id == wxART_GIT)  
      return wxString(SVG_AWESOME_BRANDS_GIT);
  if (id == wxART_GITHUB_ALT)  
      return wxString(SVG_AWESOME_BRANDS_GITHUB_ALT);
  if (id == wxART_GITHUB)  
      return wxString(SVG_AWESOME_BRANDS_GITHUB);
  if (id == wxART_GITKRAKEN)  
      return wxString(SVG_AWESOME_BRANDS_GITKRAKEN);
  if (id == wxART_GITLAB)  
      return wxString(SVG_AWESOME_BRANDS_GITLAB);
  if (id == wxART_GITTER)  
      return wxString(SVG_AWESOME_BRANDS_GITTER);
  if (id == wxART_GLIDE_G)  
      return wxString(SVG_AWESOME_BRANDS_GLIDE_G);
  if (id == wxART_GLIDE)  
      return wxString(SVG_AWESOME_BRANDS_GLIDE);
  if (id == wxART_GOFORE)  
      return wxString(SVG_AWESOME_BRANDS_GOFORE);
  if (id == wxART_GOLANG)  
      return wxString(SVG_AWESOME_BRANDS_GOLANG);
  if (id == wxART_GOODREADS_G)  
      return wxString(SVG_AWESOME_BRANDS_GOODREADS_G);
  if (id == wxART_GOODREADS)  
      return wxString(SVG_AWESOME_BRANDS_GOODREADS);
  if (id == wxART_GOOGLE_DRIVE)  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_DRIVE);
  if (id == wxART_GOOGLE_PAY)  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_PAY);
  if (id == wxART_GOOGLE_PLAY)  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_PLAY);
  if (id == wxART_GOOGLE_PLUS_G)  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_PLUS_G);
  if (id == wxART_GOOGLE_PLUS)  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_PLUS);
  if (id == wxART_GOOGLE_WALLET)  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE_WALLET);
  if (id == wxART_GOOGLE)  
      return wxString(SVG_AWESOME_BRANDS_GOOGLE);
  if (id == wxART_GRATIPAY)  
      return wxString(SVG_AWESOME_BRANDS_GRATIPAY);
  if (id == wxART_GRAV)  
      return wxString(SVG_AWESOME_BRANDS_GRAV);
  if (id == wxART_GRIPFIRE)  
      return wxString(SVG_AWESOME_BRANDS_GRIPFIRE);
  if (id == wxART_GRUNT)  
      return wxString(SVG_AWESOME_BRANDS_GRUNT);
  if (id == wxART_GUILDED)  
      return wxString(SVG_AWESOME_BRANDS_GUILDED);
  if (id == wxART_GULP)  
      return wxString(SVG_AWESOME_BRANDS_GULP);
  if (id == wxART_HACKER_NEWS)  
      return wxString(SVG_AWESOME_BRANDS_HACKER_NEWS);
  if (id == wxART_HACKERRANK)  
      return wxString(SVG_AWESOME_BRANDS_HACKERRANK);
  if (id == wxART_HASHNODE)  
      return wxString(SVG_AWESOME_BRANDS_HASHNODE);
  if (id == wxART_HIPS)  
      return wxString(SVG_AWESOME_BRANDS_HIPS);
  if (id == wxART_HIRE_A_HELPER)  
      return wxString(SVG_AWESOME_BRANDS_HIRE_A_HELPER);
  if (id == wxART_HIVE)  
      return wxString(SVG_AWESOME_BRANDS_HIVE);
  if (id == wxART_HOOLI)  
      return wxString(SVG_AWESOME_BRANDS_HOOLI);
  if (id == wxART_HORNBILL)  
      return wxString(SVG_AWESOME_BRANDS_HORNBILL);
  if (id == wxART_HOTJAR)  
      return wxString(SVG_AWESOME_BRANDS_HOTJAR);
  if (id == wxART_HOUZZ)  
      return wxString(SVG_AWESOME_BRANDS_HOUZZ);
  if (id == wxART_HTML5)  
      return wxString(SVG_AWESOME_BRANDS_HTML5);
  if (id == wxART_HUBSPOT)  
      return wxString(SVG_AWESOME_BRANDS_HUBSPOT);
  if (id == wxART_IDEAL)  
      return wxString(SVG_AWESOME_BRANDS_IDEAL);
  if (id == wxART_IMDB)  
      return wxString(SVG_AWESOME_BRANDS_IMDB);
  if (id == wxART_INSTAGRAM)  
      return wxString(SVG_AWESOME_BRANDS_INSTAGRAM);
  if (id == wxART_INSTALOD)  
      return wxString(SVG_AWESOME_BRANDS_INSTALOD);
  if (id == wxART_INTERCOM)  
      return wxString(SVG_AWESOME_BRANDS_INTERCOM);
  if (id == wxART_INTERNET_EXPLORER)  
      return wxString(SVG_AWESOME_BRANDS_INTERNET_EXPLORER);
  if (id == wxART_INVISION)  
      return wxString(SVG_AWESOME_BRANDS_INVISION);
  if (id == wxART_IOXHOST)  
      return wxString(SVG_AWESOME_BRANDS_IOXHOST);
  if (id == wxART_ITCH_IO)  
      return wxString(SVG_AWESOME_BRANDS_ITCH_IO);
  if (id == wxART_ITUNES_NOTE)  
      return wxString(SVG_AWESOME_BRANDS_ITUNES_NOTE);
  if (id == wxART_ITUNES)  
      return wxString(SVG_AWESOME_BRANDS_ITUNES);
  if (id == wxART_JAVA)  
      return wxString(SVG_AWESOME_BRANDS_JAVA);
  if (id == wxART_JEDI_ORDER)  
      return wxString(SVG_AWESOME_BRANDS_JEDI_ORDER);
  if (id == wxART_JENKINS)  
      return wxString(SVG_AWESOME_BRANDS_JENKINS);
  if (id == wxART_JIRA)  
      return wxString(SVG_AWESOME_BRANDS_JIRA);
  if (id == wxART_JOGET)  
      return wxString(SVG_AWESOME_BRANDS_JOGET);
  if (id == wxART_JOOMLA)  
      return wxString(SVG_AWESOME_BRANDS_JOOMLA);
  if (id == wxART_JS)  
      return wxString(SVG_AWESOME_BRANDS_JS);
  if (id == wxART_JSFIDDLE)  
      return wxString(SVG_AWESOME_BRANDS_JSFIDDLE);
  if (id == wxART_KAGGLE)  
      return wxString(SVG_AWESOME_BRANDS_KAGGLE);
  if (id == wxART_KEYBASE)  
      return wxString(SVG_AWESOME_BRANDS_KEYBASE);
  if (id == wxART_KEYCDN)  
      return wxString(SVG_AWESOME_BRANDS_KEYCDN);
  if (id == wxART_KICKSTARTER_K)  
      return wxString(SVG_AWESOME_BRANDS_KICKSTARTER_K);
  if (id == wxART_KICKSTARTER)  
      return wxString(SVG_AWESOME_BRANDS_KICKSTARTER);
  if (id == wxART_KORVUE)  
      return wxString(SVG_AWESOME_BRANDS_KORVUE);
  if (id == wxART_LARAVEL)  
      return wxString(SVG_AWESOME_BRANDS_LARAVEL);
  if (id == wxART_LASTFM)  
      return wxString(SVG_AWESOME_BRANDS_LASTFM);
  if (id == wxART_LEANPUB)  
      return wxString(SVG_AWESOME_BRANDS_LEANPUB);
  if (id == wxART_LESS)  
      return wxString(SVG_AWESOME_BRANDS_LESS);
  if (id == wxART_LINE)  
      return wxString(SVG_AWESOME_BRANDS_LINE);
  if (id == wxART_LINKEDIN_IN)  
      return wxString(SVG_AWESOME_BRANDS_LINKEDIN_IN);
  if (id == wxART_LINKEDIN)  
      return wxString(SVG_AWESOME_BRANDS_LINKEDIN);
  if (id == wxART_LINODE)  
      return wxString(SVG_AWESOME_BRANDS_LINODE);
  if (id == wxART_LINUX)  
      return wxString(SVG_AWESOME_BRANDS_LINUX);
  if (id == wxART_LYFT)  
      return wxString(SVG_AWESOME_BRANDS_LYFT);
  if (id == wxART_MAGENTO)  
      return wxString(SVG_AWESOME_BRANDS_MAGENTO);
  if (id == wxART_MAILCHIMP)  
      return wxString(SVG_AWESOME_BRANDS_MAILCHIMP);
  if (id == wxART_MANDALORIAN)  
      return wxString(SVG_AWESOME_BRANDS_MANDALORIAN);
  if (id == wxART_MARKDOWN)  
      return wxString(SVG_AWESOME_BRANDS_MARKDOWN);
  if (id == wxART_MASTODON)  
      return wxString(SVG_AWESOME_BRANDS_MASTODON);
  if (id == wxART_MAXCDN)  
      return wxString(SVG_AWESOME_BRANDS_MAXCDN);
  if (id == wxART_MDB)  
      return wxString(SVG_AWESOME_BRANDS_MDB);
  if (id == wxART_MEDAPPS)  
      return wxString(SVG_AWESOME_BRANDS_MEDAPPS);
  if (id == wxART_MEDIUM)  
      return wxString(SVG_AWESOME_BRANDS_MEDIUM);
  if (id == wxART_MEDRT)  
      return wxString(SVG_AWESOME_BRANDS_MEDRT);
  if (id == wxART_MEETUP)  
      return wxString(SVG_AWESOME_BRANDS_MEETUP);
  if (id == wxART_MEGAPORT)  
      return wxString(SVG_AWESOME_BRANDS_MEGAPORT);
  if (id == wxART_MENDELEY)  
      return wxString(SVG_AWESOME_BRANDS_MENDELEY);
  if (id == wxART_META)  
      return wxString(SVG_AWESOME_BRANDS_META);
  if (id == wxART_MICROBLOG)  
      return wxString(SVG_AWESOME_BRANDS_MICROBLOG);
  if (id == wxART_MICROSOFT)  
      return wxString(SVG_AWESOME_BRANDS_MICROSOFT);
  if (id == wxART_MIX)  
      return wxString(SVG_AWESOME_BRANDS_MIX);
  if (id == wxART_MIXCLOUD)  
      return wxString(SVG_AWESOME_BRANDS_MIXCLOUD);
  if (id == wxART_MIXER)  
      return wxString(SVG_AWESOME_BRANDS_MIXER);
  if (id == wxART_MIZUNI)  
      return wxString(SVG_AWESOME_BRANDS_MIZUNI);
  if (id == wxART_MODX)  
      return wxString(SVG_AWESOME_BRANDS_MODX);
  if (id == wxART_MONERO)  
      return wxString(SVG_AWESOME_BRANDS_MONERO);
  if (id == wxART_NAPSTER)  
      return wxString(SVG_AWESOME_BRANDS_NAPSTER);
  if (id == wxART_NEOS)  
      return wxString(SVG_AWESOME_BRANDS_NEOS);
  if (id == wxART_NFC_DIRECTIONAL)  
      return wxString(SVG_AWESOME_BRANDS_NFC_DIRECTIONAL);
  if (id == wxART_NFC_SYMBOL)  
      return wxString(SVG_AWESOME_BRANDS_NFC_SYMBOL);
  if (id == wxART_NIMBLR)  
      return wxString(SVG_AWESOME_BRANDS_NIMBLR);
  if (id == wxART_NODE_JS)  
      return wxString(SVG_AWESOME_BRANDS_NODE_JS);
  if (id == wxART_NODE)  
      return wxString(SVG_AWESOME_BRANDS_NODE);
  if (id == wxART_NPM)  
      return wxString(SVG_AWESOME_BRANDS_NPM);
  if (id == wxART_NS8)  
      return wxString(SVG_AWESOME_BRANDS_NS8);
  if (id == wxART_NUTRITIONIX)  
      return wxString(SVG_AWESOME_BRANDS_NUTRITIONIX);
  if (id == wxART_OCTOPUS_DEPLOY)  
      return wxString(SVG_AWESOME_BRANDS_OCTOPUS_DEPLOY);
  if (id == wxART_ODNOKLASSNIKI)  
      return wxString(SVG_AWESOME_BRANDS_ODNOKLASSNIKI);
  if (id == wxART_ODYSEE)  
      return wxString(SVG_AWESOME_BRANDS_ODYSEE);
  if (id == wxART_OLD_REPUBLIC)  
      return wxString(SVG_AWESOME_BRANDS_OLD_REPUBLIC);
  if (id == wxART_OPENCART)  
      return wxString(SVG_AWESOME_BRANDS_OPENCART);
  if (id == wxART_OPENID)  
      return wxString(SVG_AWESOME_BRANDS_OPENID);
  if (id == wxART_OPERA)  
      return wxString(SVG_AWESOME_BRANDS_OPERA);
  if (id == wxART_OPTIN_MONSTER)  
      return wxString(SVG_AWESOME_BRANDS_OPTIN_MONSTER);
  if (id == wxART_ORCID)  
      return wxString(SVG_AWESOME_BRANDS_ORCID);
  if (id == wxART_OSI)  
      return wxString(SVG_AWESOME_BRANDS_OSI);
  if (id == wxART_PADLET)  
      return wxString(SVG_AWESOME_BRANDS_PADLET);
  if (id == wxART_PAGE4)  
      return wxString(SVG_AWESOME_BRANDS_PAGE4);
  if (id == wxART_PAGELINES)  
      return wxString(SVG_AWESOME_BRANDS_PAGELINES);
  if (id == wxART_PALFED)  
      return wxString(SVG_AWESOME_BRANDS_PALFED);
  if (id == wxART_PATREON)  
      return wxString(SVG_AWESOME_BRANDS_PATREON);
  if (id == wxART_PAYPAL)  
      return wxString(SVG_AWESOME_BRANDS_PAYPAL);
  if (id == wxART_PERBYTE)  
      return wxString(SVG_AWESOME_BRANDS_PERBYTE);
  if (id == wxART_PERISCOPE)  
      return wxString(SVG_AWESOME_BRANDS_PERISCOPE);
  if (id == wxART_PHABRICATOR)  
      return wxString(SVG_AWESOME_BRANDS_PHABRICATOR);
  if (id == wxART_PHOENIX_FRAMEWORK)  
      return wxString(SVG_AWESOME_BRANDS_PHOENIX_FRAMEWORK);
  if (id == wxART_PHOENIX_SQUADRON)  
      return wxString(SVG_AWESOME_BRANDS_PHOENIX_SQUADRON);
  if (id == wxART_PHP)  
      return wxString(SVG_AWESOME_BRANDS_PHP);
  if (id == wxART_PIED_PIPER_ALT)  
      return wxString(SVG_AWESOME_BRANDS_PIED_PIPER_ALT);
  if (id == wxART_PIED_PIPER_HAT)  
      return wxString(SVG_AWESOME_BRANDS_PIED_PIPER_HAT);
  if (id == wxART_PIED_PIPER_PP)  
      return wxString(SVG_AWESOME_BRANDS_PIED_PIPER_PP);
  if (id == wxART_PIED_PIPER)  
      return wxString(SVG_AWESOME_BRANDS_PIED_PIPER);
  if (id == wxART_PINTEREST_P)  
      return wxString(SVG_AWESOME_BRANDS_PINTEREST_P);
  if (id == wxART_PINTEREST)  
      return wxString(SVG_AWESOME_BRANDS_PINTEREST);
  if (id == wxART_PIX)  
      return wxString(SVG_AWESOME_BRANDS_PIX);
  if (id == wxART_PLAYSTATION)  
      return wxString(SVG_AWESOME_BRANDS_PLAYSTATION);
  if (id == wxART_PRODUCT_HUNT)  
      return wxString(SVG_AWESOME_BRANDS_PRODUCT_HUNT);
  if (id == wxART_PUSHED)  
      return wxString(SVG_AWESOME_BRANDS_PUSHED);
  if (id == wxART_PYTHON)  
      return wxString(SVG_AWESOME_BRANDS_PYTHON);
  if (id == wxART_QQ)  
      return wxString(SVG_AWESOME_BRANDS_QQ);
  if (id == wxART_QUINSCAPE)  
      return wxString(SVG_AWESOME_BRANDS_QUINSCAPE);
  if (id == wxART_QUORA)  
      return wxString(SVG_AWESOME_BRANDS_QUORA);
  if (id == wxART_R_PROJECT)  
      return wxString(SVG_AWESOME_BRANDS_R_PROJECT);
  if (id == wxART_RASPBERRY_PI)  
      return wxString(SVG_AWESOME_BRANDS_RASPBERRY_PI);
  if (id == wxART_RAVELRY)  
      return wxString(SVG_AWESOME_BRANDS_RAVELRY);
  if (id == wxART_REACT)  
      return wxString(SVG_AWESOME_BRANDS_REACT);
  if (id == wxART_REACTEUROPE)  
      return wxString(SVG_AWESOME_BRANDS_REACTEUROPE);
  if (id == wxART_README)  
      return wxString(SVG_AWESOME_BRANDS_README);
  if (id == wxART_REBEL)  
      return wxString(SVG_AWESOME_BRANDS_REBEL);
  if (id == wxART_RED_RIVER)  
      return wxString(SVG_AWESOME_BRANDS_RED_RIVER);
  if (id == wxART_REDDIT_ALIEN)  
      return wxString(SVG_AWESOME_BRANDS_REDDIT_ALIEN);
  if (id == wxART_REDDIT)  
      return wxString(SVG_AWESOME_BRANDS_REDDIT);
  if (id == wxART_REDHAT)  
      return wxString(SVG_AWESOME_BRANDS_REDHAT);
  if (id == wxART_RENREN)  
      return wxString(SVG_AWESOME_BRANDS_RENREN);
  if (id == wxART_REPLYD)  
      return wxString(SVG_AWESOME_BRANDS_REPLYD);
  if (id == wxART_RESEARCHGATE)  
      return wxString(SVG_AWESOME_BRANDS_RESEARCHGATE);
  if (id == wxART_RESOLVING)  
      return wxString(SVG_AWESOME_BRANDS_RESOLVING);
  if (id == wxART_REV)  
      return wxString(SVG_AWESOME_BRANDS_REV);
  if (id == wxART_ROCKETCHAT)  
      return wxString(SVG_AWESOME_BRANDS_ROCKETCHAT);
  if (id == wxART_ROCKRMS)  
      return wxString(SVG_AWESOME_BRANDS_ROCKRMS);
  if (id == wxART_RUST)  
      return wxString(SVG_AWESOME_BRANDS_RUST);
  if (id == wxART_SAFARI)  
      return wxString(SVG_AWESOME_BRANDS_SAFARI);
  if (id == wxART_SALESFORCE)  
      return wxString(SVG_AWESOME_BRANDS_SALESFORCE);
  if (id == wxART_SASS)  
      return wxString(SVG_AWESOME_BRANDS_SASS);
  if (id == wxART_SCHLIX)  
      return wxString(SVG_AWESOME_BRANDS_SCHLIX);
  if (id == wxART_SCREENPAL)  
      return wxString(SVG_AWESOME_BRANDS_SCREENPAL);
  if (id == wxART_SCRIBD)  
      return wxString(SVG_AWESOME_BRANDS_SCRIBD);
  if (id == wxART_SEARCHENGIN)  
      return wxString(SVG_AWESOME_BRANDS_SEARCHENGIN);
  if (id == wxART_SELLCAST)  
      return wxString(SVG_AWESOME_BRANDS_SELLCAST);
  if (id == wxART_SELLSY)  
      return wxString(SVG_AWESOME_BRANDS_SELLSY);
  if (id == wxART_SERVICESTACK)  
      return wxString(SVG_AWESOME_BRANDS_SERVICESTACK);
  if (id == wxART_SHIRTSINBULK)  
      return wxString(SVG_AWESOME_BRANDS_SHIRTSINBULK);
  if (id == wxART_SHOPIFY)  
      return wxString(SVG_AWESOME_BRANDS_SHOPIFY);
  if (id == wxART_SHOPWARE)  
      return wxString(SVG_AWESOME_BRANDS_SHOPWARE);
  if (id == wxART_SIMPLYBUILT)  
      return wxString(SVG_AWESOME_BRANDS_SIMPLYBUILT);
  if (id == wxART_SISTRIX)  
      return wxString(SVG_AWESOME_BRANDS_SISTRIX);
  if (id == wxART_SITH)  
      return wxString(SVG_AWESOME_BRANDS_SITH);
  if (id == wxART_SITROX)  
      return wxString(SVG_AWESOME_BRANDS_SITROX);
  if (id == wxART_SKETCH)  
      return wxString(SVG_AWESOME_BRANDS_SKETCH);
  if (id == wxART_SKYATLAS)  
      return wxString(SVG_AWESOME_BRANDS_SKYATLAS);
  if (id == wxART_SKYPE)  
      return wxString(SVG_AWESOME_BRANDS_SKYPE);
  if (id == wxART_SLACK)  
      return wxString(SVG_AWESOME_BRANDS_SLACK);
  if (id == wxART_SLIDESHARE)  
      return wxString(SVG_AWESOME_BRANDS_SLIDESHARE);
  if (id == wxART_SNAPCHAT)  
      return wxString(SVG_AWESOME_BRANDS_SNAPCHAT);
  if (id == wxART_SOUNDCLOUD)  
      return wxString(SVG_AWESOME_BRANDS_SOUNDCLOUD);
  if (id == wxART_SOURCETREE)  
      return wxString(SVG_AWESOME_BRANDS_SOURCETREE);
  if (id == wxART_SPACE_AWESOME)  
      return wxString(SVG_AWESOME_BRANDS_SPACE_AWESOME);
  if (id == wxART_SPEAKAP)  
      return wxString(SVG_AWESOME_BRANDS_SPEAKAP);
  if (id == wxART_SPEAKER_DECK)  
      return wxString(SVG_AWESOME_BRANDS_SPEAKER_DECK);
  if (id == wxART_SPOTIFY)  
      return wxString(SVG_AWESOME_BRANDS_SPOTIFY);
  if (id == wxART_SQUARE_BEHANCE)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_BEHANCE);
  if (id == wxART_SQUARE_DRIBBBLE)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_DRIBBBLE);
  if (id == wxART_SQUARE_FACEBOOK)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_FACEBOOK);
  if (id == wxART_SQUARE_FONT_AWESOME_STROKE)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_FONT_AWESOME_STROKE);
  if (id == wxART_SQUARE_FONT_AWESOME)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_FONT_AWESOME);
  if (id == wxART_SQUARE_GIT)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_GIT);
  if (id == wxART_SQUARE_GITHUB)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_GITHUB);
  if (id == wxART_SQUARE_GITLAB)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_GITLAB);
  if (id == wxART_SQUARE_GOOGLE_PLUS)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_GOOGLE_PLUS);
  if (id == wxART_SQUARE_HACKER_NEWS)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_HACKER_NEWS);
  if (id == wxART_SQUARE_INSTAGRAM)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_INSTAGRAM);
  if (id == wxART_SQUARE_JS)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_JS);
  if (id == wxART_SQUARE_LASTFM)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_LASTFM);
  if (id == wxART_SQUARE_ODNOKLASSNIKI)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_ODNOKLASSNIKI);
  if (id == wxART_SQUARE_PIED_PIPER)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_PIED_PIPER);
  if (id == wxART_SQUARE_PINTEREST)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_PINTEREST);
  if (id == wxART_SQUARE_REDDIT)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_REDDIT);
  if (id == wxART_SQUARE_SNAPCHAT)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_SNAPCHAT);
  if (id == wxART_SQUARE_STEAM)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_STEAM);
  if (id == wxART_SQUARE_THREADS)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_THREADS);
  if (id == wxART_SQUARE_TUMBLR)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_TUMBLR);
  if (id == wxART_SQUARE_TWITTER)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_TWITTER);
  if (id == wxART_SQUARE_VIADEO)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_VIADEO);
  if (id == wxART_SQUARE_VIMEO)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_VIMEO);
  if (id == wxART_SQUARE_WHATSAPP)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_WHATSAPP);
  if (id == wxART_SQUARE_X_TWITTER)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_X_TWITTER);
  if (id == wxART_SQUARE_XING)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_XING);
  if (id == wxART_SQUARE_YOUTUBE)  
      return wxString(SVG_AWESOME_BRANDS_SQUARE_YOUTUBE);
  if (id == wxART_SQUARESPACE)  
      return wxString(SVG_AWESOME_BRANDS_SQUARESPACE);
  if (id == wxART_STACK_EXCHANGE)  
      return wxString(SVG_AWESOME_BRANDS_STACK_EXCHANGE);
  if (id == wxART_STACK_OVERFLOW)  
      return wxString(SVG_AWESOME_BRANDS_STACK_OVERFLOW);
  if (id == wxART_STACKPATH)  
      return wxString(SVG_AWESOME_BRANDS_STACKPATH);
  if (id == wxART_STAYLINKED)  
      return wxString(SVG_AWESOME_BRANDS_STAYLINKED);
  if (id == wxART_STEAM_SYMBOL)  
      return wxString(SVG_AWESOME_BRANDS_STEAM_SYMBOL);
  if (id == wxART_STEAM)  
      return wxString(SVG_AWESOME_BRANDS_STEAM);
  if (id == wxART_STICKER_MULE)  
      return wxString(SVG_AWESOME_BRANDS_STICKER_MULE);
  if (id == wxART_STRAVA)  
      return wxString(SVG_AWESOME_BRANDS_STRAVA);
  if (id == wxART_STRIPE_S)  
      return wxString(SVG_AWESOME_BRANDS_STRIPE_S);
  if (id == wxART_STRIPE)  
      return wxString(SVG_AWESOME_BRANDS_STRIPE);
  if (id == wxART_STUBBER)  
      return wxString(SVG_AWESOME_BRANDS_STUBBER);
  if (id == wxART_STUDIOVINARI)  
      return wxString(SVG_AWESOME_BRANDS_STUDIOVINARI);
  if (id == wxART_STUMBLEUPON_CIRCLE)  
      return wxString(SVG_AWESOME_BRANDS_STUMBLEUPON_CIRCLE);
  if (id == wxART_STUMBLEUPON)  
      return wxString(SVG_AWESOME_BRANDS_STUMBLEUPON);
  if (id == wxART_SUPERPOWERS)  
      return wxString(SVG_AWESOME_BRANDS_SUPERPOWERS);
  if (id == wxART_SUPPLE)  
      return wxString(SVG_AWESOME_BRANDS_SUPPLE);
  if (id == wxART_SUSE)  
      return wxString(SVG_AWESOME_BRANDS_SUSE);
  if (id == wxART_SWIFT)  
      return wxString(SVG_AWESOME_BRANDS_SWIFT);
  if (id == wxART_SYMFONY)  
      return wxString(SVG_AWESOME_BRANDS_SYMFONY);
  if (id == wxART_TEAMSPEAK)  
      return wxString(SVG_AWESOME_BRANDS_TEAMSPEAK);
  if (id == wxART_TELEGRAM)  
      return wxString(SVG_AWESOME_BRANDS_TELEGRAM);
  if (id == wxART_TENCENT_WEIBO)  
      return wxString(SVG_AWESOME_BRANDS_TENCENT_WEIBO);
  if (id == wxART_THE_RED_YETI)  
      return wxString(SVG_AWESOME_BRANDS_THE_RED_YETI);
  if (id == wxART_THEMECO)  
      return wxString(SVG_AWESOME_BRANDS_THEMECO);
  if (id == wxART_THEMEISLE)  
      return wxString(SVG_AWESOME_BRANDS_THEMEISLE);
  if (id == wxART_THINK_PEAKS)  
      return wxString(SVG_AWESOME_BRANDS_THINK_PEAKS);
  if (id == wxART_THREADS)  
      return wxString(SVG_AWESOME_BRANDS_THREADS);
  if (id == wxART_TIKTOK)  
      return wxString(SVG_AWESOME_BRANDS_TIKTOK);
  if (id == wxART_TRADE_FEDERATION)  
      return wxString(SVG_AWESOME_BRANDS_TRADE_FEDERATION);
  if (id == wxART_TRELLO)  
      return wxString(SVG_AWESOME_BRANDS_TRELLO);
  if (id == wxART_TUMBLR)  
      return wxString(SVG_AWESOME_BRANDS_TUMBLR);
  if (id == wxART_TWITCH)  
      return wxString(SVG_AWESOME_BRANDS_TWITCH);
  if (id == wxART_TWITTER)  
      return wxString(SVG_AWESOME_BRANDS_TWITTER);
  if (id == wxART_TYPO3)  
      return wxString(SVG_AWESOME_BRANDS_TYPO3);
  if (id == wxART_UBER)  
      return wxString(SVG_AWESOME_BRANDS_UBER);
  if (id == wxART_UBUNTU)  
      return wxString(SVG_AWESOME_BRANDS_UBUNTU);
  if (id == wxART_UIKIT)  
      return wxString(SVG_AWESOME_BRANDS_UIKIT);
  if (id == wxART_UMBRACO)  
      return wxString(SVG_AWESOME_BRANDS_UMBRACO);
  if (id == wxART_UNCHARTED)  
      return wxString(SVG_AWESOME_BRANDS_UNCHARTED);
  if (id == wxART_UNIREGISTRY)  
      return wxString(SVG_AWESOME_BRANDS_UNIREGISTRY);
  if (id == wxART_UNITY)  
      return wxString(SVG_AWESOME_BRANDS_UNITY);
  if (id == wxART_UNSPLASH)  
      return wxString(SVG_AWESOME_BRANDS_UNSPLASH);
  if (id == wxART_UNTAPPD)  
      return wxString(SVG_AWESOME_BRANDS_UNTAPPD);
  if (id == wxART_UPS)  
      return wxString(SVG_AWESOME_BRANDS_UPS);
  if (id == wxART_USB)  
      return wxString(SVG_AWESOME_BRANDS_USB);
  if (id == wxART_USPS)  
      return wxString(SVG_AWESOME_BRANDS_USPS);
  if (id == wxART_USSUNNAH)  
      return wxString(SVG_AWESOME_BRANDS_USSUNNAH);
  if (id == wxART_VAADIN)  
      return wxString(SVG_AWESOME_BRANDS_VAADIN);
  if (id == wxART_VIACOIN)  
      return wxString(SVG_AWESOME_BRANDS_VIACOIN);
  if (id == wxART_VIADEO)  
      return wxString(SVG_AWESOME_BRANDS_VIADEO);
  if (id == wxART_VIBER)  
      return wxString(SVG_AWESOME_BRANDS_VIBER);
  if (id == wxART_VIMEO_V)  
      return wxString(SVG_AWESOME_BRANDS_VIMEO_V);
  if (id == wxART_VIMEO)  
      return wxString(SVG_AWESOME_BRANDS_VIMEO);
  if (id == wxART_VINE)  
      return wxString(SVG_AWESOME_BRANDS_VINE);
  if (id == wxART_VK)  
      return wxString(SVG_AWESOME_BRANDS_VK);
  if (id == wxART_VNV)  
      return wxString(SVG_AWESOME_BRANDS_VNV);
  if (id == wxART_VUEJS)  
      return wxString(SVG_AWESOME_BRANDS_VUEJS);
  if (id == wxART_WATCHMAN_MONITORING)  
      return wxString(SVG_AWESOME_BRANDS_WATCHMAN_MONITORING);
  if (id == wxART_WAZE)  
      return wxString(SVG_AWESOME_BRANDS_WAZE);
  if (id == wxART_WEEBLY)  
      return wxString(SVG_AWESOME_BRANDS_WEEBLY);
  if (id == wxART_WEIBO)  
      return wxString(SVG_AWESOME_BRANDS_WEIBO);
  if (id == wxART_WEIXIN)  
      return wxString(SVG_AWESOME_BRANDS_WEIXIN);
  if (id == wxART_WHATSAPP)  
      return wxString(SVG_AWESOME_BRANDS_WHATSAPP);
  if (id == wxART_WHMCS)  
      return wxString(SVG_AWESOME_BRANDS_WHMCS);
  if (id == wxART_WIKIPEDIA_W)  
      return wxString(SVG_AWESOME_BRANDS_WIKIPEDIA_W);
  if (id == wxART_WINDOWS)  
      return wxString(SVG_AWESOME_BRANDS_WINDOWS);
  if (id == wxART_WIRSINDHANDWERK)  
      return wxString(SVG_AWESOME_BRANDS_WIRSINDHANDWERK);
  if (id == wxART_WIX)  
      return wxString(SVG_AWESOME_BRANDS_WIX);
  if (id == wxART_WIZARDS_OF_THE_COAST)  
      return wxString(SVG_AWESOME_BRANDS_WIZARDS_OF_THE_COAST);
  if (id == wxART_WODU)  
      return wxString(SVG_AWESOME_BRANDS_WODU);
  if (id == wxART_WOLF_PACK_BATTALION)  
      return wxString(SVG_AWESOME_BRANDS_WOLF_PACK_BATTALION);
  if (id == wxART_WORDPRESS_SIMPLE)  
      return wxString(SVG_AWESOME_BRANDS_WORDPRESS_SIMPLE);
  if (id == wxART_WORDPRESS)  
      return wxString(SVG_AWESOME_BRANDS_WORDPRESS);
  if (id == wxART_WPBEGINNER)  
      return wxString(SVG_AWESOME_BRANDS_WPBEGINNER);
  if (id == wxART_WPEXPLORER)  
      return wxString(SVG_AWESOME_BRANDS_WPEXPLORER);
  if (id == wxART_WPFORMS)  
      return wxString(SVG_AWESOME_BRANDS_WPFORMS);
  if (id == wxART_WPRESSR)  
      return wxString(SVG_AWESOME_BRANDS_WPRESSR);
  if (id == wxART_X_TWITTER)  
      return wxString(SVG_AWESOME_BRANDS_X_TWITTER);
  if (id == wxART_XBOX)  
      return wxString(SVG_AWESOME_BRANDS_XBOX);
  if (id == wxART_XING)  
      return wxString(SVG_AWESOME_BRANDS_XING);
  if (id == wxART_Y_COMBINATOR)  
      return wxString(SVG_AWESOME_BRANDS_Y_COMBINATOR);
  if (id == wxART_YAHOO)  
      return wxString(SVG_AWESOME_BRANDS_YAHOO);
  if (id == wxART_YAMMER)  
      return wxString(SVG_AWESOME_BRANDS_YAMMER);
  if (id == wxART_YANDEX_INTERNATIONAL)  
      return wxString(SVG_AWESOME_BRANDS_YANDEX_INTERNATIONAL);
  if (id == wxART_YANDEX)  
      return wxString(SVG_AWESOME_BRANDS_YANDEX);
  if (id == wxART_YARN)  
      return wxString(SVG_AWESOME_BRANDS_YARN);
  if (id == wxART_YELP)  
      return wxString(SVG_AWESOME_BRANDS_YELP);
  if (id == wxART_YOAST)  
      return wxString(SVG_AWESOME_BRANDS_YOAST);
  if (id == wxART_YOUTUBE)  
      return wxString(SVG_AWESOME_BRANDS_YOUTUBE);
  if (id == wxART_ZHIHU)  
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


