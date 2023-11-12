#include "wxSimpleIconsArt.hpp" 
#include <wx/regex.h> 

// Return SVG for the current ID as a string 
wxString IconsSimpleArtSVGByID(const wxArtID& id)
{
  if (id == wxART_1001TRACKLISTS)  
      return wxString(SVG_SIMPLE_ICONS_1001TRACKLISTS);
  if (id == wxART_1PASSWORD)  
      return wxString(SVG_SIMPLE_ICONS_1PASSWORD);
  if (id == wxART_3M)  
      return wxString(SVG_SIMPLE_ICONS_3M);
  if (id == wxART_42)  
      return wxString(SVG_SIMPLE_ICONS_42);
  if (id == wxART_4CHAN)  
      return wxString(SVG_SIMPLE_ICONS_4CHAN);
  if (id == wxART_4D)  
      return wxString(SVG_SIMPLE_ICONS_4D);
  if (id == wxART_500PX)  
      return wxString(SVG_SIMPLE_ICONS_500PX);
  if (id == wxART_ABBOTT)  
      return wxString(SVG_SIMPLE_ICONS_ABBOTT);
  if (id == wxART_ABBROBOTSTUDIO)  
      return wxString(SVG_SIMPLE_ICONS_ABBROBOTSTUDIO);
  if (id == wxART_ABBVIE)  
      return wxString(SVG_SIMPLE_ICONS_ABBVIE);
  if (id == wxART_ABLETONLIVE)  
      return wxString(SVG_SIMPLE_ICONS_ABLETONLIVE);
  if (id == wxART_ABOUTDOTME)  
      return wxString(SVG_SIMPLE_ICONS_ABOUTDOTME);
  if (id == wxART_ABSTRACT)  
      return wxString(SVG_SIMPLE_ICONS_ABSTRACT);
  if (id == wxART_ACADEMIA)  
      return wxString(SVG_SIMPLE_ICONS_ACADEMIA);
  if (id == wxART_ACCENTURE)  
      return wxString(SVG_SIMPLE_ICONS_ACCENTURE);
  if (id == wxART_ACCLAIM)  
      return wxString(SVG_SIMPLE_ICONS_ACCLAIM);
  if (id == wxART_ACCUSOFT)  
      return wxString(SVG_SIMPLE_ICONS_ACCUSOFT);
  if (id == wxART_ACER)  
      return wxString(SVG_SIMPLE_ICONS_ACER);
  if (id == wxART_ACM)  
      return wxString(SVG_SIMPLE_ICONS_ACM);
  if (id == wxART_ACTIGRAPH)  
      return wxString(SVG_SIMPLE_ICONS_ACTIGRAPH);
  if (id == wxART_ACTIVISION)  
      return wxString(SVG_SIMPLE_ICONS_ACTIVISION);
  if (id == wxART_ACTIVITYPUB)  
      return wxString(SVG_SIMPLE_ICONS_ACTIVITYPUB);
  if (id == wxART_ACURA)  
      return wxString(SVG_SIMPLE_ICONS_ACURA);
  if (id == wxART_ADAFRUIT)  
      return wxString(SVG_SIMPLE_ICONS_ADAFRUIT);
  if (id == wxART_ADBLOCK)  
      return wxString(SVG_SIMPLE_ICONS_ADBLOCK);
  if (id == wxART_ADBLOCKPLUS)  
      return wxString(SVG_SIMPLE_ICONS_ADBLOCKPLUS);
  if (id == wxART_ADDTHIS)  
      return wxString(SVG_SIMPLE_ICONS_ADDTHIS);
  if (id == wxART_ADGUARD)  
      return wxString(SVG_SIMPLE_ICONS_ADGUARD);
  if (id == wxART_ADIDAS)  
      return wxString(SVG_SIMPLE_ICONS_ADIDAS);
  if (id == wxART_ADMINER)  
      return wxString(SVG_SIMPLE_ICONS_ADMINER);
  if (id == wxART_ADOBE)  
      return wxString(SVG_SIMPLE_ICONS_ADOBE);
  if (id == wxART_ADOBEACROBATREADER)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEACROBATREADER);
  if (id == wxART_ADOBEAFTEREFFECTS)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEAFTEREFFECTS);
  if (id == wxART_ADOBEAUDITION)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEAUDITION);
  if (id == wxART_ADOBECREATIVECLOUD)  
      return wxString(SVG_SIMPLE_ICONS_ADOBECREATIVECLOUD);
  if (id == wxART_ADOBEDREAMWEAVER)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEDREAMWEAVER);
  if (id == wxART_ADOBEFONTS)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEFONTS);
  if (id == wxART_ADOBEILLUSTRATOR)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEILLUSTRATOR);
  if (id == wxART_ADOBEINDESIGN)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEINDESIGN);
  if (id == wxART_ADOBELIGHTROOM)  
      return wxString(SVG_SIMPLE_ICONS_ADOBELIGHTROOM);
  if (id == wxART_ADOBELIGHTROOMCLASSIC)  
      return wxString(SVG_SIMPLE_ICONS_ADOBELIGHTROOMCLASSIC);
  if (id == wxART_ADOBEPHOTOSHOP)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEPHOTOSHOP);
  if (id == wxART_ADOBEPREMIEREPRO)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEPREMIEREPRO);
  if (id == wxART_ADOBEXD)  
      return wxString(SVG_SIMPLE_ICONS_ADOBEXD);
  if (id == wxART_ADONISJS)  
      return wxString(SVG_SIMPLE_ICONS_ADONISJS);
  if (id == wxART_ADP)  
      return wxString(SVG_SIMPLE_ICONS_ADP);
  if (id == wxART_ADROLL)  
      return wxString(SVG_SIMPLE_ICONS_ADROLL);
  if (id == wxART_ADVENTOFCODE)  
      return wxString(SVG_SIMPLE_ICONS_ADVENTOFCODE);
  if (id == wxART_ADYEN)  
      return wxString(SVG_SIMPLE_ICONS_ADYEN);
  if (id == wxART_AERLINGUS)  
      return wxString(SVG_SIMPLE_ICONS_AERLINGUS);
  if (id == wxART_AEROFLOT)  
      return wxString(SVG_SIMPLE_ICONS_AEROFLOT);
  if (id == wxART_AEROMEXICO)  
      return wxString(SVG_SIMPLE_ICONS_AEROMEXICO);
  if (id == wxART_AEROSPIKE)  
      return wxString(SVG_SIMPLE_ICONS_AEROSPIKE);
  if (id == wxART_AEW)  
      return wxString(SVG_SIMPLE_ICONS_AEW);
  if (id == wxART_AFFINE)  
      return wxString(SVG_SIMPLE_ICONS_AFFINE);
  if (id == wxART_AFFINITY)  
      return wxString(SVG_SIMPLE_ICONS_AFFINITY);
  if (id == wxART_AFFINITYDESIGNER)  
      return wxString(SVG_SIMPLE_ICONS_AFFINITYDESIGNER);
  if (id == wxART_AFFINITYPHOTO)  
      return wxString(SVG_SIMPLE_ICONS_AFFINITYPHOTO);
  if (id == wxART_AFFINITYPUBLISHER)  
      return wxString(SVG_SIMPLE_ICONS_AFFINITYPUBLISHER);
  if (id == wxART_AFRAME)  
      return wxString(SVG_SIMPLE_ICONS_AFRAME);
  if (id == wxART_AGORA)  
      return wxString(SVG_SIMPLE_ICONS_AGORA);
  if (id == wxART_AIB)  
      return wxString(SVG_SIMPLE_ICONS_AIB);
  if (id == wxART_AIDUNGEON)  
      return wxString(SVG_SIMPLE_ICONS_AIDUNGEON);
  if (id == wxART_AIOHTTP)  
      return wxString(SVG_SIMPLE_ICONS_AIOHTTP);
  if (id == wxART_AIQFOME)  
      return wxString(SVG_SIMPLE_ICONS_AIQFOME);
  if (id == wxART_AIRASIA)  
      return wxString(SVG_SIMPLE_ICONS_AIRASIA);
  if (id == wxART_AIRBNB)  
      return wxString(SVG_SIMPLE_ICONS_AIRBNB);
  if (id == wxART_AIRBRAKEDOTIO)  
      return wxString(SVG_SIMPLE_ICONS_AIRBRAKEDOTIO);
  if (id == wxART_AIRBUS)  
      return wxString(SVG_SIMPLE_ICONS_AIRBUS);
  if (id == wxART_AIRBYTE)  
      return wxString(SVG_SIMPLE_ICONS_AIRBYTE);
  if (id == wxART_AIRCALL)  
      return wxString(SVG_SIMPLE_ICONS_AIRCALL);
  if (id == wxART_AIRCANADA)  
      return wxString(SVG_SIMPLE_ICONS_AIRCANADA);
  if (id == wxART_AIRCHINA)  
      return wxString(SVG_SIMPLE_ICONS_AIRCHINA);
  if (id == wxART_AIRFRANCE)  
      return wxString(SVG_SIMPLE_ICONS_AIRFRANCE);
  if (id == wxART_AIRINDIA)  
      return wxString(SVG_SIMPLE_ICONS_AIRINDIA);
  if (id == wxART_AIRPLAYAUDIO)  
      return wxString(SVG_SIMPLE_ICONS_AIRPLAYAUDIO);
  if (id == wxART_AIRPLAYVIDEO)  
      return wxString(SVG_SIMPLE_ICONS_AIRPLAYVIDEO);
  if (id == wxART_AIRTABLE)  
      return wxString(SVG_SIMPLE_ICONS_AIRTABLE);
  if (id == wxART_AJV)  
      return wxString(SVG_SIMPLE_ICONS_AJV);
  if (id == wxART_AKAMAI)  
      return wxString(SVG_SIMPLE_ICONS_AKAMAI);
  if (id == wxART_AKAUNTING)  
      return wxString(SVG_SIMPLE_ICONS_AKAUNTING);
  if (id == wxART_ALACRITTY)  
      return wxString(SVG_SIMPLE_ICONS_ALACRITTY);
  if (id == wxART_ALBERTHEIJN)  
      return wxString(SVG_SIMPLE_ICONS_ALBERTHEIJN);
  if (id == wxART_ALBY)  
      return wxString(SVG_SIMPLE_ICONS_ALBY);
  if (id == wxART_ALCHEMY)  
      return wxString(SVG_SIMPLE_ICONS_ALCHEMY);
  if (id == wxART_ALDINORD)  
      return wxString(SVG_SIMPLE_ICONS_ALDINORD);
  if (id == wxART_ALDISUD)  
      return wxString(SVG_SIMPLE_ICONS_ALDISUD);
  if (id == wxART_ALFAROMEO)  
      return wxString(SVG_SIMPLE_ICONS_ALFAROMEO);
  if (id == wxART_ALFRED)  
      return wxString(SVG_SIMPLE_ICONS_ALFRED);
  if (id == wxART_ALGOLIA)  
      return wxString(SVG_SIMPLE_ICONS_ALGOLIA);
  if (id == wxART_ALGORAND)  
      return wxString(SVG_SIMPLE_ICONS_ALGORAND);
  if (id == wxART_ALIBABACLOUD)  
      return wxString(SVG_SIMPLE_ICONS_ALIBABACLOUD);
  if (id == wxART_ALIBABADOTCOM)  
      return wxString(SVG_SIMPLE_ICONS_ALIBABADOTCOM);
  if (id == wxART_ALIENWARE)  
      return wxString(SVG_SIMPLE_ICONS_ALIENWARE);
  if (id == wxART_ALIEXPRESS)  
      return wxString(SVG_SIMPLE_ICONS_ALIEXPRESS);
  if (id == wxART_ALIPAY)  
      return wxString(SVG_SIMPLE_ICONS_ALIPAY);
  if (id == wxART_ALLEGRO)  
      return wxString(SVG_SIMPLE_ICONS_ALLEGRO);
  if (id == wxART_ALLIEDMODDERS)  
      return wxString(SVG_SIMPLE_ICONS_ALLIEDMODDERS);
  if (id == wxART_ALLOCINE)  
      return wxString(SVG_SIMPLE_ICONS_ALLOCINE);
  if (id == wxART_ALLTRAILS)  
      return wxString(SVG_SIMPLE_ICONS_ALLTRAILS);
  if (id == wxART_ALPINEDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_ALPINEDOTJS);
  if (id == wxART_ALPINELINUX)  
      return wxString(SVG_SIMPLE_ICONS_ALPINELINUX);
  if (id == wxART_ALTERYX)  
      return wxString(SVG_SIMPLE_ICONS_ALTERYX);
  if (id == wxART_ALTIUMDESIGNER)  
      return wxString(SVG_SIMPLE_ICONS_ALTIUMDESIGNER);
  if (id == wxART_ALWAYSDATA)  
      return wxString(SVG_SIMPLE_ICONS_ALWAYSDATA);
  if (id == wxART_AMAZON)  
      return wxString(SVG_SIMPLE_ICONS_AMAZON);
  if (id == wxART_AMAZONALEXA)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONALEXA);
  if (id == wxART_AMAZONAPIGATEWAY)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONAPIGATEWAY);
  if (id == wxART_AMAZONAWS)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONAWS);
  if (id == wxART_AMAZONCLOUDWATCH)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONCLOUDWATCH);
  if (id == wxART_AMAZONDOCUMENTDB)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONDOCUMENTDB);
  if (id == wxART_AMAZONDYNAMODB)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONDYNAMODB);
  if (id == wxART_AMAZONEC2)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONEC2);
  if (id == wxART_AMAZONECS)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONECS);
  if (id == wxART_AMAZONEKS)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONEKS);
  if (id == wxART_AMAZONFIRETV)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONFIRETV);
  if (id == wxART_AMAZONGAMES)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONGAMES);
  if (id == wxART_AMAZONIAM)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONIAM);
  if (id == wxART_AMAZONLUMBERYARD)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONLUMBERYARD);
  if (id == wxART_AMAZONLUNA)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONLUNA);
  if (id == wxART_AMAZONPAY)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONPAY);
  if (id == wxART_AMAZONPRIME)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONPRIME);
  if (id == wxART_AMAZONRDS)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONRDS);
  if (id == wxART_AMAZONREDSHIFT)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONREDSHIFT);
  if (id == wxART_AMAZONROUTE53)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONROUTE53);
  if (id == wxART_AMAZONS3)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONS3);
  if (id == wxART_AMAZONSIMPLEEMAILSERVICE)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONSIMPLEEMAILSERVICE);
  if (id == wxART_AMAZONSQS)  
      return wxString(SVG_SIMPLE_ICONS_AMAZONSQS);
  if (id == wxART_AMD)  
      return wxString(SVG_SIMPLE_ICONS_AMD);
  if (id == wxART_AMEBA)  
      return wxString(SVG_SIMPLE_ICONS_AMEBA);
  if (id == wxART_AMERICANAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_AMERICANAIRLINES);
  if (id == wxART_AMERICANEXPRESS)  
      return wxString(SVG_SIMPLE_ICONS_AMERICANEXPRESS);
  if (id == wxART_AMG)  
      return wxString(SVG_SIMPLE_ICONS_AMG);
  if (id == wxART_AMP)  
      return wxString(SVG_SIMPLE_ICONS_AMP);
  if (id == wxART_AMUL)  
      return wxString(SVG_SIMPLE_ICONS_AMUL);
  if (id == wxART_ANA)  
      return wxString(SVG_SIMPLE_ICONS_ANA);
  if (id == wxART_ANACONDA)  
      return wxString(SVG_SIMPLE_ICONS_ANACONDA);
  if (id == wxART_ANALOGUE)  
      return wxString(SVG_SIMPLE_ICONS_ANALOGUE);
  if (id == wxART_ANCHOR)  
      return wxString(SVG_SIMPLE_ICONS_ANCHOR);
  if (id == wxART_ANDELA)  
      return wxString(SVG_SIMPLE_ICONS_ANDELA);
  if (id == wxART_ANDROID)  
      return wxString(SVG_SIMPLE_ICONS_ANDROID);
  if (id == wxART_ANDROIDAUTO)  
      return wxString(SVG_SIMPLE_ICONS_ANDROIDAUTO);
  if (id == wxART_ANDROIDSTUDIO)  
      return wxString(SVG_SIMPLE_ICONS_ANDROIDSTUDIO);
  if (id == wxART_ANGELLIST)  
      return wxString(SVG_SIMPLE_ICONS_ANGELLIST);
  if (id == wxART_ANGULAR)  
      return wxString(SVG_SIMPLE_ICONS_ANGULAR);
  if (id == wxART_ANGULARJS)  
      return wxString(SVG_SIMPLE_ICONS_ANGULARJS);
  if (id == wxART_ANGULARUNIVERSAL)  
      return wxString(SVG_SIMPLE_ICONS_ANGULARUNIVERSAL);
  if (id == wxART_ANILIST)  
      return wxString(SVG_SIMPLE_ICONS_ANILIST);
  if (id == wxART_ANSIBLE)  
      return wxString(SVG_SIMPLE_ICONS_ANSIBLE);
  if (id == wxART_ANSWER)  
      return wxString(SVG_SIMPLE_ICONS_ANSWER);
  if (id == wxART_ANSYS)  
      return wxString(SVG_SIMPLE_ICONS_ANSYS);
  if (id == wxART_ANTA)  
      return wxString(SVG_SIMPLE_ICONS_ANTA);
  if (id == wxART_ANTDESIGN)  
      return wxString(SVG_SIMPLE_ICONS_ANTDESIGN);
  if (id == wxART_ANTENA3)  
      return wxString(SVG_SIMPLE_ICONS_ANTENA3);
  if (id == wxART_ANYDESK)  
      return wxString(SVG_SIMPLE_ICONS_ANYDESK);
  if (id == wxART_AOL)  
      return wxString(SVG_SIMPLE_ICONS_AOL);
  if (id == wxART_APACHE)  
      return wxString(SVG_SIMPLE_ICONS_APACHE);
  if (id == wxART_APACHEAIRFLOW)  
      return wxString(SVG_SIMPLE_ICONS_APACHEAIRFLOW);
  if (id == wxART_APACHEANT)  
      return wxString(SVG_SIMPLE_ICONS_APACHEANT);
  if (id == wxART_APACHECASSANDRA)  
      return wxString(SVG_SIMPLE_ICONS_APACHECASSANDRA);
  if (id == wxART_APACHECLOUDSTACK)  
      return wxString(SVG_SIMPLE_ICONS_APACHECLOUDSTACK);
  if (id == wxART_APACHECORDOVA)  
      return wxString(SVG_SIMPLE_ICONS_APACHECORDOVA);
  if (id == wxART_APACHECOUCHDB)  
      return wxString(SVG_SIMPLE_ICONS_APACHECOUCHDB);
  if (id == wxART_APACHEDRUID)  
      return wxString(SVG_SIMPLE_ICONS_APACHEDRUID);
  if (id == wxART_APACHEECHARTS)  
      return wxString(SVG_SIMPLE_ICONS_APACHEECHARTS);
  if (id == wxART_APACHEFLINK)  
      return wxString(SVG_SIMPLE_ICONS_APACHEFLINK);
  if (id == wxART_APACHEGROOVY)  
      return wxString(SVG_SIMPLE_ICONS_APACHEGROOVY);
  if (id == wxART_APACHEGUACAMOLE)  
      return wxString(SVG_SIMPLE_ICONS_APACHEGUACAMOLE);
  if (id == wxART_APACHEHADOOP)  
      return wxString(SVG_SIMPLE_ICONS_APACHEHADOOP);
  if (id == wxART_APACHEHIVE)  
      return wxString(SVG_SIMPLE_ICONS_APACHEHIVE);
  if (id == wxART_APACHEJMETER)  
      return wxString(SVG_SIMPLE_ICONS_APACHEJMETER);
  if (id == wxART_APACHEKAFKA)  
      return wxString(SVG_SIMPLE_ICONS_APACHEKAFKA);
  if (id == wxART_APACHEKYLIN)  
      return wxString(SVG_SIMPLE_ICONS_APACHEKYLIN);
  if (id == wxART_APACHEMAVEN)  
      return wxString(SVG_SIMPLE_ICONS_APACHEMAVEN);
  if (id == wxART_APACHENETBEANSIDE)  
      return wxString(SVG_SIMPLE_ICONS_APACHENETBEANSIDE);
  if (id == wxART_APACHEOPENOFFICE)  
      return wxString(SVG_SIMPLE_ICONS_APACHEOPENOFFICE);
  if (id == wxART_APACHEPARQUET)  
      return wxString(SVG_SIMPLE_ICONS_APACHEPARQUET);
  if (id == wxART_APACHEPULSAR)  
      return wxString(SVG_SIMPLE_ICONS_APACHEPULSAR);
  if (id == wxART_APACHEROCKETMQ)  
      return wxString(SVG_SIMPLE_ICONS_APACHEROCKETMQ);
  if (id == wxART_APACHESOLR)  
      return wxString(SVG_SIMPLE_ICONS_APACHESOLR);
  if (id == wxART_APACHESPARK)  
      return wxString(SVG_SIMPLE_ICONS_APACHESPARK);
  if (id == wxART_APACHESTORM)  
      return wxString(SVG_SIMPLE_ICONS_APACHESTORM);
  if (id == wxART_APACHETOMCAT)  
      return wxString(SVG_SIMPLE_ICONS_APACHETOMCAT);
  if (id == wxART_APARAT)  
      return wxString(SVG_SIMPLE_ICONS_APARAT);
  if (id == wxART_APIFOX)  
      return wxString(SVG_SIMPLE_ICONS_APIFOX);
  if (id == wxART_APOLLOGRAPHQL)  
      return wxString(SVG_SIMPLE_ICONS_APOLLOGRAPHQL);
  if (id == wxART_APOSTROPHE)  
      return wxString(SVG_SIMPLE_ICONS_APOSTROPHE);
  if (id == wxART_APPIAN)  
      return wxString(SVG_SIMPLE_ICONS_APPIAN);
  if (id == wxART_APPLE)  
      return wxString(SVG_SIMPLE_ICONS_APPLE);
  if (id == wxART_APPLEARCADE)  
      return wxString(SVG_SIMPLE_ICONS_APPLEARCADE);
  if (id == wxART_APPLEMUSIC)  
      return wxString(SVG_SIMPLE_ICONS_APPLEMUSIC);
  if (id == wxART_APPLENEWS)  
      return wxString(SVG_SIMPLE_ICONS_APPLENEWS);
  if (id == wxART_APPLEPAY)  
      return wxString(SVG_SIMPLE_ICONS_APPLEPAY);
  if (id == wxART_APPLEPODCASTS)  
      return wxString(SVG_SIMPLE_ICONS_APPLEPODCASTS);
  if (id == wxART_APPLETV)  
      return wxString(SVG_SIMPLE_ICONS_APPLETV);
  if (id == wxART_APPSIGNAL)  
      return wxString(SVG_SIMPLE_ICONS_APPSIGNAL);
  if (id == wxART_APPSMITH)  
      return wxString(SVG_SIMPLE_ICONS_APPSMITH);
  if (id == wxART_APPSTORE)  
      return wxString(SVG_SIMPLE_ICONS_APPSTORE);
  if (id == wxART_APPVEYOR)  
      return wxString(SVG_SIMPLE_ICONS_APPVEYOR);
  if (id == wxART_APPWRITE)  
      return wxString(SVG_SIMPLE_ICONS_APPWRITE);
  if (id == wxART_AQUA)  
      return wxString(SVG_SIMPLE_ICONS_AQUA);
  if (id == wxART_ARAL)  
      return wxString(SVG_SIMPLE_ICONS_ARAL);
  if (id == wxART_ARANGODB)  
      return wxString(SVG_SIMPLE_ICONS_ARANGODB);
  if (id == wxART_ARC)  
      return wxString(SVG_SIMPLE_ICONS_ARC);
  if (id == wxART_ARCGIS)  
      return wxString(SVG_SIMPLE_ICONS_ARCGIS);
  if (id == wxART_ARCHICAD)  
      return wxString(SVG_SIMPLE_ICONS_ARCHICAD);
  if (id == wxART_ARCHIVEOFOUROWN)  
      return wxString(SVG_SIMPLE_ICONS_ARCHIVEOFOUROWN);
  if (id == wxART_ARCHLINUX)  
      return wxString(SVG_SIMPLE_ICONS_ARCHLINUX);
  if (id == wxART_ARDOUR)  
      return wxString(SVG_SIMPLE_ICONS_ARDOUR);
  if (id == wxART_ARDUINO)  
      return wxString(SVG_SIMPLE_ICONS_ARDUINO);
  if (id == wxART_ARGO)  
      return wxString(SVG_SIMPLE_ICONS_ARGO);
  if (id == wxART_ARGOS)  
      return wxString(SVG_SIMPLE_ICONS_ARGOS);
  if (id == wxART_ARIAKIT)  
      return wxString(SVG_SIMPLE_ICONS_ARIAKIT);
  if (id == wxART_ARKECOSYSTEM)  
      return wxString(SVG_SIMPLE_ICONS_ARKECOSYSTEM);
  if (id == wxART_ARLO)  
      return wxString(SVG_SIMPLE_ICONS_ARLO);
  if (id == wxART_ARM)  
      return wxString(SVG_SIMPLE_ICONS_ARM);
  if (id == wxART_ARMKEIL)  
      return wxString(SVG_SIMPLE_ICONS_ARMKEIL);
  if (id == wxART_ARSTECHNICA)  
      return wxString(SVG_SIMPLE_ICONS_ARSTECHNICA);
  if (id == wxART_ARTIFACTHUB)  
      return wxString(SVG_SIMPLE_ICONS_ARTIFACTHUB);
  if (id == wxART_ARTIXLINUX)  
      return wxString(SVG_SIMPLE_ICONS_ARTIXLINUX);
  if (id == wxART_ARTSTATION)  
      return wxString(SVG_SIMPLE_ICONS_ARTSTATION);
  if (id == wxART_ARXIV)  
      return wxString(SVG_SIMPLE_ICONS_ARXIV);
  if (id == wxART_ASANA)  
      return wxString(SVG_SIMPLE_ICONS_ASANA);
  if (id == wxART_ASCIIDOCTOR)  
      return wxString(SVG_SIMPLE_ICONS_ASCIIDOCTOR);
  if (id == wxART_ASCIINEMA)  
      return wxString(SVG_SIMPLE_ICONS_ASCIINEMA);
  if (id == wxART_ASDA)  
      return wxString(SVG_SIMPLE_ICONS_ASDA);
  if (id == wxART_ASEPRITE)  
      return wxString(SVG_SIMPLE_ICONS_ASEPRITE);
  if (id == wxART_ASKFM)  
      return wxString(SVG_SIMPLE_ICONS_ASKFM);
  if (id == wxART_ASKUBUNTU)  
      return wxString(SVG_SIMPLE_ICONS_ASKUBUNTU);
  if (id == wxART_ASSEMBLYSCRIPT)  
      return wxString(SVG_SIMPLE_ICONS_ASSEMBLYSCRIPT);
  if (id == wxART_ASTONMARTIN)  
      return wxString(SVG_SIMPLE_ICONS_ASTONMARTIN);
  if (id == wxART_ASTRO)  
      return wxString(SVG_SIMPLE_ICONS_ASTRO);
  if (id == wxART_ASUS)  
      return wxString(SVG_SIMPLE_ICONS_ASUS);
  if (id == wxART_ATANDT)  
      return wxString(SVG_SIMPLE_ICONS_ATANDT);
  if (id == wxART_ATARI)  
      return wxString(SVG_SIMPLE_ICONS_ATARI);
  if (id == wxART_ATLASSIAN)  
      return wxString(SVG_SIMPLE_ICONS_ATLASSIAN);
  if (id == wxART_ATOM)  
      return wxString(SVG_SIMPLE_ICONS_ATOM);
  if (id == wxART_AUCHAN)  
      return wxString(SVG_SIMPLE_ICONS_AUCHAN);
  if (id == wxART_AUDACITY)  
      return wxString(SVG_SIMPLE_ICONS_AUDACITY);
  if (id == wxART_AUDI)  
      return wxString(SVG_SIMPLE_ICONS_AUDI);
  if (id == wxART_AUDIBLE)  
      return wxString(SVG_SIMPLE_ICONS_AUDIBLE);
  if (id == wxART_AUDIOBOOM)  
      return wxString(SVG_SIMPLE_ICONS_AUDIOBOOM);
  if (id == wxART_AUDIOMACK)  
      return wxString(SVG_SIMPLE_ICONS_AUDIOMACK);
  if (id == wxART_AUDIOTECHNICA)  
      return wxString(SVG_SIMPLE_ICONS_AUDIOTECHNICA);
  if (id == wxART_AURELIA)  
      return wxString(SVG_SIMPLE_ICONS_AURELIA);
  if (id == wxART_AUTH0)  
      return wxString(SVG_SIMPLE_ICONS_AUTH0);
  if (id == wxART_AUTHELIA)  
      return wxString(SVG_SIMPLE_ICONS_AUTHELIA);
  if (id == wxART_AUTHY)  
      return wxString(SVG_SIMPLE_ICONS_AUTHY);
  if (id == wxART_AUTODESK)  
      return wxString(SVG_SIMPLE_ICONS_AUTODESK);
  if (id == wxART_AUTODESKREVIT)  
      return wxString(SVG_SIMPLE_ICONS_AUTODESKREVIT);
  if (id == wxART_AUTOHOTKEY)  
      return wxString(SVG_SIMPLE_ICONS_AUTOHOTKEY);
  if (id == wxART_AUTOMATTIC)  
      return wxString(SVG_SIMPLE_ICONS_AUTOMATTIC);
  if (id == wxART_AUTOPREFIXER)  
      return wxString(SVG_SIMPLE_ICONS_AUTOPREFIXER);
  if (id == wxART_AVAJS)  
      return wxString(SVG_SIMPLE_ICONS_AVAJS);
  if (id == wxART_AVAST)  
      return wxString(SVG_SIMPLE_ICONS_AVAST);
  if (id == wxART_AVIRA)  
      return wxString(SVG_SIMPLE_ICONS_AVIRA);
  if (id == wxART_AWESOMELISTS)  
      return wxString(SVG_SIMPLE_ICONS_AWESOMELISTS);
  if (id == wxART_AWESOMEWM)  
      return wxString(SVG_SIMPLE_ICONS_AWESOMEWM);
  if (id == wxART_AWSAMPLIFY)  
      return wxString(SVG_SIMPLE_ICONS_AWSAMPLIFY);
  if (id == wxART_AWSFARGATE)  
      return wxString(SVG_SIMPLE_ICONS_AWSFARGATE);
  if (id == wxART_AWSLAMBDA)  
      return wxString(SVG_SIMPLE_ICONS_AWSLAMBDA);
  if (id == wxART_AWSORGANIZATIONS)  
      return wxString(SVG_SIMPLE_ICONS_AWSORGANIZATIONS);
  if (id == wxART_AXIOS)  
      return wxString(SVG_SIMPLE_ICONS_AXIOS);
  if (id == wxART_AZUREARTIFACTS)  
      return wxString(SVG_SIMPLE_ICONS_AZUREARTIFACTS);
  if (id == wxART_AZUREDATAEXPLORER)  
      return wxString(SVG_SIMPLE_ICONS_AZUREDATAEXPLORER);
  if (id == wxART_AZUREDEVOPS)  
      return wxString(SVG_SIMPLE_ICONS_AZUREDEVOPS);
  if (id == wxART_AZUREFUNCTIONS)  
      return wxString(SVG_SIMPLE_ICONS_AZUREFUNCTIONS);
  if (id == wxART_AZUREPIPELINES)  
      return wxString(SVG_SIMPLE_ICONS_AZUREPIPELINES);
  if (id == wxART_BABEL)  
      return wxString(SVG_SIMPLE_ICONS_BABEL);
  if (id == wxART_BABYLONDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_BABYLONDOTJS);
  if (id == wxART_BACKBLAZE)  
      return wxString(SVG_SIMPLE_ICONS_BACKBLAZE);
  if (id == wxART_BACKBONEDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_BACKBONEDOTJS);
  if (id == wxART_BACKENDLESS)  
      return wxString(SVG_SIMPLE_ICONS_BACKENDLESS);
  if (id == wxART_BACKSTAGE)  
      return wxString(SVG_SIMPLE_ICONS_BACKSTAGE);
  if (id == wxART_BADGR)  
      return wxString(SVG_SIMPLE_ICONS_BADGR);
  if (id == wxART_BADOO)  
      return wxString(SVG_SIMPLE_ICONS_BADOO);
  if (id == wxART_BAIDU)  
      return wxString(SVG_SIMPLE_ICONS_BAIDU);
  if (id == wxART_BAMBOO)  
      return wxString(SVG_SIMPLE_ICONS_BAMBOO);
  if (id == wxART_BANDCAMP)  
      return wxString(SVG_SIMPLE_ICONS_BANDCAMP);
  if (id == wxART_BANDLAB)  
      return wxString(SVG_SIMPLE_ICONS_BANDLAB);
  if (id == wxART_BANDRAUTOMATION)  
      return wxString(SVG_SIMPLE_ICONS_BANDRAUTOMATION);
  if (id == wxART_BANDSINTOWN)  
      return wxString(SVG_SIMPLE_ICONS_BANDSINTOWN);
  if (id == wxART_BANKOFAMERICA)  
      return wxString(SVG_SIMPLE_ICONS_BANKOFAMERICA);
  if (id == wxART_BARCLAYS)  
      return wxString(SVG_SIMPLE_ICONS_BARCLAYS);
  if (id == wxART_BAREMETRICS)  
      return wxString(SVG_SIMPLE_ICONS_BAREMETRICS);
  if (id == wxART_BASECAMP)  
      return wxString(SVG_SIMPLE_ICONS_BASECAMP);
  if (id == wxART_BASTYON)  
      return wxString(SVG_SIMPLE_ICONS_BASTYON);
  if (id == wxART_BATA)  
      return wxString(SVG_SIMPLE_ICONS_BATA);
  if (id == wxART_BATHASU)  
      return wxString(SVG_SIMPLE_ICONS_BATHASU);
  if (id == wxART_BATTLEDOTNET)  
      return wxString(SVG_SIMPLE_ICONS_BATTLEDOTNET);
  if (id == wxART_BBC)  
      return wxString(SVG_SIMPLE_ICONS_BBC);
  if (id == wxART_BBCIPLAYER)  
      return wxString(SVG_SIMPLE_ICONS_BBCIPLAYER);
  if (id == wxART_BEATPORT)  
      return wxString(SVG_SIMPLE_ICONS_BEATPORT);
  if (id == wxART_BEATS)  
      return wxString(SVG_SIMPLE_ICONS_BEATS);
  if (id == wxART_BEATSBYDRE)  
      return wxString(SVG_SIMPLE_ICONS_BEATSBYDRE);
  if (id == wxART_BEHANCE)  
      return wxString(SVG_SIMPLE_ICONS_BEHANCE);
  if (id == wxART_BEIJINGSUBWAY)  
      return wxString(SVG_SIMPLE_ICONS_BEIJINGSUBWAY);
  if (id == wxART_BEM)  
      return wxString(SVG_SIMPLE_ICONS_BEM);
  if (id == wxART_BENTLEY)  
      return wxString(SVG_SIMPLE_ICONS_BENTLEY);
  if (id == wxART_BENTO)  
      return wxString(SVG_SIMPLE_ICONS_BENTO);
  if (id == wxART_BENTOML)  
      return wxString(SVG_SIMPLE_ICONS_BENTOML);
  if (id == wxART_BEREAL)  
      return wxString(SVG_SIMPLE_ICONS_BEREAL);
  if (id == wxART_BETFAIR)  
      return wxString(SVG_SIMPLE_ICONS_BETFAIR);
  if (id == wxART_BIGBASKET)  
      return wxString(SVG_SIMPLE_ICONS_BIGBASKET);
  if (id == wxART_BIGBLUEBUTTON)  
      return wxString(SVG_SIMPLE_ICONS_BIGBLUEBUTTON);
  if (id == wxART_BIGCARTEL)  
      return wxString(SVG_SIMPLE_ICONS_BIGCARTEL);
  if (id == wxART_BIGCOMMERCE)  
      return wxString(SVG_SIMPLE_ICONS_BIGCOMMERCE);
  if (id == wxART_BILIBILI)  
      return wxString(SVG_SIMPLE_ICONS_BILIBILI);
  if (id == wxART_BILLBOARD)  
      return wxString(SVG_SIMPLE_ICONS_BILLBOARD);
  if (id == wxART_BIM)  
      return wxString(SVG_SIMPLE_ICONS_BIM);
  if (id == wxART_BINANCE)  
      return wxString(SVG_SIMPLE_ICONS_BINANCE);
  if (id == wxART_BIOLINK)  
      return wxString(SVG_SIMPLE_ICONS_BIOLINK);
  if (id == wxART_BISECTHOSTING)  
      return wxString(SVG_SIMPLE_ICONS_BISECTHOSTING);
  if (id == wxART_BIT)  
      return wxString(SVG_SIMPLE_ICONS_BIT);
  if (id == wxART_BITBUCKET)  
      return wxString(SVG_SIMPLE_ICONS_BITBUCKET);
  if (id == wxART_BITCOIN)  
      return wxString(SVG_SIMPLE_ICONS_BITCOIN);
  if (id == wxART_BITCOINCASH)  
      return wxString(SVG_SIMPLE_ICONS_BITCOINCASH);
  if (id == wxART_BITCOINSV)  
      return wxString(SVG_SIMPLE_ICONS_BITCOINSV);
  if (id == wxART_BITDEFENDER)  
      return wxString(SVG_SIMPLE_ICONS_BITDEFENDER);
  if (id == wxART_BITLY)  
      return wxString(SVG_SIMPLE_ICONS_BITLY);
  if (id == wxART_BITRISE)  
      return wxString(SVG_SIMPLE_ICONS_BITRISE);
  if (id == wxART_BITWARDEN)  
      return wxString(SVG_SIMPLE_ICONS_BITWARDEN);
  if (id == wxART_BITWIG)  
      return wxString(SVG_SIMPLE_ICONS_BITWIG);
  if (id == wxART_BLACKBERRY)  
      return wxString(SVG_SIMPLE_ICONS_BLACKBERRY);
  if (id == wxART_BLAZEMETER)  
      return wxString(SVG_SIMPLE_ICONS_BLAZEMETER);
  if (id == wxART_BLAZOR)  
      return wxString(SVG_SIMPLE_ICONS_BLAZOR);
  if (id == wxART_BLENDER)  
      return wxString(SVG_SIMPLE_ICONS_BLENDER);
  if (id == wxART_BLOCKCHAINDOTCOM)  
      return wxString(SVG_SIMPLE_ICONS_BLOCKCHAINDOTCOM);
  if (id == wxART_BLOGGER)  
      return wxString(SVG_SIMPLE_ICONS_BLOGGER);
  if (id == wxART_BLOGLOVIN)  
      return wxString(SVG_SIMPLE_ICONS_BLOGLOVIN);
  if (id == wxART_BLUEPRINT)  
      return wxString(SVG_SIMPLE_ICONS_BLUEPRINT);
  if (id == wxART_BLUETOOTH)  
      return wxString(SVG_SIMPLE_ICONS_BLUETOOTH);
  if (id == wxART_BMCSOFTWARE)  
      return wxString(SVG_SIMPLE_ICONS_BMCSOFTWARE);
  if (id == wxART_BMW)  
      return wxString(SVG_SIMPLE_ICONS_BMW);
  if (id == wxART_BOARDGAMEGEEK)  
      return wxString(SVG_SIMPLE_ICONS_BOARDGAMEGEEK);
  if (id == wxART_BOEHRINGERINGELHEIM)  
      return wxString(SVG_SIMPLE_ICONS_BOEHRINGERINGELHEIM);
  if (id == wxART_BOEING)  
      return wxString(SVG_SIMPLE_ICONS_BOEING);
  if (id == wxART_BOMBARDIER)  
      return wxString(SVG_SIMPLE_ICONS_BOMBARDIER);
  if (id == wxART_BOOKALOPE)  
      return wxString(SVG_SIMPLE_ICONS_BOOKALOPE);
  if (id == wxART_BOOKBUB)  
      return wxString(SVG_SIMPLE_ICONS_BOOKBUB);
  if (id == wxART_BOOKMETER)  
      return wxString(SVG_SIMPLE_ICONS_BOOKMETER);
  if (id == wxART_BOOKMYSHOW)  
      return wxString(SVG_SIMPLE_ICONS_BOOKMYSHOW);
  if (id == wxART_BOOKSTACK)  
      return wxString(SVG_SIMPLE_ICONS_BOOKSTACK);
  if (id == wxART_BOOST)  
      return wxString(SVG_SIMPLE_ICONS_BOOST);
  if (id == wxART_BOOTS)  
      return wxString(SVG_SIMPLE_ICONS_BOOTS);
  if (id == wxART_BOOTSTRAP)  
      return wxString(SVG_SIMPLE_ICONS_BOOTSTRAP);
  if (id == wxART_BORGBACKUP)  
      return wxString(SVG_SIMPLE_ICONS_BORGBACKUP);
  if (id == wxART_BOSCH)  
      return wxString(SVG_SIMPLE_ICONS_BOSCH);
  if (id == wxART_BOSE)  
      return wxString(SVG_SIMPLE_ICONS_BOSE);
  if (id == wxART_BOTBLECMS)  
      return wxString(SVG_SIMPLE_ICONS_BOTBLECMS);
  if (id == wxART_BOULANGER)  
      return wxString(SVG_SIMPLE_ICONS_BOULANGER);
  if (id == wxART_BOWER)  
      return wxString(SVG_SIMPLE_ICONS_BOWER);
  if (id == wxART_BOX)  
      return wxString(SVG_SIMPLE_ICONS_BOX);
  if (id == wxART_BOXYSVG)  
      return wxString(SVG_SIMPLE_ICONS_BOXYSVG);
  if (id == wxART_BRANDFOLDER)  
      return wxString(SVG_SIMPLE_ICONS_BRANDFOLDER);
  if (id == wxART_BRAVE)  
      return wxString(SVG_SIMPLE_ICONS_BRAVE);
  if (id == wxART_BREAKER)  
      return wxString(SVG_SIMPLE_ICONS_BREAKER);
  if (id == wxART_BREVO)  
      return wxString(SVG_SIMPLE_ICONS_BREVO);
  if (id == wxART_BRITISHAIRWAYS)  
      return wxString(SVG_SIMPLE_ICONS_BRITISHAIRWAYS);
  if (id == wxART_BROADCOM)  
      return wxString(SVG_SIMPLE_ICONS_BROADCOM);
  if (id == wxART_BSD)  
      return wxString(SVG_SIMPLE_ICONS_BSD);
  if (id == wxART_BSPWM)  
      return wxString(SVG_SIMPLE_ICONS_BSPWM);
  if (id == wxART_BT)  
      return wxString(SVG_SIMPLE_ICONS_BT);
  if (id == wxART_BUDDY)  
      return wxString(SVG_SIMPLE_ICONS_BUDDY);
  if (id == wxART_BUDIBASE)  
      return wxString(SVG_SIMPLE_ICONS_BUDIBASE);
  if (id == wxART_BUEFY)  
      return wxString(SVG_SIMPLE_ICONS_BUEFY);
  if (id == wxART_BUFFER)  
      return wxString(SVG_SIMPLE_ICONS_BUFFER);
  if (id == wxART_BUGATTI)  
      return wxString(SVG_SIMPLE_ICONS_BUGATTI);
  if (id == wxART_BUGCROWD)  
      return wxString(SVG_SIMPLE_ICONS_BUGCROWD);
  if (id == wxART_BUGSNAG)  
      return wxString(SVG_SIMPLE_ICONS_BUGSNAG);
  if (id == wxART_BUILDKITE)  
      return wxString(SVG_SIMPLE_ICONS_BUILDKITE);
  if (id == wxART_BUKALAPAK)  
      return wxString(SVG_SIMPLE_ICONS_BUKALAPAK);
  if (id == wxART_BULMA)  
      return wxString(SVG_SIMPLE_ICONS_BULMA);
  if (id == wxART_BUN)  
      return wxString(SVG_SIMPLE_ICONS_BUN);
  if (id == wxART_BUNQ)  
      return wxString(SVG_SIMPLE_ICONS_BUNQ);
  if (id == wxART_BURGERKING)  
      return wxString(SVG_SIMPLE_ICONS_BURGERKING);
  if (id == wxART_BURTON)  
      return wxString(SVG_SIMPLE_ICONS_BURTON);
  if (id == wxART_BUYMEACOFFEE)  
      return wxString(SVG_SIMPLE_ICONS_BUYMEACOFFEE);
  if (id == wxART_BUZZFEED)  
      return wxString(SVG_SIMPLE_ICONS_BUZZFEED);
  if (id == wxART_BVG)  
      return wxString(SVG_SIMPLE_ICONS_BVG);
  if (id == wxART_BYJUS)  
      return wxString(SVG_SIMPLE_ICONS_BYJUS);
  if (id == wxART_BYTE)  
      return wxString(SVG_SIMPLE_ICONS_BYTE);
  if (id == wxART_BYTEDANCE)  
      return wxString(SVG_SIMPLE_ICONS_BYTEDANCE);
  if (id == wxART_C)  
      return wxString(SVG_SIMPLE_ICONS_C);
  if (id == wxART_CACHET)  
      return wxString(SVG_SIMPLE_ICONS_CACHET);
  if (id == wxART_CADDY)  
      return wxString(SVG_SIMPLE_ICONS_CADDY);
  if (id == wxART_CADILLAC)  
      return wxString(SVG_SIMPLE_ICONS_CADILLAC);
  if (id == wxART_CAFEPRESS)  
      return wxString(SVG_SIMPLE_ICONS_CAFEPRESS);
  if (id == wxART_CAFFEINE)  
      return wxString(SVG_SIMPLE_ICONS_CAFFEINE);
  if (id == wxART_CAIROGRAPHICS)  
      return wxString(SVG_SIMPLE_ICONS_CAIROGRAPHICS);
  if (id == wxART_CAIROMETRO)  
      return wxString(SVG_SIMPLE_ICONS_CAIROMETRO);
  if (id == wxART_CAKEPHP)  
      return wxString(SVG_SIMPLE_ICONS_CAKEPHP);
  if (id == wxART_CAMPAIGNMONITOR)  
      return wxString(SVG_SIMPLE_ICONS_CAMPAIGNMONITOR);
  if (id == wxART_CANONICAL)  
      return wxString(SVG_SIMPLE_ICONS_CANONICAL);
  if (id == wxART_CANVA)  
      return wxString(SVG_SIMPLE_ICONS_CANVA);
  if (id == wxART_CAPACITOR)  
      return wxString(SVG_SIMPLE_ICONS_CAPACITOR);
  if (id == wxART_CARDANO)  
      return wxString(SVG_SIMPLE_ICONS_CARDANO);
  if (id == wxART_CARRD)  
      return wxString(SVG_SIMPLE_ICONS_CARRD);
  if (id == wxART_CARREFOUR)  
      return wxString(SVG_SIMPLE_ICONS_CARREFOUR);
  if (id == wxART_CARTHROTTLE)  
      return wxString(SVG_SIMPLE_ICONS_CARTHROTTLE);
  if (id == wxART_CARTO)  
      return wxString(SVG_SIMPLE_ICONS_CARTO);
  if (id == wxART_CASHAPP)  
      return wxString(SVG_SIMPLE_ICONS_CASHAPP);
  if (id == wxART_CASTBOX)  
      return wxString(SVG_SIMPLE_ICONS_CASTBOX);
  if (id == wxART_CASTORAMA)  
      return wxString(SVG_SIMPLE_ICONS_CASTORAMA);
  if (id == wxART_CASTRO)  
      return wxString(SVG_SIMPLE_ICONS_CASTRO);
  if (id == wxART_CATERPILLAR)  
      return wxString(SVG_SIMPLE_ICONS_CATERPILLAR);
  if (id == wxART_CBS)  
      return wxString(SVG_SIMPLE_ICONS_CBS);
  if (id == wxART_CDPROJEKT)  
      return wxString(SVG_SIMPLE_ICONS_CDPROJEKT);
  if (id == wxART_CELERY)  
      return wxString(SVG_SIMPLE_ICONS_CELERY);
  if (id == wxART_CENTOS)  
      return wxString(SVG_SIMPLE_ICONS_CENTOS);
  if (id == wxART_CEPH)  
      return wxString(SVG_SIMPLE_ICONS_CEPH);
  if (id == wxART_CESIUM)  
      return wxString(SVG_SIMPLE_ICONS_CESIUM);
  if (id == wxART_CHAI)  
      return wxString(SVG_SIMPLE_ICONS_CHAI);
  if (id == wxART_CHAINGUARD)  
      return wxString(SVG_SIMPLE_ICONS_CHAINGUARD);
  if (id == wxART_CHAINLINK)  
      return wxString(SVG_SIMPLE_ICONS_CHAINLINK);
  if (id == wxART_CHAKRAUI)  
      return wxString(SVG_SIMPLE_ICONS_CHAKRAUI);
  if (id == wxART_CHANNEL4)  
      return wxString(SVG_SIMPLE_ICONS_CHANNEL4);
  if (id == wxART_CHARTDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_CHARTDOTJS);
  if (id == wxART_CHARTMOGUL)  
      return wxString(SVG_SIMPLE_ICONS_CHARTMOGUL);
  if (id == wxART_CHASE)  
      return wxString(SVG_SIMPLE_ICONS_CHASE);
  if (id == wxART_CHATBOT)  
      return wxString(SVG_SIMPLE_ICONS_CHATBOT);
  if (id == wxART_CHATWOOT)  
      return wxString(SVG_SIMPLE_ICONS_CHATWOOT);
  if (id == wxART_CHECKIO)  
      return wxString(SVG_SIMPLE_ICONS_CHECKIO);
  if (id == wxART_CHECKMARX)  
      return wxString(SVG_SIMPLE_ICONS_CHECKMARX);
  if (id == wxART_CHECKMK)  
      return wxString(SVG_SIMPLE_ICONS_CHECKMK);
  if (id == wxART_CHEF)  
      return wxString(SVG_SIMPLE_ICONS_CHEF);
  if (id == wxART_CHEMEX)  
      return wxString(SVG_SIMPLE_ICONS_CHEMEX);
  if (id == wxART_CHEVROLET)  
      return wxString(SVG_SIMPLE_ICONS_CHEVROLET);
  if (id == wxART_CHIANETWORK)  
      return wxString(SVG_SIMPLE_ICONS_CHIANETWORK);
  if (id == wxART_CHINAEASTERNAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_CHINAEASTERNAIRLINES);
  if (id == wxART_CHINASOUTHERNAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_CHINASOUTHERNAIRLINES);
  if (id == wxART_CHOCOLATEY)  
      return wxString(SVG_SIMPLE_ICONS_CHOCOLATEY);
  if (id == wxART_CHROMATIC)  
      return wxString(SVG_SIMPLE_ICONS_CHROMATIC);
  if (id == wxART_CHROMECAST)  
      return wxString(SVG_SIMPLE_ICONS_CHROMECAST);
  if (id == wxART_CHRYSLER)  
      return wxString(SVG_SIMPLE_ICONS_CHRYSLER);
  if (id == wxART_CHUPACHUPS)  
      return wxString(SVG_SIMPLE_ICONS_CHUPACHUPS);
  if (id == wxART_CILIUM)  
      return wxString(SVG_SIMPLE_ICONS_CILIUM);
  if (id == wxART_CINEMA4D)  
      return wxString(SVG_SIMPLE_ICONS_CINEMA4D);
  if (id == wxART_CIRCLE)  
      return wxString(SVG_SIMPLE_ICONS_CIRCLE);
  if (id == wxART_CIRCLECI)  
      return wxString(SVG_SIMPLE_ICONS_CIRCLECI);
  if (id == wxART_CIRCUITVERSE)  
      return wxString(SVG_SIMPLE_ICONS_CIRCUITVERSE);
  if (id == wxART_CIRRUSCI)  
      return wxString(SVG_SIMPLE_ICONS_CIRRUSCI);
  if (id == wxART_CISCO)  
      return wxString(SVG_SIMPLE_ICONS_CISCO);
  if (id == wxART_CITRIX)  
      return wxString(SVG_SIMPLE_ICONS_CITRIX);
  if (id == wxART_CITROEN)  
      return wxString(SVG_SIMPLE_ICONS_CITROEN);
  if (id == wxART_CIVICRM)  
      return wxString(SVG_SIMPLE_ICONS_CIVICRM);
  if (id == wxART_CIVO)  
      return wxString(SVG_SIMPLE_ICONS_CIVO);
  if (id == wxART_CKEDITOR4)  
      return wxString(SVG_SIMPLE_ICONS_CKEDITOR4);
  if (id == wxART_CLARIFAI)  
      return wxString(SVG_SIMPLE_ICONS_CLARIFAI);
  if (id == wxART_CLARIS)  
      return wxString(SVG_SIMPLE_ICONS_CLARIS);
  if (id == wxART_CLARIVATE)  
      return wxString(SVG_SIMPLE_ICONS_CLARIVATE);
  if (id == wxART_CLICKHOUSE)  
      return wxString(SVG_SIMPLE_ICONS_CLICKHOUSE);
  if (id == wxART_CLICKUP)  
      return wxString(SVG_SIMPLE_ICONS_CLICKUP);
  if (id == wxART_CLION)  
      return wxString(SVG_SIMPLE_ICONS_CLION);
  if (id == wxART_CLIQZ)  
      return wxString(SVG_SIMPLE_ICONS_CLIQZ);
  if (id == wxART_CLOCKIFY)  
      return wxString(SVG_SIMPLE_ICONS_CLOCKIFY);
  if (id == wxART_CLOJURE)  
      return wxString(SVG_SIMPLE_ICONS_CLOJURE);
  if (id == wxART_CLOUD66)  
      return wxString(SVG_SIMPLE_ICONS_CLOUD66);
  if (id == wxART_CLOUDBEES)  
      return wxString(SVG_SIMPLE_ICONS_CLOUDBEES);
  if (id == wxART_CLOUDCANNON)  
      return wxString(SVG_SIMPLE_ICONS_CLOUDCANNON);
  if (id == wxART_CLOUDERA)  
      return wxString(SVG_SIMPLE_ICONS_CLOUDERA);
  if (id == wxART_CLOUDFLARE)  
      return wxString(SVG_SIMPLE_ICONS_CLOUDFLARE);
  if (id == wxART_CLOUDFLAREPAGES)  
      return wxString(SVG_SIMPLE_ICONS_CLOUDFLAREPAGES);
  if (id == wxART_CLOUDFOUNDRY)  
      return wxString(SVG_SIMPLE_ICONS_CLOUDFOUNDRY);
  if (id == wxART_CLOUDSMITH)  
      return wxString(SVG_SIMPLE_ICONS_CLOUDSMITH);
  if (id == wxART_CLOUDWAYS)  
      return wxString(SVG_SIMPLE_ICONS_CLOUDWAYS);
  if (id == wxART_CLUBHOUSE)  
      return wxString(SVG_SIMPLE_ICONS_CLUBHOUSE);
  if (id == wxART_CLYP)  
      return wxString(SVG_SIMPLE_ICONS_CLYP);
  if (id == wxART_CMAKE)  
      return wxString(SVG_SIMPLE_ICONS_CMAKE);
  if (id == wxART_CNCF)  
      return wxString(SVG_SIMPLE_ICONS_CNCF);
  if (id == wxART_CNN)  
      return wxString(SVG_SIMPLE_ICONS_CNN);
  if (id == wxART_COCACOLA)  
      return wxString(SVG_SIMPLE_ICONS_COCACOLA);
  if (id == wxART_COCKPIT)  
      return wxString(SVG_SIMPLE_ICONS_COCKPIT);
  if (id == wxART_COCKROACHLABS)  
      return wxString(SVG_SIMPLE_ICONS_COCKROACHLABS);
  if (id == wxART_COCOAPODS)  
      return wxString(SVG_SIMPLE_ICONS_COCOAPODS);
  if (id == wxART_COCOS)  
      return wxString(SVG_SIMPLE_ICONS_COCOS);
  if (id == wxART_CODA)  
      return wxString(SVG_SIMPLE_ICONS_CODA);
  if (id == wxART_CODACY)  
      return wxString(SVG_SIMPLE_ICONS_CODACY);
  if (id == wxART_CODEBERG)  
      return wxString(SVG_SIMPLE_ICONS_CODEBERG);
  if (id == wxART_CODECADEMY)  
      return wxString(SVG_SIMPLE_ICONS_CODECADEMY);
  if (id == wxART_CODECEPTJS)  
      return wxString(SVG_SIMPLE_ICONS_CODECEPTJS);
  if (id == wxART_CODECHEF)  
      return wxString(SVG_SIMPLE_ICONS_CODECHEF);
  if (id == wxART_CODECLIMATE)  
      return wxString(SVG_SIMPLE_ICONS_CODECLIMATE);
  if (id == wxART_CODECOV)  
      return wxString(SVG_SIMPLE_ICONS_CODECOV);
  if (id == wxART_CODEFACTOR)  
      return wxString(SVG_SIMPLE_ICONS_CODEFACTOR);
  if (id == wxART_CODEFORCES)  
      return wxString(SVG_SIMPLE_ICONS_CODEFORCES);
  if (id == wxART_CODEIGNITER)  
      return wxString(SVG_SIMPLE_ICONS_CODEIGNITER);
  if (id == wxART_CODEIUM)  
      return wxString(SVG_SIMPLE_ICONS_CODEIUM);
  if (id == wxART_CODEMAGIC)  
      return wxString(SVG_SIMPLE_ICONS_CODEMAGIC);
  if (id == wxART_CODEMIRROR)  
      return wxString(SVG_SIMPLE_ICONS_CODEMIRROR);
  if (id == wxART_CODENEWBIE)  
      return wxString(SVG_SIMPLE_ICONS_CODENEWBIE);
  if (id == wxART_CODEPEN)  
      return wxString(SVG_SIMPLE_ICONS_CODEPEN);
  if (id == wxART_CODEPROJECT)  
      return wxString(SVG_SIMPLE_ICONS_CODEPROJECT);
  if (id == wxART_CODEREVIEW)  
      return wxString(SVG_SIMPLE_ICONS_CODEREVIEW);
  if (id == wxART_CODERSRANK)  
      return wxString(SVG_SIMPLE_ICONS_CODERSRANK);
  if (id == wxART_CODERWALL)  
      return wxString(SVG_SIMPLE_ICONS_CODERWALL);
  if (id == wxART_CODESANDBOX)  
      return wxString(SVG_SIMPLE_ICONS_CODESANDBOX);
  if (id == wxART_CODESHIP)  
      return wxString(SVG_SIMPLE_ICONS_CODESHIP);
  if (id == wxART_CODESIGNAL)  
      return wxString(SVG_SIMPLE_ICONS_CODESIGNAL);
  if (id == wxART_CODESTREAM)  
      return wxString(SVG_SIMPLE_ICONS_CODESTREAM);
  if (id == wxART_CODEWARS)  
      return wxString(SVG_SIMPLE_ICONS_CODEWARS);
  if (id == wxART_CODINGAME)  
      return wxString(SVG_SIMPLE_ICONS_CODINGAME);
  if (id == wxART_CODINGNINJAS)  
      return wxString(SVG_SIMPLE_ICONS_CODINGNINJAS);
  if (id == wxART_CODIO)  
      return wxString(SVG_SIMPLE_ICONS_CODIO);
  if (id == wxART_COFFEESCRIPT)  
      return wxString(SVG_SIMPLE_ICONS_COFFEESCRIPT);
  if (id == wxART_COGNIZANT)  
      return wxString(SVG_SIMPLE_ICONS_COGNIZANT);
  if (id == wxART_COIL)  
      return wxString(SVG_SIMPLE_ICONS_COIL);
  if (id == wxART_COINBASE)  
      return wxString(SVG_SIMPLE_ICONS_COINBASE);
  if (id == wxART_COINMARKETCAP)  
      return wxString(SVG_SIMPLE_ICONS_COINMARKETCAP);
  if (id == wxART_COMMERZBANK)  
      return wxString(SVG_SIMPLE_ICONS_COMMERZBANK);
  if (id == wxART_COMMITLINT)  
      return wxString(SVG_SIMPLE_ICONS_COMMITLINT);
  if (id == wxART_COMMODORE)  
      return wxString(SVG_SIMPLE_ICONS_COMMODORE);
  if (id == wxART_COMMONWORKFLOWLANGUAGE)  
      return wxString(SVG_SIMPLE_ICONS_COMMONWORKFLOWLANGUAGE);
  if (id == wxART_COMPILEREXPLORER)  
      return wxString(SVG_SIMPLE_ICONS_COMPILEREXPLORER);
  if (id == wxART_COMPOSER)  
      return wxString(SVG_SIMPLE_ICONS_COMPOSER);
  if (id == wxART_COMPTIA)  
      return wxString(SVG_SIMPLE_ICONS_COMPTIA);
  if (id == wxART_COMSOL)  
      return wxString(SVG_SIMPLE_ICONS_COMSOL);
  if (id == wxART_CONAN)  
      return wxString(SVG_SIMPLE_ICONS_CONAN);
  if (id == wxART_CONCOURSE)  
      return wxString(SVG_SIMPLE_ICONS_CONCOURSE);
  if (id == wxART_CONDAFORGE)  
      return wxString(SVG_SIMPLE_ICONS_CONDAFORGE);
  if (id == wxART_CONEKTA)  
      return wxString(SVG_SIMPLE_ICONS_CONEKTA);
  if (id == wxART_CONFLUENCE)  
      return wxString(SVG_SIMPLE_ICONS_CONFLUENCE);
  if (id == wxART_CONSTRUCT3)  
      return wxString(SVG_SIMPLE_ICONS_CONSTRUCT3);
  if (id == wxART_CONSUL)  
      return wxString(SVG_SIMPLE_ICONS_CONSUL);
  if (id == wxART_CONTACTLESSPAYMENT)  
      return wxString(SVG_SIMPLE_ICONS_CONTACTLESSPAYMENT);
  if (id == wxART_CONTAINERD)  
      return wxString(SVG_SIMPLE_ICONS_CONTAINERD);
  if (id == wxART_CONTAO)  
      return wxString(SVG_SIMPLE_ICONS_CONTAO);
  if (id == wxART_CONTENTFUL)  
      return wxString(SVG_SIMPLE_ICONS_CONTENTFUL);
  if (id == wxART_CONVENTIONALCOMMITS)  
      return wxString(SVG_SIMPLE_ICONS_CONVENTIONALCOMMITS);
  if (id == wxART_CONVERTIO)  
      return wxString(SVG_SIMPLE_ICONS_CONVERTIO);
  if (id == wxART_COOKIECUTTER)  
      return wxString(SVG_SIMPLE_ICONS_COOKIECUTTER);
  if (id == wxART_COOP)  
      return wxString(SVG_SIMPLE_ICONS_COOP);
  if (id == wxART_CORA)  
      return wxString(SVG_SIMPLE_ICONS_CORA);
  if (id == wxART_CORONAENGINE)  
      return wxString(SVG_SIMPLE_ICONS_CORONAENGINE);
  if (id == wxART_CORONARENDERER)  
      return wxString(SVG_SIMPLE_ICONS_CORONARENDERER);
  if (id == wxART_CORSAIR)  
      return wxString(SVG_SIMPLE_ICONS_CORSAIR);
  if (id == wxART_COUCHBASE)  
      return wxString(SVG_SIMPLE_ICONS_COUCHBASE);
  if (id == wxART_COUNTERSTRIKE)  
      return wxString(SVG_SIMPLE_ICONS_COUNTERSTRIKE);
  if (id == wxART_COUNTINGWORKSPRO)  
      return wxString(SVG_SIMPLE_ICONS_COUNTINGWORKSPRO);
  if (id == wxART_COURSERA)  
      return wxString(SVG_SIMPLE_ICONS_COURSERA);
  if (id == wxART_COVERALLS)  
      return wxString(SVG_SIMPLE_ICONS_COVERALLS);
  if (id == wxART_CPANEL)  
      return wxString(SVG_SIMPLE_ICONS_CPANEL);
  if (id == wxART_CPLUSPLUS)  
      return wxString(SVG_SIMPLE_ICONS_CPLUSPLUS);
  if (id == wxART_CPLUSPLUSBUILDER)  
      return wxString(SVG_SIMPLE_ICONS_CPLUSPLUSBUILDER);
  if (id == wxART_CRAFTCMS)  
      return wxString(SVG_SIMPLE_ICONS_CRAFTCMS);
  if (id == wxART_CRAFTSMAN)  
      return wxString(SVG_SIMPLE_ICONS_CRAFTSMAN);
  if (id == wxART_CRATEDB)  
      return wxString(SVG_SIMPLE_ICONS_CRATEDB);
  if (id == wxART_CRAYON)  
      return wxString(SVG_SIMPLE_ICONS_CRAYON);
  if (id == wxART_CREALITY)  
      return wxString(SVG_SIMPLE_ICONS_CREALITY);
  if (id == wxART_CREATEREACTAPP)  
      return wxString(SVG_SIMPLE_ICONS_CREATEREACTAPP);
  if (id == wxART_CREATIVECOMMONS)  
      return wxString(SVG_SIMPLE_ICONS_CREATIVECOMMONS);
  if (id == wxART_CREATIVETECHNOLOGY)  
      return wxString(SVG_SIMPLE_ICONS_CREATIVETECHNOLOGY);
  if (id == wxART_CREDLY)  
      return wxString(SVG_SIMPLE_ICONS_CREDLY);
  if (id == wxART_CREHANA)  
      return wxString(SVG_SIMPLE_ICONS_CREHANA);
  if (id == wxART_CRITICALROLE)  
      return wxString(SVG_SIMPLE_ICONS_CRITICALROLE);
  if (id == wxART_CROWDIN)  
      return wxString(SVG_SIMPLE_ICONS_CROWDIN);
  if (id == wxART_CROWDSOURCE)  
      return wxString(SVG_SIMPLE_ICONS_CROWDSOURCE);
  if (id == wxART_CRUNCHBASE)  
      return wxString(SVG_SIMPLE_ICONS_CRUNCHBASE);
  if (id == wxART_CRUNCHYROLL)  
      return wxString(SVG_SIMPLE_ICONS_CRUNCHYROLL);
  if (id == wxART_CRYENGINE)  
      return wxString(SVG_SIMPLE_ICONS_CRYENGINE);
  if (id == wxART_CRYSTAL)  
      return wxString(SVG_SIMPLE_ICONS_CRYSTAL);
  if (id == wxART_CSHARP)  
      return wxString(SVG_SIMPLE_ICONS_CSHARP);
  if (id == wxART_CSS3)  
      return wxString(SVG_SIMPLE_ICONS_CSS3);
  if (id == wxART_CSSMODULES)  
      return wxString(SVG_SIMPLE_ICONS_CSSMODULES);
  if (id == wxART_CSSWIZARDRY)  
      return wxString(SVG_SIMPLE_ICONS_CSSWIZARDRY);
  if (id == wxART_CTS)  
      return wxString(SVG_SIMPLE_ICONS_CTS);
  if (id == wxART_CUCUMBER)  
      return wxString(SVG_SIMPLE_ICONS_CUCUMBER);
  if (id == wxART_CULTURA)  
      return wxString(SVG_SIMPLE_ICONS_CULTURA);
  if (id == wxART_CURL)  
      return wxString(SVG_SIMPLE_ICONS_CURL);
  if (id == wxART_CURSEFORGE)  
      return wxString(SVG_SIMPLE_ICONS_CURSEFORGE);
  if (id == wxART_CYBERDEFENDERS)  
      return wxString(SVG_SIMPLE_ICONS_CYBERDEFENDERS);
  if (id == wxART_CYCLING74)  
      return wxString(SVG_SIMPLE_ICONS_CYCLING74);
  if (id == wxART_CYPRESS)  
      return wxString(SVG_SIMPLE_ICONS_CYPRESS);
  if (id == wxART_CYTOSCAPEDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_CYTOSCAPEDOTJS);
  if (id == wxART_D)  
      return wxString(SVG_SIMPLE_ICONS_D);
  if (id == wxART_D3DOTJS)  
      return wxString(SVG_SIMPLE_ICONS_D3DOTJS);
  if (id == wxART_DACIA)  
      return wxString(SVG_SIMPLE_ICONS_DACIA);
  if (id == wxART_DAF)  
      return wxString(SVG_SIMPLE_ICONS_DAF);
  if (id == wxART_DAILYMOTION)  
      return wxString(SVG_SIMPLE_ICONS_DAILYMOTION);
  if (id == wxART_DAIMLER)  
      return wxString(SVG_SIMPLE_ICONS_DAIMLER);
  if (id == wxART_DAISYUI)  
      return wxString(SVG_SIMPLE_ICONS_DAISYUI);
  if (id == wxART_DAPR)  
      return wxString(SVG_SIMPLE_ICONS_DAPR);
  if (id == wxART_DARKREADER)  
      return wxString(SVG_SIMPLE_ICONS_DARKREADER);
  if (id == wxART_DART)  
      return wxString(SVG_SIMPLE_ICONS_DART);
  if (id == wxART_DARTY)  
      return wxString(SVG_SIMPLE_ICONS_DARTY);
  if (id == wxART_DASERSTE)  
      return wxString(SVG_SIMPLE_ICONS_DASERSTE);
  if (id == wxART_DASH)  
      return wxString(SVG_SIMPLE_ICONS_DASH);
  if (id == wxART_DASHLANE)  
      return wxString(SVG_SIMPLE_ICONS_DASHLANE);
  if (id == wxART_DASK)  
      return wxString(SVG_SIMPLE_ICONS_DASK);
  if (id == wxART_DASSAULTSYSTEMES)  
      return wxString(SVG_SIMPLE_ICONS_DASSAULTSYSTEMES);
  if (id == wxART_DATABRICKS)  
      return wxString(SVG_SIMPLE_ICONS_DATABRICKS);
  if (id == wxART_DATACAMP)  
      return wxString(SVG_SIMPLE_ICONS_DATACAMP);
  if (id == wxART_DATADOG)  
      return wxString(SVG_SIMPLE_ICONS_DATADOG);
  if (id == wxART_DATADOTAI)  
      return wxString(SVG_SIMPLE_ICONS_DATADOTAI);
  if (id == wxART_DATAGRIP)  
      return wxString(SVG_SIMPLE_ICONS_DATAGRIP);
  if (id == wxART_DATAIKU)  
      return wxString(SVG_SIMPLE_ICONS_DATAIKU);
  if (id == wxART_DATASTAX)  
      return wxString(SVG_SIMPLE_ICONS_DATASTAX);
  if (id == wxART_DATAVERSE)  
      return wxString(SVG_SIMPLE_ICONS_DATAVERSE);
  if (id == wxART_DATOCMS)  
      return wxString(SVG_SIMPLE_ICONS_DATOCMS);
  if (id == wxART_DATTO)  
      return wxString(SVG_SIMPLE_ICONS_DATTO);
  if (id == wxART_DAZN)  
      return wxString(SVG_SIMPLE_ICONS_DAZN);
  if (id == wxART_DBLP)  
      return wxString(SVG_SIMPLE_ICONS_DBLP);
  if (id == wxART_DBT)  
      return wxString(SVG_SIMPLE_ICONS_DBT);
  if (id == wxART_DCENTERTAINMENT)  
      return wxString(SVG_SIMPLE_ICONS_DCENTERTAINMENT);
  if (id == wxART_DEBIAN)  
      return wxString(SVG_SIMPLE_ICONS_DEBIAN);
  if (id == wxART_DECAPCMS)  
      return wxString(SVG_SIMPLE_ICONS_DECAPCMS);
  if (id == wxART_DEDGE)  
      return wxString(SVG_SIMPLE_ICONS_DEDGE);
  if (id == wxART_DEEPIN)  
      return wxString(SVG_SIMPLE_ICONS_DEEPIN);
  if (id == wxART_DEEPNOTE)  
      return wxString(SVG_SIMPLE_ICONS_DEEPNOTE);
  if (id == wxART_DEEZER)  
      return wxString(SVG_SIMPLE_ICONS_DEEZER);
  if (id == wxART_DELICIOUS)  
      return wxString(SVG_SIMPLE_ICONS_DELICIOUS);
  if (id == wxART_DELIVEROO)  
      return wxString(SVG_SIMPLE_ICONS_DELIVEROO);
  if (id == wxART_DELL)  
      return wxString(SVG_SIMPLE_ICONS_DELL);
  if (id == wxART_DELONGHI)  
      return wxString(SVG_SIMPLE_ICONS_DELONGHI);
  if (id == wxART_DELPHI)  
      return wxString(SVG_SIMPLE_ICONS_DELPHI);
  if (id == wxART_DELTA)  
      return wxString(SVG_SIMPLE_ICONS_DELTA);
  if (id == wxART_DENO)  
      return wxString(SVG_SIMPLE_ICONS_DENO);
  if (id == wxART_DENON)  
      return wxString(SVG_SIMPLE_ICONS_DENON);
  if (id == wxART_DEPENDABOT)  
      return wxString(SVG_SIMPLE_ICONS_DEPENDABOT);
  if (id == wxART_DEPENDENCYCHECK)  
      return wxString(SVG_SIMPLE_ICONS_DEPENDENCYCHECK);
  if (id == wxART_DERSPIEGEL)  
      return wxString(SVG_SIMPLE_ICONS_DERSPIEGEL);
  if (id == wxART_DESIGNERNEWS)  
      return wxString(SVG_SIMPLE_ICONS_DESIGNERNEWS);
  if (id == wxART_DEUTSCHEBAHN)  
      return wxString(SVG_SIMPLE_ICONS_DEUTSCHEBAHN);
  if (id == wxART_DEUTSCHEBANK)  
      return wxString(SVG_SIMPLE_ICONS_DEUTSCHEBANK);
  if (id == wxART_DEVDOTTO)  
      return wxString(SVG_SIMPLE_ICONS_DEVDOTTO);
  if (id == wxART_DEVEXPRESS)  
      return wxString(SVG_SIMPLE_ICONS_DEVEXPRESS);
  if (id == wxART_DEVIANTART)  
      return wxString(SVG_SIMPLE_ICONS_DEVIANTART);
  if (id == wxART_DEVPOST)  
      return wxString(SVG_SIMPLE_ICONS_DEVPOST);
  if (id == wxART_DEVRANT)  
      return wxString(SVG_SIMPLE_ICONS_DEVRANT);
  if (id == wxART_DGRAPH)  
      return wxString(SVG_SIMPLE_ICONS_DGRAPH);
  if (id == wxART_DHL)  
      return wxString(SVG_SIMPLE_ICONS_DHL);
  if (id == wxART_DIAGRAMSDOTNET)  
      return wxString(SVG_SIMPLE_ICONS_DIAGRAMSDOTNET);
  if (id == wxART_DIALOGFLOW)  
      return wxString(SVG_SIMPLE_ICONS_DIALOGFLOW);
  if (id == wxART_DIASPORA)  
      return wxString(SVG_SIMPLE_ICONS_DIASPORA);
  if (id == wxART_DIGG)  
      return wxString(SVG_SIMPLE_ICONS_DIGG);
  if (id == wxART_DIGIKEYELECTRONICS)  
      return wxString(SVG_SIMPLE_ICONS_DIGIKEYELECTRONICS);
  if (id == wxART_DIGITALOCEAN)  
      return wxString(SVG_SIMPLE_ICONS_DIGITALOCEAN);
  if (id == wxART_DIOR)  
      return wxString(SVG_SIMPLE_ICONS_DIOR);
  if (id == wxART_DIRECTUS)  
      return wxString(SVG_SIMPLE_ICONS_DIRECTUS);
  if (id == wxART_DISCOGS)  
      return wxString(SVG_SIMPLE_ICONS_DISCOGS);
  if (id == wxART_DISCORD)  
      return wxString(SVG_SIMPLE_ICONS_DISCORD);
  if (id == wxART_DISCOURSE)  
      return wxString(SVG_SIMPLE_ICONS_DISCOURSE);
  if (id == wxART_DISCOVER)  
      return wxString(SVG_SIMPLE_ICONS_DISCOVER);
  if (id == wxART_DISQUS)  
      return wxString(SVG_SIMPLE_ICONS_DISQUS);
  if (id == wxART_DISROOT)  
      return wxString(SVG_SIMPLE_ICONS_DISROOT);
  if (id == wxART_DISTROKID)  
      return wxString(SVG_SIMPLE_ICONS_DISTROKID);
  if (id == wxART_DJANGO)  
      return wxString(SVG_SIMPLE_ICONS_DJANGO);
  if (id == wxART_DJI)  
      return wxString(SVG_SIMPLE_ICONS_DJI);
  if (id == wxART_DLIB)  
      return wxString(SVG_SIMPLE_ICONS_DLIB);
  if (id == wxART_DLNA)  
      return wxString(SVG_SIMPLE_ICONS_DLNA);
  if (id == wxART_DM)  
      return wxString(SVG_SIMPLE_ICONS_DM);
  if (id == wxART_DOCKER)  
      return wxString(SVG_SIMPLE_ICONS_DOCKER);
  if (id == wxART_DOCSDOTRS)  
      return wxString(SVG_SIMPLE_ICONS_DOCSDOTRS);
  if (id == wxART_DOCSIFY)  
      return wxString(SVG_SIMPLE_ICONS_DOCSIFY);
  if (id == wxART_DOCUSAURUS)  
      return wxString(SVG_SIMPLE_ICONS_DOCUSAURUS);
  if (id == wxART_DOCUSIGN)  
      return wxString(SVG_SIMPLE_ICONS_DOCUSIGN);
  if (id == wxART_DOGECOIN)  
      return wxString(SVG_SIMPLE_ICONS_DOGECOIN);
  if (id == wxART_DOI)  
      return wxString(SVG_SIMPLE_ICONS_DOI);
  if (id == wxART_DOLBY)  
      return wxString(SVG_SIMPLE_ICONS_DOLBY);
  if (id == wxART_DOORDASH)  
      return wxString(SVG_SIMPLE_ICONS_DOORDASH);
  if (id == wxART_DOTENV)  
      return wxString(SVG_SIMPLE_ICONS_DOTENV);
  if (id == wxART_DOTNET)  
      return wxString(SVG_SIMPLE_ICONS_DOTNET);
  if (id == wxART_DOUBAN)  
      return wxString(SVG_SIMPLE_ICONS_DOUBAN);
  if (id == wxART_DOUBANREAD)  
      return wxString(SVG_SIMPLE_ICONS_DOUBANREAD);
  if (id == wxART_DOVECOT)  
      return wxString(SVG_SIMPLE_ICONS_DOVECOT);
  if (id == wxART_DPD)  
      return wxString(SVG_SIMPLE_ICONS_DPD);
  if (id == wxART_DRAGONFRAME)  
      return wxString(SVG_SIMPLE_ICONS_DRAGONFRAME);
  if (id == wxART_DRAUGIEMDOTLV)  
      return wxString(SVG_SIMPLE_ICONS_DRAUGIEMDOTLV);
  if (id == wxART_DRIBBBLE)  
      return wxString(SVG_SIMPLE_ICONS_DRIBBBLE);
  if (id == wxART_DRONE)  
      return wxString(SVG_SIMPLE_ICONS_DRONE);
  if (id == wxART_DROOBLE)  
      return wxString(SVG_SIMPLE_ICONS_DROOBLE);
  if (id == wxART_DROPBOX)  
      return wxString(SVG_SIMPLE_ICONS_DROPBOX);
  if (id == wxART_DRUPAL)  
      return wxString(SVG_SIMPLE_ICONS_DRUPAL);
  if (id == wxART_DSAUTOMOBILES)  
      return wxString(SVG_SIMPLE_ICONS_DSAUTOMOBILES);
  if (id == wxART_DTS)  
      return wxString(SVG_SIMPLE_ICONS_DTS);
  if (id == wxART_DTUBE)  
      return wxString(SVG_SIMPLE_ICONS_DTUBE);
  if (id == wxART_DUCATI)  
      return wxString(SVG_SIMPLE_ICONS_DUCATI);
  if (id == wxART_DUCKDB)  
      return wxString(SVG_SIMPLE_ICONS_DUCKDB);
  if (id == wxART_DUCKDUCKGO)  
      return wxString(SVG_SIMPLE_ICONS_DUCKDUCKGO);
  if (id == wxART_DUNGEONSANDDRAGONS)  
      return wxString(SVG_SIMPLE_ICONS_DUNGEONSANDDRAGONS);
  if (id == wxART_DUNKED)  
      return wxString(SVG_SIMPLE_ICONS_DUNKED);
  if (id == wxART_DUOLINGO)  
      return wxString(SVG_SIMPLE_ICONS_DUOLINGO);
  if (id == wxART_DVC)  
      return wxString(SVG_SIMPLE_ICONS_DVC);
  if (id == wxART_DWAVESYSTEMS)  
      return wxString(SVG_SIMPLE_ICONS_DWAVESYSTEMS);
  if (id == wxART_DWM)  
      return wxString(SVG_SIMPLE_ICONS_DWM);
  if (id == wxART_DYNAMICS365)  
      return wxString(SVG_SIMPLE_ICONS_DYNAMICS365);
  if (id == wxART_DYNATRACE)  
      return wxString(SVG_SIMPLE_ICONS_DYNATRACE);
  if (id == wxART_E)  
      return wxString(SVG_SIMPLE_ICONS_E);
  if (id == wxART_E3)  
      return wxString(SVG_SIMPLE_ICONS_E3);
  if (id == wxART_EA)  
      return wxString(SVG_SIMPLE_ICONS_EA);
  if (id == wxART_EAGLE)  
      return wxString(SVG_SIMPLE_ICONS_EAGLE);
  if (id == wxART_EASYEDA)  
      return wxString(SVG_SIMPLE_ICONS_EASYEDA);
  if (id == wxART_EASYJET)  
      return wxString(SVG_SIMPLE_ICONS_EASYJET);
  if (id == wxART_EBAY)  
      return wxString(SVG_SIMPLE_ICONS_EBAY);
  if (id == wxART_EBOX)  
      return wxString(SVG_SIMPLE_ICONS_EBOX);
  if (id == wxART_ECLIPSEADOPTIUM)  
      return wxString(SVG_SIMPLE_ICONS_ECLIPSEADOPTIUM);
  if (id == wxART_ECLIPSECHE)  
      return wxString(SVG_SIMPLE_ICONS_ECLIPSECHE);
  if (id == wxART_ECLIPSEIDE)  
      return wxString(SVG_SIMPLE_ICONS_ECLIPSEIDE);
  if (id == wxART_ECLIPSEJETTY)  
      return wxString(SVG_SIMPLE_ICONS_ECLIPSEJETTY);
  if (id == wxART_ECLIPSEMOSQUITTO)  
      return wxString(SVG_SIMPLE_ICONS_ECLIPSEMOSQUITTO);
  if (id == wxART_ECLIPSEVERTDOTX)  
      return wxString(SVG_SIMPLE_ICONS_ECLIPSEVERTDOTX);
  if (id == wxART_EDEKA)  
      return wxString(SVG_SIMPLE_ICONS_EDEKA);
  if (id == wxART_EDITORCONFIG)  
      return wxString(SVG_SIMPLE_ICONS_EDITORCONFIG);
  if (id == wxART_EDOTLECLERC)  
      return wxString(SVG_SIMPLE_ICONS_EDOTLECLERC);
  if (id == wxART_EDX)  
      return wxString(SVG_SIMPLE_ICONS_EDX);
  if (id == wxART_EGGHEAD)  
      return wxString(SVG_SIMPLE_ICONS_EGGHEAD);
  if (id == wxART_EGNYTE)  
      return wxString(SVG_SIMPLE_ICONS_EGNYTE);
  if (id == wxART_EIGHTSLEEP)  
      return wxString(SVG_SIMPLE_ICONS_EIGHTSLEEP);
  if (id == wxART_ELASTIC)  
      return wxString(SVG_SIMPLE_ICONS_ELASTIC);
  if (id == wxART_ELASTICCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_ELASTICCLOUD);
  if (id == wxART_ELASTICSEARCH)  
      return wxString(SVG_SIMPLE_ICONS_ELASTICSEARCH);
  if (id == wxART_ELASTICSTACK)  
      return wxString(SVG_SIMPLE_ICONS_ELASTICSTACK);
  if (id == wxART_ELAVON)  
      return wxString(SVG_SIMPLE_ICONS_ELAVON);
  if (id == wxART_ELECTRON)  
      return wxString(SVG_SIMPLE_ICONS_ELECTRON);
  if (id == wxART_ELECTRONBUILDER)  
      return wxString(SVG_SIMPLE_ICONS_ELECTRONBUILDER);
  if (id == wxART_ELECTRONFIDDLE)  
      return wxString(SVG_SIMPLE_ICONS_ELECTRONFIDDLE);
  if (id == wxART_ELEMENT)  
      return wxString(SVG_SIMPLE_ICONS_ELEMENT);
  if (id == wxART_ELEMENTARY)  
      return wxString(SVG_SIMPLE_ICONS_ELEMENTARY);
  if (id == wxART_ELEMENTOR)  
      return wxString(SVG_SIMPLE_ICONS_ELEMENTOR);
  if (id == wxART_ELEVENTY)  
      return wxString(SVG_SIMPLE_ICONS_ELEVENTY);
  if (id == wxART_ELGATO)  
      return wxString(SVG_SIMPLE_ICONS_ELGATO);
  if (id == wxART_ELIXIR)  
      return wxString(SVG_SIMPLE_ICONS_ELIXIR);
  if (id == wxART_ELJUEVES)  
      return wxString(SVG_SIMPLE_ICONS_ELJUEVES);
  if (id == wxART_ELLO)  
      return wxString(SVG_SIMPLE_ICONS_ELLO);
  if (id == wxART_ELM)  
      return wxString(SVG_SIMPLE_ICONS_ELM);
  if (id == wxART_ELSEVIER)  
      return wxString(SVG_SIMPLE_ICONS_ELSEVIER);
  if (id == wxART_EMBARCADERO)  
      return wxString(SVG_SIMPLE_ICONS_EMBARCADERO);
  if (id == wxART_EMBERDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_EMBERDOTJS);
  if (id == wxART_EMBY)  
      return wxString(SVG_SIMPLE_ICONS_EMBY);
  if (id == wxART_EMIRATES)  
      return wxString(SVG_SIMPLE_ICONS_EMIRATES);
  if (id == wxART_EMLAKJET)  
      return wxString(SVG_SIMPLE_ICONS_EMLAKJET);
  if (id == wxART_EMPIREKRED)  
      return wxString(SVG_SIMPLE_ICONS_EMPIREKRED);
  if (id == wxART_ENGADGET)  
      return wxString(SVG_SIMPLE_ICONS_ENGADGET);
  if (id == wxART_ENPASS)  
      return wxString(SVG_SIMPLE_ICONS_ENPASS);
  if (id == wxART_ENTERPRISEDB)  
      return wxString(SVG_SIMPLE_ICONS_ENTERPRISEDB);
  if (id == wxART_ENVATO)  
      return wxString(SVG_SIMPLE_ICONS_ENVATO);
  if (id == wxART_ENVOYPROXY)  
      return wxString(SVG_SIMPLE_ICONS_ENVOYPROXY);
  if (id == wxART_EPEL)  
      return wxString(SVG_SIMPLE_ICONS_EPEL);
  if (id == wxART_EPICGAMES)  
      return wxString(SVG_SIMPLE_ICONS_EPICGAMES);
  if (id == wxART_EPSON)  
      return wxString(SVG_SIMPLE_ICONS_EPSON);
  if (id == wxART_EQUINIXMETAL)  
      return wxString(SVG_SIMPLE_ICONS_EQUINIXMETAL);
  if (id == wxART_ERICSSON)  
      return wxString(SVG_SIMPLE_ICONS_ERICSSON);
  if (id == wxART_ERLANG)  
      return wxString(SVG_SIMPLE_ICONS_ERLANG);
  if (id == wxART_ESBUILD)  
      return wxString(SVG_SIMPLE_ICONS_ESBUILD);
  if (id == wxART_ESEA)  
      return wxString(SVG_SIMPLE_ICONS_ESEA);
  if (id == wxART_ESLGAMING)  
      return wxString(SVG_SIMPLE_ICONS_ESLGAMING);
  if (id == wxART_ESLINT)  
      return wxString(SVG_SIMPLE_ICONS_ESLINT);
  if (id == wxART_ESPHOME)  
      return wxString(SVG_SIMPLE_ICONS_ESPHOME);
  if (id == wxART_ESPRESSIF)  
      return wxString(SVG_SIMPLE_ICONS_ESPRESSIF);
  if (id == wxART_ESRI)  
      return wxString(SVG_SIMPLE_ICONS_ESRI);
  if (id == wxART_ETCD)  
      return wxString(SVG_SIMPLE_ICONS_ETCD);
  if (id == wxART_ETHEREUM)  
      return wxString(SVG_SIMPLE_ICONS_ETHEREUM);
  if (id == wxART_ETHIOPIANAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_ETHIOPIANAIRLINES);
  if (id == wxART_ETIHADAIRWAYS)  
      return wxString(SVG_SIMPLE_ICONS_ETIHADAIRWAYS);
  if (id == wxART_ETSY)  
      return wxString(SVG_SIMPLE_ICONS_ETSY);
  if (id == wxART_EVENTBRITE)  
      return wxString(SVG_SIMPLE_ICONS_EVENTBRITE);
  if (id == wxART_EVENTSTORE)  
      return wxString(SVG_SIMPLE_ICONS_EVENTSTORE);
  if (id == wxART_EVERNOTE)  
      return wxString(SVG_SIMPLE_ICONS_EVERNOTE);
  if (id == wxART_EXERCISM)  
      return wxString(SVG_SIMPLE_ICONS_EXERCISM);
  if (id == wxART_EXORDO)  
      return wxString(SVG_SIMPLE_ICONS_EXORDO);
  if (id == wxART_EXOSCALE)  
      return wxString(SVG_SIMPLE_ICONS_EXOSCALE);
  if (id == wxART_EXPENSIFY)  
      return wxString(SVG_SIMPLE_ICONS_EXPENSIFY);
  if (id == wxART_EXPERTSEXCHANGE)  
      return wxString(SVG_SIMPLE_ICONS_EXPERTSEXCHANGE);
  if (id == wxART_EXPO)  
      return wxString(SVG_SIMPLE_ICONS_EXPO);
  if (id == wxART_EXPRESS)  
      return wxString(SVG_SIMPLE_ICONS_EXPRESS);
  if (id == wxART_EXPRESSVPN)  
      return wxString(SVG_SIMPLE_ICONS_EXPRESSVPN);
  if (id == wxART_EYEEM)  
      return wxString(SVG_SIMPLE_ICONS_EYEEM);
  if (id == wxART_F1)  
      return wxString(SVG_SIMPLE_ICONS_F1);
  if (id == wxART_F5)  
      return wxString(SVG_SIMPLE_ICONS_F5);
  if (id == wxART_FACEBOOK)  
      return wxString(SVG_SIMPLE_ICONS_FACEBOOK);
  if (id == wxART_FACEBOOKGAMING)  
      return wxString(SVG_SIMPLE_ICONS_FACEBOOKGAMING);
  if (id == wxART_FACEBOOKLIVE)  
      return wxString(SVG_SIMPLE_ICONS_FACEBOOKLIVE);
  if (id == wxART_FACEIT)  
      return wxString(SVG_SIMPLE_ICONS_FACEIT);
  if (id == wxART_FACEPUNCH)  
      return wxString(SVG_SIMPLE_ICONS_FACEPUNCH);
  if (id == wxART_FALCO)  
      return wxString(SVG_SIMPLE_ICONS_FALCO);
  if (id == wxART_FALCON)  
      return wxString(SVG_SIMPLE_ICONS_FALCON);
  if (id == wxART_FAMPAY)  
      return wxString(SVG_SIMPLE_ICONS_FAMPAY);
  if (id == wxART_FANDANGO)  
      return wxString(SVG_SIMPLE_ICONS_FANDANGO);
  if (id == wxART_FANDOM)  
      return wxString(SVG_SIMPLE_ICONS_FANDOM);
  if (id == wxART_FANFOU)  
      return wxString(SVG_SIMPLE_ICONS_FANFOU);
  if (id == wxART_FANTOM)  
      return wxString(SVG_SIMPLE_ICONS_FANTOM);
  if (id == wxART_FAREHARBOR)  
      return wxString(SVG_SIMPLE_ICONS_FAREHARBOR);
  if (id == wxART_FARFETCH)  
      return wxString(SVG_SIMPLE_ICONS_FARFETCH);
  if (id == wxART_FASTAPI)  
      return wxString(SVG_SIMPLE_ICONS_FASTAPI);
  if (id == wxART_FASTIFY)  
      return wxString(SVG_SIMPLE_ICONS_FASTIFY);
  if (id == wxART_FASTLANE)  
      return wxString(SVG_SIMPLE_ICONS_FASTLANE);
  if (id == wxART_FASTLY)  
      return wxString(SVG_SIMPLE_ICONS_FASTLY);
  if (id == wxART_FATHOM)  
      return wxString(SVG_SIMPLE_ICONS_FATHOM);
  if (id == wxART_FAUNA)  
      return wxString(SVG_SIMPLE_ICONS_FAUNA);
  if (id == wxART_FAVRO)  
      return wxString(SVG_SIMPLE_ICONS_FAVRO);
  if (id == wxART_FDROID)  
      return wxString(SVG_SIMPLE_ICONS_FDROID);
  if (id == wxART_FEATHUB)  
      return wxString(SVG_SIMPLE_ICONS_FEATHUB);
  if (id == wxART_FEDEX)  
      return wxString(SVG_SIMPLE_ICONS_FEDEX);
  if (id == wxART_FEDORA)  
      return wxString(SVG_SIMPLE_ICONS_FEDORA);
  if (id == wxART_FEEDLY)  
      return wxString(SVG_SIMPLE_ICONS_FEEDLY);
  if (id == wxART_FERRARI)  
      return wxString(SVG_SIMPLE_ICONS_FERRARI);
  if (id == wxART_FERRARINV)  
      return wxString(SVG_SIMPLE_ICONS_FERRARINV);
  if (id == wxART_FERRETDB)  
      return wxString(SVG_SIMPLE_ICONS_FERRETDB);
  if (id == wxART_FFMPEG)  
      return wxString(SVG_SIMPLE_ICONS_FFMPEG);
  if (id == wxART_FI)  
      return wxString(SVG_SIMPLE_ICONS_FI);
  if (id == wxART_FIAT)  
      return wxString(SVG_SIMPLE_ICONS_FIAT);
  if (id == wxART_FIDOALLIANCE)  
      return wxString(SVG_SIMPLE_ICONS_FIDOALLIANCE);
  if (id == wxART_FIFA)  
      return wxString(SVG_SIMPLE_ICONS_FIFA);
  if (id == wxART_FIG)  
      return wxString(SVG_SIMPLE_ICONS_FIG);
  if (id == wxART_FIGMA)  
      return wxString(SVG_SIMPLE_ICONS_FIGMA);
  if (id == wxART_FIGSHARE)  
      return wxString(SVG_SIMPLE_ICONS_FIGSHARE);
  if (id == wxART_FILA)  
      return wxString(SVG_SIMPLE_ICONS_FILA);
  if (id == wxART_FILES)  
      return wxString(SVG_SIMPLE_ICONS_FILES);
  if (id == wxART_FILEZILLA)  
      return wxString(SVG_SIMPLE_ICONS_FILEZILLA);
  if (id == wxART_FING)  
      return wxString(SVG_SIMPLE_ICONS_FING);
  if (id == wxART_FIREBASE)  
      return wxString(SVG_SIMPLE_ICONS_FIREBASE);
  if (id == wxART_FIREFISH)  
      return wxString(SVG_SIMPLE_ICONS_FIREFISH);
  if (id == wxART_FIREFLYIII)  
      return wxString(SVG_SIMPLE_ICONS_FIREFLYIII);
  if (id == wxART_FIREFOX)  
      return wxString(SVG_SIMPLE_ICONS_FIREFOX);
  if (id == wxART_FIREFOXBROWSER)  
      return wxString(SVG_SIMPLE_ICONS_FIREFOXBROWSER);
  if (id == wxART_FIRESHIP)  
      return wxString(SVG_SIMPLE_ICONS_FIRESHIP);
  if (id == wxART_FIREWALLA)  
      return wxString(SVG_SIMPLE_ICONS_FIREWALLA);
  if (id == wxART_FIRST)  
      return wxString(SVG_SIMPLE_ICONS_FIRST);
  if (id == wxART_FITBIT)  
      return wxString(SVG_SIMPLE_ICONS_FITBIT);
  if (id == wxART_FITE)  
      return wxString(SVG_SIMPLE_ICONS_FITE);
  if (id == wxART_FIVEM)  
      return wxString(SVG_SIMPLE_ICONS_FIVEM);
  if (id == wxART_FIVERR)  
      return wxString(SVG_SIMPLE_ICONS_FIVERR);
  if (id == wxART_FLASK)  
      return wxString(SVG_SIMPLE_ICONS_FLASK);
  if (id == wxART_FLAT)  
      return wxString(SVG_SIMPLE_ICONS_FLAT);
  if (id == wxART_FLATHUB)  
      return wxString(SVG_SIMPLE_ICONS_FLATHUB);
  if (id == wxART_FLATPAK)  
      return wxString(SVG_SIMPLE_ICONS_FLATPAK);
  if (id == wxART_FLATTR)  
      return wxString(SVG_SIMPLE_ICONS_FLATTR);
  if (id == wxART_FLICKR)  
      return wxString(SVG_SIMPLE_ICONS_FLICKR);
  if (id == wxART_FLIGHTAWARE)  
      return wxString(SVG_SIMPLE_ICONS_FLIGHTAWARE);
  if (id == wxART_FLIPBOARD)  
      return wxString(SVG_SIMPLE_ICONS_FLIPBOARD);
  if (id == wxART_FLIPKART)  
      return wxString(SVG_SIMPLE_ICONS_FLIPKART);
  if (id == wxART_FLOATPLANE)  
      return wxString(SVG_SIMPLE_ICONS_FLOATPLANE);
  if (id == wxART_FLOOD)  
      return wxString(SVG_SIMPLE_ICONS_FLOOD);
  if (id == wxART_FLUENTBIT)  
      return wxString(SVG_SIMPLE_ICONS_FLUENTBIT);
  if (id == wxART_FLUENTD)  
      return wxString(SVG_SIMPLE_ICONS_FLUENTD);
  if (id == wxART_FLUKE)  
      return wxString(SVG_SIMPLE_ICONS_FLUKE);
  if (id == wxART_FLUTTER)  
      return wxString(SVG_SIMPLE_ICONS_FLUTTER);
  if (id == wxART_FLUX)  
      return wxString(SVG_SIMPLE_ICONS_FLUX);
  if (id == wxART_FLUXUS)  
      return wxString(SVG_SIMPLE_ICONS_FLUXUS);
  if (id == wxART_FLYWAY)  
      return wxString(SVG_SIMPLE_ICONS_FLYWAY);
  if (id == wxART_FMOD)  
      return wxString(SVG_SIMPLE_ICONS_FMOD);
  if (id == wxART_FNAC)  
      return wxString(SVG_SIMPLE_ICONS_FNAC);
  if (id == wxART_FOLIUM)  
      return wxString(SVG_SIMPLE_ICONS_FOLIUM);
  if (id == wxART_FONOMA)  
      return wxString(SVG_SIMPLE_ICONS_FONOMA);
  if (id == wxART_FONTAWESOME)  
      return wxString(SVG_SIMPLE_ICONS_FONTAWESOME);
  if (id == wxART_FONTBASE)  
      return wxString(SVG_SIMPLE_ICONS_FONTBASE);
  if (id == wxART_FONTFORGE)  
      return wxString(SVG_SIMPLE_ICONS_FONTFORGE);
  if (id == wxART_FOODPANDA)  
      return wxString(SVG_SIMPLE_ICONS_FOODPANDA);
  if (id == wxART_FORD)  
      return wxString(SVG_SIMPLE_ICONS_FORD);
  if (id == wxART_FORESTRY)  
      return wxString(SVG_SIMPLE_ICONS_FORESTRY);
  if (id == wxART_FORGEJO)  
      return wxString(SVG_SIMPLE_ICONS_FORGEJO);
  if (id == wxART_FORMSTACK)  
      return wxString(SVG_SIMPLE_ICONS_FORMSTACK);
  if (id == wxART_FORTINET)  
      return wxString(SVG_SIMPLE_ICONS_FORTINET);
  if (id == wxART_FORTRAN)  
      return wxString(SVG_SIMPLE_ICONS_FORTRAN);
  if (id == wxART_FOSSA)  
      return wxString(SVG_SIMPLE_ICONS_FOSSA);
  if (id == wxART_FOSSILSCM)  
      return wxString(SVG_SIMPLE_ICONS_FOSSILSCM);
  if (id == wxART_FOURSQUARE)  
      return wxString(SVG_SIMPLE_ICONS_FOURSQUARE);
  if (id == wxART_FOURSQUARECITYGUIDE)  
      return wxString(SVG_SIMPLE_ICONS_FOURSQUARECITYGUIDE);
  if (id == wxART_FOX)  
      return wxString(SVG_SIMPLE_ICONS_FOX);
  if (id == wxART_FOXTEL)  
      return wxString(SVG_SIMPLE_ICONS_FOXTEL);
  if (id == wxART_FOZZY)  
      return wxString(SVG_SIMPLE_ICONS_FOZZY);
  if (id == wxART_FRAMER)  
      return wxString(SVG_SIMPLE_ICONS_FRAMER);
  if (id == wxART_FRAMEWORK)  
      return wxString(SVG_SIMPLE_ICONS_FRAMEWORK);
  if (id == wxART_FRAMEWORK7)  
      return wxString(SVG_SIMPLE_ICONS_FRAMEWORK7);
  if (id == wxART_FRANPRIX)  
      return wxString(SVG_SIMPLE_ICONS_FRANPRIX);
  if (id == wxART_FRAUNHOFERGESELLSCHAFT)  
      return wxString(SVG_SIMPLE_ICONS_FRAUNHOFERGESELLSCHAFT);
  if (id == wxART_FREEBSD)  
      return wxString(SVG_SIMPLE_ICONS_FREEBSD);
  if (id == wxART_FREECODECAMP)  
      return wxString(SVG_SIMPLE_ICONS_FREECODECAMP);
  if (id == wxART_FREEDESKTOPDOTORG)  
      return wxString(SVG_SIMPLE_ICONS_FREEDESKTOPDOTORG);
  if (id == wxART_FREELANCER)  
      return wxString(SVG_SIMPLE_ICONS_FREELANCER);
  if (id == wxART_FREENAS)  
      return wxString(SVG_SIMPLE_ICONS_FREENAS);
  if (id == wxART_FREEPIK)  
      return wxString(SVG_SIMPLE_ICONS_FREEPIK);
  if (id == wxART_FRONTENDMENTOR)  
      return wxString(SVG_SIMPLE_ICONS_FRONTENDMENTOR);
  if (id == wxART_FRONTIFY)  
      return wxString(SVG_SIMPLE_ICONS_FRONTIFY);
  if (id == wxART_FSECURE)  
      return wxString(SVG_SIMPLE_ICONS_FSECURE);
  if (id == wxART_FSHARP)  
      return wxString(SVG_SIMPLE_ICONS_FSHARP);
  if (id == wxART_FUGACLOUD)  
      return wxString(SVG_SIMPLE_ICONS_FUGACLOUD);
  if (id == wxART_FUJIFILM)  
      return wxString(SVG_SIMPLE_ICONS_FUJIFILM);
  if (id == wxART_FUJITSU)  
      return wxString(SVG_SIMPLE_ICONS_FUJITSU);
  if (id == wxART_FUNIMATION)  
      return wxString(SVG_SIMPLE_ICONS_FUNIMATION);
  if (id == wxART_FURAFFINITY)  
      return wxString(SVG_SIMPLE_ICONS_FURAFFINITY);
  if (id == wxART_FURRYNETWORK)  
      return wxString(SVG_SIMPLE_ICONS_FURRYNETWORK);
  if (id == wxART_FUTURELEARN)  
      return wxString(SVG_SIMPLE_ICONS_FUTURELEARN);
  if (id == wxART_G2)  
      return wxString(SVG_SIMPLE_ICONS_G2);
  if (id == wxART_G2A)  
      return wxString(SVG_SIMPLE_ICONS_G2A);
  if (id == wxART_GAMEANDWATCH)  
      return wxString(SVG_SIMPLE_ICONS_GAMEANDWATCH);
  if (id == wxART_GAMEBANANA)  
      return wxString(SVG_SIMPLE_ICONS_GAMEBANANA);
  if (id == wxART_GAMEDEVELOPER)  
      return wxString(SVG_SIMPLE_ICONS_GAMEDEVELOPER);
  if (id == wxART_GAMEJOLT)  
      return wxString(SVG_SIMPLE_ICONS_GAMEJOLT);
  if (id == wxART_GAMEMAKER)  
      return wxString(SVG_SIMPLE_ICONS_GAMEMAKER);
  if (id == wxART_GARMIN)  
      return wxString(SVG_SIMPLE_ICONS_GARMIN);
  if (id == wxART_GATLING)  
      return wxString(SVG_SIMPLE_ICONS_GATLING);
  if (id == wxART_GATSBY)  
      return wxString(SVG_SIMPLE_ICONS_GATSBY);
  if (id == wxART_GDAL)  
      return wxString(SVG_SIMPLE_ICONS_GDAL);
  if (id == wxART_GEANT)  
      return wxString(SVG_SIMPLE_ICONS_GEANT);
  if (id == wxART_GEEKSFORGEEKS)  
      return wxString(SVG_SIMPLE_ICONS_GEEKSFORGEEKS);
  if (id == wxART_GENERALELECTRIC)  
      return wxString(SVG_SIMPLE_ICONS_GENERALELECTRIC);
  if (id == wxART_GENERALMOTORS)  
      return wxString(SVG_SIMPLE_ICONS_GENERALMOTORS);
  if (id == wxART_GENIUS)  
      return wxString(SVG_SIMPLE_ICONS_GENIUS);
  if (id == wxART_GENTOO)  
      return wxString(SVG_SIMPLE_ICONS_GENTOO);
  if (id == wxART_GEOCACHING)  
      return wxString(SVG_SIMPLE_ICONS_GEOCACHING);
  if (id == wxART_GERRIT)  
      return wxString(SVG_SIMPLE_ICONS_GERRIT);
  if (id == wxART_GHOST)  
      return wxString(SVG_SIMPLE_ICONS_GHOST);
  if (id == wxART_GHOSTERY)  
      return wxString(SVG_SIMPLE_ICONS_GHOSTERY);
  if (id == wxART_GIMP)  
      return wxString(SVG_SIMPLE_ICONS_GIMP);
  if (id == wxART_GIPHY)  
      return wxString(SVG_SIMPLE_ICONS_GIPHY);
  if (id == wxART_GIT)  
      return wxString(SVG_SIMPLE_ICONS_GIT);
  if (id == wxART_GITBOOK)  
      return wxString(SVG_SIMPLE_ICONS_GITBOOK);
  if (id == wxART_GITEA)  
      return wxString(SVG_SIMPLE_ICONS_GITEA);
  if (id == wxART_GITEE)  
      return wxString(SVG_SIMPLE_ICONS_GITEE);
  if (id == wxART_GITEXTENSIONS)  
      return wxString(SVG_SIMPLE_ICONS_GITEXTENSIONS);
  if (id == wxART_GITHUB)  
      return wxString(SVG_SIMPLE_ICONS_GITHUB);
  if (id == wxART_GITHUBACTIONS)  
      return wxString(SVG_SIMPLE_ICONS_GITHUBACTIONS);
  if (id == wxART_GITHUBPAGES)  
      return wxString(SVG_SIMPLE_ICONS_GITHUBPAGES);
  if (id == wxART_GITHUBSPONSORS)  
      return wxString(SVG_SIMPLE_ICONS_GITHUBSPONSORS);
  if (id == wxART_GITIGNOREDOTIO)  
      return wxString(SVG_SIMPLE_ICONS_GITIGNOREDOTIO);
  if (id == wxART_GITKRAKEN)  
      return wxString(SVG_SIMPLE_ICONS_GITKRAKEN);
  if (id == wxART_GITLAB)  
      return wxString(SVG_SIMPLE_ICONS_GITLAB);
  if (id == wxART_GITLFS)  
      return wxString(SVG_SIMPLE_ICONS_GITLFS);
  if (id == wxART_GITPOD)  
      return wxString(SVG_SIMPLE_ICONS_GITPOD);
  if (id == wxART_GITTER)  
      return wxString(SVG_SIMPLE_ICONS_GITTER);
  if (id == wxART_GLASSDOOR)  
      return wxString(SVG_SIMPLE_ICONS_GLASSDOOR);
  if (id == wxART_GLITCH)  
      return wxString(SVG_SIMPLE_ICONS_GLITCH);
  if (id == wxART_GLOBUS)  
      return wxString(SVG_SIMPLE_ICONS_GLOBUS);
  if (id == wxART_GMAIL)  
      return wxString(SVG_SIMPLE_ICONS_GMAIL);
  if (id == wxART_GNOME)  
      return wxString(SVG_SIMPLE_ICONS_GNOME);
  if (id == wxART_GNOMETERMINAL)  
      return wxString(SVG_SIMPLE_ICONS_GNOMETERMINAL);
  if (id == wxART_GNU)  
      return wxString(SVG_SIMPLE_ICONS_GNU);
  if (id == wxART_GNUBASH)  
      return wxString(SVG_SIMPLE_ICONS_GNUBASH);
  if (id == wxART_GNUEMACS)  
      return wxString(SVG_SIMPLE_ICONS_GNUEMACS);
  if (id == wxART_GNUICECAT)  
      return wxString(SVG_SIMPLE_ICONS_GNUICECAT);
  if (id == wxART_GNUPRIVACYGUARD)  
      return wxString(SVG_SIMPLE_ICONS_GNUPRIVACYGUARD);
  if (id == wxART_GNUSOCIAL)  
      return wxString(SVG_SIMPLE_ICONS_GNUSOCIAL);
  if (id == wxART_GO)  
      return wxString(SVG_SIMPLE_ICONS_GO);
  if (id == wxART_GOCD)  
      return wxString(SVG_SIMPLE_ICONS_GOCD);
  if (id == wxART_GODADDY)  
      return wxString(SVG_SIMPLE_ICONS_GODADDY);
  if (id == wxART_GODOTENGINE)  
      return wxString(SVG_SIMPLE_ICONS_GODOTENGINE);
  if (id == wxART_GOFUNDME)  
      return wxString(SVG_SIMPLE_ICONS_GOFUNDME);
  if (id == wxART_GOGDOTCOM)  
      return wxString(SVG_SIMPLE_ICONS_GOGDOTCOM);
  if (id == wxART_GOLAND)  
      return wxString(SVG_SIMPLE_ICONS_GOLAND);
  if (id == wxART_GOLDENLINE)  
      return wxString(SVG_SIMPLE_ICONS_GOLDENLINE);
  if (id == wxART_GOODREADS)  
      return wxString(SVG_SIMPLE_ICONS_GOODREADS);
  if (id == wxART_GOOGLE)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLE);
  if (id == wxART_GOOGLEADMOB)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEADMOB);
  if (id == wxART_GOOGLEADS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEADS);
  if (id == wxART_GOOGLEADSENSE)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEADSENSE);
  if (id == wxART_GOOGLEANALYTICS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEANALYTICS);
  if (id == wxART_GOOGLEAPPSSCRIPT)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEAPPSSCRIPT);
  if (id == wxART_GOOGLEASSISTANT)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEASSISTANT);
  if (id == wxART_GOOGLEBARD)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEBARD);
  if (id == wxART_GOOGLEBIGQUERY)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEBIGQUERY);
  if (id == wxART_GOOGLECALENDAR)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLECALENDAR);
  if (id == wxART_GOOGLECARDBOARD)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLECARDBOARD);
  if (id == wxART_GOOGLECHAT)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLECHAT);
  if (id == wxART_GOOGLECHROME)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLECHROME);
  if (id == wxART_GOOGLECLASSROOM)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLECLASSROOM);
  if (id == wxART_GOOGLECLOUD)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLECLOUD);
  if (id == wxART_GOOGLECLOUDCOMPOSER)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLECLOUDCOMPOSER);
  if (id == wxART_GOOGLECOLAB)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLECOLAB);
  if (id == wxART_GOOGLECONTAINEROPTIMIZEDOS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLECONTAINEROPTIMIZEDOS);
  if (id == wxART_GOOGLEDATASTUDIO)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEDATASTUDIO);
  if (id == wxART_GOOGLEDOCS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEDOCS);
  if (id == wxART_GOOGLEDOMAINS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEDOMAINS);
  if (id == wxART_GOOGLEDRIVE)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEDRIVE);
  if (id == wxART_GOOGLEEARTH)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEEARTH);
  if (id == wxART_GOOGLEEARTHENGINE)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEEARTHENGINE);
  if (id == wxART_GOOGLEFIT)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEFIT);
  if (id == wxART_GOOGLEFONTS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEFONTS);
  if (id == wxART_GOOGLEFORMS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEFORMS);
  if (id == wxART_GOOGLEHANGOUTS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEHANGOUTS);
  if (id == wxART_GOOGLEHOME)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEHOME);
  if (id == wxART_GOOGLEKEEP)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEKEEP);
  if (id == wxART_GOOGLELENS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLELENS);
  if (id == wxART_GOOGLEMAPS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEMAPS);
  if (id == wxART_GOOGLEMARKETINGPLATFORM)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEMARKETINGPLATFORM);
  if (id == wxART_GOOGLEMEET)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEMEET);
  if (id == wxART_GOOGLEMESSAGES)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEMESSAGES);
  if (id == wxART_GOOGLEMYBUSINESS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEMYBUSINESS);
  if (id == wxART_GOOGLENEARBY)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLENEARBY);
  if (id == wxART_GOOGLENEWS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLENEWS);
  if (id == wxART_GOOGLEOPTIMIZE)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEOPTIMIZE);
  if (id == wxART_GOOGLEPAY)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEPAY);
  if (id == wxART_GOOGLEPHOTOS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEPHOTOS);
  if (id == wxART_GOOGLEPLAY)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEPLAY);
  if (id == wxART_GOOGLEPODCASTS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLEPODCASTS);
  if (id == wxART_GOOGLESCHOLAR)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLESCHOLAR);
  if (id == wxART_GOOGLESEARCHCONSOLE)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLESEARCHCONSOLE);
  if (id == wxART_GOOGLESHEETS)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLESHEETS);
  if (id == wxART_GOOGLESLIDES)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLESLIDES);
  if (id == wxART_GOOGLESTREETVIEW)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLESTREETVIEW);
  if (id == wxART_GOOGLETAGMANAGER)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLETAGMANAGER);
  if (id == wxART_GOOGLETRANSLATE)  
      return wxString(SVG_SIMPLE_ICONS_GOOGLETRANSLATE);
  if (id == wxART_GOTOMEETING)  
      return wxString(SVG_SIMPLE_ICONS_GOTOMEETING);
  if (id == wxART_GRAB)  
      return wxString(SVG_SIMPLE_ICONS_GRAB);
  if (id == wxART_GRADLE)  
      return wxString(SVG_SIMPLE_ICONS_GRADLE);
  if (id == wxART_GRADLEPLAYPUBLISHER)  
      return wxString(SVG_SIMPLE_ICONS_GRADLEPLAYPUBLISHER);
  if (id == wxART_GRAFANA)  
      return wxString(SVG_SIMPLE_ICONS_GRAFANA);
  if (id == wxART_GRAMMARLY)  
      return wxString(SVG_SIMPLE_ICONS_GRAMMARLY);
  if (id == wxART_GRANDFRAIS)  
      return wxString(SVG_SIMPLE_ICONS_GRANDFRAIS);
  if (id == wxART_GRAPHQL)  
      return wxString(SVG_SIMPLE_ICONS_GRAPHQL);
  if (id == wxART_GRAV)  
      return wxString(SVG_SIMPLE_ICONS_GRAV);
  if (id == wxART_GRAVATAR)  
      return wxString(SVG_SIMPLE_ICONS_GRAVATAR);
  if (id == wxART_GRAYLOG)  
      return wxString(SVG_SIMPLE_ICONS_GRAYLOG);
  if (id == wxART_GREENHOUSE)  
      return wxString(SVG_SIMPLE_ICONS_GREENHOUSE);
  if (id == wxART_GREENSOCK)  
      return wxString(SVG_SIMPLE_ICONS_GREENSOCK);
  if (id == wxART_GRIDDOTAI)  
      return wxString(SVG_SIMPLE_ICONS_GRIDDOTAI);
  if (id == wxART_GRIDSOME)  
      return wxString(SVG_SIMPLE_ICONS_GRIDSOME);
  if (id == wxART_GROUPME)  
      return wxString(SVG_SIMPLE_ICONS_GROUPME);
  if (id == wxART_GROUPON)  
      return wxString(SVG_SIMPLE_ICONS_GROUPON);
  if (id == wxART_GRUBHUB)  
      return wxString(SVG_SIMPLE_ICONS_GRUBHUB);
  if (id == wxART_GRUNT)  
      return wxString(SVG_SIMPLE_ICONS_GRUNT);
  if (id == wxART_GSK)  
      return wxString(SVG_SIMPLE_ICONS_GSK);
  if (id == wxART_GSTREAMER)  
      return wxString(SVG_SIMPLE_ICONS_GSTREAMER);
  if (id == wxART_GTK)  
      return wxString(SVG_SIMPLE_ICONS_GTK);
  if (id == wxART_GUANGZHOUMETRO)  
      return wxString(SVG_SIMPLE_ICONS_GUANGZHOUMETRO);
  if (id == wxART_GUILDED)  
      return wxString(SVG_SIMPLE_ICONS_GUILDED);
  if (id == wxART_GULP)  
      return wxString(SVG_SIMPLE_ICONS_GULP);
  if (id == wxART_GUMROAD)  
      return wxString(SVG_SIMPLE_ICONS_GUMROAD);
  if (id == wxART_GUMTREE)  
      return wxString(SVG_SIMPLE_ICONS_GUMTREE);
  if (id == wxART_GUNICORN)  
      return wxString(SVG_SIMPLE_ICONS_GUNICORN);
  if (id == wxART_GUROBI)  
      return wxString(SVG_SIMPLE_ICONS_GUROBI);
  if (id == wxART_GUTENBERG)  
      return wxString(SVG_SIMPLE_ICONS_GUTENBERG);
  if (id == wxART_H3)  
      return wxString(SVG_SIMPLE_ICONS_H3);
  if (id == wxART_HABR)  
      return wxString(SVG_SIMPLE_ICONS_HABR);
  if (id == wxART_HACKADAY)  
      return wxString(SVG_SIMPLE_ICONS_HACKADAY);
  if (id == wxART_HACKCLUB)  
      return wxString(SVG_SIMPLE_ICONS_HACKCLUB);
  if (id == wxART_HACKEREARTH)  
      return wxString(SVG_SIMPLE_ICONS_HACKEREARTH);
  if (id == wxART_HACKERNOON)  
      return wxString(SVG_SIMPLE_ICONS_HACKERNOON);
  if (id == wxART_HACKERONE)  
      return wxString(SVG_SIMPLE_ICONS_HACKERONE);
  if (id == wxART_HACKERRANK)  
      return wxString(SVG_SIMPLE_ICONS_HACKERRANK);
  if (id == wxART_HACKSTER)  
      return wxString(SVG_SIMPLE_ICONS_HACKSTER);
  if (id == wxART_HACKTHEBOX)  
      return wxString(SVG_SIMPLE_ICONS_HACKTHEBOX);
  if (id == wxART_HAL)  
      return wxString(SVG_SIMPLE_ICONS_HAL);
  if (id == wxART_HANDLEBARSDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_HANDLEBARSDOTJS);
  if (id == wxART_HANDM)  
      return wxString(SVG_SIMPLE_ICONS_HANDM);
  if (id == wxART_HANDSHAKE)  
      return wxString(SVG_SIMPLE_ICONS_HANDSHAKE);
  if (id == wxART_HANDSHAKE_PROTOCOL)  
      return wxString(SVG_SIMPLE_ICONS_HANDSHAKE_PROTOCOL);
  if (id == wxART_HAPPYCOW)  
      return wxString(SVG_SIMPLE_ICONS_HAPPYCOW);
  if (id == wxART_HARBOR)  
      return wxString(SVG_SIMPLE_ICONS_HARBOR);
  if (id == wxART_HARMONYOS)  
      return wxString(SVG_SIMPLE_ICONS_HARMONYOS);
  if (id == wxART_HASHICORP)  
      return wxString(SVG_SIMPLE_ICONS_HASHICORP);
  if (id == wxART_HASHNODE)  
      return wxString(SVG_SIMPLE_ICONS_HASHNODE);
  if (id == wxART_HASKELL)  
      return wxString(SVG_SIMPLE_ICONS_HASKELL);
  if (id == wxART_HASURA)  
      return wxString(SVG_SIMPLE_ICONS_HASURA);
  if (id == wxART_HATENABOOKMARK)  
      return wxString(SVG_SIMPLE_ICONS_HATENABOOKMARK);
  if (id == wxART_HAVEIBEENPWNED)  
      return wxString(SVG_SIMPLE_ICONS_HAVEIBEENPWNED);
  if (id == wxART_HAXE)  
      return wxString(SVG_SIMPLE_ICONS_HAXE);
  if (id == wxART_HBO)  
      return wxString(SVG_SIMPLE_ICONS_HBO);
  if (id == wxART_HCL)  
      return wxString(SVG_SIMPLE_ICONS_HCL);
  if (id == wxART_HEADLESSUI)  
      return wxString(SVG_SIMPLE_ICONS_HEADLESSUI);
  if (id == wxART_HEADSPACE)  
      return wxString(SVG_SIMPLE_ICONS_HEADSPACE);
  if (id == wxART_HEARTH)  
      return wxString(SVG_SIMPLE_ICONS_HEARTH);
  if (id == wxART_HEARTHISDOTAT)  
      return wxString(SVG_SIMPLE_ICONS_HEARTHISDOTAT);
  if (id == wxART_HEDERA)  
      return wxString(SVG_SIMPLE_ICONS_HEDERA);
  if (id == wxART_HELLOFRESH)  
      return wxString(SVG_SIMPLE_ICONS_HELLOFRESH);
  if (id == wxART_HELLYHANSEN)  
      return wxString(SVG_SIMPLE_ICONS_HELLYHANSEN);
  if (id == wxART_HELM)  
      return wxString(SVG_SIMPLE_ICONS_HELM);
  if (id == wxART_HELPDESK)  
      return wxString(SVG_SIMPLE_ICONS_HELPDESK);
  if (id == wxART_HELPSCOUT)  
      return wxString(SVG_SIMPLE_ICONS_HELPSCOUT);
  if (id == wxART_HERE)  
      return wxString(SVG_SIMPLE_ICONS_HERE);
  if (id == wxART_HEROKU)  
      return wxString(SVG_SIMPLE_ICONS_HEROKU);
  if (id == wxART_HETZNER)  
      return wxString(SVG_SIMPLE_ICONS_HETZNER);
  if (id == wxART_HEXLET)  
      return wxString(SVG_SIMPLE_ICONS_HEXLET);
  if (id == wxART_HEXO)  
      return wxString(SVG_SIMPLE_ICONS_HEXO);
  if (id == wxART_HEY)  
      return wxString(SVG_SIMPLE_ICONS_HEY);
  if (id == wxART_HIBERNATE)  
      return wxString(SVG_SIMPLE_ICONS_HIBERNATE);
  if (id == wxART_HIBOB)  
      return wxString(SVG_SIMPLE_ICONS_HIBOB);
  if (id == wxART_HILTON)  
      return wxString(SVG_SIMPLE_ICONS_HILTON);
  if (id == wxART_HITACHI)  
      return wxString(SVG_SIMPLE_ICONS_HITACHI);
  if (id == wxART_HIVE)  
      return wxString(SVG_SIMPLE_ICONS_HIVE);
  if (id == wxART_HIVE_BLOCKCHAIN)  
      return wxString(SVG_SIMPLE_ICONS_HIVE_BLOCKCHAIN);
  if (id == wxART_HOMEADVISOR)  
      return wxString(SVG_SIMPLE_ICONS_HOMEADVISOR);
  if (id == wxART_HOMEASSISTANT)  
      return wxString(SVG_SIMPLE_ICONS_HOMEASSISTANT);
  if (id == wxART_HOMEASSISTANTCOMMUNITYSTORE)  
      return wxString(SVG_SIMPLE_ICONS_HOMEASSISTANTCOMMUNITYSTORE);
  if (id == wxART_HOMEBREW)  
      return wxString(SVG_SIMPLE_ICONS_HOMEBREW);
  if (id == wxART_HOMEBRIDGE)  
      return wxString(SVG_SIMPLE_ICONS_HOMEBRIDGE);
  if (id == wxART_HOMIFY)  
      return wxString(SVG_SIMPLE_ICONS_HOMIFY);
  if (id == wxART_HONDA)  
      return wxString(SVG_SIMPLE_ICONS_HONDA);
  if (id == wxART_HONEY)  
      return wxString(SVG_SIMPLE_ICONS_HONEY);
  if (id == wxART_HONOR)  
      return wxString(SVG_SIMPLE_ICONS_HONOR);
  if (id == wxART_HOOTSUITE)  
      return wxString(SVG_SIMPLE_ICONS_HOOTSUITE);
  if (id == wxART_HOPPSCOTCH)  
      return wxString(SVG_SIMPLE_ICONS_HOPPSCOTCH);
  if (id == wxART_HOTELSDOTCOM)  
      return wxString(SVG_SIMPLE_ICONS_HOTELSDOTCOM);
  if (id == wxART_HOTJAR)  
      return wxString(SVG_SIMPLE_ICONS_HOTJAR);
  if (id == wxART_HOTWIRE)  
      return wxString(SVG_SIMPLE_ICONS_HOTWIRE);
  if (id == wxART_HOUDINI)  
      return wxString(SVG_SIMPLE_ICONS_HOUDINI);
  if (id == wxART_HOUZZ)  
      return wxString(SVG_SIMPLE_ICONS_HOUZZ);
  if (id == wxART_HP)  
      return wxString(SVG_SIMPLE_ICONS_HP);
  if (id == wxART_HSBC)  
      return wxString(SVG_SIMPLE_ICONS_HSBC);
  if (id == wxART_HTML5)  
      return wxString(SVG_SIMPLE_ICONS_HTML5);
  if (id == wxART_HTMLACADEMY)  
      return wxString(SVG_SIMPLE_ICONS_HTMLACADEMY);
  if (id == wxART_HTOP)  
      return wxString(SVG_SIMPLE_ICONS_HTOP);
  if (id == wxART_HTTPIE)  
      return wxString(SVG_SIMPLE_ICONS_HTTPIE);
  if (id == wxART_HUAWEI)  
      return wxString(SVG_SIMPLE_ICONS_HUAWEI);
  if (id == wxART_HUBSPOT)  
      return wxString(SVG_SIMPLE_ICONS_HUBSPOT);
  if (id == wxART_HUGO)  
      return wxString(SVG_SIMPLE_ICONS_HUGO);
  if (id == wxART_HULU)  
      return wxString(SVG_SIMPLE_ICONS_HULU);
  if (id == wxART_HUMBLEBUNDLE)  
      return wxString(SVG_SIMPLE_ICONS_HUMBLEBUNDLE);
  if (id == wxART_HUNGRYJACKS)  
      return wxString(SVG_SIMPLE_ICONS_HUNGRYJACKS);
  if (id == wxART_HURRIYETEMLAK)  
      return wxString(SVG_SIMPLE_ICONS_HURRIYETEMLAK);
  if (id == wxART_HUSQVARNA)  
      return wxString(SVG_SIMPLE_ICONS_HUSQVARNA);
  if (id == wxART_HYPER)  
      return wxString(SVG_SIMPLE_ICONS_HYPER);
  if (id == wxART_HYPERLEDGER)  
      return wxString(SVG_SIMPLE_ICONS_HYPERLEDGER);
  if (id == wxART_HYPOTHESIS)  
      return wxString(SVG_SIMPLE_ICONS_HYPOTHESIS);
  if (id == wxART_HYUNDAI)  
      return wxString(SVG_SIMPLE_ICONS_HYUNDAI);
  if (id == wxART_I18NEXT)  
      return wxString(SVG_SIMPLE_ICONS_I18NEXT);
  if (id == wxART_I3)  
      return wxString(SVG_SIMPLE_ICONS_I3);
  if (id == wxART_IATA)  
      return wxString(SVG_SIMPLE_ICONS_IATA);
  if (id == wxART_IBEACON)  
      return wxString(SVG_SIMPLE_ICONS_IBEACON);
  if (id == wxART_IBM)  
      return wxString(SVG_SIMPLE_ICONS_IBM);
  if (id == wxART_IBMCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_IBMCLOUD);
  if (id == wxART_IBMWATSON)  
      return wxString(SVG_SIMPLE_ICONS_IBMWATSON);
  if (id == wxART_ICED)  
      return wxString(SVG_SIMPLE_ICONS_ICED);
  if (id == wxART_ICELAND)  
      return wxString(SVG_SIMPLE_ICONS_ICELAND);
  if (id == wxART_ICINGA)  
      return wxString(SVG_SIMPLE_ICONS_ICINGA);
  if (id == wxART_ICLOUD)  
      return wxString(SVG_SIMPLE_ICONS_ICLOUD);
  if (id == wxART_ICOMOON)  
      return wxString(SVG_SIMPLE_ICONS_ICOMOON);
  if (id == wxART_ICON)  
      return wxString(SVG_SIMPLE_ICONS_ICON);
  if (id == wxART_ICONFINDER)  
      return wxString(SVG_SIMPLE_ICONS_ICONFINDER);
  if (id == wxART_ICONIFY)  
      return wxString(SVG_SIMPLE_ICONS_ICONIFY);
  if (id == wxART_ICONJAR)  
      return wxString(SVG_SIMPLE_ICONS_ICONJAR);
  if (id == wxART_ICONS8)  
      return wxString(SVG_SIMPLE_ICONS_ICONS8);
  if (id == wxART_ICQ)  
      return wxString(SVG_SIMPLE_ICONS_ICQ);
  if (id == wxART_IEEE)  
      return wxString(SVG_SIMPLE_ICONS_IEEE);
  if (id == wxART_IFIXIT)  
      return wxString(SVG_SIMPLE_ICONS_IFIXIT);
  if (id == wxART_IFOOD)  
      return wxString(SVG_SIMPLE_ICONS_IFOOD);
  if (id == wxART_IFTTT)  
      return wxString(SVG_SIMPLE_ICONS_IFTTT);
  if (id == wxART_IGDB)  
      return wxString(SVG_SIMPLE_ICONS_IGDB);
  if (id == wxART_IHEARTRADIO)  
      return wxString(SVG_SIMPLE_ICONS_IHEARTRADIO);
  if (id == wxART_IKEA)  
      return wxString(SVG_SIMPLE_ICONS_IKEA);
  if (id == wxART_ILEDEFRANCEMOBILITES)  
      return wxString(SVG_SIMPLE_ICONS_ILEDEFRANCEMOBILITES);
  if (id == wxART_IMAGEJ)  
      return wxString(SVG_SIMPLE_ICONS_IMAGEJ);
  if (id == wxART_IMDB)  
      return wxString(SVG_SIMPLE_ICONS_IMDB);
  if (id == wxART_IMGUR)  
      return wxString(SVG_SIMPLE_ICONS_IMGUR);
  if (id == wxART_IMMER)  
      return wxString(SVG_SIMPLE_ICONS_IMMER);
  if (id == wxART_IMMICH)  
      return wxString(SVG_SIMPLE_ICONS_IMMICH);
  if (id == wxART_IMOU)  
      return wxString(SVG_SIMPLE_ICONS_IMOU);
  if (id == wxART_IMPROVMX)  
      return wxString(SVG_SIMPLE_ICONS_IMPROVMX);
  if (id == wxART_INDEED)  
      return wxString(SVG_SIMPLE_ICONS_INDEED);
  if (id == wxART_INDIGO)  
      return wxString(SVG_SIMPLE_ICONS_INDIGO);
  if (id == wxART_INERTIA)  
      return wxString(SVG_SIMPLE_ICONS_INERTIA);
  if (id == wxART_INFINITI)  
      return wxString(SVG_SIMPLE_ICONS_INFINITI);
  if (id == wxART_INFLUXDB)  
      return wxString(SVG_SIMPLE_ICONS_INFLUXDB);
  if (id == wxART_INFOQ)  
      return wxString(SVG_SIMPLE_ICONS_INFOQ);
  if (id == wxART_INFORMATICA)  
      return wxString(SVG_SIMPLE_ICONS_INFORMATICA);
  if (id == wxART_INFOSYS)  
      return wxString(SVG_SIMPLE_ICONS_INFOSYS);
  if (id == wxART_INFRACOST)  
      return wxString(SVG_SIMPLE_ICONS_INFRACOST);
  if (id == wxART_INGRESS)  
      return wxString(SVG_SIMPLE_ICONS_INGRESS);
  if (id == wxART_INKDROP)  
      return wxString(SVG_SIMPLE_ICONS_INKDROP);
  if (id == wxART_INKSCAPE)  
      return wxString(SVG_SIMPLE_ICONS_INKSCAPE);
  if (id == wxART_INSOMNIA)  
      return wxString(SVG_SIMPLE_ICONS_INSOMNIA);
  if (id == wxART_INSTACART)  
      return wxString(SVG_SIMPLE_ICONS_INSTACART);
  if (id == wxART_INSTAGRAM)  
      return wxString(SVG_SIMPLE_ICONS_INSTAGRAM);
  if (id == wxART_INSTAPAPER)  
      return wxString(SVG_SIMPLE_ICONS_INSTAPAPER);
  if (id == wxART_INSTATUS)  
      return wxString(SVG_SIMPLE_ICONS_INSTATUS);
  if (id == wxART_INSTRUCTABLES)  
      return wxString(SVG_SIMPLE_ICONS_INSTRUCTABLES);
  if (id == wxART_INSTRUCTURE)  
      return wxString(SVG_SIMPLE_ICONS_INSTRUCTURE);
  if (id == wxART_INTEGROMAT)  
      return wxString(SVG_SIMPLE_ICONS_INTEGROMAT);
  if (id == wxART_INTEL)  
      return wxString(SVG_SIMPLE_ICONS_INTEL);
  if (id == wxART_INTELLIJIDEA)  
      return wxString(SVG_SIMPLE_ICONS_INTELLIJIDEA);
  if (id == wxART_INTERACTIONDESIGNFOUNDATION)  
      return wxString(SVG_SIMPLE_ICONS_INTERACTIONDESIGNFOUNDATION);
  if (id == wxART_INTERACTJS)  
      return wxString(SVG_SIMPLE_ICONS_INTERACTJS);
  if (id == wxART_INTERBASE)  
      return wxString(SVG_SIMPLE_ICONS_INTERBASE);
  if (id == wxART_INTERCOM)  
      return wxString(SVG_SIMPLE_ICONS_INTERCOM);
  if (id == wxART_INTERMARCHE)  
      return wxString(SVG_SIMPLE_ICONS_INTERMARCHE);
  if (id == wxART_INTERNETARCHIVE)  
      return wxString(SVG_SIMPLE_ICONS_INTERNETARCHIVE);
  if (id == wxART_INTERNETCOMPUTER)  
      return wxString(SVG_SIMPLE_ICONS_INTERNETCOMPUTER);
  if (id == wxART_INTERNETEXPLORER)  
      return wxString(SVG_SIMPLE_ICONS_INTERNETEXPLORER);
  if (id == wxART_INTIGRITI)  
      return wxString(SVG_SIMPLE_ICONS_INTIGRITI);
  if (id == wxART_INTUIT)  
      return wxString(SVG_SIMPLE_ICONS_INTUIT);
  if (id == wxART_INVISION)  
      return wxString(SVG_SIMPLE_ICONS_INVISION);
  if (id == wxART_INVOICENINJA)  
      return wxString(SVG_SIMPLE_ICONS_INVOICENINJA);
  if (id == wxART_IOBROKER)  
      return wxString(SVG_SIMPLE_ICONS_IOBROKER);
  if (id == wxART_IONIC)  
      return wxString(SVG_SIMPLE_ICONS_IONIC);
  if (id == wxART_IONOS)  
      return wxString(SVG_SIMPLE_ICONS_IONOS);
  if (id == wxART_IOS)  
      return wxString(SVG_SIMPLE_ICONS_IOS);
  if (id == wxART_IOTA)  
      return wxString(SVG_SIMPLE_ICONS_IOTA);
  if (id == wxART_IPFS)  
      return wxString(SVG_SIMPLE_ICONS_IPFS);
  if (id == wxART_IRIS)  
      return wxString(SVG_SIMPLE_ICONS_IRIS);
  if (id == wxART_ISC2)  
      return wxString(SVG_SIMPLE_ICONS_ISC2);
  if (id == wxART_ISCSQUARED)  
      return wxString(SVG_SIMPLE_ICONS_ISCSQUARED);
  if (id == wxART_ISSUU)  
      return wxString(SVG_SIMPLE_ICONS_ISSUU);
  if (id == wxART_ISTIO)  
      return wxString(SVG_SIMPLE_ICONS_ISTIO);
  if (id == wxART_ITCHDOTIO)  
      return wxString(SVG_SIMPLE_ICONS_ITCHDOTIO);
  if (id == wxART_ITERM2)  
      return wxString(SVG_SIMPLE_ICONS_ITERM2);
  if (id == wxART_ITUNES)  
      return wxString(SVG_SIMPLE_ICONS_ITUNES);
  if (id == wxART_ITVX)  
      return wxString(SVG_SIMPLE_ICONS_ITVX);
  if (id == wxART_IVECO)  
      return wxString(SVG_SIMPLE_ICONS_IVECO);
  if (id == wxART_JABBER)  
      return wxString(SVG_SIMPLE_ICONS_JABBER);
  if (id == wxART_JAEGER)  
      return wxString(SVG_SIMPLE_ICONS_JAEGER);
  if (id == wxART_JAGUAR)  
      return wxString(SVG_SIMPLE_ICONS_JAGUAR);
  if (id == wxART_JAMBOARD)  
      return wxString(SVG_SIMPLE_ICONS_JAMBOARD);
  if (id == wxART_JAMESON)  
      return wxString(SVG_SIMPLE_ICONS_JAMESON);
  if (id == wxART_JAMSTACK)  
      return wxString(SVG_SIMPLE_ICONS_JAMSTACK);
  if (id == wxART_JASMINE)  
      return wxString(SVG_SIMPLE_ICONS_JASMINE);
  if (id == wxART_JAVASCRIPT)  
      return wxString(SVG_SIMPLE_ICONS_JAVASCRIPT);
  if (id == wxART_JBL)  
      return wxString(SVG_SIMPLE_ICONS_JBL);
  if (id == wxART_JCB)  
      return wxString(SVG_SIMPLE_ICONS_JCB);
  if (id == wxART_JEEP)  
      return wxString(SVG_SIMPLE_ICONS_JEEP);
  if (id == wxART_JEKYLL)  
      return wxString(SVG_SIMPLE_ICONS_JEKYLL);
  if (id == wxART_JELLYFIN)  
      return wxString(SVG_SIMPLE_ICONS_JELLYFIN);
  if (id == wxART_JENKINS)  
      return wxString(SVG_SIMPLE_ICONS_JENKINS);
  if (id == wxART_JENKINSX)  
      return wxString(SVG_SIMPLE_ICONS_JENKINSX);
  if (id == wxART_JEST)  
      return wxString(SVG_SIMPLE_ICONS_JEST);
  if (id == wxART_JET)  
      return wxString(SVG_SIMPLE_ICONS_JET);
  if (id == wxART_JETBLUE)  
      return wxString(SVG_SIMPLE_ICONS_JETBLUE);
  if (id == wxART_JETBRAINS)  
      return wxString(SVG_SIMPLE_ICONS_JETBRAINS);
  if (id == wxART_JETPACKCOMPOSE)  
      return wxString(SVG_SIMPLE_ICONS_JETPACKCOMPOSE);
  if (id == wxART_JFROG)  
      return wxString(SVG_SIMPLE_ICONS_JFROG);
  if (id == wxART_JFROGBINTRAY)  
      return wxString(SVG_SIMPLE_ICONS_JFROGBINTRAY);
  if (id == wxART_JFROGPIPELINES)  
      return wxString(SVG_SIMPLE_ICONS_JFROGPIPELINES);
  if (id == wxART_JINJA)  
      return wxString(SVG_SIMPLE_ICONS_JINJA);
  if (id == wxART_JIRA)  
      return wxString(SVG_SIMPLE_ICONS_JIRA);
  if (id == wxART_JIRASOFTWARE)  
      return wxString(SVG_SIMPLE_ICONS_JIRASOFTWARE);
  if (id == wxART_JITSI)  
      return wxString(SVG_SIMPLE_ICONS_JITSI);
  if (id == wxART_JOHNDEERE)  
      return wxString(SVG_SIMPLE_ICONS_JOHNDEERE);
  if (id == wxART_JOOMLA)  
      return wxString(SVG_SIMPLE_ICONS_JOOMLA);
  if (id == wxART_JOPLIN)  
      return wxString(SVG_SIMPLE_ICONS_JOPLIN);
  if (id == wxART_JORDAN)  
      return wxString(SVG_SIMPLE_ICONS_JORDAN);
  if (id == wxART_JOVIAN)  
      return wxString(SVG_SIMPLE_ICONS_JOVIAN);
  if (id == wxART_JPEG)  
      return wxString(SVG_SIMPLE_ICONS_JPEG);
  if (id == wxART_JQUERY)  
      return wxString(SVG_SIMPLE_ICONS_JQUERY);
  if (id == wxART_JRGROUP)  
      return wxString(SVG_SIMPLE_ICONS_JRGROUP);
  if (id == wxART_JSDELIVR)  
      return wxString(SVG_SIMPLE_ICONS_JSDELIVR);
  if (id == wxART_JSFIDDLE)  
      return wxString(SVG_SIMPLE_ICONS_JSFIDDLE);
  if (id == wxART_JSON)  
      return wxString(SVG_SIMPLE_ICONS_JSON);
  if (id == wxART_JSONWEBTOKENS)  
      return wxString(SVG_SIMPLE_ICONS_JSONWEBTOKENS);
  if (id == wxART_JSS)  
      return wxString(SVG_SIMPLE_ICONS_JSS);
  if (id == wxART_JUCE)  
      return wxString(SVG_SIMPLE_ICONS_JUCE);
  if (id == wxART_JUEJIN)  
      return wxString(SVG_SIMPLE_ICONS_JUEJIN);
  if (id == wxART_JUKE)  
      return wxString(SVG_SIMPLE_ICONS_JUKE);
  if (id == wxART_JULIA)  
      return wxString(SVG_SIMPLE_ICONS_JULIA);
  if (id == wxART_JUNIPERNETWORKS)  
      return wxString(SVG_SIMPLE_ICONS_JUNIPERNETWORKS);
  if (id == wxART_JUNIT5)  
      return wxString(SVG_SIMPLE_ICONS_JUNIT5);
  if (id == wxART_JUPYTER)  
      return wxString(SVG_SIMPLE_ICONS_JUPYTER);
  if (id == wxART_JUSTEAT)  
      return wxString(SVG_SIMPLE_ICONS_JUSTEAT);
  if (id == wxART_JUSTGIVING)  
      return wxString(SVG_SIMPLE_ICONS_JUSTGIVING);
  if (id == wxART_K3S)  
      return wxString(SVG_SIMPLE_ICONS_K3S);
  if (id == wxART_K6)  
      return wxString(SVG_SIMPLE_ICONS_K6);
  if (id == wxART_KAGGLE)  
      return wxString(SVG_SIMPLE_ICONS_KAGGLE);
  if (id == wxART_KAHOOT)  
      return wxString(SVG_SIMPLE_ICONS_KAHOOT);
  if (id == wxART_KAIOS)  
      return wxString(SVG_SIMPLE_ICONS_KAIOS);
  if (id == wxART_KAKAO)  
      return wxString(SVG_SIMPLE_ICONS_KAKAO);
  if (id == wxART_KAKAOTALK)  
      return wxString(SVG_SIMPLE_ICONS_KAKAOTALK);
  if (id == wxART_KALILINUX)  
      return wxString(SVG_SIMPLE_ICONS_KALILINUX);
  if (id == wxART_KAMAILIO)  
      return wxString(SVG_SIMPLE_ICONS_KAMAILIO);
  if (id == wxART_KANIKO)  
      return wxString(SVG_SIMPLE_ICONS_KANIKO);
  if (id == wxART_KARLSRUHERVERKEHRSVERBUND)  
      return wxString(SVG_SIMPLE_ICONS_KARLSRUHERVERKEHRSVERBUND);
  if (id == wxART_KASASMART)  
      return wxString(SVG_SIMPLE_ICONS_KASASMART);
  if (id == wxART_KASHFLOW)  
      return wxString(SVG_SIMPLE_ICONS_KASHFLOW);
  if (id == wxART_KASPERSKY)  
      return wxString(SVG_SIMPLE_ICONS_KASPERSKY);
  if (id == wxART_KATACODA)  
      return wxString(SVG_SIMPLE_ICONS_KATACODA);
  if (id == wxART_KATANA)  
      return wxString(SVG_SIMPLE_ICONS_KATANA);
  if (id == wxART_KAUFLAND)  
      return wxString(SVG_SIMPLE_ICONS_KAUFLAND);
  if (id == wxART_KDE)  
      return wxString(SVG_SIMPLE_ICONS_KDE);
  if (id == wxART_KDENLIVE)  
      return wxString(SVG_SIMPLE_ICONS_KDENLIVE);
  if (id == wxART_KEDRO)  
      return wxString(SVG_SIMPLE_ICONS_KEDRO);
  if (id == wxART_KEEPACHANGELOG)  
      return wxString(SVG_SIMPLE_ICONS_KEEPACHANGELOG);
  if (id == wxART_KEEPASSXC)  
      return wxString(SVG_SIMPLE_ICONS_KEEPASSXC);
  if (id == wxART_KENTICO)  
      return wxString(SVG_SIMPLE_ICONS_KENTICO);
  if (id == wxART_KERAS)  
      return wxString(SVG_SIMPLE_ICONS_KERAS);
  if (id == wxART_KEYBASE)  
      return wxString(SVG_SIMPLE_ICONS_KEYBASE);
  if (id == wxART_KEYCDN)  
      return wxString(SVG_SIMPLE_ICONS_KEYCDN);
  if (id == wxART_KEYSTONE)  
      return wxString(SVG_SIMPLE_ICONS_KEYSTONE);
  if (id == wxART_KFC)  
      return wxString(SVG_SIMPLE_ICONS_KFC);
  if (id == wxART_KHANACADEMY)  
      return wxString(SVG_SIMPLE_ICONS_KHANACADEMY);
  if (id == wxART_KHRONOSGROUP)  
      return wxString(SVG_SIMPLE_ICONS_KHRONOSGROUP);
  if (id == wxART_KIA)  
      return wxString(SVG_SIMPLE_ICONS_KIA);
  if (id == wxART_KIBANA)  
      return wxString(SVG_SIMPLE_ICONS_KIBANA);
  if (id == wxART_KICAD)  
      return wxString(SVG_SIMPLE_ICONS_KICAD);
  if (id == wxART_KICKSTARTER)  
      return wxString(SVG_SIMPLE_ICONS_KICKSTARTER);
  if (id == wxART_KIK)  
      return wxString(SVG_SIMPLE_ICONS_KIK);
  if (id == wxART_KINGSTONTECHNOLOGY)  
      return wxString(SVG_SIMPLE_ICONS_KINGSTONTECHNOLOGY);
  if (id == wxART_KINOPOISK)  
      return wxString(SVG_SIMPLE_ICONS_KINOPOISK);
  if (id == wxART_KINSTA)  
      return wxString(SVG_SIMPLE_ICONS_KINSTA);
  if (id == wxART_KIRBY)  
      return wxString(SVG_SIMPLE_ICONS_KIRBY);
  if (id == wxART_KIT)  
      return wxString(SVG_SIMPLE_ICONS_KIT);
  if (id == wxART_KITSU)  
      return wxString(SVG_SIMPLE_ICONS_KITSU);
  if (id == wxART_KLARNA)  
      return wxString(SVG_SIMPLE_ICONS_KLARNA);
  if (id == wxART_KLM)  
      return wxString(SVG_SIMPLE_ICONS_KLM);
  if (id == wxART_KLOOK)  
      return wxString(SVG_SIMPLE_ICONS_KLOOK);
  if (id == wxART_KNATIVE)  
      return wxString(SVG_SIMPLE_ICONS_KNATIVE);
  if (id == wxART_KNOWLEDGEBASE)  
      return wxString(SVG_SIMPLE_ICONS_KNOWLEDGEBASE);
  if (id == wxART_KNOWN)  
      return wxString(SVG_SIMPLE_ICONS_KNOWN);
  if (id == wxART_KOA)  
      return wxString(SVG_SIMPLE_ICONS_KOA);
  if (id == wxART_KOC)  
      return wxString(SVG_SIMPLE_ICONS_KOC);
  if (id == wxART_KODAK)  
      return wxString(SVG_SIMPLE_ICONS_KODAK);
  if (id == wxART_KODI)  
      return wxString(SVG_SIMPLE_ICONS_KODI);
  if (id == wxART_KOFAX)  
      return wxString(SVG_SIMPLE_ICONS_KOFAX);
  if (id == wxART_KOFI)  
      return wxString(SVG_SIMPLE_ICONS_KOFI);
  if (id == wxART_KOMOOT)  
      return wxString(SVG_SIMPLE_ICONS_KOMOOT);
  if (id == wxART_KONAMI)  
      return wxString(SVG_SIMPLE_ICONS_KONAMI);
  if (id == wxART_KONG)  
      return wxString(SVG_SIMPLE_ICONS_KONG);
  if (id == wxART_KONGREGATE)  
      return wxString(SVG_SIMPLE_ICONS_KONGREGATE);
  if (id == wxART_KONVA)  
      return wxString(SVG_SIMPLE_ICONS_KONVA);
  if (id == wxART_KOTLIN)  
      return wxString(SVG_SIMPLE_ICONS_KOTLIN);
  if (id == wxART_KOYEB)  
      return wxString(SVG_SIMPLE_ICONS_KOYEB);
  if (id == wxART_KRITA)  
      return wxString(SVG_SIMPLE_ICONS_KRITA);
  if (id == wxART_KTM)  
      return wxString(SVG_SIMPLE_ICONS_KTM);
  if (id == wxART_KUAISHOU)  
      return wxString(SVG_SIMPLE_ICONS_KUAISHOU);
  if (id == wxART_KUBERNETES)  
      return wxString(SVG_SIMPLE_ICONS_KUBERNETES);
  if (id == wxART_KUBUNTU)  
      return wxString(SVG_SIMPLE_ICONS_KUBUNTU);
  if (id == wxART_KUMA)  
      return wxString(SVG_SIMPLE_ICONS_KUMA);
  if (id == wxART_KUULA)  
      return wxString(SVG_SIMPLE_ICONS_KUULA);
  if (id == wxART_KYOCERA)  
      return wxString(SVG_SIMPLE_ICONS_KYOCERA);
  if (id == wxART_LABVIEW)  
      return wxString(SVG_SIMPLE_ICONS_LABVIEW);
  if (id == wxART_LADA)  
      return wxString(SVG_SIMPLE_ICONS_LADA);
  if (id == wxART_LAMBORGHINI)  
      return wxString(SVG_SIMPLE_ICONS_LAMBORGHINI);
  if (id == wxART_LANDROVER)  
      return wxString(SVG_SIMPLE_ICONS_LANDROVER);
  if (id == wxART_LAPCE)  
      return wxString(SVG_SIMPLE_ICONS_LAPCE);
  if (id == wxART_LARAGON)  
      return wxString(SVG_SIMPLE_ICONS_LARAGON);
  if (id == wxART_LARAVEL)  
      return wxString(SVG_SIMPLE_ICONS_LARAVEL);
  if (id == wxART_LARAVELHORIZON)  
      return wxString(SVG_SIMPLE_ICONS_LARAVELHORIZON);
  if (id == wxART_LARAVELNOVA)  
      return wxString(SVG_SIMPLE_ICONS_LARAVELNOVA);
  if (id == wxART_LASTDOTFM)  
      return wxString(SVG_SIMPLE_ICONS_LASTDOTFM);
  if (id == wxART_LASTPASS)  
      return wxString(SVG_SIMPLE_ICONS_LASTPASS);
  if (id == wxART_LATEX)  
      return wxString(SVG_SIMPLE_ICONS_LATEX);
  if (id == wxART_LAUNCHPAD)  
      return wxString(SVG_SIMPLE_ICONS_LAUNCHPAD);
  if (id == wxART_LAZARUS)  
      return wxString(SVG_SIMPLE_ICONS_LAZARUS);
  if (id == wxART_LBRY)  
      return wxString(SVG_SIMPLE_ICONS_LBRY);
  if (id == wxART_LEADERPRICE)  
      return wxString(SVG_SIMPLE_ICONS_LEADERPRICE);
  if (id == wxART_LEAFLET)  
      return wxString(SVG_SIMPLE_ICONS_LEAFLET);
  if (id == wxART_LEAGUEOFLEGENDS)  
      return wxString(SVG_SIMPLE_ICONS_LEAGUEOFLEGENDS);
  if (id == wxART_LEANPUB)  
      return wxString(SVG_SIMPLE_ICONS_LEANPUB);
  if (id == wxART_LEETCODE)  
      return wxString(SVG_SIMPLE_ICONS_LEETCODE);
  if (id == wxART_LEGACYGAMES)  
      return wxString(SVG_SIMPLE_ICONS_LEGACYGAMES);
  if (id == wxART_LEICA)  
      return wxString(SVG_SIMPLE_ICONS_LEICA);
  if (id == wxART_LEMMY)  
      return wxString(SVG_SIMPLE_ICONS_LEMMY);
  if (id == wxART_LENOVO)  
      return wxString(SVG_SIMPLE_ICONS_LENOVO);
  if (id == wxART_LENS)  
      return wxString(SVG_SIMPLE_ICONS_LENS);
  if (id == wxART_LEPTOS)  
      return wxString(SVG_SIMPLE_ICONS_LEPTOS);
  if (id == wxART_LERNA)  
      return wxString(SVG_SIMPLE_ICONS_LERNA);
  if (id == wxART_LEROYMERLIN)  
      return wxString(SVG_SIMPLE_ICONS_LEROYMERLIN);
  if (id == wxART_LESS)  
      return wxString(SVG_SIMPLE_ICONS_LESS);
  if (id == wxART_LETSENCRYPT)  
      return wxString(SVG_SIMPLE_ICONS_LETSENCRYPT);
  if (id == wxART_LETTERBOXD)  
      return wxString(SVG_SIMPLE_ICONS_LETTERBOXD);
  if (id == wxART_LEVELSDOTFYI)  
      return wxString(SVG_SIMPLE_ICONS_LEVELSDOTFYI);
  if (id == wxART_LG)  
      return wxString(SVG_SIMPLE_ICONS_LG);
  if (id == wxART_LGTM)  
      return wxString(SVG_SIMPLE_ICONS_LGTM);
  if (id == wxART_LIBERADOTCHAT)  
      return wxString(SVG_SIMPLE_ICONS_LIBERADOTCHAT);
  if (id == wxART_LIBERAPAY)  
      return wxString(SVG_SIMPLE_ICONS_LIBERAPAY);
  if (id == wxART_LIBRARIESDOTIO)  
      return wxString(SVG_SIMPLE_ICONS_LIBRARIESDOTIO);
  if (id == wxART_LIBRARYTHING)  
      return wxString(SVG_SIMPLE_ICONS_LIBRARYTHING);
  if (id == wxART_LIBREOFFICE)  
      return wxString(SVG_SIMPLE_ICONS_LIBREOFFICE);
  if (id == wxART_LIBUV)  
      return wxString(SVG_SIMPLE_ICONS_LIBUV);
  if (id == wxART_LICHESS)  
      return wxString(SVG_SIMPLE_ICONS_LICHESS);
  if (id == wxART_LIDL)  
      return wxString(SVG_SIMPLE_ICONS_LIDL);
  if (id == wxART_LIFX)  
      return wxString(SVG_SIMPLE_ICONS_LIFX);
  if (id == wxART_LIGHTBURN)  
      return wxString(SVG_SIMPLE_ICONS_LIGHTBURN);
  if (id == wxART_LIGHTHOUSE)  
      return wxString(SVG_SIMPLE_ICONS_LIGHTHOUSE);
  if (id == wxART_LIGHTNING)  
      return wxString(SVG_SIMPLE_ICONS_LIGHTNING);
  if (id == wxART_LINE)  
      return wxString(SVG_SIMPLE_ICONS_LINE);
  if (id == wxART_LINEAGEOS)  
      return wxString(SVG_SIMPLE_ICONS_LINEAGEOS);
  if (id == wxART_LINEAR)  
      return wxString(SVG_SIMPLE_ICONS_LINEAR);
  if (id == wxART_LINKEDIN)  
      return wxString(SVG_SIMPLE_ICONS_LINKEDIN);
  if (id == wxART_LINKERD)  
      return wxString(SVG_SIMPLE_ICONS_LINKERD);
  if (id == wxART_LINKFIRE)  
      return wxString(SVG_SIMPLE_ICONS_LINKFIRE);
  if (id == wxART_LINKTREE)  
      return wxString(SVG_SIMPLE_ICONS_LINKTREE);
  if (id == wxART_LINUX)  
      return wxString(SVG_SIMPLE_ICONS_LINUX);
  if (id == wxART_LINUXCONTAINERS)  
      return wxString(SVG_SIMPLE_ICONS_LINUXCONTAINERS);
  if (id == wxART_LINUXFOUNDATION)  
      return wxString(SVG_SIMPLE_ICONS_LINUXFOUNDATION);
  if (id == wxART_LINUXMINT)  
      return wxString(SVG_SIMPLE_ICONS_LINUXMINT);
  if (id == wxART_LIONAIR)  
      return wxString(SVG_SIMPLE_ICONS_LIONAIR);
  if (id == wxART_LIQUIBASE)  
      return wxString(SVG_SIMPLE_ICONS_LIQUIBASE);
  if (id == wxART_LIT)  
      return wxString(SVG_SIMPLE_ICONS_LIT);
  if (id == wxART_LITECOIN)  
      return wxString(SVG_SIMPLE_ICONS_LITECOIN);
  if (id == wxART_LITIENGINE)  
      return wxString(SVG_SIMPLE_ICONS_LITIENGINE);
  if (id == wxART_LIVECHAT)  
      return wxString(SVG_SIMPLE_ICONS_LIVECHAT);
  if (id == wxART_LIVEJOURNAL)  
      return wxString(SVG_SIMPLE_ICONS_LIVEJOURNAL);
  if (id == wxART_LIVEWIRE)  
      return wxString(SVG_SIMPLE_ICONS_LIVEWIRE);
  if (id == wxART_LLVM)  
      return wxString(SVG_SIMPLE_ICONS_LLVM);
  if (id == wxART_LMMS)  
      return wxString(SVG_SIMPLE_ICONS_LMMS);
  if (id == wxART_LOCAL)  
      return wxString(SVG_SIMPLE_ICONS_LOCAL);
  if (id == wxART_LODASH)  
      return wxString(SVG_SIMPLE_ICONS_LODASH);
  if (id == wxART_LOGITECH)  
      return wxString(SVG_SIMPLE_ICONS_LOGITECH);
  if (id == wxART_LOGMEIN)  
      return wxString(SVG_SIMPLE_ICONS_LOGMEIN);
  if (id == wxART_LOGSEQ)  
      return wxString(SVG_SIMPLE_ICONS_LOGSEQ);
  if (id == wxART_LOGSTASH)  
      return wxString(SVG_SIMPLE_ICONS_LOGSTASH);
  if (id == wxART_LOOKER)  
      return wxString(SVG_SIMPLE_ICONS_LOOKER);
  if (id == wxART_LOOM)  
      return wxString(SVG_SIMPLE_ICONS_LOOM);
  if (id == wxART_LOOP)  
      return wxString(SVG_SIMPLE_ICONS_LOOP);
  if (id == wxART_LOOPBACK)  
      return wxString(SVG_SIMPLE_ICONS_LOOPBACK);
  if (id == wxART_LOSPEC)  
      return wxString(SVG_SIMPLE_ICONS_LOSPEC);
  if (id == wxART_LOTPOLISHAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_LOTPOLISHAIRLINES);
  if (id == wxART_LTSPICE)  
      return wxString(SVG_SIMPLE_ICONS_LTSPICE);
  if (id == wxART_LUA)  
      return wxString(SVG_SIMPLE_ICONS_LUA);
  if (id == wxART_LUBUNTU)  
      return wxString(SVG_SIMPLE_ICONS_LUBUNTU);
  if (id == wxART_LUDWIG)  
      return wxString(SVG_SIMPLE_ICONS_LUDWIG);
  if (id == wxART_LUFTHANSA)  
      return wxString(SVG_SIMPLE_ICONS_LUFTHANSA);
  if (id == wxART_LUMEN)  
      return wxString(SVG_SIMPLE_ICONS_LUMEN);
  if (id == wxART_LUNACY)  
      return wxString(SVG_SIMPLE_ICONS_LUNACY);
  if (id == wxART_LUTRIS)  
      return wxString(SVG_SIMPLE_ICONS_LUTRIS);
  if (id == wxART_LYDIA)  
      return wxString(SVG_SIMPLE_ICONS_LYDIA);
  if (id == wxART_LYFT)  
      return wxString(SVG_SIMPLE_ICONS_LYFT);
  if (id == wxART_MAAS)  
      return wxString(SVG_SIMPLE_ICONS_MAAS);
  if (id == wxART_MACOS)  
      return wxString(SVG_SIMPLE_ICONS_MACOS);
  if (id == wxART_MACPAW)  
      return wxString(SVG_SIMPLE_ICONS_MACPAW);
  if (id == wxART_MACYS)  
      return wxString(SVG_SIMPLE_ICONS_MACYS);
  if (id == wxART_MAGASINSU)  
      return wxString(SVG_SIMPLE_ICONS_MAGASINSU);
  if (id == wxART_MAGENTO)  
      return wxString(SVG_SIMPLE_ICONS_MAGENTO);
  if (id == wxART_MAGISK)  
      return wxString(SVG_SIMPLE_ICONS_MAGISK);
  if (id == wxART_MAILCHIMP)  
      return wxString(SVG_SIMPLE_ICONS_MAILCHIMP);
  if (id == wxART_MAILDOTCOM)  
      return wxString(SVG_SIMPLE_ICONS_MAILDOTCOM);
  if (id == wxART_MAILDOTRU)  
      return wxString(SVG_SIMPLE_ICONS_MAILDOTRU);
  if (id == wxART_MAILGUN)  
      return wxString(SVG_SIMPLE_ICONS_MAILGUN);
  if (id == wxART_MAJORLEAGUEHACKING)  
      return wxString(SVG_SIMPLE_ICONS_MAJORLEAGUEHACKING);
  if (id == wxART_MAKERBOT)  
      return wxString(SVG_SIMPLE_ICONS_MAKERBOT);
  if (id == wxART_MAMBAUI)  
      return wxString(SVG_SIMPLE_ICONS_MAMBAUI);
  if (id == wxART_MAMP)  
      return wxString(SVG_SIMPLE_ICONS_MAMP);
  if (id == wxART_MAN)  
      return wxString(SVG_SIMPLE_ICONS_MAN);
  if (id == wxART_MANAGEIQ)  
      return wxString(SVG_SIMPLE_ICONS_MANAGEIQ);
  if (id == wxART_MANJARO)  
      return wxString(SVG_SIMPLE_ICONS_MANJARO);
  if (id == wxART_MANTINE)  
      return wxString(SVG_SIMPLE_ICONS_MANTINE);
  if (id == wxART_MAPBOX)  
      return wxString(SVG_SIMPLE_ICONS_MAPBOX);
  if (id == wxART_MAPLIBRE)  
      return wxString(SVG_SIMPLE_ICONS_MAPLIBRE);
  if (id == wxART_MARIADB)  
      return wxString(SVG_SIMPLE_ICONS_MARIADB);
  if (id == wxART_MARIADBFOUNDATION)  
      return wxString(SVG_SIMPLE_ICONS_MARIADBFOUNDATION);
  if (id == wxART_MARKDOWN)  
      return wxString(SVG_SIMPLE_ICONS_MARKDOWN);
  if (id == wxART_MARKETO)  
      return wxString(SVG_SIMPLE_ICONS_MARKETO);
  if (id == wxART_MARKO)  
      return wxString(SVG_SIMPLE_ICONS_MARKO);
  if (id == wxART_MARRIOTT)  
      return wxString(SVG_SIMPLE_ICONS_MARRIOTT);
  if (id == wxART_MARVELAPP)  
      return wxString(SVG_SIMPLE_ICONS_MARVELAPP);
  if (id == wxART_MASERATI)  
      return wxString(SVG_SIMPLE_ICONS_MASERATI);
  if (id == wxART_MASTERCARD)  
      return wxString(SVG_SIMPLE_ICONS_MASTERCARD);
  if (id == wxART_MASTERCOMFIG)  
      return wxString(SVG_SIMPLE_ICONS_MASTERCOMFIG);
  if (id == wxART_MASTODON)  
      return wxString(SVG_SIMPLE_ICONS_MASTODON);
  if (id == wxART_MATERIALDESIGN)  
      return wxString(SVG_SIMPLE_ICONS_MATERIALDESIGN);
  if (id == wxART_MATERIALDESIGNICONS)  
      return wxString(SVG_SIMPLE_ICONS_MATERIALDESIGNICONS);
  if (id == wxART_MATILLION)  
      return wxString(SVG_SIMPLE_ICONS_MATILLION);
  if (id == wxART_MATOMO)  
      return wxString(SVG_SIMPLE_ICONS_MATOMO);
  if (id == wxART_MATRIX)  
      return wxString(SVG_SIMPLE_ICONS_MATRIX);
  if (id == wxART_MATTERDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_MATTERDOTJS);
  if (id == wxART_MATTERMOST)  
      return wxString(SVG_SIMPLE_ICONS_MATTERMOST);
  if (id == wxART_MATTERNET)  
      return wxString(SVG_SIMPLE_ICONS_MATTERNET);
  if (id == wxART_MAUTIC)  
      return wxString(SVG_SIMPLE_ICONS_MAUTIC);
  if (id == wxART_MAX)  
      return wxString(SVG_SIMPLE_ICONS_MAX);
  if (id == wxART_MAXPLANCKGESELLSCHAFT)  
      return wxString(SVG_SIMPLE_ICONS_MAXPLANCKGESELLSCHAFT);
  if (id == wxART_MAYTAG)  
      return wxString(SVG_SIMPLE_ICONS_MAYTAG);
  if (id == wxART_MAZDA)  
      return wxString(SVG_SIMPLE_ICONS_MAZDA);
  if (id == wxART_MCAFEE)  
      return wxString(SVG_SIMPLE_ICONS_MCAFEE);
  if (id == wxART_MCDONALDS)  
      return wxString(SVG_SIMPLE_ICONS_MCDONALDS);
  if (id == wxART_MCLAREN)  
      return wxString(SVG_SIMPLE_ICONS_MCLAREN);
  if (id == wxART_MDBOOK)  
      return wxString(SVG_SIMPLE_ICONS_MDBOOK);
  if (id == wxART_MDNWEBDOCS)  
      return wxString(SVG_SIMPLE_ICONS_MDNWEBDOCS);
  if (id == wxART_MDX)  
      return wxString(SVG_SIMPLE_ICONS_MDX);
  if (id == wxART_MEDIAFIRE)  
      return wxString(SVG_SIMPLE_ICONS_MEDIAFIRE);
  if (id == wxART_MEDIAMARKT)  
      return wxString(SVG_SIMPLE_ICONS_MEDIAMARKT);
  if (id == wxART_MEDIATEK)  
      return wxString(SVG_SIMPLE_ICONS_MEDIATEK);
  if (id == wxART_MEDIATEMPLE)  
      return wxString(SVG_SIMPLE_ICONS_MEDIATEMPLE);
  if (id == wxART_MEDIBANGPAINT)  
      return wxString(SVG_SIMPLE_ICONS_MEDIBANGPAINT);
  if (id == wxART_MEDIUM)  
      return wxString(SVG_SIMPLE_ICONS_MEDIUM);
  if (id == wxART_MEETUP)  
      return wxString(SVG_SIMPLE_ICONS_MEETUP);
  if (id == wxART_MEGA)  
      return wxString(SVG_SIMPLE_ICONS_MEGA);
  if (id == wxART_MEILISEARCH)  
      return wxString(SVG_SIMPLE_ICONS_MEILISEARCH);
  if (id == wxART_MENDELEY)  
      return wxString(SVG_SIMPLE_ICONS_MENDELEY);
  if (id == wxART_MERCADOPAGO)  
      return wxString(SVG_SIMPLE_ICONS_MERCADOPAGO);
  if (id == wxART_MERCEDES)  
      return wxString(SVG_SIMPLE_ICONS_MERCEDES);
  if (id == wxART_MERCK)  
      return wxString(SVG_SIMPLE_ICONS_MERCK);
  if (id == wxART_MERCURIAL)  
      return wxString(SVG_SIMPLE_ICONS_MERCURIAL);
  if (id == wxART_MESSENGER)  
      return wxString(SVG_SIMPLE_ICONS_MESSENGER);
  if (id == wxART_META)  
      return wxString(SVG_SIMPLE_ICONS_META);
  if (id == wxART_METABASE)  
      return wxString(SVG_SIMPLE_ICONS_METABASE);
  if (id == wxART_METAFILTER)  
      return wxString(SVG_SIMPLE_ICONS_METAFILTER);
  if (id == wxART_METEOR)  
      return wxString(SVG_SIMPLE_ICONS_METEOR);
  if (id == wxART_METRO)  
      return wxString(SVG_SIMPLE_ICONS_METRO);
  if (id == wxART_METRODELACIUDADDEMEXICO)  
      return wxString(SVG_SIMPLE_ICONS_METRODELACIUDADDEMEXICO);
  if (id == wxART_METRODEMADRID)  
      return wxString(SVG_SIMPLE_ICONS_METRODEMADRID);
  if (id == wxART_METRODEPARIS)  
      return wxString(SVG_SIMPLE_ICONS_METRODEPARIS);
  if (id == wxART_MEWE)  
      return wxString(SVG_SIMPLE_ICONS_MEWE);
  if (id == wxART_MG)  
      return wxString(SVG_SIMPLE_ICONS_MG);
  if (id == wxART_MICROBIT)  
      return wxString(SVG_SIMPLE_ICONS_MICROBIT);
  if (id == wxART_MICRODOTBLOG)  
      return wxString(SVG_SIMPLE_ICONS_MICRODOTBLOG);
  if (id == wxART_MICROEDITOR)  
      return wxString(SVG_SIMPLE_ICONS_MICROEDITOR);
  if (id == wxART_MICROGENETICS)  
      return wxString(SVG_SIMPLE_ICONS_MICROGENETICS);
  if (id == wxART_MICROPYTHON)  
      return wxString(SVG_SIMPLE_ICONS_MICROPYTHON);
  if (id == wxART_MICROSOFT)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFT);
  if (id == wxART_MICROSOFTACADEMIC)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTACADEMIC);
  if (id == wxART_MICROSOFTACCESS)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTACCESS);
  if (id == wxART_MICROSOFTAZURE)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTAZURE);
  if (id == wxART_MICROSOFTBING)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTBING);
  if (id == wxART_MICROSOFTEDGE)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTEDGE);
  if (id == wxART_MICROSOFTEXCEL)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTEXCEL);
  if (id == wxART_MICROSOFTEXCHANGE)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTEXCHANGE);
  if (id == wxART_MICROSOFTOFFICE)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTOFFICE);
  if (id == wxART_MICROSOFTONEDRIVE)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTONEDRIVE);
  if (id == wxART_MICROSOFTONENOTE)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTONENOTE);
  if (id == wxART_MICROSOFTOUTLOOK)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTOUTLOOK);
  if (id == wxART_MICROSOFTPOWERPOINT)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTPOWERPOINT);
  if (id == wxART_MICROSOFTSHAREPOINT)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTSHAREPOINT);
  if (id == wxART_MICROSOFTSQLSERVER)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTSQLSERVER);
  if (id == wxART_MICROSOFTTEAMS)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTTEAMS);
  if (id == wxART_MICROSOFTTRANSLATOR)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTTRANSLATOR);
  if (id == wxART_MICROSOFTVISIO)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTVISIO);
  if (id == wxART_MICROSOFTWORD)  
      return wxString(SVG_SIMPLE_ICONS_MICROSOFTWORD);
  if (id == wxART_MICROSTATION)  
      return wxString(SVG_SIMPLE_ICONS_MICROSTATION);
  if (id == wxART_MICROSTRATEGY)  
      return wxString(SVG_SIMPLE_ICONS_MICROSTRATEGY);
  if (id == wxART_MIDI)  
      return wxString(SVG_SIMPLE_ICONS_MIDI);
  if (id == wxART_MIKROTIK)  
      return wxString(SVG_SIMPLE_ICONS_MIKROTIK);
  if (id == wxART_MILVUS)  
      return wxString(SVG_SIMPLE_ICONS_MILVUS);
  if (id == wxART_MINDS)  
      return wxString(SVG_SIMPLE_ICONS_MINDS);
  if (id == wxART_MINECRAFT)  
      return wxString(SVG_SIMPLE_ICONS_MINECRAFT);
  if (id == wxART_MINETEST)  
      return wxString(SVG_SIMPLE_ICONS_MINETEST);
  if (id == wxART_MINI)  
      return wxString(SVG_SIMPLE_ICONS_MINI);
  if (id == wxART_MINIO)  
      return wxString(SVG_SIMPLE_ICONS_MINIO);
  if (id == wxART_MINUTEMAILER)  
      return wxString(SVG_SIMPLE_ICONS_MINUTEMAILER);
  if (id == wxART_MIRAHEZE)  
      return wxString(SVG_SIMPLE_ICONS_MIRAHEZE);
  if (id == wxART_MIRO)  
      return wxString(SVG_SIMPLE_ICONS_MIRO);
  if (id == wxART_MISSKEY)  
      return wxString(SVG_SIMPLE_ICONS_MISSKEY);
  if (id == wxART_MITSUBISHI)  
      return wxString(SVG_SIMPLE_ICONS_MITSUBISHI);
  if (id == wxART_MIX)  
      return wxString(SVG_SIMPLE_ICONS_MIX);
  if (id == wxART_MIXCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_MIXCLOUD);
  if (id == wxART_MIXPANEL)  
      return wxString(SVG_SIMPLE_ICONS_MIXPANEL);
  if (id == wxART_MLB)  
      return wxString(SVG_SIMPLE_ICONS_MLB);
  if (id == wxART_MLFLOW)  
      return wxString(SVG_SIMPLE_ICONS_MLFLOW);
  if (id == wxART_MOBX)  
      return wxString(SVG_SIMPLE_ICONS_MOBX);
  if (id == wxART_MOBXSTATETREE)  
      return wxString(SVG_SIMPLE_ICONS_MOBXSTATETREE);
  if (id == wxART_MOCHA)  
      return wxString(SVG_SIMPLE_ICONS_MOCHA);
  if (id == wxART_MOCKSERVICEWORKER)  
      return wxString(SVG_SIMPLE_ICONS_MOCKSERVICEWORKER);
  if (id == wxART_MODIN)  
      return wxString(SVG_SIMPLE_ICONS_MODIN);
  if (id == wxART_MODRINTH)  
      return wxString(SVG_SIMPLE_ICONS_MODRINTH);
  if (id == wxART_MODX)  
      return wxString(SVG_SIMPLE_ICONS_MODX);
  if (id == wxART_MOJANGSTUDIOS)  
      return wxString(SVG_SIMPLE_ICONS_MOJANGSTUDIOS);
  if (id == wxART_MOLECULER)  
      return wxString(SVG_SIMPLE_ICONS_MOLECULER);
  if (id == wxART_MOMENTEO)  
      return wxString(SVG_SIMPLE_ICONS_MOMENTEO);
  if (id == wxART_MONERO)  
      return wxString(SVG_SIMPLE_ICONS_MONERO);
  if (id == wxART_MONEYGRAM)  
      return wxString(SVG_SIMPLE_ICONS_MONEYGRAM);
  if (id == wxART_MONGODB)  
      return wxString(SVG_SIMPLE_ICONS_MONGODB);
  if (id == wxART_MONGOOSE)  
      return wxString(SVG_SIMPLE_ICONS_MONGOOSE);
  if (id == wxART_MONGOOSEDOTWS)  
      return wxString(SVG_SIMPLE_ICONS_MONGOOSEDOTWS);
  if (id == wxART_MONICA)  
      return wxString(SVG_SIMPLE_ICONS_MONICA);
  if (id == wxART_MONKEYTIE)  
      return wxString(SVG_SIMPLE_ICONS_MONKEYTIE);
  if (id == wxART_MONKEYTYPE)  
      return wxString(SVG_SIMPLE_ICONS_MONKEYTYPE);
  if (id == wxART_MONOGAME)  
      return wxString(SVG_SIMPLE_ICONS_MONOGAME);
  if (id == wxART_MONOPRIX)  
      return wxString(SVG_SIMPLE_ICONS_MONOPRIX);
  if (id == wxART_MONSTER)  
      return wxString(SVG_SIMPLE_ICONS_MONSTER);
  if (id == wxART_MONZO)  
      return wxString(SVG_SIMPLE_ICONS_MONZO);
  if (id == wxART_MOO)  
      return wxString(SVG_SIMPLE_ICONS_MOO);
  if (id == wxART_MOONREPO)  
      return wxString(SVG_SIMPLE_ICONS_MOONREPO);
  if (id == wxART_MORRISONS)  
      return wxString(SVG_SIMPLE_ICONS_MORRISONS);
  if (id == wxART_MOSCOWMETRO)  
      return wxString(SVG_SIMPLE_ICONS_MOSCOWMETRO);
  if (id == wxART_MOTOROLA)  
      return wxString(SVG_SIMPLE_ICONS_MOTOROLA);
  if (id == wxART_MOZILLA)  
      return wxString(SVG_SIMPLE_ICONS_MOZILLA);
  if (id == wxART_MQTT)  
      return wxString(SVG_SIMPLE_ICONS_MQTT);
  if (id == wxART_MSI)  
      return wxString(SVG_SIMPLE_ICONS_MSI);
  if (id == wxART_MSIBUSINESS)  
      return wxString(SVG_SIMPLE_ICONS_MSIBUSINESS);
  if (id == wxART_MTA)  
      return wxString(SVG_SIMPLE_ICONS_MTA);
  if (id == wxART_MTR)  
      return wxString(SVG_SIMPLE_ICONS_MTR);
  if (id == wxART_MUBI)  
      return wxString(SVG_SIMPLE_ICONS_MUBI);
  if (id == wxART_MUI)  
      return wxString(SVG_SIMPLE_ICONS_MUI);
  if (id == wxART_MULESOFT)  
      return wxString(SVG_SIMPLE_ICONS_MULESOFT);
  if (id == wxART_MULLER)  
      return wxString(SVG_SIMPLE_ICONS_MULLER);
  if (id == wxART_MULTISIM)  
      return wxString(SVG_SIMPLE_ICONS_MULTISIM);
  if (id == wxART_MUMBLE)  
      return wxString(SVG_SIMPLE_ICONS_MUMBLE);
  if (id == wxART_MURAL)  
      return wxString(SVG_SIMPLE_ICONS_MURAL);
  if (id == wxART_MUSESCORE)  
      return wxString(SVG_SIMPLE_ICONS_MUSESCORE);
  if (id == wxART_MUSICBRAINZ)  
      return wxString(SVG_SIMPLE_ICONS_MUSICBRAINZ);
  if (id == wxART_MXLINUX)  
      return wxString(SVG_SIMPLE_ICONS_MXLINUX);
  if (id == wxART_MYANIMELIST)  
      return wxString(SVG_SIMPLE_ICONS_MYANIMELIST);
  if (id == wxART_MYOB)  
      return wxString(SVG_SIMPLE_ICONS_MYOB);
  if (id == wxART_MYSPACE)  
      return wxString(SVG_SIMPLE_ICONS_MYSPACE);
  if (id == wxART_MYSQL)  
      return wxString(SVG_SIMPLE_ICONS_MYSQL);
  if (id == wxART_N26)  
      return wxString(SVG_SIMPLE_ICONS_N26);
  if (id == wxART_NAMEBASE)  
      return wxString(SVG_SIMPLE_ICONS_NAMEBASE);
  if (id == wxART_NAMECHEAP)  
      return wxString(SVG_SIMPLE_ICONS_NAMECHEAP);
  if (id == wxART_NANO)  
      return wxString(SVG_SIMPLE_ICONS_NANO);
  if (id == wxART_NASA)  
      return wxString(SVG_SIMPLE_ICONS_NASA);
  if (id == wxART_NATIONALGRID)  
      return wxString(SVG_SIMPLE_ICONS_NATIONALGRID);
  if (id == wxART_NATIVESCRIPT)  
      return wxString(SVG_SIMPLE_ICONS_NATIVESCRIPT);
  if (id == wxART_NATSDOTIO)  
      return wxString(SVG_SIMPLE_ICONS_NATSDOTIO);
  if (id == wxART_NAVER)  
      return wxString(SVG_SIMPLE_ICONS_NAVER);
  if (id == wxART_NBA)  
      return wxString(SVG_SIMPLE_ICONS_NBA);
  if (id == wxART_NBB)  
      return wxString(SVG_SIMPLE_ICONS_NBB);
  if (id == wxART_NBC)  
      return wxString(SVG_SIMPLE_ICONS_NBC);
  if (id == wxART_NDR)  
      return wxString(SVG_SIMPLE_ICONS_NDR);
  if (id == wxART_NEAR)  
      return wxString(SVG_SIMPLE_ICONS_NEAR);
  if (id == wxART_NEC)  
      return wxString(SVG_SIMPLE_ICONS_NEC);
  if (id == wxART_NEO4J)  
      return wxString(SVG_SIMPLE_ICONS_NEO4J);
  if (id == wxART_NEOVIM)  
      return wxString(SVG_SIMPLE_ICONS_NEOVIM);
  if (id == wxART_NESTJS)  
      return wxString(SVG_SIMPLE_ICONS_NESTJS);
  if (id == wxART_NETAPP)  
      return wxString(SVG_SIMPLE_ICONS_NETAPP);
  if (id == wxART_NETBSD)  
      return wxString(SVG_SIMPLE_ICONS_NETBSD);
  if (id == wxART_NETFLIX)  
      return wxString(SVG_SIMPLE_ICONS_NETFLIX);
  if (id == wxART_NETLIFY)  
      return wxString(SVG_SIMPLE_ICONS_NETLIFY);
  if (id == wxART_NETTE)  
      return wxString(SVG_SIMPLE_ICONS_NETTE);
  if (id == wxART_NETTO)  
      return wxString(SVG_SIMPLE_ICONS_NETTO);
  if (id == wxART_NEUTRALINOJS)  
      return wxString(SVG_SIMPLE_ICONS_NEUTRALINOJS);
  if (id == wxART_NEWBALANCE)  
      return wxString(SVG_SIMPLE_ICONS_NEWBALANCE);
  if (id == wxART_NEWEGG)  
      return wxString(SVG_SIMPLE_ICONS_NEWEGG);
  if (id == wxART_NEWJAPANPROWRESTLING)  
      return wxString(SVG_SIMPLE_ICONS_NEWJAPANPROWRESTLING);
  if (id == wxART_NEWRELIC)  
      return wxString(SVG_SIMPLE_ICONS_NEWRELIC);
  if (id == wxART_NEWYORKTIMES)  
      return wxString(SVG_SIMPLE_ICONS_NEWYORKTIMES);
  if (id == wxART_NEXTBILLIONDOTAI)  
      return wxString(SVG_SIMPLE_ICONS_NEXTBILLIONDOTAI);
  if (id == wxART_NEXTCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_NEXTCLOUD);
  if (id == wxART_NEXTDOOR)  
      return wxString(SVG_SIMPLE_ICONS_NEXTDOOR);
  if (id == wxART_NEXTDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_NEXTDOTJS);
  if (id == wxART_NEXTRA)  
      return wxString(SVG_SIMPLE_ICONS_NEXTRA);
  if (id == wxART_NEXTUI)  
      return wxString(SVG_SIMPLE_ICONS_NEXTUI);
  if (id == wxART_NFC)  
      return wxString(SVG_SIMPLE_ICONS_NFC);
  if (id == wxART_NGINX)  
      return wxString(SVG_SIMPLE_ICONS_NGINX);
  if (id == wxART_NGINXPROXYMANAGER)  
      return wxString(SVG_SIMPLE_ICONS_NGINXPROXYMANAGER);
  if (id == wxART_NGROK)  
      return wxString(SVG_SIMPLE_ICONS_NGROK);
  if (id == wxART_NGRX)  
      return wxString(SVG_SIMPLE_ICONS_NGRX);
  if (id == wxART_NICONICO)  
      return wxString(SVG_SIMPLE_ICONS_NICONICO);
  if (id == wxART_NIKE)  
      return wxString(SVG_SIMPLE_ICONS_NIKE);
  if (id == wxART_NIKON)  
      return wxString(SVG_SIMPLE_ICONS_NIKON);
  if (id == wxART_NIM)  
      return wxString(SVG_SIMPLE_ICONS_NIM);
  if (id == wxART_NINTENDO)  
      return wxString(SVG_SIMPLE_ICONS_NINTENDO);
  if (id == wxART_NINTENDO3DS)  
      return wxString(SVG_SIMPLE_ICONS_NINTENDO3DS);
  if (id == wxART_NINTENDOGAMECUBE)  
      return wxString(SVG_SIMPLE_ICONS_NINTENDOGAMECUBE);
  if (id == wxART_NINTENDONETWORK)  
      return wxString(SVG_SIMPLE_ICONS_NINTENDONETWORK);
  if (id == wxART_NINTENDOSWITCH)  
      return wxString(SVG_SIMPLE_ICONS_NINTENDOSWITCH);
  if (id == wxART_NISSAN)  
      return wxString(SVG_SIMPLE_ICONS_NISSAN);
  if (id == wxART_NIXOS)  
      return wxString(SVG_SIMPLE_ICONS_NIXOS);
  if (id == wxART_NODEDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_NODEDOTJS);
  if (id == wxART_NODEMON)  
      return wxString(SVG_SIMPLE_ICONS_NODEMON);
  if (id == wxART_NODERED)  
      return wxString(SVG_SIMPLE_ICONS_NODERED);
  if (id == wxART_NOKIA)  
      return wxString(SVG_SIMPLE_ICONS_NOKIA);
  if (id == wxART_NORCO)  
      return wxString(SVG_SIMPLE_ICONS_NORCO);
  if (id == wxART_NORDVPN)  
      return wxString(SVG_SIMPLE_ICONS_NORDVPN);
  if (id == wxART_NORMALIZEDOTCSS)  
      return wxString(SVG_SIMPLE_ICONS_NORMALIZEDOTCSS);
  if (id == wxART_NORTON)  
      return wxString(SVG_SIMPLE_ICONS_NORTON);
  if (id == wxART_NORWEGIAN)  
      return wxString(SVG_SIMPLE_ICONS_NORWEGIAN);
  if (id == wxART_NOTEPADPLUSPLUS)  
      return wxString(SVG_SIMPLE_ICONS_NOTEPADPLUSPLUS);
  if (id == wxART_NOTION)  
      return wxString(SVG_SIMPLE_ICONS_NOTION);
  if (id == wxART_NOTIST)  
      return wxString(SVG_SIMPLE_ICONS_NOTIST);
  if (id == wxART_NOUNPROJECT)  
      return wxString(SVG_SIMPLE_ICONS_NOUNPROJECT);
  if (id == wxART_NOVU)  
      return wxString(SVG_SIMPLE_ICONS_NOVU);
  if (id == wxART_NOW)  
      return wxString(SVG_SIMPLE_ICONS_NOW);
  if (id == wxART_NPM)  
      return wxString(SVG_SIMPLE_ICONS_NPM);
  if (id == wxART_NRWL)  
      return wxString(SVG_SIMPLE_ICONS_NRWL);
  if (id == wxART_NUBANK)  
      return wxString(SVG_SIMPLE_ICONS_NUBANK);
  if (id == wxART_NUCLEO)  
      return wxString(SVG_SIMPLE_ICONS_NUCLEO);
  if (id == wxART_NUGET)  
      return wxString(SVG_SIMPLE_ICONS_NUGET);
  if (id == wxART_NUKE)  
      return wxString(SVG_SIMPLE_ICONS_NUKE);
  if (id == wxART_NUMBA)  
      return wxString(SVG_SIMPLE_ICONS_NUMBA);
  if (id == wxART_NUMPY)  
      return wxString(SVG_SIMPLE_ICONS_NUMPY);
  if (id == wxART_NUNJUCKS)  
      return wxString(SVG_SIMPLE_ICONS_NUNJUCKS);
  if (id == wxART_NUTANIX)  
      return wxString(SVG_SIMPLE_ICONS_NUTANIX);
  if (id == wxART_NUXTDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_NUXTDOTJS);
  if (id == wxART_NVIDIA)  
      return wxString(SVG_SIMPLE_ICONS_NVIDIA);
  if (id == wxART_NX)  
      return wxString(SVG_SIMPLE_ICONS_NX);
  if (id == wxART_NXP)  
      return wxString(SVG_SIMPLE_ICONS_NXP);
  if (id == wxART_NZXT)  
      return wxString(SVG_SIMPLE_ICONS_NZXT);
  if (id == wxART_OBSERVABLE)  
      return wxString(SVG_SIMPLE_ICONS_OBSERVABLE);
  if (id == wxART_OBSIDIAN)  
      return wxString(SVG_SIMPLE_ICONS_OBSIDIAN);
  if (id == wxART_OBSSTUDIO)  
      return wxString(SVG_SIMPLE_ICONS_OBSSTUDIO);
  if (id == wxART_OCAML)  
      return wxString(SVG_SIMPLE_ICONS_OCAML);
  if (id == wxART_OCTANERENDER)  
      return wxString(SVG_SIMPLE_ICONS_OCTANERENDER);
  if (id == wxART_OCTAVE)  
      return wxString(SVG_SIMPLE_ICONS_OCTAVE);
  if (id == wxART_OCTOBERCMS)  
      return wxString(SVG_SIMPLE_ICONS_OCTOBERCMS);
  if (id == wxART_OCTOPRINT)  
      return wxString(SVG_SIMPLE_ICONS_OCTOPRINT);
  if (id == wxART_OCTOPUSDEPLOY)  
      return wxString(SVG_SIMPLE_ICONS_OCTOPUSDEPLOY);
  if (id == wxART_OCULUS)  
      return wxString(SVG_SIMPLE_ICONS_OCULUS);
  if (id == wxART_ODNOKLASSNIKI)  
      return wxString(SVG_SIMPLE_ICONS_ODNOKLASSNIKI);
  if (id == wxART_ODYSEE)  
      return wxString(SVG_SIMPLE_ICONS_ODYSEE);
  if (id == wxART_OHDEAR)  
      return wxString(SVG_SIMPLE_ICONS_OHDEAR);
  if (id == wxART_OKCUPID)  
      return wxString(SVG_SIMPLE_ICONS_OKCUPID);
  if (id == wxART_OKTA)  
      return wxString(SVG_SIMPLE_ICONS_OKTA);
  if (id == wxART_ONEPLUS)  
      return wxString(SVG_SIMPLE_ICONS_ONEPLUS);
  if (id == wxART_ONLYFANS)  
      return wxString(SVG_SIMPLE_ICONS_ONLYFANS);
  if (id == wxART_ONLYOFFICE)  
      return wxString(SVG_SIMPLE_ICONS_ONLYOFFICE);
  if (id == wxART_ONNX)  
      return wxString(SVG_SIMPLE_ICONS_ONNX);
  if (id == wxART_ONSTAR)  
      return wxString(SVG_SIMPLE_ICONS_ONSTAR);
  if (id == wxART_OPEL)  
      return wxString(SVG_SIMPLE_ICONS_OPEL);
  if (id == wxART_OPENACCESS)  
      return wxString(SVG_SIMPLE_ICONS_OPENACCESS);
  if (id == wxART_OPENAI)  
      return wxString(SVG_SIMPLE_ICONS_OPENAI);
  if (id == wxART_OPENAIGYM)  
      return wxString(SVG_SIMPLE_ICONS_OPENAIGYM);
  if (id == wxART_OPENAPIINITIATIVE)  
      return wxString(SVG_SIMPLE_ICONS_OPENAPIINITIATIVE);
  if (id == wxART_OPENBADGES)  
      return wxString(SVG_SIMPLE_ICONS_OPENBADGES);
  if (id == wxART_OPENBSD)  
      return wxString(SVG_SIMPLE_ICONS_OPENBSD);
  if (id == wxART_OPENBUGBOUNTY)  
      return wxString(SVG_SIMPLE_ICONS_OPENBUGBOUNTY);
  if (id == wxART_OPENCOLLECTIVE)  
      return wxString(SVG_SIMPLE_ICONS_OPENCOLLECTIVE);
  if (id == wxART_OPENCONTAINERSINITIATIVE)  
      return wxString(SVG_SIMPLE_ICONS_OPENCONTAINERSINITIATIVE);
  if (id == wxART_OPENCV)  
      return wxString(SVG_SIMPLE_ICONS_OPENCV);
  if (id == wxART_OPENFAAS)  
      return wxString(SVG_SIMPLE_ICONS_OPENFAAS);
  if (id == wxART_OPENGL)  
      return wxString(SVG_SIMPLE_ICONS_OPENGL);
  if (id == wxART_OPENID)  
      return wxString(SVG_SIMPLE_ICONS_OPENID);
  if (id == wxART_OPENJDK)  
      return wxString(SVG_SIMPLE_ICONS_OPENJDK);
  if (id == wxART_OPENLAYERS)  
      return wxString(SVG_SIMPLE_ICONS_OPENLAYERS);
  if (id == wxART_OPENMINED)  
      return wxString(SVG_SIMPLE_ICONS_OPENMINED);
  if (id == wxART_OPENNEBULA)  
      return wxString(SVG_SIMPLE_ICONS_OPENNEBULA);
  if (id == wxART_OPENPROJECT)  
      return wxString(SVG_SIMPLE_ICONS_OPENPROJECT);
  if (id == wxART_OPENSCAD)  
      return wxString(SVG_SIMPLE_ICONS_OPENSCAD);
  if (id == wxART_OPENSEA)  
      return wxString(SVG_SIMPLE_ICONS_OPENSEA);
  if (id == wxART_OPENSEARCH)  
      return wxString(SVG_SIMPLE_ICONS_OPENSEARCH);
  if (id == wxART_OPENSOURCEHARDWARE)  
      return wxString(SVG_SIMPLE_ICONS_OPENSOURCEHARDWARE);
  if (id == wxART_OPENSOURCEINITIATIVE)  
      return wxString(SVG_SIMPLE_ICONS_OPENSOURCEINITIATIVE);
  if (id == wxART_OPENSSL)  
      return wxString(SVG_SIMPLE_ICONS_OPENSSL);
  if (id == wxART_OPENSTACK)  
      return wxString(SVG_SIMPLE_ICONS_OPENSTACK);
  if (id == wxART_OPENSTREETMAP)  
      return wxString(SVG_SIMPLE_ICONS_OPENSTREETMAP);
  if (id == wxART_OPENSUSE)  
      return wxString(SVG_SIMPLE_ICONS_OPENSUSE);
  if (id == wxART_OPENTELEMETRY)  
      return wxString(SVG_SIMPLE_ICONS_OPENTELEMETRY);
  if (id == wxART_OPENTEXT)  
      return wxString(SVG_SIMPLE_ICONS_OPENTEXT);
  if (id == wxART_OPENTF)  
      return wxString(SVG_SIMPLE_ICONS_OPENTF);
  if (id == wxART_OPENVERSE)  
      return wxString(SVG_SIMPLE_ICONS_OPENVERSE);
  if (id == wxART_OPENVPN)  
      return wxString(SVG_SIMPLE_ICONS_OPENVPN);
  if (id == wxART_OPENWRT)  
      return wxString(SVG_SIMPLE_ICONS_OPENWRT);
  if (id == wxART_OPENZEPPELIN)  
      return wxString(SVG_SIMPLE_ICONS_OPENZEPPELIN);
  if (id == wxART_OPENZFS)  
      return wxString(SVG_SIMPLE_ICONS_OPENZFS);
  if (id == wxART_OPERA)  
      return wxString(SVG_SIMPLE_ICONS_OPERA);
  if (id == wxART_OPERAGX)  
      return wxString(SVG_SIMPLE_ICONS_OPERAGX);
  if (id == wxART_OPNSENSE)  
      return wxString(SVG_SIMPLE_ICONS_OPNSENSE);
  if (id == wxART_OPSGENIE)  
      return wxString(SVG_SIMPLE_ICONS_OPSGENIE);
  if (id == wxART_OPSLEVEL)  
      return wxString(SVG_SIMPLE_ICONS_OPSLEVEL);
  if (id == wxART_ORACLE)  
      return wxString(SVG_SIMPLE_ICONS_ORACLE);
  if (id == wxART_ORCID)  
      return wxString(SVG_SIMPLE_ICONS_ORCID);
  if (id == wxART_OREILLY)  
      return wxString(SVG_SIMPLE_ICONS_OREILLY);
  if (id == wxART_ORG)  
      return wxString(SVG_SIMPLE_ICONS_ORG);
  if (id == wxART_ORIGIN)  
      return wxString(SVG_SIMPLE_ICONS_ORIGIN);
  if (id == wxART_OSANO)  
      return wxString(SVG_SIMPLE_ICONS_OSANO);
  if (id == wxART_OSGEO)  
      return wxString(SVG_SIMPLE_ICONS_OSGEO);
  if (id == wxART_OSHKOSH)  
      return wxString(SVG_SIMPLE_ICONS_OSHKOSH);
  if (id == wxART_OSMC)  
      return wxString(SVG_SIMPLE_ICONS_OSMC);
  if (id == wxART_OSU)  
      return wxString(SVG_SIMPLE_ICONS_OSU);
  if (id == wxART_OTTO)  
      return wxString(SVG_SIMPLE_ICONS_OTTO);
  if (id == wxART_OVERCAST)  
      return wxString(SVG_SIMPLE_ICONS_OVERCAST);
  if (id == wxART_OVERLEAF)  
      return wxString(SVG_SIMPLE_ICONS_OVERLEAF);
  if (id == wxART_OVH)  
      return wxString(SVG_SIMPLE_ICONS_OVH);
  if (id == wxART_OWASP)  
      return wxString(SVG_SIMPLE_ICONS_OWASP);
  if (id == wxART_OWNCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_OWNCLOUD);
  if (id == wxART_OXYGEN)  
      return wxString(SVG_SIMPLE_ICONS_OXYGEN);
  if (id == wxART_OYO)  
      return wxString(SVG_SIMPLE_ICONS_OYO);
  if (id == wxART_P5DOTJS)  
      return wxString(SVG_SIMPLE_ICONS_P5DOTJS);
  if (id == wxART_PACKAGIST)  
      return wxString(SVG_SIMPLE_ICONS_PACKAGIST);
  if (id == wxART_PACKER)  
      return wxString(SVG_SIMPLE_ICONS_PACKER);
  if (id == wxART_PADDLEPADDLE)  
      return wxString(SVG_SIMPLE_ICONS_PADDLEPADDLE);
  if (id == wxART_PADDYPOWER)  
      return wxString(SVG_SIMPLE_ICONS_PADDYPOWER);
  if (id == wxART_PAGEKIT)  
      return wxString(SVG_SIMPLE_ICONS_PAGEKIT);
  if (id == wxART_PAGERDUTY)  
      return wxString(SVG_SIMPLE_ICONS_PAGERDUTY);
  if (id == wxART_PAGESPEEDINSIGHTS)  
      return wxString(SVG_SIMPLE_ICONS_PAGESPEEDINSIGHTS);
  if (id == wxART_PAGSEGURO)  
      return wxString(SVG_SIMPLE_ICONS_PAGSEGURO);
  if (id == wxART_PALANTIR)  
      return wxString(SVG_SIMPLE_ICONS_PALANTIR);
  if (id == wxART_PALOALTONETWORKS)  
      return wxString(SVG_SIMPLE_ICONS_PALOALTONETWORKS);
  if (id == wxART_PALOALTOSOFTWARE)  
      return wxString(SVG_SIMPLE_ICONS_PALOALTOSOFTWARE);
  if (id == wxART_PANASONIC)  
      return wxString(SVG_SIMPLE_ICONS_PANASONIC);
  if (id == wxART_PANDAS)  
      return wxString(SVG_SIMPLE_ICONS_PANDAS);
  if (id == wxART_PANDORA)  
      return wxString(SVG_SIMPLE_ICONS_PANDORA);
  if (id == wxART_PANTHEON)  
      return wxString(SVG_SIMPLE_ICONS_PANTHEON);
  if (id == wxART_PAPERSPACE)  
      return wxString(SVG_SIMPLE_ICONS_PAPERSPACE);
  if (id == wxART_PARITYSUBSTRATE)  
      return wxString(SVG_SIMPLE_ICONS_PARITYSUBSTRATE);
  if (id == wxART_PARSEDOTLY)  
      return wxString(SVG_SIMPLE_ICONS_PARSEDOTLY);
  if (id == wxART_PASSPORT)  
      return wxString(SVG_SIMPLE_ICONS_PASSPORT);
  if (id == wxART_PASTEBIN)  
      return wxString(SVG_SIMPLE_ICONS_PASTEBIN);
  if (id == wxART_PATREON)  
      return wxString(SVG_SIMPLE_ICONS_PATREON);
  if (id == wxART_PAYCHEX)  
      return wxString(SVG_SIMPLE_ICONS_PAYCHEX);
  if (id == wxART_PAYLOADCMS)  
      return wxString(SVG_SIMPLE_ICONS_PAYLOADCMS);
  if (id == wxART_PAYONEER)  
      return wxString(SVG_SIMPLE_ICONS_PAYONEER);
  if (id == wxART_PAYPAL)  
      return wxString(SVG_SIMPLE_ICONS_PAYPAL);
  if (id == wxART_PAYTM)  
      return wxString(SVG_SIMPLE_ICONS_PAYTM);
  if (id == wxART_PCGAMINGWIKI)  
      return wxString(SVG_SIMPLE_ICONS_PCGAMINGWIKI);
  if (id == wxART_PEAKDESIGN)  
      return wxString(SVG_SIMPLE_ICONS_PEAKDESIGN);
  if (id == wxART_PEARSON)  
      return wxString(SVG_SIMPLE_ICONS_PEARSON);
  if (id == wxART_PEERLIST)  
      return wxString(SVG_SIMPLE_ICONS_PEERLIST);
  if (id == wxART_PEERTUBE)  
      return wxString(SVG_SIMPLE_ICONS_PEERTUBE);
  if (id == wxART_PEGASUSAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_PEGASUSAIRLINES);
  if (id == wxART_PELICAN)  
      return wxString(SVG_SIMPLE_ICONS_PELICAN);
  if (id == wxART_PELOTON)  
      return wxString(SVG_SIMPLE_ICONS_PELOTON);
  if (id == wxART_PENNY)  
      return wxString(SVG_SIMPLE_ICONS_PENNY);
  if (id == wxART_PENPOT)  
      return wxString(SVG_SIMPLE_ICONS_PENPOT);
  if (id == wxART_PEPSI)  
      return wxString(SVG_SIMPLE_ICONS_PEPSI);
  if (id == wxART_PERCY)  
      return wxString(SVG_SIMPLE_ICONS_PERCY);
  if (id == wxART_PERFORCE)  
      return wxString(SVG_SIMPLE_ICONS_PERFORCE);
  if (id == wxART_PERL)  
      return wxString(SVG_SIMPLE_ICONS_PERL);
  if (id == wxART_PERSISTENT)  
      return wxString(SVG_SIMPLE_ICONS_PERSISTENT);
  if (id == wxART_PERSONIO)  
      return wxString(SVG_SIMPLE_ICONS_PERSONIO);
  if (id == wxART_PETSATHOME)  
      return wxString(SVG_SIMPLE_ICONS_PETSATHOME);
  if (id == wxART_PEUGEOT)  
      return wxString(SVG_SIMPLE_ICONS_PEUGEOT);
  if (id == wxART_PEXELS)  
      return wxString(SVG_SIMPLE_ICONS_PEXELS);
  if (id == wxART_PFSENSE)  
      return wxString(SVG_SIMPLE_ICONS_PFSENSE);
  if (id == wxART_PHABRICATOR)  
      return wxString(SVG_SIMPLE_ICONS_PHABRICATOR);
  if (id == wxART_PHILIPSHUE)  
      return wxString(SVG_SIMPLE_ICONS_PHILIPSHUE);
  if (id == wxART_PHOENIXFRAMEWORK)  
      return wxString(SVG_SIMPLE_ICONS_PHOENIXFRAMEWORK);
  if (id == wxART_PHONEPE)  
      return wxString(SVG_SIMPLE_ICONS_PHONEPE);
  if (id == wxART_PHOTOBUCKET)  
      return wxString(SVG_SIMPLE_ICONS_PHOTOBUCKET);
  if (id == wxART_PHOTOCROWD)  
      return wxString(SVG_SIMPLE_ICONS_PHOTOCROWD);
  if (id == wxART_PHOTOPEA)  
      return wxString(SVG_SIMPLE_ICONS_PHOTOPEA);
  if (id == wxART_PHP)  
      return wxString(SVG_SIMPLE_ICONS_PHP);
  if (id == wxART_PHPMYADMIN)  
      return wxString(SVG_SIMPLE_ICONS_PHPMYADMIN);
  if (id == wxART_PHPSTORM)  
      return wxString(SVG_SIMPLE_ICONS_PHPSTORM);
  if (id == wxART_PIAGGIOGROUP)  
      return wxString(SVG_SIMPLE_ICONS_PIAGGIOGROUP);
  if (id == wxART_PICARDSURGELES)  
      return wxString(SVG_SIMPLE_ICONS_PICARDSURGELES);
  if (id == wxART_PICARTODOTTV)  
      return wxString(SVG_SIMPLE_ICONS_PICARTODOTTV);
  if (id == wxART_PICNIC)  
      return wxString(SVG_SIMPLE_ICONS_PICNIC);
  if (id == wxART_PICPAY)  
      return wxString(SVG_SIMPLE_ICONS_PICPAY);
  if (id == wxART_PIHOLE)  
      return wxString(SVG_SIMPLE_ICONS_PIHOLE);
  if (id == wxART_PIMCORE)  
      return wxString(SVG_SIMPLE_ICONS_PIMCORE);
  if (id == wxART_PINBOARD)  
      return wxString(SVG_SIMPLE_ICONS_PINBOARD);
  if (id == wxART_PINGDOM)  
      return wxString(SVG_SIMPLE_ICONS_PINGDOM);
  if (id == wxART_PINTEREST)  
      return wxString(SVG_SIMPLE_ICONS_PINTEREST);
  if (id == wxART_PIONEERDJ)  
      return wxString(SVG_SIMPLE_ICONS_PIONEERDJ);
  if (id == wxART_PIVOTALTRACKER)  
      return wxString(SVG_SIMPLE_ICONS_PIVOTALTRACKER);
  if (id == wxART_PIWIGO)  
      return wxString(SVG_SIMPLE_ICONS_PIWIGO);
  if (id == wxART_PIX)  
      return wxString(SVG_SIMPLE_ICONS_PIX);
  if (id == wxART_PIXABAY)  
      return wxString(SVG_SIMPLE_ICONS_PIXABAY);
  if (id == wxART_PIXIV)  
      return wxString(SVG_SIMPLE_ICONS_PIXIV);
  if (id == wxART_PKGSRC)  
      return wxString(SVG_SIMPLE_ICONS_PKGSRC);
  if (id == wxART_PLANET)  
      return wxString(SVG_SIMPLE_ICONS_PLANET);
  if (id == wxART_PLANETSCALE)  
      return wxString(SVG_SIMPLE_ICONS_PLANETSCALE);
  if (id == wxART_PLANGRID)  
      return wxString(SVG_SIMPLE_ICONS_PLANGRID);
  if (id == wxART_PLATFORMDOTSH)  
      return wxString(SVG_SIMPLE_ICONS_PLATFORMDOTSH);
  if (id == wxART_PLATZI)  
      return wxString(SVG_SIMPLE_ICONS_PLATZI);
  if (id == wxART_PLAUSIBLEANALYTICS)  
      return wxString(SVG_SIMPLE_ICONS_PLAUSIBLEANALYTICS);
  if (id == wxART_PLAYCANVAS)  
      return wxString(SVG_SIMPLE_ICONS_PLAYCANVAS);
  if (id == wxART_PLAYERDOTME)  
      return wxString(SVG_SIMPLE_ICONS_PLAYERDOTME);
  if (id == wxART_PLAYERFM)  
      return wxString(SVG_SIMPLE_ICONS_PLAYERFM);
  if (id == wxART_PLAYSTATION)  
      return wxString(SVG_SIMPLE_ICONS_PLAYSTATION);
  if (id == wxART_PLAYSTATION2)  
      return wxString(SVG_SIMPLE_ICONS_PLAYSTATION2);
  if (id == wxART_PLAYSTATION3)  
      return wxString(SVG_SIMPLE_ICONS_PLAYSTATION3);
  if (id == wxART_PLAYSTATION4)  
      return wxString(SVG_SIMPLE_ICONS_PLAYSTATION4);
  if (id == wxART_PLAYSTATION5)  
      return wxString(SVG_SIMPLE_ICONS_PLAYSTATION5);
  if (id == wxART_PLAYSTATIONVITA)  
      return wxString(SVG_SIMPLE_ICONS_PLAYSTATIONVITA);
  if (id == wxART_PLAYWRIGHT)  
      return wxString(SVG_SIMPLE_ICONS_PLAYWRIGHT);
  if (id == wxART_PLEROMA)  
      return wxString(SVG_SIMPLE_ICONS_PLEROMA);
  if (id == wxART_PLESK)  
      return wxString(SVG_SIMPLE_ICONS_PLESK);
  if (id == wxART_PLEX)  
      return wxString(SVG_SIMPLE_ICONS_PLEX);
  if (id == wxART_PLOTLY)  
      return wxString(SVG_SIMPLE_ICONS_PLOTLY);
  if (id == wxART_PLURALSIGHT)  
      return wxString(SVG_SIMPLE_ICONS_PLURALSIGHT);
  if (id == wxART_PLURK)  
      return wxString(SVG_SIMPLE_ICONS_PLURK);
  if (id == wxART_PLUSCODES)  
      return wxString(SVG_SIMPLE_ICONS_PLUSCODES);
  if (id == wxART_PM2)  
      return wxString(SVG_SIMPLE_ICONS_PM2);
  if (id == wxART_PNPM)  
      return wxString(SVG_SIMPLE_ICONS_PNPM);
  if (id == wxART_POCKET)  
      return wxString(SVG_SIMPLE_ICONS_POCKET);
  if (id == wxART_POCKETBASE)  
      return wxString(SVG_SIMPLE_ICONS_POCKETBASE);
  if (id == wxART_POCKETCASTS)  
      return wxString(SVG_SIMPLE_ICONS_POCKETCASTS);
  if (id == wxART_PODCASTADDICT)  
      return wxString(SVG_SIMPLE_ICONS_PODCASTADDICT);
  if (id == wxART_PODCASTINDEX)  
      return wxString(SVG_SIMPLE_ICONS_PODCASTINDEX);
  if (id == wxART_PODMAN)  
      return wxString(SVG_SIMPLE_ICONS_PODMAN);
  if (id == wxART_POE)  
      return wxString(SVG_SIMPLE_ICONS_POE);
  if (id == wxART_POETRY)  
      return wxString(SVG_SIMPLE_ICONS_POETRY);
  if (id == wxART_POINTY)  
      return wxString(SVG_SIMPLE_ICONS_POINTY);
  if (id == wxART_POKEMON)  
      return wxString(SVG_SIMPLE_ICONS_POKEMON);
  if (id == wxART_POLARS)  
      return wxString(SVG_SIMPLE_ICONS_POLARS);
  if (id == wxART_POLKADOT)  
      return wxString(SVG_SIMPLE_ICONS_POLKADOT);
  if (id == wxART_POLY)  
      return wxString(SVG_SIMPLE_ICONS_POLY);
  if (id == wxART_POLYMERPROJECT)  
      return wxString(SVG_SIMPLE_ICONS_POLYMERPROJECT);
  if (id == wxART_POLYWORK)  
      return wxString(SVG_SIMPLE_ICONS_POLYWORK);
  if (id == wxART_POPOS)  
      return wxString(SVG_SIMPLE_ICONS_POPOS);
  if (id == wxART_PORSCHE)  
      return wxString(SVG_SIMPLE_ICONS_PORSCHE);
  if (id == wxART_PORTAINER)  
      return wxString(SVG_SIMPLE_ICONS_PORTAINER);
  if (id == wxART_POSTCSS)  
      return wxString(SVG_SIMPLE_ICONS_POSTCSS);
  if (id == wxART_POSTGRESQL)  
      return wxString(SVG_SIMPLE_ICONS_POSTGRESQL);
  if (id == wxART_POSTHOG)  
      return wxString(SVG_SIMPLE_ICONS_POSTHOG);
  if (id == wxART_POSTMAN)  
      return wxString(SVG_SIMPLE_ICONS_POSTMAN);
  if (id == wxART_POSTMATES)  
      return wxString(SVG_SIMPLE_ICONS_POSTMATES);
  if (id == wxART_POWERAPPS)  
      return wxString(SVG_SIMPLE_ICONS_POWERAPPS);
  if (id == wxART_POWERAUTOMATE)  
      return wxString(SVG_SIMPLE_ICONS_POWERAUTOMATE);
  if (id == wxART_POWERBI)  
      return wxString(SVG_SIMPLE_ICONS_POWERBI);
  if (id == wxART_POWERFX)  
      return wxString(SVG_SIMPLE_ICONS_POWERFX);
  if (id == wxART_POWERPAGES)  
      return wxString(SVG_SIMPLE_ICONS_POWERPAGES);
  if (id == wxART_POWERS)  
      return wxString(SVG_SIMPLE_ICONS_POWERS);
  if (id == wxART_POWERSHELL)  
      return wxString(SVG_SIMPLE_ICONS_POWERSHELL);
  if (id == wxART_POWERVIRTUALAGENTS)  
      return wxString(SVG_SIMPLE_ICONS_POWERVIRTUALAGENTS);
  if (id == wxART_PRDOTCO)  
      return wxString(SVG_SIMPLE_ICONS_PRDOTCO);
  if (id == wxART_PREACT)  
      return wxString(SVG_SIMPLE_ICONS_PREACT);
  if (id == wxART_PRECOMMIT)  
      return wxString(SVG_SIMPLE_ICONS_PRECOMMIT);
  if (id == wxART_PREFECT)  
      return wxString(SVG_SIMPLE_ICONS_PREFECT);
  if (id == wxART_PREMIERLEAGUE)  
      return wxString(SVG_SIMPLE_ICONS_PREMIERLEAGUE);
  if (id == wxART_PRESTASHOP)  
      return wxString(SVG_SIMPLE_ICONS_PRESTASHOP);
  if (id == wxART_PRESTO)  
      return wxString(SVG_SIMPLE_ICONS_PRESTO);
  if (id == wxART_PRETTIER)  
      return wxString(SVG_SIMPLE_ICONS_PRETTIER);
  if (id == wxART_PRETZEL)  
      return wxString(SVG_SIMPLE_ICONS_PRETZEL);
  if (id == wxART_PREVENTION)  
      return wxString(SVG_SIMPLE_ICONS_PREVENTION);
  if (id == wxART_PREZI)  
      return wxString(SVG_SIMPLE_ICONS_PREZI);
  if (id == wxART_PRIME)  
      return wxString(SVG_SIMPLE_ICONS_PRIME);
  if (id == wxART_PRIMEVIDEO)  
      return wxString(SVG_SIMPLE_ICONS_PRIMEVIDEO);
  if (id == wxART_PRINTABLES)  
      return wxString(SVG_SIMPLE_ICONS_PRINTABLES);
  if (id == wxART_PRISMA)  
      return wxString(SVG_SIMPLE_ICONS_PRISMA);
  if (id == wxART_PRISMIC)  
      return wxString(SVG_SIMPLE_ICONS_PRISMIC);
  if (id == wxART_PRIVATEINTERNETACCESS)  
      return wxString(SVG_SIMPLE_ICONS_PRIVATEINTERNETACCESS);
  if (id == wxART_PROBOT)  
      return wxString(SVG_SIMPLE_ICONS_PROBOT);
  if (id == wxART_PROCESSINGFOUNDATION)  
      return wxString(SVG_SIMPLE_ICONS_PROCESSINGFOUNDATION);
  if (id == wxART_PROCESSWIRE)  
      return wxString(SVG_SIMPLE_ICONS_PROCESSWIRE);
  if (id == wxART_PRODUCTHUNT)  
      return wxString(SVG_SIMPLE_ICONS_PRODUCTHUNT);
  if (id == wxART_PROGATE)  
      return wxString(SVG_SIMPLE_ICONS_PROGATE);
  if (id == wxART_PROGRESS)  
      return wxString(SVG_SIMPLE_ICONS_PROGRESS);
  if (id == wxART_PROMETHEUS)  
      return wxString(SVG_SIMPLE_ICONS_PROMETHEUS);
  if (id == wxART_PROSIEBEN)  
      return wxString(SVG_SIMPLE_ICONS_PROSIEBEN);
  if (id == wxART_PROTOCOLSDOTIO)  
      return wxString(SVG_SIMPLE_ICONS_PROTOCOLSDOTIO);
  if (id == wxART_PROTODOTIO)  
      return wxString(SVG_SIMPLE_ICONS_PROTODOTIO);
  if (id == wxART_PROTON)  
      return wxString(SVG_SIMPLE_ICONS_PROTON);
  if (id == wxART_PROTONCALENDAR)  
      return wxString(SVG_SIMPLE_ICONS_PROTONCALENDAR);
  if (id == wxART_PROTONDB)  
      return wxString(SVG_SIMPLE_ICONS_PROTONDB);
  if (id == wxART_PROTONDRIVE)  
      return wxString(SVG_SIMPLE_ICONS_PROTONDRIVE);
  if (id == wxART_PROTONMAIL)  
      return wxString(SVG_SIMPLE_ICONS_PROTONMAIL);
  if (id == wxART_PROTONVPN)  
      return wxString(SVG_SIMPLE_ICONS_PROTONVPN);
  if (id == wxART_PROTOOLS)  
      return wxString(SVG_SIMPLE_ICONS_PROTOOLS);
  if (id == wxART_PROTRACTOR)  
      return wxString(SVG_SIMPLE_ICONS_PROTRACTOR);
  if (id == wxART_PROXMOX)  
      return wxString(SVG_SIMPLE_ICONS_PROXMOX);
  if (id == wxART_PTERODACTYL)  
      return wxString(SVG_SIMPLE_ICONS_PTERODACTYL);
  if (id == wxART_PUBG)  
      return wxString(SVG_SIMPLE_ICONS_PUBG);
  if (id == wxART_PUBLONS)  
      return wxString(SVG_SIMPLE_ICONS_PUBLONS);
  if (id == wxART_PUBMED)  
      return wxString(SVG_SIMPLE_ICONS_PUBMED);
  if (id == wxART_PUG)  
      return wxString(SVG_SIMPLE_ICONS_PUG);
  if (id == wxART_PULUMI)  
      return wxString(SVG_SIMPLE_ICONS_PULUMI);
  if (id == wxART_PUMA)  
      return wxString(SVG_SIMPLE_ICONS_PUMA);
  if (id == wxART_PUPPET)  
      return wxString(SVG_SIMPLE_ICONS_PUPPET);
  if (id == wxART_PUPPETEER)  
      return wxString(SVG_SIMPLE_ICONS_PUPPETEER);
  if (id == wxART_PURESCRIPT)  
      return wxString(SVG_SIMPLE_ICONS_PURESCRIPT);
  if (id == wxART_PURGECSS)  
      return wxString(SVG_SIMPLE_ICONS_PURGECSS);
  if (id == wxART_PURISM)  
      return wxString(SVG_SIMPLE_ICONS_PURISM);
  if (id == wxART_PUSHER)  
      return wxString(SVG_SIMPLE_ICONS_PUSHER);
  if (id == wxART_PWA)  
      return wxString(SVG_SIMPLE_ICONS_PWA);
  if (id == wxART_PYCHARM)  
      return wxString(SVG_SIMPLE_ICONS_PYCHARM);
  if (id == wxART_PYDANTIC)  
      return wxString(SVG_SIMPLE_ICONS_PYDANTIC);
  if (id == wxART_PYG)  
      return wxString(SVG_SIMPLE_ICONS_PYG);
  if (id == wxART_PYPI)  
      return wxString(SVG_SIMPLE_ICONS_PYPI);
  if (id == wxART_PYPY)  
      return wxString(SVG_SIMPLE_ICONS_PYPY);
  if (id == wxART_PYSCAFFOLD)  
      return wxString(SVG_SIMPLE_ICONS_PYSCAFFOLD);
  if (id == wxART_PYSYFT)  
      return wxString(SVG_SIMPLE_ICONS_PYSYFT);
  if (id == wxART_PYTEST)  
      return wxString(SVG_SIMPLE_ICONS_PYTEST);
  if (id == wxART_PYTHON)  
      return wxString(SVG_SIMPLE_ICONS_PYTHON);
  if (id == wxART_PYTHONANYWHERE)  
      return wxString(SVG_SIMPLE_ICONS_PYTHONANYWHERE);
  if (id == wxART_PYTORCH)  
      return wxString(SVG_SIMPLE_ICONS_PYTORCH);
  if (id == wxART_PYUP)  
      return wxString(SVG_SIMPLE_ICONS_PYUP);
  if (id == wxART_QANTAS)  
      return wxString(SVG_SIMPLE_ICONS_QANTAS);
  if (id == wxART_QATARAIRWAYS)  
      return wxString(SVG_SIMPLE_ICONS_QATARAIRWAYS);
  if (id == wxART_QEMU)  
      return wxString(SVG_SIMPLE_ICONS_QEMU);
  if (id == wxART_QGIS)  
      return wxString(SVG_SIMPLE_ICONS_QGIS);
  if (id == wxART_QI)  
      return wxString(SVG_SIMPLE_ICONS_QI);
  if (id == wxART_QIITA)  
      return wxString(SVG_SIMPLE_ICONS_QIITA);
  if (id == wxART_QISKIT)  
      return wxString(SVG_SIMPLE_ICONS_QISKIT);
  if (id == wxART_QIWI)  
      return wxString(SVG_SIMPLE_ICONS_QIWI);
  if (id == wxART_QLIK)  
      return wxString(SVG_SIMPLE_ICONS_QLIK);
  if (id == wxART_QMK)  
      return wxString(SVG_SIMPLE_ICONS_QMK);
  if (id == wxART_QT)  
      return wxString(SVG_SIMPLE_ICONS_QT);
  if (id == wxART_QUALCOMM)  
      return wxString(SVG_SIMPLE_ICONS_QUALCOMM);
  if (id == wxART_QUALTRICS)  
      return wxString(SVG_SIMPLE_ICONS_QUALTRICS);
  if (id == wxART_QUALYS)  
      return wxString(SVG_SIMPLE_ICONS_QUALYS);
  if (id == wxART_QUANTCAST)  
      return wxString(SVG_SIMPLE_ICONS_QUANTCAST);
  if (id == wxART_QUANTCONNECT)  
      return wxString(SVG_SIMPLE_ICONS_QUANTCONNECT);
  if (id == wxART_QUARKUS)  
      return wxString(SVG_SIMPLE_ICONS_QUARKUS);
  if (id == wxART_QUASAR)  
      return wxString(SVG_SIMPLE_ICONS_QUASAR);
  if (id == wxART_QUBESOS)  
      return wxString(SVG_SIMPLE_ICONS_QUBESOS);
  if (id == wxART_QUEST)  
      return wxString(SVG_SIMPLE_ICONS_QUEST);
  if (id == wxART_QUICKBOOKS)  
      return wxString(SVG_SIMPLE_ICONS_QUICKBOOKS);
  if (id == wxART_QUICKLOOK)  
      return wxString(SVG_SIMPLE_ICONS_QUICKLOOK);
  if (id == wxART_QUICKTIME)  
      return wxString(SVG_SIMPLE_ICONS_QUICKTIME);
  if (id == wxART_QUIP)  
      return wxString(SVG_SIMPLE_ICONS_QUIP);
  if (id == wxART_QUORA)  
      return wxString(SVG_SIMPLE_ICONS_QUORA);
  if (id == wxART_QWANT)  
      return wxString(SVG_SIMPLE_ICONS_QWANT);
  if (id == wxART_QWIKLABS)  
      return wxString(SVG_SIMPLE_ICONS_QWIKLABS);
  if (id == wxART_QZONE)  
      return wxString(SVG_SIMPLE_ICONS_QZONE);
  if (id == wxART_R)  
      return wxString(SVG_SIMPLE_ICONS_R);
  if (id == wxART_R3)  
      return wxString(SVG_SIMPLE_ICONS_R3);
  if (id == wxART_RABBITMQ)  
      return wxString(SVG_SIMPLE_ICONS_RABBITMQ);
  if (id == wxART_RACKET)  
      return wxString(SVG_SIMPLE_ICONS_RACKET);
  if (id == wxART_RADAR)  
      return wxString(SVG_SIMPLE_ICONS_RADAR);
  if (id == wxART_RADIOPUBLIC)  
      return wxString(SVG_SIMPLE_ICONS_RADIOPUBLIC);
  if (id == wxART_RADIXUI)  
      return wxString(SVG_SIMPLE_ICONS_RADIXUI);
  if (id == wxART_RADSTUDIO)  
      return wxString(SVG_SIMPLE_ICONS_RADSTUDIO);
  if (id == wxART_RAILWAY)  
      return wxString(SVG_SIMPLE_ICONS_RAILWAY);
  if (id == wxART_RAINMETER)  
      return wxString(SVG_SIMPLE_ICONS_RAINMETER);
  if (id == wxART_RAKUTEN)  
      return wxString(SVG_SIMPLE_ICONS_RAKUTEN);
  if (id == wxART_RAM)  
      return wxString(SVG_SIMPLE_ICONS_RAM);
  if (id == wxART_RANCHER)  
      return wxString(SVG_SIMPLE_ICONS_RANCHER);
  if (id == wxART_RARIBLE)  
      return wxString(SVG_SIMPLE_ICONS_RARIBLE);
  if (id == wxART_RASA)  
      return wxString(SVG_SIMPLE_ICONS_RASA);
  if (id == wxART_RASPBERRYPI)  
      return wxString(SVG_SIMPLE_ICONS_RASPBERRYPI);
  if (id == wxART_RAVELRY)  
      return wxString(SVG_SIMPLE_ICONS_RAVELRY);
  if (id == wxART_RAY)  
      return wxString(SVG_SIMPLE_ICONS_RAY);
  if (id == wxART_RAZER)  
      return wxString(SVG_SIMPLE_ICONS_RAZER);
  if (id == wxART_RAZORPAY)  
      return wxString(SVG_SIMPLE_ICONS_RAZORPAY);
  if (id == wxART_REACT)  
      return wxString(SVG_SIMPLE_ICONS_REACT);
  if (id == wxART_REACTHOOKFORM)  
      return wxString(SVG_SIMPLE_ICONS_REACTHOOKFORM);
  if (id == wxART_REACTIVEX)  
      return wxString(SVG_SIMPLE_ICONS_REACTIVEX);
  if (id == wxART_REACTOS)  
      return wxString(SVG_SIMPLE_ICONS_REACTOS);
  if (id == wxART_REACTQUERY)  
      return wxString(SVG_SIMPLE_ICONS_REACTQUERY);
  if (id == wxART_REACTROUTER)  
      return wxString(SVG_SIMPLE_ICONS_REACTROUTER);
  if (id == wxART_REACTTABLE)  
      return wxString(SVG_SIMPLE_ICONS_REACTTABLE);
  if (id == wxART_READDOTCV)  
      return wxString(SVG_SIMPLE_ICONS_READDOTCV);
  if (id == wxART_README)  
      return wxString(SVG_SIMPLE_ICONS_README);
  if (id == wxART_READTHEDOCS)  
      return wxString(SVG_SIMPLE_ICONS_READTHEDOCS);
  if (id == wxART_REALM)  
      return wxString(SVG_SIMPLE_ICONS_REALM);
  if (id == wxART_REASON)  
      return wxString(SVG_SIMPLE_ICONS_REASON);
  if (id == wxART_REASONSTUDIOS)  
      return wxString(SVG_SIMPLE_ICONS_REASONSTUDIOS);
  if (id == wxART_RECOIL)  
      return wxString(SVG_SIMPLE_ICONS_RECOIL);
  if (id == wxART_RED)  
      return wxString(SVG_SIMPLE_ICONS_RED);
  if (id == wxART_REDBUBBLE)  
      return wxString(SVG_SIMPLE_ICONS_REDBUBBLE);
  if (id == wxART_REDDIT)  
      return wxString(SVG_SIMPLE_ICONS_REDDIT);
  if (id == wxART_REDHAT)  
      return wxString(SVG_SIMPLE_ICONS_REDHAT);
  if (id == wxART_REDHATOPENSHIFT)  
      return wxString(SVG_SIMPLE_ICONS_REDHATOPENSHIFT);
  if (id == wxART_REDIS)  
      return wxString(SVG_SIMPLE_ICONS_REDIS);
  if (id == wxART_REDMINE)  
      return wxString(SVG_SIMPLE_ICONS_REDMINE);
  if (id == wxART_REDOX)  
      return wxString(SVG_SIMPLE_ICONS_REDOX);
  if (id == wxART_REDUX)  
      return wxString(SVG_SIMPLE_ICONS_REDUX);
  if (id == wxART_REDUXSAGA)  
      return wxString(SVG_SIMPLE_ICONS_REDUXSAGA);
  if (id == wxART_REDWOODJS)  
      return wxString(SVG_SIMPLE_ICONS_REDWOODJS);
  if (id == wxART_REEBOK)  
      return wxString(SVG_SIMPLE_ICONS_REEBOK);
  if (id == wxART_RELAY)  
      return wxString(SVG_SIMPLE_ICONS_RELAY);
  if (id == wxART_RELIANCEINDUSTRIESLIMITED)  
      return wxString(SVG_SIMPLE_ICONS_RELIANCEINDUSTRIESLIMITED);
  if (id == wxART_REMARK)  
      return wxString(SVG_SIMPLE_ICONS_REMARK);
  if (id == wxART_REMIX)  
      return wxString(SVG_SIMPLE_ICONS_REMIX);
  if (id == wxART_RENAULT)  
      return wxString(SVG_SIMPLE_ICONS_RENAULT);
  if (id == wxART_RENDER)  
      return wxString(SVG_SIMPLE_ICONS_RENDER);
  if (id == wxART_RENOVATEBOT)  
      return wxString(SVG_SIMPLE_ICONS_RENOVATEBOT);
  if (id == wxART_RENPY)  
      return wxString(SVG_SIMPLE_ICONS_RENPY);
  if (id == wxART_RENREN)  
      return wxString(SVG_SIMPLE_ICONS_RENREN);
  if (id == wxART_REPLIT)  
      return wxString(SVG_SIMPLE_ICONS_REPLIT);
  if (id == wxART_REPUBLICOFGAMERS)  
      return wxString(SVG_SIMPLE_ICONS_REPUBLICOFGAMERS);
  if (id == wxART_RESCRIPT)  
      return wxString(SVG_SIMPLE_ICONS_RESCRIPT);
  if (id == wxART_RESCUETIME)  
      return wxString(SVG_SIMPLE_ICONS_RESCUETIME);
  if (id == wxART_RESEARCHGATE)  
      return wxString(SVG_SIMPLE_ICONS_RESEARCHGATE);
  if (id == wxART_RESHARPER)  
      return wxString(SVG_SIMPLE_ICONS_RESHARPER);
  if (id == wxART_RESURRECTIONREMIXOS)  
      return wxString(SVG_SIMPLE_ICONS_RESURRECTIONREMIXOS);
  if (id == wxART_RETOOL)  
      return wxString(SVG_SIMPLE_ICONS_RETOOL);
  if (id == wxART_RETROARCH)  
      return wxString(SVG_SIMPLE_ICONS_RETROARCH);
  if (id == wxART_RETROPIE)  
      return wxString(SVG_SIMPLE_ICONS_RETROPIE);
  if (id == wxART_REVANCED)  
      return wxString(SVG_SIMPLE_ICONS_REVANCED);
  if (id == wxART_REVEALDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_REVEALDOTJS);
  if (id == wxART_REVERBNATION)  
      return wxString(SVG_SIMPLE_ICONS_REVERBNATION);
  if (id == wxART_REVOLTDOTCHAT)  
      return wxString(SVG_SIMPLE_ICONS_REVOLTDOTCHAT);
  if (id == wxART_REVOLUT)  
      return wxString(SVG_SIMPLE_ICONS_REVOLUT);
  if (id == wxART_REVUE)  
      return wxString(SVG_SIMPLE_ICONS_REVUE);
  if (id == wxART_REWE)  
      return wxString(SVG_SIMPLE_ICONS_REWE);
  if (id == wxART_REZGO)  
      return wxString(SVG_SIMPLE_ICONS_REZGO);
  if (id == wxART_RHINOCEROS)  
      return wxString(SVG_SIMPLE_ICONS_RHINOCEROS);
  if (id == wxART_RIDER)  
      return wxString(SVG_SIMPLE_ICONS_RIDER);
  if (id == wxART_RIMACAUTOMOBILI)  
      return wxString(SVG_SIMPLE_ICONS_RIMACAUTOMOBILI);
  if (id == wxART_RING)  
      return wxString(SVG_SIMPLE_ICONS_RING);
  if (id == wxART_RIOTGAMES)  
      return wxString(SVG_SIMPLE_ICONS_RIOTGAMES);
  if (id == wxART_RIPPLE)  
      return wxString(SVG_SIMPLE_ICONS_RIPPLE);
  if (id == wxART_RISCV)  
      return wxString(SVG_SIMPLE_ICONS_RISCV);
  if (id == wxART_RISEUP)  
      return wxString(SVG_SIMPLE_ICONS_RISEUP);
  if (id == wxART_ROADMAPDOTSH)  
      return wxString(SVG_SIMPLE_ICONS_ROADMAPDOTSH);
  if (id == wxART_ROAMRESEARCH)  
      return wxString(SVG_SIMPLE_ICONS_ROAMRESEARCH);
  if (id == wxART_ROBINHOOD)  
      return wxString(SVG_SIMPLE_ICONS_ROBINHOOD);
  if (id == wxART_ROBLOX)  
      return wxString(SVG_SIMPLE_ICONS_ROBLOX);
  if (id == wxART_ROBLOXSTUDIO)  
      return wxString(SVG_SIMPLE_ICONS_ROBLOXSTUDIO);
  if (id == wxART_ROBOTFRAMEWORK)  
      return wxString(SVG_SIMPLE_ICONS_ROBOTFRAMEWORK);
  if (id == wxART_ROCKETDOTCHAT)  
      return wxString(SVG_SIMPLE_ICONS_ROCKETDOTCHAT);
  if (id == wxART_ROCKSDB)  
      return wxString(SVG_SIMPLE_ICONS_ROCKSDB);
  if (id == wxART_ROCKYLINUX)  
      return wxString(SVG_SIMPLE_ICONS_ROCKYLINUX);
  if (id == wxART_ROKU)  
      return wxString(SVG_SIMPLE_ICONS_ROKU);
  if (id == wxART_ROLLSROYCE)  
      return wxString(SVG_SIMPLE_ICONS_ROLLSROYCE);
  if (id == wxART_ROLLUPDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_ROLLUPDOTJS);
  if (id == wxART_ROME)  
      return wxString(SVG_SIMPLE_ICONS_ROME);
  if (id == wxART_ROOTME)  
      return wxString(SVG_SIMPLE_ICONS_ROOTME);
  if (id == wxART_ROOTS)  
      return wxString(SVG_SIMPLE_ICONS_ROOTS);
  if (id == wxART_ROOTSBEDROCK)  
      return wxString(SVG_SIMPLE_ICONS_ROOTSBEDROCK);
  if (id == wxART_ROOTSSAGE)  
      return wxString(SVG_SIMPLE_ICONS_ROOTSSAGE);
  if (id == wxART_ROS)  
      return wxString(SVG_SIMPLE_ICONS_ROS);
  if (id == wxART_ROSSMANN)  
      return wxString(SVG_SIMPLE_ICONS_ROSSMANN);
  if (id == wxART_ROTARYINTERNATIONAL)  
      return wxString(SVG_SIMPLE_ICONS_ROTARYINTERNATIONAL);
  if (id == wxART_ROTTENTOMATOES)  
      return wxString(SVG_SIMPLE_ICONS_ROTTENTOMATOES);
  if (id == wxART_ROUNDCUBE)  
      return wxString(SVG_SIMPLE_ICONS_ROUNDCUBE);
  if (id == wxART_RSOCKET)  
      return wxString(SVG_SIMPLE_ICONS_RSOCKET);
  if (id == wxART_RSS)  
      return wxString(SVG_SIMPLE_ICONS_RSS);
  if (id == wxART_RSTUDIO)  
      return wxString(SVG_SIMPLE_ICONS_RSTUDIO);
  if (id == wxART_RTE)  
      return wxString(SVG_SIMPLE_ICONS_RTE);
  if (id == wxART_RTL)  
      return wxString(SVG_SIMPLE_ICONS_RTL);
  if (id == wxART_RTLZWEI)  
      return wxString(SVG_SIMPLE_ICONS_RTLZWEI);
  if (id == wxART_RUBOCOP)  
      return wxString(SVG_SIMPLE_ICONS_RUBOCOP);
  if (id == wxART_RUBY)  
      return wxString(SVG_SIMPLE_ICONS_RUBY);
  if (id == wxART_RUBYGEMS)  
      return wxString(SVG_SIMPLE_ICONS_RUBYGEMS);
  if (id == wxART_RUBYONRAILS)  
      return wxString(SVG_SIMPLE_ICONS_RUBYONRAILS);
  if (id == wxART_RUBYSINATRA)  
      return wxString(SVG_SIMPLE_ICONS_RUBYSINATRA);
  if (id == wxART_RUFF)  
      return wxString(SVG_SIMPLE_ICONS_RUFF);
  if (id == wxART_RUMBLE)  
      return wxString(SVG_SIMPLE_ICONS_RUMBLE);
  if (id == wxART_RUNDECK)  
      return wxString(SVG_SIMPLE_ICONS_RUNDECK);
  if (id == wxART_RUNKEEPER)  
      return wxString(SVG_SIMPLE_ICONS_RUNKEEPER);
  if (id == wxART_RUNKIT)  
      return wxString(SVG_SIMPLE_ICONS_RUNKIT);
  if (id == wxART_RUST)  
      return wxString(SVG_SIMPLE_ICONS_RUST);
  if (id == wxART_RXDB)  
      return wxString(SVG_SIMPLE_ICONS_RXDB);
  if (id == wxART_RYANAIR)  
      return wxString(SVG_SIMPLE_ICONS_RYANAIR);
  if (id == wxART_S7AIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_S7AIRLINES);
  if (id == wxART_SABANCI)  
      return wxString(SVG_SIMPLE_ICONS_SABANCI);
  if (id == wxART_SAFARI)  
      return wxString(SVG_SIMPLE_ICONS_SAFARI);
  if (id == wxART_SAGE)  
      return wxString(SVG_SIMPLE_ICONS_SAGE);
  if (id == wxART_SAHIBINDEN)  
      return wxString(SVG_SIMPLE_ICONS_SAHIBINDEN);
  if (id == wxART_SAILFISHOS)  
      return wxString(SVG_SIMPLE_ICONS_SAILFISHOS);
  if (id == wxART_SAILSDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_SAILSDOTJS);
  if (id == wxART_SALESFORCE)  
      return wxString(SVG_SIMPLE_ICONS_SALESFORCE);
  if (id == wxART_SALTPROJECT)  
      return wxString(SVG_SIMPLE_ICONS_SALTPROJECT);
  if (id == wxART_SAMSUNG)  
      return wxString(SVG_SIMPLE_ICONS_SAMSUNG);
  if (id == wxART_SAMSUNGPAY)  
      return wxString(SVG_SIMPLE_ICONS_SAMSUNGPAY);
  if (id == wxART_SANDISK)  
      return wxString(SVG_SIMPLE_ICONS_SANDISK);
  if (id == wxART_SANFRANCISCOMUNICIPALRAILWAY)  
      return wxString(SVG_SIMPLE_ICONS_SANFRANCISCOMUNICIPALRAILWAY);
  if (id == wxART_SANIC)  
      return wxString(SVG_SIMPLE_ICONS_SANIC);
  if (id == wxART_SANITY)  
      return wxString(SVG_SIMPLE_ICONS_SANITY);
  if (id == wxART_SAOPAULOMETRO)  
      return wxString(SVG_SIMPLE_ICONS_SAOPAULOMETRO);
  if (id == wxART_SAP)  
      return wxString(SVG_SIMPLE_ICONS_SAP);
  if (id == wxART_SASS)  
      return wxString(SVG_SIMPLE_ICONS_SASS);
  if (id == wxART_SAT1)  
      return wxString(SVG_SIMPLE_ICONS_SAT1);
  if (id == wxART_SATURN)  
      return wxString(SVG_SIMPLE_ICONS_SATURN);
  if (id == wxART_SAUCELABS)  
      return wxString(SVG_SIMPLE_ICONS_SAUCELABS);
  if (id == wxART_SCALA)  
      return wxString(SVG_SIMPLE_ICONS_SCALA);
  if (id == wxART_SCALEWAY)  
      return wxString(SVG_SIMPLE_ICONS_SCALEWAY);
  if (id == wxART_SCANIA)  
      return wxString(SVG_SIMPLE_ICONS_SCANIA);
  if (id == wxART_SCHNEIDERELECTRIC)  
      return wxString(SVG_SIMPLE_ICONS_SCHNEIDERELECTRIC);
  if (id == wxART_SCIKITLEARN)  
      return wxString(SVG_SIMPLE_ICONS_SCIKITLEARN);
  if (id == wxART_SCIPY)  
      return wxString(SVG_SIMPLE_ICONS_SCIPY);
  if (id == wxART_SCOPUS)  
      return wxString(SVG_SIMPLE_ICONS_SCOPUS);
  if (id == wxART_SCPFOUNDATION)  
      return wxString(SVG_SIMPLE_ICONS_SCPFOUNDATION);
  if (id == wxART_SCRAPBOX)  
      return wxString(SVG_SIMPLE_ICONS_SCRAPBOX);
  if (id == wxART_SCRATCH)  
      return wxString(SVG_SIMPLE_ICONS_SCRATCH);
  if (id == wxART_SCREENCASTIFY)  
      return wxString(SVG_SIMPLE_ICONS_SCREENCASTIFY);
  if (id == wxART_SCRIBD)  
      return wxString(SVG_SIMPLE_ICONS_SCRIBD);
  if (id == wxART_SCRIMBA)  
      return wxString(SVG_SIMPLE_ICONS_SCRIMBA);
  if (id == wxART_SCROLLREVEAL)  
      return wxString(SVG_SIMPLE_ICONS_SCROLLREVEAL);
  if (id == wxART_SCRUMALLIANCE)  
      return wxString(SVG_SIMPLE_ICONS_SCRUMALLIANCE);
  if (id == wxART_SCRUTINIZERCI)  
      return wxString(SVG_SIMPLE_ICONS_SCRUTINIZERCI);
  if (id == wxART_SCYLLADB)  
      return wxString(SVG_SIMPLE_ICONS_SCYLLADB);
  if (id == wxART_SEAGATE)  
      return wxString(SVG_SIMPLE_ICONS_SEAGATE);
  if (id == wxART_SEARXNG)  
      return wxString(SVG_SIMPLE_ICONS_SEARXNG);
  if (id == wxART_SEAT)  
      return wxString(SVG_SIMPLE_ICONS_SEAT);
  if (id == wxART_SECURITYSCORECARD)  
      return wxString(SVG_SIMPLE_ICONS_SECURITYSCORECARD);
  if (id == wxART_SEFARIA)  
      return wxString(SVG_SIMPLE_ICONS_SEFARIA);
  if (id == wxART_SEGA)  
      return wxString(SVG_SIMPLE_ICONS_SEGA);
  if (id == wxART_SELENIUM)  
      return wxString(SVG_SIMPLE_ICONS_SELENIUM);
  if (id == wxART_SELLFY)  
      return wxString(SVG_SIMPLE_ICONS_SELLFY);
  if (id == wxART_SEMANTICRELEASE)  
      return wxString(SVG_SIMPLE_ICONS_SEMANTICRELEASE);
  if (id == wxART_SEMANTICSCHOLAR)  
      return wxString(SVG_SIMPLE_ICONS_SEMANTICSCHOLAR);
  if (id == wxART_SEMANTICUIREACT)  
      return wxString(SVG_SIMPLE_ICONS_SEMANTICUIREACT);
  if (id == wxART_SEMANTICWEB)  
      return wxString(SVG_SIMPLE_ICONS_SEMANTICWEB);
  if (id == wxART_SEMAPHORECI)  
      return wxString(SVG_SIMPLE_ICONS_SEMAPHORECI);
  if (id == wxART_SEMRUSH)  
      return wxString(SVG_SIMPLE_ICONS_SEMRUSH);
  if (id == wxART_SEMVER)  
      return wxString(SVG_SIMPLE_ICONS_SEMVER);
  if (id == wxART_SENCHA)  
      return wxString(SVG_SIMPLE_ICONS_SENCHA);
  if (id == wxART_SENDINBLUE)  
      return wxString(SVG_SIMPLE_ICONS_SENDINBLUE);
  if (id == wxART_SENNHEISER)  
      return wxString(SVG_SIMPLE_ICONS_SENNHEISER);
  if (id == wxART_SENSU)  
      return wxString(SVG_SIMPLE_ICONS_SENSU);
  if (id == wxART_SENTRY)  
      return wxString(SVG_SIMPLE_ICONS_SENTRY);
  if (id == wxART_SEPA)  
      return wxString(SVG_SIMPLE_ICONS_SEPA);
  if (id == wxART_SEQUELIZE)  
      return wxString(SVG_SIMPLE_ICONS_SEQUELIZE);
  if (id == wxART_SERVERFAULT)  
      return wxString(SVG_SIMPLE_ICONS_SERVERFAULT);
  if (id == wxART_SERVERLESS)  
      return wxString(SVG_SIMPLE_ICONS_SERVERLESS);
  if (id == wxART_SESSIONIZE)  
      return wxString(SVG_SIMPLE_ICONS_SESSIONIZE);
  if (id == wxART_SETAPP)  
      return wxString(SVG_SIMPLE_ICONS_SETAPP);
  if (id == wxART_SFML)  
      return wxString(SVG_SIMPLE_ICONS_SFML);
  if (id == wxART_SHADOW)  
      return wxString(SVG_SIMPLE_ICONS_SHADOW);
  if (id == wxART_SHANGHAIMETRO)  
      return wxString(SVG_SIMPLE_ICONS_SHANGHAIMETRO);
  if (id == wxART_SHAREX)  
      return wxString(SVG_SIMPLE_ICONS_SHAREX);
  if (id == wxART_SHARP)  
      return wxString(SVG_SIMPLE_ICONS_SHARP);
  if (id == wxART_SHAZAM)  
      return wxString(SVG_SIMPLE_ICONS_SHAZAM);
  if (id == wxART_SHELL)  
      return wxString(SVG_SIMPLE_ICONS_SHELL);
  if (id == wxART_SHELLY)  
      return wxString(SVG_SIMPLE_ICONS_SHELLY);
  if (id == wxART_SHENZHENMETRO)  
      return wxString(SVG_SIMPLE_ICONS_SHENZHENMETRO);
  if (id == wxART_SHIELDSDOTIO)  
      return wxString(SVG_SIMPLE_ICONS_SHIELDSDOTIO);
  if (id == wxART_SHIKIMORI)  
      return wxString(SVG_SIMPLE_ICONS_SHIKIMORI);
  if (id == wxART_SHOPEE)  
      return wxString(SVG_SIMPLE_ICONS_SHOPEE);
  if (id == wxART_SHOPIFY)  
      return wxString(SVG_SIMPLE_ICONS_SHOPIFY);
  if (id == wxART_SHOPWARE)  
      return wxString(SVG_SIMPLE_ICONS_SHOPWARE);
  if (id == wxART_SHORTCUT)  
      return wxString(SVG_SIMPLE_ICONS_SHORTCUT);
  if (id == wxART_SHOTCUT)  
      return wxString(SVG_SIMPLE_ICONS_SHOTCUT);
  if (id == wxART_SHOWPAD)  
      return wxString(SVG_SIMPLE_ICONS_SHOWPAD);
  if (id == wxART_SHOWTIME)  
      return wxString(SVG_SIMPLE_ICONS_SHOWTIME);
  if (id == wxART_SHUTTERSTOCK)  
      return wxString(SVG_SIMPLE_ICONS_SHUTTERSTOCK);
  if (id == wxART_SIEMENS)  
      return wxString(SVG_SIMPLE_ICONS_SIEMENS);
  if (id == wxART_SIFIVE)  
      return wxString(SVG_SIMPLE_ICONS_SIFIVE);
  if (id == wxART_SIGNAL)  
      return wxString(SVG_SIMPLE_ICONS_SIGNAL);
  if (id == wxART_SIMILARWEB)  
      return wxString(SVG_SIMPLE_ICONS_SIMILARWEB);
  if (id == wxART_SIMKL)  
      return wxString(SVG_SIMPLE_ICONS_SIMKL);
  if (id == wxART_SIMPLEANALYTICS)  
      return wxString(SVG_SIMPLE_ICONS_SIMPLEANALYTICS);
  if (id == wxART_SIMPLEICONS)  
      return wxString(SVG_SIMPLE_ICONS_SIMPLEICONS);
  if (id == wxART_SIMPLENOTE)  
      return wxString(SVG_SIMPLE_ICONS_SIMPLENOTE);
  if (id == wxART_SINAWEIBO)  
      return wxString(SVG_SIMPLE_ICONS_SINAWEIBO);
  if (id == wxART_SINGAPOREAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_SINGAPOREAIRLINES);
  if (id == wxART_SINGLESTORE)  
      return wxString(SVG_SIMPLE_ICONS_SINGLESTORE);
  if (id == wxART_SITECORE)  
      return wxString(SVG_SIMPLE_ICONS_SITECORE);
  if (id == wxART_SITEPOINT)  
      return wxString(SVG_SIMPLE_ICONS_SITEPOINT);
  if (id == wxART_SKETCH)  
      return wxString(SVG_SIMPLE_ICONS_SKETCH);
  if (id == wxART_SKETCHFAB)  
      return wxString(SVG_SIMPLE_ICONS_SKETCHFAB);
  if (id == wxART_SKETCHUP)  
      return wxString(SVG_SIMPLE_ICONS_SKETCHUP);
  if (id == wxART_SKILLSHARE)  
      return wxString(SVG_SIMPLE_ICONS_SKILLSHARE);
  if (id == wxART_SKODA)  
      return wxString(SVG_SIMPLE_ICONS_SKODA);
  if (id == wxART_SKY)  
      return wxString(SVG_SIMPLE_ICONS_SKY);
  if (id == wxART_SKYNET)  
      return wxString(SVG_SIMPLE_ICONS_SKYNET);
  if (id == wxART_SKYPACK)  
      return wxString(SVG_SIMPLE_ICONS_SKYPACK);
  if (id == wxART_SKYPE)  
      return wxString(SVG_SIMPLE_ICONS_SKYPE);
  if (id == wxART_SKYPEFORBUSINESS)  
      return wxString(SVG_SIMPLE_ICONS_SKYPEFORBUSINESS);
  if (id == wxART_SKYROCK)  
      return wxString(SVG_SIMPLE_ICONS_SKYROCK);
  if (id == wxART_SLACK)  
      return wxString(SVG_SIMPLE_ICONS_SLACK);
  if (id == wxART_SLACKWARE)  
      return wxString(SVG_SIMPLE_ICONS_SLACKWARE);
  if (id == wxART_SLASHDOT)  
      return wxString(SVG_SIMPLE_ICONS_SLASHDOT);
  if (id == wxART_SLICKPIC)  
      return wxString(SVG_SIMPLE_ICONS_SLICKPIC);
  if (id == wxART_SLIDES)  
      return wxString(SVG_SIMPLE_ICONS_SLIDES);
  if (id == wxART_SLIDESHARE)  
      return wxString(SVG_SIMPLE_ICONS_SLIDESHARE);
  if (id == wxART_SMART)  
      return wxString(SVG_SIMPLE_ICONS_SMART);
  if (id == wxART_SMARTTHINGS)  
      return wxString(SVG_SIMPLE_ICONS_SMARTTHINGS);
  if (id == wxART_SMASHDOTGG)  
      return wxString(SVG_SIMPLE_ICONS_SMASHDOTGG);
  if (id == wxART_SMASHINGMAGAZINE)  
      return wxString(SVG_SIMPLE_ICONS_SMASHINGMAGAZINE);
  if (id == wxART_SMRT)  
      return wxString(SVG_SIMPLE_ICONS_SMRT);
  if (id == wxART_SMUGMUG)  
      return wxString(SVG_SIMPLE_ICONS_SMUGMUG);
  if (id == wxART_SNAPCHAT)  
      return wxString(SVG_SIMPLE_ICONS_SNAPCHAT);
  if (id == wxART_SNAPCRAFT)  
      return wxString(SVG_SIMPLE_ICONS_SNAPCRAFT);
  if (id == wxART_SNCF)  
      return wxString(SVG_SIMPLE_ICONS_SNCF);
  if (id == wxART_SNOWFLAKE)  
      return wxString(SVG_SIMPLE_ICONS_SNOWFLAKE);
  if (id == wxART_SNOWPACK)  
      return wxString(SVG_SIMPLE_ICONS_SNOWPACK);
  if (id == wxART_SNYK)  
      return wxString(SVG_SIMPLE_ICONS_SNYK);
  if (id == wxART_SOCIALBLADE)  
      return wxString(SVG_SIMPLE_ICONS_SOCIALBLADE);
  if (id == wxART_SOCIETY6)  
      return wxString(SVG_SIMPLE_ICONS_SOCIETY6);
  if (id == wxART_SOCKETDOTIO)  
      return wxString(SVG_SIMPLE_ICONS_SOCKETDOTIO);
  if (id == wxART_SOGOU)  
      return wxString(SVG_SIMPLE_ICONS_SOGOU);
  if (id == wxART_SOLID)  
      return wxString(SVG_SIMPLE_ICONS_SOLID);
  if (id == wxART_SOLIDITY)  
      return wxString(SVG_SIMPLE_ICONS_SOLIDITY);
  if (id == wxART_SOLOLEARN)  
      return wxString(SVG_SIMPLE_ICONS_SOLOLEARN);
  if (id == wxART_SOLUS)  
      return wxString(SVG_SIMPLE_ICONS_SOLUS);
  if (id == wxART_SONAR)  
      return wxString(SVG_SIMPLE_ICONS_SONAR);
  if (id == wxART_SONARCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_SONARCLOUD);
  if (id == wxART_SONARLINT)  
      return wxString(SVG_SIMPLE_ICONS_SONARLINT);
  if (id == wxART_SONARQUBE)  
      return wxString(SVG_SIMPLE_ICONS_SONARQUBE);
  if (id == wxART_SONARSOURCE)  
      return wxString(SVG_SIMPLE_ICONS_SONARSOURCE);
  if (id == wxART_SONATYPE)  
      return wxString(SVG_SIMPLE_ICONS_SONATYPE);
  if (id == wxART_SONGKICK)  
      return wxString(SVG_SIMPLE_ICONS_SONGKICK);
  if (id == wxART_SONGODA)  
      return wxString(SVG_SIMPLE_ICONS_SONGODA);
  if (id == wxART_SONICWALL)  
      return wxString(SVG_SIMPLE_ICONS_SONICWALL);
  if (id == wxART_SONOS)  
      return wxString(SVG_SIMPLE_ICONS_SONOS);
  if (id == wxART_SONY)  
      return wxString(SVG_SIMPLE_ICONS_SONY);
  if (id == wxART_SOUNDCHARTS)  
      return wxString(SVG_SIMPLE_ICONS_SOUNDCHARTS);
  if (id == wxART_SOUNDCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_SOUNDCLOUD);
  if (id == wxART_SOURCEENGINE)  
      return wxString(SVG_SIMPLE_ICONS_SOURCEENGINE);
  if (id == wxART_SOURCEFORGE)  
      return wxString(SVG_SIMPLE_ICONS_SOURCEFORGE);
  if (id == wxART_SOURCEGRAPH)  
      return wxString(SVG_SIMPLE_ICONS_SOURCEGRAPH);
  if (id == wxART_SOURCEHUT)  
      return wxString(SVG_SIMPLE_ICONS_SOURCEHUT);
  if (id == wxART_SOURCETREE)  
      return wxString(SVG_SIMPLE_ICONS_SOURCETREE);
  if (id == wxART_SOUTHWESTAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_SOUTHWESTAIRLINES);
  if (id == wxART_SPACEMACS)  
      return wxString(SVG_SIMPLE_ICONS_SPACEMACS);
  if (id == wxART_SPACEX)  
      return wxString(SVG_SIMPLE_ICONS_SPACEX);
  if (id == wxART_SPACY)  
      return wxString(SVG_SIMPLE_ICONS_SPACY);
  if (id == wxART_SPARKAR)  
      return wxString(SVG_SIMPLE_ICONS_SPARKAR);
  if (id == wxART_SPARKASSE)  
      return wxString(SVG_SIMPLE_ICONS_SPARKASSE);
  if (id == wxART_SPARKFUN)  
      return wxString(SVG_SIMPLE_ICONS_SPARKFUN);
  if (id == wxART_SPARKPOST)  
      return wxString(SVG_SIMPLE_ICONS_SPARKPOST);
  if (id == wxART_SPDX)  
      return wxString(SVG_SIMPLE_ICONS_SPDX);
  if (id == wxART_SPEAKERDECK)  
      return wxString(SVG_SIMPLE_ICONS_SPEAKERDECK);
  if (id == wxART_SPECTRUM)  
      return wxString(SVG_SIMPLE_ICONS_SPECTRUM);
  if (id == wxART_SPEEDTEST)  
      return wxString(SVG_SIMPLE_ICONS_SPEEDTEST);
  if (id == wxART_SPEEDYPAGE)  
      return wxString(SVG_SIMPLE_ICONS_SPEEDYPAGE);
  if (id == wxART_SPHINX)  
      return wxString(SVG_SIMPLE_ICONS_SPHINX);
  if (id == wxART_SPIGOTMC)  
      return wxString(SVG_SIMPLE_ICONS_SPIGOTMC);
  if (id == wxART_SPINNAKER)  
      return wxString(SVG_SIMPLE_ICONS_SPINNAKER);
  if (id == wxART_SPINRILLA)  
      return wxString(SVG_SIMPLE_ICONS_SPINRILLA);
  if (id == wxART_SPLUNK)  
      return wxString(SVG_SIMPLE_ICONS_SPLUNK);
  if (id == wxART_SPOJ)  
      return wxString(SVG_SIMPLE_ICONS_SPOJ);
  if (id == wxART_SPOND)  
      return wxString(SVG_SIMPLE_ICONS_SPOND);
  if (id == wxART_SPOTIFY)  
      return wxString(SVG_SIMPLE_ICONS_SPOTIFY);
  if (id == wxART_SPOTLIGHT)  
      return wxString(SVG_SIMPLE_ICONS_SPOTLIGHT);
  if (id == wxART_SPREADSHIRT)  
      return wxString(SVG_SIMPLE_ICONS_SPREADSHIRT);
  if (id == wxART_SPREAKER)  
      return wxString(SVG_SIMPLE_ICONS_SPREAKER);
  if (id == wxART_SPRING)  
      return wxString(SVG_SIMPLE_ICONS_SPRING);
  if (id == wxART_SPRING_CREATORS)  
      return wxString(SVG_SIMPLE_ICONS_SPRING_CREATORS);
  if (id == wxART_SPRINGBOOT)  
      return wxString(SVG_SIMPLE_ICONS_SPRINGBOOT);
  if (id == wxART_SPRINGSECURITY)  
      return wxString(SVG_SIMPLE_ICONS_SPRINGSECURITY);
  if (id == wxART_SPYDERIDE)  
      return wxString(SVG_SIMPLE_ICONS_SPYDERIDE);
  if (id == wxART_SQLALCHEMY)  
      return wxString(SVG_SIMPLE_ICONS_SQLALCHEMY);
  if (id == wxART_SQLITE)  
      return wxString(SVG_SIMPLE_ICONS_SQLITE);
  if (id == wxART_SQUARE)  
      return wxString(SVG_SIMPLE_ICONS_SQUARE);
  if (id == wxART_SQUAREENIX)  
      return wxString(SVG_SIMPLE_ICONS_SQUAREENIX);
  if (id == wxART_SQUARESPACE)  
      return wxString(SVG_SIMPLE_ICONS_SQUARESPACE);
  if (id == wxART_SSRN)  
      return wxString(SVG_SIMPLE_ICONS_SSRN);
  if (id == wxART_SST)  
      return wxString(SVG_SIMPLE_ICONS_SST);
  if (id == wxART_STACKBIT)  
      return wxString(SVG_SIMPLE_ICONS_STACKBIT);
  if (id == wxART_STACKBLITZ)  
      return wxString(SVG_SIMPLE_ICONS_STACKBLITZ);
  if (id == wxART_STACKEDIT)  
      return wxString(SVG_SIMPLE_ICONS_STACKEDIT);
  if (id == wxART_STACKEXCHANGE)  
      return wxString(SVG_SIMPLE_ICONS_STACKEXCHANGE);
  if (id == wxART_STACKHAWK)  
      return wxString(SVG_SIMPLE_ICONS_STACKHAWK);
  if (id == wxART_STACKOVERFLOW)  
      return wxString(SVG_SIMPLE_ICONS_STACKOVERFLOW);
  if (id == wxART_STACKPATH)  
      return wxString(SVG_SIMPLE_ICONS_STACKPATH);
  if (id == wxART_STACKSHARE)  
      return wxString(SVG_SIMPLE_ICONS_STACKSHARE);
  if (id == wxART_STADIA)  
      return wxString(SVG_SIMPLE_ICONS_STADIA);
  if (id == wxART_STAFFBASE)  
      return wxString(SVG_SIMPLE_ICONS_STAFFBASE);
  if (id == wxART_STANDARDJS)  
      return wxString(SVG_SIMPLE_ICONS_STANDARDJS);
  if (id == wxART_STANDARDRESUME)  
      return wxString(SVG_SIMPLE_ICONS_STANDARDRESUME);
  if (id == wxART_STARBUCKS)  
      return wxString(SVG_SIMPLE_ICONS_STARBUCKS);
  if (id == wxART_STARDOCK)  
      return wxString(SVG_SIMPLE_ICONS_STARDOCK);
  if (id == wxART_STARLINGBANK)  
      return wxString(SVG_SIMPLE_ICONS_STARLINGBANK);
  if (id == wxART_STARSHIP)  
      return wxString(SVG_SIMPLE_ICONS_STARSHIP);
  if (id == wxART_STARTREK)  
      return wxString(SVG_SIMPLE_ICONS_STARTREK);
  if (id == wxART_STARZ)  
      return wxString(SVG_SIMPLE_ICONS_STARZ);
  if (id == wxART_STATAMIC)  
      return wxString(SVG_SIMPLE_ICONS_STATAMIC);
  if (id == wxART_STATUSPAGE)  
      return wxString(SVG_SIMPLE_ICONS_STATUSPAGE);
  if (id == wxART_STATUSPAL)  
      return wxString(SVG_SIMPLE_ICONS_STATUSPAL);
  if (id == wxART_STEAM)  
      return wxString(SVG_SIMPLE_ICONS_STEAM);
  if (id == wxART_STEAMDB)  
      return wxString(SVG_SIMPLE_ICONS_STEAMDB);
  if (id == wxART_STEAMDECK)  
      return wxString(SVG_SIMPLE_ICONS_STEAMDECK);
  if (id == wxART_STEAMWORKS)  
      return wxString(SVG_SIMPLE_ICONS_STEAMWORKS);
  if (id == wxART_STEELSERIES)  
      return wxString(SVG_SIMPLE_ICONS_STEELSERIES);
  if (id == wxART_STEEM)  
      return wxString(SVG_SIMPLE_ICONS_STEEM);
  if (id == wxART_STEEMIT)  
      return wxString(SVG_SIMPLE_ICONS_STEEMIT);
  if (id == wxART_STEINBERG)  
      return wxString(SVG_SIMPLE_ICONS_STEINBERG);
  if (id == wxART_STELLAR)  
      return wxString(SVG_SIMPLE_ICONS_STELLAR);
  if (id == wxART_STENCYL)  
      return wxString(SVG_SIMPLE_ICONS_STENCYL);
  if (id == wxART_STIMULUS)  
      return wxString(SVG_SIMPLE_ICONS_STIMULUS);
  if (id == wxART_STITCHER)  
      return wxString(SVG_SIMPLE_ICONS_STITCHER);
  if (id == wxART_STMICROELECTRONICS)  
      return wxString(SVG_SIMPLE_ICONS_STMICROELECTRONICS);
  if (id == wxART_STOPSTALK)  
      return wxString(SVG_SIMPLE_ICONS_STOPSTALK);
  if (id == wxART_STORYBLOK)  
      return wxString(SVG_SIMPLE_ICONS_STORYBLOK);
  if (id == wxART_STORYBOOK)  
      return wxString(SVG_SIMPLE_ICONS_STORYBOOK);
  if (id == wxART_STRAPI)  
      return wxString(SVG_SIMPLE_ICONS_STRAPI);
  if (id == wxART_STRAVA)  
      return wxString(SVG_SIMPLE_ICONS_STRAVA);
  if (id == wxART_STREAMLIT)  
      return wxString(SVG_SIMPLE_ICONS_STREAMLIT);
  if (id == wxART_STRIPE)  
      return wxString(SVG_SIMPLE_ICONS_STRIPE);
  if (id == wxART_STRONGSWAN)  
      return wxString(SVG_SIMPLE_ICONS_STRONGSWAN);
  if (id == wxART_STRYKER)  
      return wxString(SVG_SIMPLE_ICONS_STRYKER);
  if (id == wxART_STUBHUB)  
      return wxString(SVG_SIMPLE_ICONS_STUBHUB);
  if (id == wxART_STUDIO3T)  
      return wxString(SVG_SIMPLE_ICONS_STUDIO3T);
  if (id == wxART_STUDYVERSE)  
      return wxString(SVG_SIMPLE_ICONS_STUDYVERSE);
  if (id == wxART_STYLEDCOMPONENTS)  
      return wxString(SVG_SIMPLE_ICONS_STYLEDCOMPONENTS);
  if (id == wxART_STYLELINT)  
      return wxString(SVG_SIMPLE_ICONS_STYLELINT);
  if (id == wxART_STYLESHARE)  
      return wxString(SVG_SIMPLE_ICONS_STYLESHARE);
  if (id == wxART_STYLUS)  
      return wxString(SVG_SIMPLE_ICONS_STYLUS);
  if (id == wxART_SUBARU)  
      return wxString(SVG_SIMPLE_ICONS_SUBARU);
  if (id == wxART_SUBLIMETEXT)  
      return wxString(SVG_SIMPLE_ICONS_SUBLIMETEXT);
  if (id == wxART_SUBSTACK)  
      return wxString(SVG_SIMPLE_ICONS_SUBSTACK);
  if (id == wxART_SUBTITLEEDIT)  
      return wxString(SVG_SIMPLE_ICONS_SUBTITLEEDIT);
  if (id == wxART_SUBVERSION)  
      return wxString(SVG_SIMPLE_ICONS_SUBVERSION);
  if (id == wxART_SUCKLESS)  
      return wxString(SVG_SIMPLE_ICONS_SUCKLESS);
  if (id == wxART_SUMOLOGIC)  
      return wxString(SVG_SIMPLE_ICONS_SUMOLOGIC);
  if (id == wxART_SUPABASE)  
      return wxString(SVG_SIMPLE_ICONS_SUPABASE);
  if (id == wxART_SUPERCREASE)  
      return wxString(SVG_SIMPLE_ICONS_SUPERCREASE);
  if (id == wxART_SUPERMICRO)  
      return wxString(SVG_SIMPLE_ICONS_SUPERMICRO);
  if (id == wxART_SUPERUSER)  
      return wxString(SVG_SIMPLE_ICONS_SUPERUSER);
  if (id == wxART_SURREALDB)  
      return wxString(SVG_SIMPLE_ICONS_SURREALDB);
  if (id == wxART_SURVEYMONKEY)  
      return wxString(SVG_SIMPLE_ICONS_SURVEYMONKEY);
  if (id == wxART_SUSE)  
      return wxString(SVG_SIMPLE_ICONS_SUSE);
  if (id == wxART_SUZUKI)  
      return wxString(SVG_SIMPLE_ICONS_SUZUKI);
  if (id == wxART_SVELTE)  
      return wxString(SVG_SIMPLE_ICONS_SVELTE);
  if (id == wxART_SVG)  
      return wxString(SVG_SIMPLE_ICONS_SVG);
  if (id == wxART_SVGDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_SVGDOTJS);
  if (id == wxART_SVGO)  
      return wxString(SVG_SIMPLE_ICONS_SVGO);
  if (id == wxART_SWAGGER)  
      return wxString(SVG_SIMPLE_ICONS_SWAGGER);
  if (id == wxART_SWARM)  
      return wxString(SVG_SIMPLE_ICONS_SWARM);
  if (id == wxART_SWC)  
      return wxString(SVG_SIMPLE_ICONS_SWC);
  if (id == wxART_SWIFT)  
      return wxString(SVG_SIMPLE_ICONS_SWIFT);
  if (id == wxART_SWIGGY)  
      return wxString(SVG_SIMPLE_ICONS_SWIGGY);
  if (id == wxART_SWIPER)  
      return wxString(SVG_SIMPLE_ICONS_SWIPER);
  if (id == wxART_SWR)  
      return wxString(SVG_SIMPLE_ICONS_SWR);
  if (id == wxART_SYMANTEC)  
      return wxString(SVG_SIMPLE_ICONS_SYMANTEC);
  if (id == wxART_SYMBOLAB)  
      return wxString(SVG_SIMPLE_ICONS_SYMBOLAB);
  if (id == wxART_SYMFONY)  
      return wxString(SVG_SIMPLE_ICONS_SYMFONY);
  if (id == wxART_SYMPHONY)  
      return wxString(SVG_SIMPLE_ICONS_SYMPHONY);
  if (id == wxART_SYMPY)  
      return wxString(SVG_SIMPLE_ICONS_SYMPY);
  if (id == wxART_SYNOLOGY)  
      return wxString(SVG_SIMPLE_ICONS_SYNOLOGY);
  if (id == wxART_SYSTEM76)  
      return wxString(SVG_SIMPLE_ICONS_SYSTEM76);
  if (id == wxART_TABLEAU)  
      return wxString(SVG_SIMPLE_ICONS_TABLEAU);
  if (id == wxART_TABLECHECK)  
      return wxString(SVG_SIMPLE_ICONS_TABLECHECK);
  if (id == wxART_TACOBELL)  
      return wxString(SVG_SIMPLE_ICONS_TACOBELL);
  if (id == wxART_TADO)  
      return wxString(SVG_SIMPLE_ICONS_TADO);
  if (id == wxART_TAICHIGRAPHICS)  
      return wxString(SVG_SIMPLE_ICONS_TAICHIGRAPHICS);
  if (id == wxART_TAICHILANG)  
      return wxString(SVG_SIMPLE_ICONS_TAICHILANG);
  if (id == wxART_TAILS)  
      return wxString(SVG_SIMPLE_ICONS_TAILS);
  if (id == wxART_TAILWINDCSS)  
      return wxString(SVG_SIMPLE_ICONS_TAILWINDCSS);
  if (id == wxART_TALEND)  
      return wxString(SVG_SIMPLE_ICONS_TALEND);
  if (id == wxART_TALENTHOUSE)  
      return wxString(SVG_SIMPLE_ICONS_TALENTHOUSE);
  if (id == wxART_TAMIYA)  
      return wxString(SVG_SIMPLE_ICONS_TAMIYA);
  if (id == wxART_TAMPERMONKEY)  
      return wxString(SVG_SIMPLE_ICONS_TAMPERMONKEY);
  if (id == wxART_TAOBAO)  
      return wxString(SVG_SIMPLE_ICONS_TAOBAO);
  if (id == wxART_TAPAS)  
      return wxString(SVG_SIMPLE_ICONS_TAPAS);
  if (id == wxART_TARGET)  
      return wxString(SVG_SIMPLE_ICONS_TARGET);
  if (id == wxART_TASK)  
      return wxString(SVG_SIMPLE_ICONS_TASK);
  if (id == wxART_TASMOTA)  
      return wxString(SVG_SIMPLE_ICONS_TASMOTA);
  if (id == wxART_TATA)  
      return wxString(SVG_SIMPLE_ICONS_TATA);
  if (id == wxART_TAURI)  
      return wxString(SVG_SIMPLE_ICONS_TAURI);
  if (id == wxART_TAXBUZZ)  
      return wxString(SVG_SIMPLE_ICONS_TAXBUZZ);
  if (id == wxART_TCS)  
      return wxString(SVG_SIMPLE_ICONS_TCS);
  if (id == wxART_TEAMCITY)  
      return wxString(SVG_SIMPLE_ICONS_TEAMCITY);
  if (id == wxART_TEAMSPEAK)  
      return wxString(SVG_SIMPLE_ICONS_TEAMSPEAK);
  if (id == wxART_TEAMVIEWER)  
      return wxString(SVG_SIMPLE_ICONS_TEAMVIEWER);
  if (id == wxART_TED)  
      return wxString(SVG_SIMPLE_ICONS_TED);
  if (id == wxART_TEESPRING)  
      return wxString(SVG_SIMPLE_ICONS_TEESPRING);
  if (id == wxART_TEKTON)  
      return wxString(SVG_SIMPLE_ICONS_TEKTON);
  if (id == wxART_TELE5)  
      return wxString(SVG_SIMPLE_ICONS_TELE5);
  if (id == wxART_TELEGRAM)  
      return wxString(SVG_SIMPLE_ICONS_TELEGRAM);
  if (id == wxART_TELEGRAPH)  
      return wxString(SVG_SIMPLE_ICONS_TELEGRAPH);
  if (id == wxART_TEMPORAL)  
      return wxString(SVG_SIMPLE_ICONS_TEMPORAL);
  if (id == wxART_TENCENTQQ)  
      return wxString(SVG_SIMPLE_ICONS_TENCENTQQ);
  if (id == wxART_TENSORFLOW)  
      return wxString(SVG_SIMPLE_ICONS_TENSORFLOW);
  if (id == wxART_TERADATA)  
      return wxString(SVG_SIMPLE_ICONS_TERADATA);
  if (id == wxART_TERATAIL)  
      return wxString(SVG_SIMPLE_ICONS_TERATAIL);
  if (id == wxART_TERMIUS)  
      return wxString(SVG_SIMPLE_ICONS_TERMIUS);
  if (id == wxART_TERRAFORM)  
      return wxString(SVG_SIMPLE_ICONS_TERRAFORM);
  if (id == wxART_TESCO)  
      return wxString(SVG_SIMPLE_ICONS_TESCO);
  if (id == wxART_TESLA)  
      return wxString(SVG_SIMPLE_ICONS_TESLA);
  if (id == wxART_TESTCAFE)  
      return wxString(SVG_SIMPLE_ICONS_TESTCAFE);
  if (id == wxART_TESTIN)  
      return wxString(SVG_SIMPLE_ICONS_TESTIN);
  if (id == wxART_TESTINGLIBRARY)  
      return wxString(SVG_SIMPLE_ICONS_TESTINGLIBRARY);
  if (id == wxART_TESTRAIL)  
      return wxString(SVG_SIMPLE_ICONS_TESTRAIL);
  if (id == wxART_TETHER)  
      return wxString(SVG_SIMPLE_ICONS_TETHER);
  if (id == wxART_TEXTPATTERN)  
      return wxString(SVG_SIMPLE_ICONS_TEXTPATTERN);
  if (id == wxART_TGA)  
      return wxString(SVG_SIMPLE_ICONS_TGA);
  if (id == wxART_THANGS)  
      return wxString(SVG_SIMPLE_ICONS_THANGS);
  if (id == wxART_THEALGORITHMS)  
      return wxString(SVG_SIMPLE_ICONS_THEALGORITHMS);
  if (id == wxART_THECONVERSATION)  
      return wxString(SVG_SIMPLE_ICONS_THECONVERSATION);
  if (id == wxART_THEIRISHTIMES)  
      return wxString(SVG_SIMPLE_ICONS_THEIRISHTIMES);
  if (id == wxART_THEMIGHTY)  
      return wxString(SVG_SIMPLE_ICONS_THEMIGHTY);
  if (id == wxART_THEMODELSRESOURCE)  
      return wxString(SVG_SIMPLE_ICONS_THEMODELSRESOURCE);
  if (id == wxART_THEMOVIEDATABASE)  
      return wxString(SVG_SIMPLE_ICONS_THEMOVIEDATABASE);
  if (id == wxART_THENORTHFACE)  
      return wxString(SVG_SIMPLE_ICONS_THENORTHFACE);
  if (id == wxART_THEREGISTER)  
      return wxString(SVG_SIMPLE_ICONS_THEREGISTER);
  if (id == wxART_THESOUNDSRESOURCE)  
      return wxString(SVG_SIMPLE_ICONS_THESOUNDSRESOURCE);
  if (id == wxART_THESPRITERSRESOURCE)  
      return wxString(SVG_SIMPLE_ICONS_THESPRITERSRESOURCE);
  if (id == wxART_THEWASHINGTONPOST)  
      return wxString(SVG_SIMPLE_ICONS_THEWASHINGTONPOST);
  if (id == wxART_THINGIVERSE)  
      return wxString(SVG_SIMPLE_ICONS_THINGIVERSE);
  if (id == wxART_THINKPAD)  
      return wxString(SVG_SIMPLE_ICONS_THINKPAD);
  if (id == wxART_THREADLESS)  
      return wxString(SVG_SIMPLE_ICONS_THREADLESS);
  if (id == wxART_THREADS)  
      return wxString(SVG_SIMPLE_ICONS_THREADS);
  if (id == wxART_THREEDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_THREEDOTJS);
  if (id == wxART_THREEMA)  
      return wxString(SVG_SIMPLE_ICONS_THREEMA);
  if (id == wxART_THUMBTACK)  
      return wxString(SVG_SIMPLE_ICONS_THUMBTACK);
  if (id == wxART_THUNDERBIRD)  
      return wxString(SVG_SIMPLE_ICONS_THUNDERBIRD);
  if (id == wxART_THURGAUERKANTONALBANK)  
      return wxString(SVG_SIMPLE_ICONS_THURGAUERKANTONALBANK);
  if (id == wxART_THYMELEAF)  
      return wxString(SVG_SIMPLE_ICONS_THYMELEAF);
  if (id == wxART_TICKETMASTER)  
      return wxString(SVG_SIMPLE_ICONS_TICKETMASTER);
  if (id == wxART_TIDAL)  
      return wxString(SVG_SIMPLE_ICONS_TIDAL);
  if (id == wxART_TIDDLYWIKI)  
      return wxString(SVG_SIMPLE_ICONS_TIDDLYWIKI);
  if (id == wxART_TIDE)  
      return wxString(SVG_SIMPLE_ICONS_TIDE);
  if (id == wxART_TIDYVERSE)  
      return wxString(SVG_SIMPLE_ICONS_TIDYVERSE);
  if (id == wxART_TIETOEVRY)  
      return wxString(SVG_SIMPLE_ICONS_TIETOEVRY);
  if (id == wxART_TIKTOK)  
      return wxString(SVG_SIMPLE_ICONS_TIKTOK);
  if (id == wxART_TILE)  
      return wxString(SVG_SIMPLE_ICONS_TILE);
  if (id == wxART_TIMESCALE)  
      return wxString(SVG_SIMPLE_ICONS_TIMESCALE);
  if (id == wxART_TINA)  
      return wxString(SVG_SIMPLE_ICONS_TINA);
  if (id == wxART_TINDER)  
      return wxString(SVG_SIMPLE_ICONS_TINDER);
  if (id == wxART_TINYLETTER)  
      return wxString(SVG_SIMPLE_ICONS_TINYLETTER);
  if (id == wxART_TISTORY)  
      return wxString(SVG_SIMPLE_ICONS_TISTORY);
  if (id == wxART_TMOBILE)  
      return wxString(SVG_SIMPLE_ICONS_TMOBILE);
  if (id == wxART_TMUX)  
      return wxString(SVG_SIMPLE_ICONS_TMUX);
  if (id == wxART_TNT)  
      return wxString(SVG_SIMPLE_ICONS_TNT);
  if (id == wxART_TODOIST)  
      return wxString(SVG_SIMPLE_ICONS_TODOIST);
  if (id == wxART_TOGGL)  
      return wxString(SVG_SIMPLE_ICONS_TOGGL);
  if (id == wxART_TOGGLTRACK)  
      return wxString(SVG_SIMPLE_ICONS_TOGGLTRACK);
  if (id == wxART_TOKYOMETRO)  
      return wxString(SVG_SIMPLE_ICONS_TOKYOMETRO);
  if (id == wxART_TOML)  
      return wxString(SVG_SIMPLE_ICONS_TOML);
  if (id == wxART_TOMORROWLAND)  
      return wxString(SVG_SIMPLE_ICONS_TOMORROWLAND);
  if (id == wxART_TOPCODER)  
      return wxString(SVG_SIMPLE_ICONS_TOPCODER);
  if (id == wxART_TOPTAL)  
      return wxString(SVG_SIMPLE_ICONS_TOPTAL);
  if (id == wxART_TORBROWSER)  
      return wxString(SVG_SIMPLE_ICONS_TORBROWSER);
  if (id == wxART_TORPROJECT)  
      return wxString(SVG_SIMPLE_ICONS_TORPROJECT);
  if (id == wxART_TOSHIBA)  
      return wxString(SVG_SIMPLE_ICONS_TOSHIBA);
  if (id == wxART_TOURBOX)  
      return wxString(SVG_SIMPLE_ICONS_TOURBOX);
  if (id == wxART_TOYOTA)  
      return wxString(SVG_SIMPLE_ICONS_TOYOTA);
  if (id == wxART_TPLINK)  
      return wxString(SVG_SIMPLE_ICONS_TPLINK);
  if (id == wxART_TQDM)  
      return wxString(SVG_SIMPLE_ICONS_TQDM);
  if (id == wxART_TRAEFIKMESH)  
      return wxString(SVG_SIMPLE_ICONS_TRAEFIKMESH);
  if (id == wxART_TRAEFIKPROXY)  
      return wxString(SVG_SIMPLE_ICONS_TRAEFIKPROXY);
  if (id == wxART_TRAILFORKS)  
      return wxString(SVG_SIMPLE_ICONS_TRAILFORKS);
  if (id == wxART_TRAINERROAD)  
      return wxString(SVG_SIMPLE_ICONS_TRAINERROAD);
  if (id == wxART_TRAKT)  
      return wxString(SVG_SIMPLE_ICONS_TRAKT);
  if (id == wxART_TRANSPORTFORIRELAND)  
      return wxString(SVG_SIMPLE_ICONS_TRANSPORTFORIRELAND);
  if (id == wxART_TRANSPORTFORLONDON)  
      return wxString(SVG_SIMPLE_ICONS_TRANSPORTFORLONDON);
  if (id == wxART_TRAVISCI)  
      return wxString(SVG_SIMPLE_ICONS_TRAVISCI);
  if (id == wxART_TREEHOUSE)  
      return wxString(SVG_SIMPLE_ICONS_TREEHOUSE);
  if (id == wxART_TRELLO)  
      return wxString(SVG_SIMPLE_ICONS_TRELLO);
  if (id == wxART_TRENDMICRO)  
      return wxString(SVG_SIMPLE_ICONS_TRENDMICRO);
  if (id == wxART_TREYARCH)  
      return wxString(SVG_SIMPLE_ICONS_TREYARCH);
  if (id == wxART_TRILIUM)  
      return wxString(SVG_SIMPLE_ICONS_TRILIUM);
  if (id == wxART_TRILLER)  
      return wxString(SVG_SIMPLE_ICONS_TRILLER);
  if (id == wxART_TRINO)  
      return wxString(SVG_SIMPLE_ICONS_TRINO);
  if (id == wxART_TRIPADVISOR)  
      return wxString(SVG_SIMPLE_ICONS_TRIPADVISOR);
  if (id == wxART_TRIPDOTCOM)  
      return wxString(SVG_SIMPLE_ICONS_TRIPDOTCOM);
  if (id == wxART_TRIVY)  
      return wxString(SVG_SIMPLE_ICONS_TRIVY);
  if (id == wxART_TROVE)  
      return wxString(SVG_SIMPLE_ICONS_TROVE);
  if (id == wxART_TRPC)  
      return wxString(SVG_SIMPLE_ICONS_TRPC);
  if (id == wxART_TRUENAS)  
      return wxString(SVG_SIMPLE_ICONS_TRUENAS);
  if (id == wxART_TRULIA)  
      return wxString(SVG_SIMPLE_ICONS_TRULIA);
  if (id == wxART_TRUSTEDSHOPS)  
      return wxString(SVG_SIMPLE_ICONS_TRUSTEDSHOPS);
  if (id == wxART_TRUSTPILOT)  
      return wxString(SVG_SIMPLE_ICONS_TRUSTPILOT);
  if (id == wxART_TRYHACKME)  
      return wxString(SVG_SIMPLE_ICONS_TRYHACKME);
  if (id == wxART_TRYITONLINE)  
      return wxString(SVG_SIMPLE_ICONS_TRYITONLINE);
  if (id == wxART_TSNODE)  
      return wxString(SVG_SIMPLE_ICONS_TSNODE);
  if (id == wxART_TUBI)  
      return wxString(SVG_SIMPLE_ICONS_TUBI);
  if (id == wxART_TUI)  
      return wxString(SVG_SIMPLE_ICONS_TUI);
  if (id == wxART_TUMBLR)  
      return wxString(SVG_SIMPLE_ICONS_TUMBLR);
  if (id == wxART_TUNEIN)  
      return wxString(SVG_SIMPLE_ICONS_TUNEIN);
  if (id == wxART_TURBO)  
      return wxString(SVG_SIMPLE_ICONS_TURBO);
  if (id == wxART_TURBOREPO)  
      return wxString(SVG_SIMPLE_ICONS_TURBOREPO);
  if (id == wxART_TURBOSQUID)  
      return wxString(SVG_SIMPLE_ICONS_TURBOSQUID);
  if (id == wxART_TURKISHAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_TURKISHAIRLINES);
  if (id == wxART_TURSO)  
      return wxString(SVG_SIMPLE_ICONS_TURSO);
  if (id == wxART_TUTANOTA)  
      return wxString(SVG_SIMPLE_ICONS_TUTANOTA);
  if (id == wxART_TVTIME)  
      return wxString(SVG_SIMPLE_ICONS_TVTIME);
  if (id == wxART_TWILIO)  
      return wxString(SVG_SIMPLE_ICONS_TWILIO);
  if (id == wxART_TWITCH)  
      return wxString(SVG_SIMPLE_ICONS_TWITCH);
  if (id == wxART_TWITTER)  
      return wxString(SVG_SIMPLE_ICONS_TWITTER);
  if (id == wxART_TWOO)  
      return wxString(SVG_SIMPLE_ICONS_TWOO);
  if (id == wxART_TYPEFORM)  
      return wxString(SVG_SIMPLE_ICONS_TYPEFORM);
  if (id == wxART_TYPESCRIPT)  
      return wxString(SVG_SIMPLE_ICONS_TYPESCRIPT);
  if (id == wxART_TYPO3)  
      return wxString(SVG_SIMPLE_ICONS_TYPO3);
  if (id == wxART_UBER)  
      return wxString(SVG_SIMPLE_ICONS_UBER);
  if (id == wxART_UBEREATS)  
      return wxString(SVG_SIMPLE_ICONS_UBEREATS);
  if (id == wxART_UBIQUITI)  
      return wxString(SVG_SIMPLE_ICONS_UBIQUITI);
  if (id == wxART_UBISOFT)  
      return wxString(SVG_SIMPLE_ICONS_UBISOFT);
  if (id == wxART_UBLOCKORIGIN)  
      return wxString(SVG_SIMPLE_ICONS_UBLOCKORIGIN);
  if (id == wxART_UBUNTU)  
      return wxString(SVG_SIMPLE_ICONS_UBUNTU);
  if (id == wxART_UBUNTUMATE)  
      return wxString(SVG_SIMPLE_ICONS_UBUNTUMATE);
  if (id == wxART_UDACITY)  
      return wxString(SVG_SIMPLE_ICONS_UDACITY);
  if (id == wxART_UDEMY)  
      return wxString(SVG_SIMPLE_ICONS_UDEMY);
  if (id == wxART_UFC)  
      return wxString(SVG_SIMPLE_ICONS_UFC);
  if (id == wxART_UIKIT)  
      return wxString(SVG_SIMPLE_ICONS_UIKIT);
  if (id == wxART_ULULE)  
      return wxString(SVG_SIMPLE_ICONS_ULULE);
  if (id == wxART_UMAMI)  
      return wxString(SVG_SIMPLE_ICONS_UMAMI);
  if (id == wxART_UMBRACO)  
      return wxString(SVG_SIMPLE_ICONS_UMBRACO);
  if (id == wxART_UML)  
      return wxString(SVG_SIMPLE_ICONS_UML);
  if (id == wxART_UNACADEMY)  
      return wxString(SVG_SIMPLE_ICONS_UNACADEMY);
  if (id == wxART_UNDERARMOUR)  
      return wxString(SVG_SIMPLE_ICONS_UNDERARMOUR);
  if (id == wxART_UNDERSCOREDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_UNDERSCOREDOTJS);
  if (id == wxART_UNDERTALE)  
      return wxString(SVG_SIMPLE_ICONS_UNDERTALE);
  if (id == wxART_UNICODE)  
      return wxString(SVG_SIMPLE_ICONS_UNICODE);
  if (id == wxART_UNILEVER)  
      return wxString(SVG_SIMPLE_ICONS_UNILEVER);
  if (id == wxART_UNITEDAIRLINES)  
      return wxString(SVG_SIMPLE_ICONS_UNITEDAIRLINES);
  if (id == wxART_UNITEDNATIONS)  
      return wxString(SVG_SIMPLE_ICONS_UNITEDNATIONS);
  if (id == wxART_UNITY)  
      return wxString(SVG_SIMPLE_ICONS_UNITY);
  if (id == wxART_UNLICENSE)  
      return wxString(SVG_SIMPLE_ICONS_UNLICENSE);
  if (id == wxART_UNO)  
      return wxString(SVG_SIMPLE_ICONS_UNO);
  if (id == wxART_UNOCSS)  
      return wxString(SVG_SIMPLE_ICONS_UNOCSS);
  if (id == wxART_UNRAID)  
      return wxString(SVG_SIMPLE_ICONS_UNRAID);
  if (id == wxART_UNREALENGINE)  
      return wxString(SVG_SIMPLE_ICONS_UNREALENGINE);
  if (id == wxART_UNSPLASH)  
      return wxString(SVG_SIMPLE_ICONS_UNSPLASH);
  if (id == wxART_UNTANGLE)  
      return wxString(SVG_SIMPLE_ICONS_UNTANGLE);
  if (id == wxART_UNTAPPD)  
      return wxString(SVG_SIMPLE_ICONS_UNTAPPD);
  if (id == wxART_UPCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_UPCLOUD);
  if (id == wxART_UPLABS)  
      return wxString(SVG_SIMPLE_ICONS_UPLABS);
  if (id == wxART_UPLOADED)  
      return wxString(SVG_SIMPLE_ICONS_UPLOADED);
  if (id == wxART_UPS)  
      return wxString(SVG_SIMPLE_ICONS_UPS);
  if (id == wxART_UPSTASH)  
      return wxString(SVG_SIMPLE_ICONS_UPSTASH);
  if (id == wxART_UPTIMEKUMA)  
      return wxString(SVG_SIMPLE_ICONS_UPTIMEKUMA);
  if (id == wxART_UPTOBOX)  
      return wxString(SVG_SIMPLE_ICONS_UPTOBOX);
  if (id == wxART_UPWORK)  
      return wxString(SVG_SIMPLE_ICONS_UPWORK);
  if (id == wxART_USPS)  
      return wxString(SVG_SIMPLE_ICONS_USPS);
  if (id == wxART_UTORRENT)  
      return wxString(SVG_SIMPLE_ICONS_UTORRENT);
  if (id == wxART_V)  
      return wxString(SVG_SIMPLE_ICONS_V);
  if (id == wxART_V2EX)  
      return wxString(SVG_SIMPLE_ICONS_V2EX);
  if (id == wxART_V8)  
      return wxString(SVG_SIMPLE_ICONS_V8);
  if (id == wxART_VAADIN)  
      return wxString(SVG_SIMPLE_ICONS_VAADIN);
  if (id == wxART_VAGRANT)  
      return wxString(SVG_SIMPLE_ICONS_VAGRANT);
  if (id == wxART_VALA)  
      return wxString(SVG_SIMPLE_ICONS_VALA);
  if (id == wxART_VALORANT)  
      return wxString(SVG_SIMPLE_ICONS_VALORANT);
  if (id == wxART_VALVE)  
      return wxString(SVG_SIMPLE_ICONS_VALVE);
  if (id == wxART_VAPOR)  
      return wxString(SVG_SIMPLE_ICONS_VAPOR);
  if (id == wxART_VAULT)  
      return wxString(SVG_SIMPLE_ICONS_VAULT);
  if (id == wxART_VAULTWARDEN)  
      return wxString(SVG_SIMPLE_ICONS_VAULTWARDEN);
  if (id == wxART_VAUXHALL)  
      return wxString(SVG_SIMPLE_ICONS_VAUXHALL);
  if (id == wxART_VBULLETIN)  
      return wxString(SVG_SIMPLE_ICONS_VBULLETIN);
  if (id == wxART_VECTORLOGOZONE)  
      return wxString(SVG_SIMPLE_ICONS_VECTORLOGOZONE);
  if (id == wxART_VECTORWORKS)  
      return wxString(SVG_SIMPLE_ICONS_VECTORWORKS);
  if (id == wxART_VEEAM)  
      return wxString(SVG_SIMPLE_ICONS_VEEAM);
  if (id == wxART_VEEPEE)  
      return wxString(SVG_SIMPLE_ICONS_VEEPEE);
  if (id == wxART_VEGA)  
      return wxString(SVG_SIMPLE_ICONS_VEGA);
  if (id == wxART_VELOG)  
      return wxString(SVG_SIMPLE_ICONS_VELOG);
  if (id == wxART_VENMO)  
      return wxString(SVG_SIMPLE_ICONS_VENMO);
  if (id == wxART_VERCEL)  
      return wxString(SVG_SIMPLE_ICONS_VERCEL);
  if (id == wxART_VERDACCIO)  
      return wxString(SVG_SIMPLE_ICONS_VERDACCIO);
  if (id == wxART_VERITAS)  
      return wxString(SVG_SIMPLE_ICONS_VERITAS);
  if (id == wxART_VERIZON)  
      return wxString(SVG_SIMPLE_ICONS_VERIZON);
  if (id == wxART_VESPA)  
      return wxString(SVG_SIMPLE_ICONS_VESPA);
  if (id == wxART_VEXXHOST)  
      return wxString(SVG_SIMPLE_ICONS_VEXXHOST);
  if (id == wxART_VFAIRS)  
      return wxString(SVG_SIMPLE_ICONS_VFAIRS);
  if (id == wxART_VIADEO)  
      return wxString(SVG_SIMPLE_ICONS_VIADEO);
  if (id == wxART_VIAPLAY)  
      return wxString(SVG_SIMPLE_ICONS_VIAPLAY);
  if (id == wxART_VIBER)  
      return wxString(SVG_SIMPLE_ICONS_VIBER);
  if (id == wxART_VIM)  
      return wxString(SVG_SIMPLE_ICONS_VIM);
  if (id == wxART_VIMEO)  
      return wxString(SVG_SIMPLE_ICONS_VIMEO);
  if (id == wxART_VIMEOLIVESTREAM)  
      return wxString(SVG_SIMPLE_ICONS_VIMEOLIVESTREAM);
  if (id == wxART_VIRGIN)  
      return wxString(SVG_SIMPLE_ICONS_VIRGIN);
  if (id == wxART_VIRGINMEDIA)  
      return wxString(SVG_SIMPLE_ICONS_VIRGINMEDIA);
  if (id == wxART_VIRTUALBOX)  
      return wxString(SVG_SIMPLE_ICONS_VIRTUALBOX);
  if (id == wxART_VIRUSTOTAL)  
      return wxString(SVG_SIMPLE_ICONS_VIRUSTOTAL);
  if (id == wxART_VISA)  
      return wxString(SVG_SIMPLE_ICONS_VISA);
  if (id == wxART_VISUALBASIC)  
      return wxString(SVG_SIMPLE_ICONS_VISUALBASIC);
  if (id == wxART_VISUALSTUDIO)  
      return wxString(SVG_SIMPLE_ICONS_VISUALSTUDIO);
  if (id == wxART_VISUALSTUDIOCODE)  
      return wxString(SVG_SIMPLE_ICONS_VISUALSTUDIOCODE);
  if (id == wxART_VITE)  
      return wxString(SVG_SIMPLE_ICONS_VITE);
  if (id == wxART_VITESS)  
      return wxString(SVG_SIMPLE_ICONS_VITESS);
  if (id == wxART_VITEST)  
      return wxString(SVG_SIMPLE_ICONS_VITEST);
  if (id == wxART_VIVALDI)  
      return wxString(SVG_SIMPLE_ICONS_VIVALDI);
  if (id == wxART_VIVAWALLET)  
      return wxString(SVG_SIMPLE_ICONS_VIVAWALLET);
  if (id == wxART_VIVINO)  
      return wxString(SVG_SIMPLE_ICONS_VIVINO);
  if (id == wxART_VK)  
      return wxString(SVG_SIMPLE_ICONS_VK);
  if (id == wxART_VLCMEDIAPLAYER)  
      return wxString(SVG_SIMPLE_ICONS_VLCMEDIAPLAYER);
  if (id == wxART_VMWARE)  
      return wxString(SVG_SIMPLE_ICONS_VMWARE);
  if (id == wxART_VODAFONE)  
      return wxString(SVG_SIMPLE_ICONS_VODAFONE);
  if (id == wxART_VOIDLINUX)  
      return wxString(SVG_SIMPLE_ICONS_VOIDLINUX);
  if (id == wxART_VOIPDOTMS)  
      return wxString(SVG_SIMPLE_ICONS_VOIPDOTMS);
  if (id == wxART_VOLKSWAGEN)  
      return wxString(SVG_SIMPLE_ICONS_VOLKSWAGEN);
  if (id == wxART_VOLVO)  
      return wxString(SVG_SIMPLE_ICONS_VOLVO);
  if (id == wxART_VONAGE)  
      return wxString(SVG_SIMPLE_ICONS_VONAGE);
  if (id == wxART_VORONDESIGN)  
      return wxString(SVG_SIMPLE_ICONS_VORONDESIGN);
  if (id == wxART_VOWPALWABBIT)  
      return wxString(SVG_SIMPLE_ICONS_VOWPALWABBIT);
  if (id == wxART_VOX)  
      return wxString(SVG_SIMPLE_ICONS_VOX);
  if (id == wxART_VSCO)  
      return wxString(SVG_SIMPLE_ICONS_VSCO);
  if (id == wxART_VSCODIUM)  
      return wxString(SVG_SIMPLE_ICONS_VSCODIUM);
  if (id == wxART_VTEX)  
      return wxString(SVG_SIMPLE_ICONS_VTEX);
  if (id == wxART_VUEDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_VUEDOTJS);
  if (id == wxART_VUETIFY)  
      return wxString(SVG_SIMPLE_ICONS_VUETIFY);
  if (id == wxART_VULKAN)  
      return wxString(SVG_SIMPLE_ICONS_VULKAN);
  if (id == wxART_VULTR)  
      return wxString(SVG_SIMPLE_ICONS_VULTR);
  if (id == wxART_VYOND)  
      return wxString(SVG_SIMPLE_ICONS_VYOND);
  if (id == wxART_W3C)  
      return wxString(SVG_SIMPLE_ICONS_W3C);
  if (id == wxART_WACOM)  
      return wxString(SVG_SIMPLE_ICONS_WACOM);
  if (id == wxART_WAGTAIL)  
      return wxString(SVG_SIMPLE_ICONS_WAGTAIL);
  if (id == wxART_WAILS)  
      return wxString(SVG_SIMPLE_ICONS_WAILS);
  if (id == wxART_WAKATIME)  
      return wxString(SVG_SIMPLE_ICONS_WAKATIME);
  if (id == wxART_WALKMAN)  
      return wxString(SVG_SIMPLE_ICONS_WALKMAN);
  if (id == wxART_WALLABAG)  
      return wxString(SVG_SIMPLE_ICONS_WALLABAG);
  if (id == wxART_WALLETCONNECT)  
      return wxString(SVG_SIMPLE_ICONS_WALLETCONNECT);
  if (id == wxART_WALMART)  
      return wxString(SVG_SIMPLE_ICONS_WALMART);
  if (id == wxART_WANTEDLY)  
      return wxString(SVG_SIMPLE_ICONS_WANTEDLY);
  if (id == wxART_WAPPALYZER)  
      return wxString(SVG_SIMPLE_ICONS_WAPPALYZER);
  if (id == wxART_WARNERBROS)  
      return wxString(SVG_SIMPLE_ICONS_WARNERBROS);
  if (id == wxART_WARP)  
      return wxString(SVG_SIMPLE_ICONS_WARP);
  if (id == wxART_WASABI)  
      return wxString(SVG_SIMPLE_ICONS_WASABI);
  if (id == wxART_WASMCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_WASMCLOUD);
  if (id == wxART_WASMER)  
      return wxString(SVG_SIMPLE_ICONS_WASMER);
  if (id == wxART_WATTPAD)  
      return wxString(SVG_SIMPLE_ICONS_WATTPAD);
  if (id == wxART_WAYLAND)  
      return wxString(SVG_SIMPLE_ICONS_WAYLAND);
  if (id == wxART_WAZE)  
      return wxString(SVG_SIMPLE_ICONS_WAZE);
  if (id == wxART_WEAROS)  
      return wxString(SVG_SIMPLE_ICONS_WEAROS);
  if (id == wxART_WEASYL)  
      return wxString(SVG_SIMPLE_ICONS_WEASYL);
  if (id == wxART_WEB3DOTJS)  
      return wxString(SVG_SIMPLE_ICONS_WEB3DOTJS);
  if (id == wxART_WEBASSEMBLY)  
      return wxString(SVG_SIMPLE_ICONS_WEBASSEMBLY);
  if (id == wxART_WEBAUTHN)  
      return wxString(SVG_SIMPLE_ICONS_WEBAUTHN);
  if (id == wxART_WEBCOMPONENTSDOTORG)  
      return wxString(SVG_SIMPLE_ICONS_WEBCOMPONENTSDOTORG);
  if (id == wxART_WEBDRIVERIO)  
      return wxString(SVG_SIMPLE_ICONS_WEBDRIVERIO);
  if (id == wxART_WEBFLOW)  
      return wxString(SVG_SIMPLE_ICONS_WEBFLOW);
  if (id == wxART_WEBGL)  
      return wxString(SVG_SIMPLE_ICONS_WEBGL);
  if (id == wxART_WEBHINT)  
      return wxString(SVG_SIMPLE_ICONS_WEBHINT);
  if (id == wxART_WEBLATE)  
      return wxString(SVG_SIMPLE_ICONS_WEBLATE);
  if (id == wxART_WEBMIN)  
      return wxString(SVG_SIMPLE_ICONS_WEBMIN);
  if (id == wxART_WEBMONEY)  
      return wxString(SVG_SIMPLE_ICONS_WEBMONEY);
  if (id == wxART_WEBPACK)  
      return wxString(SVG_SIMPLE_ICONS_WEBPACK);
  if (id == wxART_WEBRTC)  
      return wxString(SVG_SIMPLE_ICONS_WEBRTC);
  if (id == wxART_WEBSTORM)  
      return wxString(SVG_SIMPLE_ICONS_WEBSTORM);
  if (id == wxART_WEBTOON)  
      return wxString(SVG_SIMPLE_ICONS_WEBTOON);
  if (id == wxART_WEBTREES)  
      return wxString(SVG_SIMPLE_ICONS_WEBTREES);
  if (id == wxART_WECHAT)  
      return wxString(SVG_SIMPLE_ICONS_WECHAT);
  if (id == wxART_WEGAME)  
      return wxString(SVG_SIMPLE_ICONS_WEGAME);
  if (id == wxART_WEIGHTSANDBIASES)  
      return wxString(SVG_SIMPLE_ICONS_WEIGHTSANDBIASES);
  if (id == wxART_WELCOMETOTHEJUNGLE)  
      return wxString(SVG_SIMPLE_ICONS_WELCOMETOTHEJUNGLE);
  if (id == wxART_WELLFOUND)  
      return wxString(SVG_SIMPLE_ICONS_WELLFOUND);
  if (id == wxART_WEMO)  
      return wxString(SVG_SIMPLE_ICONS_WEMO);
  if (id == wxART_WESTERNDIGITAL)  
      return wxString(SVG_SIMPLE_ICONS_WESTERNDIGITAL);
  if (id == wxART_WETRANSFER)  
      return wxString(SVG_SIMPLE_ICONS_WETRANSFER);
  if (id == wxART_WHATSAPP)  
      return wxString(SVG_SIMPLE_ICONS_WHATSAPP);
  if (id == wxART_WHENIWORK)  
      return wxString(SVG_SIMPLE_ICONS_WHENIWORK);
  if (id == wxART_WHITESOURCE)  
      return wxString(SVG_SIMPLE_ICONS_WHITESOURCE);
  if (id == wxART_WII)  
      return wxString(SVG_SIMPLE_ICONS_WII);
  if (id == wxART_WIIU)  
      return wxString(SVG_SIMPLE_ICONS_WIIU);
  if (id == wxART_WIKIDATA)  
      return wxString(SVG_SIMPLE_ICONS_WIKIDATA);
  if (id == wxART_WIKIDOTGG)  
      return wxString(SVG_SIMPLE_ICONS_WIKIDOTGG);
  if (id == wxART_WIKIDOTJS)  
      return wxString(SVG_SIMPLE_ICONS_WIKIDOTJS);
  if (id == wxART_WIKIMEDIACOMMONS)  
      return wxString(SVG_SIMPLE_ICONS_WIKIMEDIACOMMONS);
  if (id == wxART_WIKIPEDIA)  
      return wxString(SVG_SIMPLE_ICONS_WIKIPEDIA);
  if (id == wxART_WIKIQUOTE)  
      return wxString(SVG_SIMPLE_ICONS_WIKIQUOTE);
  if (id == wxART_WIKIVOYAGE)  
      return wxString(SVG_SIMPLE_ICONS_WIKIVOYAGE);
  if (id == wxART_WINAMP)  
      return wxString(SVG_SIMPLE_ICONS_WINAMP);
  if (id == wxART_WINDICSS)  
      return wxString(SVG_SIMPLE_ICONS_WINDICSS);
  if (id == wxART_WINDOWS)  
      return wxString(SVG_SIMPLE_ICONS_WINDOWS);
  if (id == wxART_WINDOWS10)  
      return wxString(SVG_SIMPLE_ICONS_WINDOWS10);
  if (id == wxART_WINDOWS11)  
      return wxString(SVG_SIMPLE_ICONS_WINDOWS11);
  if (id == wxART_WINDOWS95)  
      return wxString(SVG_SIMPLE_ICONS_WINDOWS95);
  if (id == wxART_WINDOWSTERMINAL)  
      return wxString(SVG_SIMPLE_ICONS_WINDOWSTERMINAL);
  if (id == wxART_WINDOWSXP)  
      return wxString(SVG_SIMPLE_ICONS_WINDOWSXP);
  if (id == wxART_WINMATE)  
      return wxString(SVG_SIMPLE_ICONS_WINMATE);
  if (id == wxART_WIPRO)  
      return wxString(SVG_SIMPLE_ICONS_WIPRO);
  if (id == wxART_WIRE)  
      return wxString(SVG_SIMPLE_ICONS_WIRE);
  if (id == wxART_WIREGUARD)  
      return wxString(SVG_SIMPLE_ICONS_WIREGUARD);
  if (id == wxART_WIRESHARK)  
      return wxString(SVG_SIMPLE_ICONS_WIRESHARK);
  if (id == wxART_WISE)  
      return wxString(SVG_SIMPLE_ICONS_WISE);
  if (id == wxART_WISH)  
      return wxString(SVG_SIMPLE_ICONS_WISH);
  if (id == wxART_WISTIA)  
      return wxString(SVG_SIMPLE_ICONS_WISTIA);
  if (id == wxART_WIX)  
      return wxString(SVG_SIMPLE_ICONS_WIX);
  if (id == wxART_WIZZAIR)  
      return wxString(SVG_SIMPLE_ICONS_WIZZAIR);
  if (id == wxART_WOLFRAM)  
      return wxString(SVG_SIMPLE_ICONS_WOLFRAM);
  if (id == wxART_WOLFRAMLANGUAGE)  
      return wxString(SVG_SIMPLE_ICONS_WOLFRAMLANGUAGE);
  if (id == wxART_WOLFRAMMATHEMATICA)  
      return wxString(SVG_SIMPLE_ICONS_WOLFRAMMATHEMATICA);
  if (id == wxART_WOO)  
      return wxString(SVG_SIMPLE_ICONS_WOO);
  if (id == wxART_WOOCOMMERCE)  
      return wxString(SVG_SIMPLE_ICONS_WOOCOMMERCE);
  if (id == wxART_WORDPRESS)  
      return wxString(SVG_SIMPLE_ICONS_WORDPRESS);
  if (id == wxART_WORKPLACE)  
      return wxString(SVG_SIMPLE_ICONS_WORKPLACE);
  if (id == wxART_WORLDHEALTHORGANIZATION)  
      return wxString(SVG_SIMPLE_ICONS_WORLDHEALTHORGANIZATION);
  if (id == wxART_WPENGINE)  
      return wxString(SVG_SIMPLE_ICONS_WPENGINE);
  if (id == wxART_WPEXPLORER)  
      return wxString(SVG_SIMPLE_ICONS_WPEXPLORER);
  if (id == wxART_WPROCKET)  
      return wxString(SVG_SIMPLE_ICONS_WPROCKET);
  if (id == wxART_WRITEDOTAS)  
      return wxString(SVG_SIMPLE_ICONS_WRITEDOTAS);
  if (id == wxART_WWE)  
      return wxString(SVG_SIMPLE_ICONS_WWE);
  if (id == wxART_WWISE)  
      return wxString(SVG_SIMPLE_ICONS_WWISE);
  if (id == wxART_X)  
      return wxString(SVG_SIMPLE_ICONS_X);
  if (id == wxART_XAMARIN)  
      return wxString(SVG_SIMPLE_ICONS_XAMARIN);
  if (id == wxART_XAML)  
      return wxString(SVG_SIMPLE_ICONS_XAML);
  if (id == wxART_XAMPP)  
      return wxString(SVG_SIMPLE_ICONS_XAMPP);
  if (id == wxART_XBOX)  
      return wxString(SVG_SIMPLE_ICONS_XBOX);
  if (id == wxART_XCODE)  
      return wxString(SVG_SIMPLE_ICONS_XCODE);
  if (id == wxART_XDADEVELOPERS)  
      return wxString(SVG_SIMPLE_ICONS_XDADEVELOPERS);
  if (id == wxART_XDOTORG)  
      return wxString(SVG_SIMPLE_ICONS_XDOTORG);
  if (id == wxART_XERO)  
      return wxString(SVG_SIMPLE_ICONS_XERO);
  if (id == wxART_XFCE)  
      return wxString(SVG_SIMPLE_ICONS_XFCE);
  if (id == wxART_XIAOMI)  
      return wxString(SVG_SIMPLE_ICONS_XIAOMI);
  if (id == wxART_XILINX)  
      return wxString(SVG_SIMPLE_ICONS_XILINX);
  if (id == wxART_XING)  
      return wxString(SVG_SIMPLE_ICONS_XING);
  if (id == wxART_XMPP)  
      return wxString(SVG_SIMPLE_ICONS_XMPP);
  if (id == wxART_XO)  
      return wxString(SVG_SIMPLE_ICONS_XO);
  if (id == wxART_XRP)  
      return wxString(SVG_SIMPLE_ICONS_XRP);
  if (id == wxART_XSPLIT)  
      return wxString(SVG_SIMPLE_ICONS_XSPLIT);
  if (id == wxART_XSTATE)  
      return wxString(SVG_SIMPLE_ICONS_XSTATE);
  if (id == wxART_YAHOO)  
      return wxString(SVG_SIMPLE_ICONS_YAHOO);
  if (id == wxART_YALE)  
      return wxString(SVG_SIMPLE_ICONS_YALE);
  if (id == wxART_YAMAHACORPORATION)  
      return wxString(SVG_SIMPLE_ICONS_YAMAHACORPORATION);
  if (id == wxART_YAMAHAMOTORCORPORATION)  
      return wxString(SVG_SIMPLE_ICONS_YAMAHAMOTORCORPORATION);
  if (id == wxART_YAML)  
      return wxString(SVG_SIMPLE_ICONS_YAML);
  if (id == wxART_YAMMER)  
      return wxString(SVG_SIMPLE_ICONS_YAMMER);
  if (id == wxART_YANDEXCLOUD)  
      return wxString(SVG_SIMPLE_ICONS_YANDEXCLOUD);
  if (id == wxART_YARN)  
      return wxString(SVG_SIMPLE_ICONS_YARN);
  if (id == wxART_YCOMBINATOR)  
      return wxString(SVG_SIMPLE_ICONS_YCOMBINATOR);
  if (id == wxART_YELP)  
      return wxString(SVG_SIMPLE_ICONS_YELP);
  if (id == wxART_YETI)  
      return wxString(SVG_SIMPLE_ICONS_YETI);
  if (id == wxART_YOAST)  
      return wxString(SVG_SIMPLE_ICONS_YOAST);
  if (id == wxART_YOLO)  
      return wxString(SVG_SIMPLE_ICONS_YOLO);
  if (id == wxART_YOURTRAVELDOTTV)  
      return wxString(SVG_SIMPLE_ICONS_YOURTRAVELDOTTV);
  if (id == wxART_YOUTUBE)  
      return wxString(SVG_SIMPLE_ICONS_YOUTUBE);
  if (id == wxART_YOUTUBEGAMING)  
      return wxString(SVG_SIMPLE_ICONS_YOUTUBEGAMING);
  if (id == wxART_YOUTUBEMUSIC)  
      return wxString(SVG_SIMPLE_ICONS_YOUTUBEMUSIC);
  if (id == wxART_YOUTUBESTUDIO)  
      return wxString(SVG_SIMPLE_ICONS_YOUTUBESTUDIO);
  if (id == wxART_YOUTUBETV)  
      return wxString(SVG_SIMPLE_ICONS_YOUTUBETV);
  if (id == wxART_YUBICO)  
      return wxString(SVG_SIMPLE_ICONS_YUBICO);
  if (id == wxART_ZABKA)  
      return wxString(SVG_SIMPLE_ICONS_ZABKA);
  if (id == wxART_ZALANDO)  
      return wxString(SVG_SIMPLE_ICONS_ZALANDO);
  if (id == wxART_ZALO)  
      return wxString(SVG_SIMPLE_ICONS_ZALO);
  if (id == wxART_ZAPIER)  
      return wxString(SVG_SIMPLE_ICONS_ZAPIER);
  if (id == wxART_ZARA)  
      return wxString(SVG_SIMPLE_ICONS_ZARA);
  if (id == wxART_ZAZZLE)  
      return wxString(SVG_SIMPLE_ICONS_ZAZZLE);
  if (id == wxART_ZCASH)  
      return wxString(SVG_SIMPLE_ICONS_ZCASH);
  if (id == wxART_ZDF)  
      return wxString(SVG_SIMPLE_ICONS_ZDF);
  if (id == wxART_ZEBRATECHNOLOGIES)  
      return wxString(SVG_SIMPLE_ICONS_ZEBRATECHNOLOGIES);
  if (id == wxART_ZELLE)  
      return wxString(SVG_SIMPLE_ICONS_ZELLE);
  if (id == wxART_ZEND)  
      return wxString(SVG_SIMPLE_ICONS_ZEND);
  if (id == wxART_ZENDESK)  
      return wxString(SVG_SIMPLE_ICONS_ZENDESK);
  if (id == wxART_ZENDFRAMEWORK)  
      return wxString(SVG_SIMPLE_ICONS_ZENDFRAMEWORK);
  if (id == wxART_ZENN)  
      return wxString(SVG_SIMPLE_ICONS_ZENN);
  if (id == wxART_ZENODO)  
      return wxString(SVG_SIMPLE_ICONS_ZENODO);
  if (id == wxART_ZENSAR)  
      return wxString(SVG_SIMPLE_ICONS_ZENSAR);
  if (id == wxART_ZERODHA)  
      return wxString(SVG_SIMPLE_ICONS_ZERODHA);
  if (id == wxART_ZEROMQ)  
      return wxString(SVG_SIMPLE_ICONS_ZEROMQ);
  if (id == wxART_ZERPLY)  
      return wxString(SVG_SIMPLE_ICONS_ZERPLY);
  if (id == wxART_ZETTLR)  
      return wxString(SVG_SIMPLE_ICONS_ZETTLR);
  if (id == wxART_ZHIHU)  
      return wxString(SVG_SIMPLE_ICONS_ZHIHU);
  if (id == wxART_ZIG)  
      return wxString(SVG_SIMPLE_ICONS_ZIG);
  if (id == wxART_ZIGBEE)  
      return wxString(SVG_SIMPLE_ICONS_ZIGBEE);
  if (id == wxART_ZILCH)  
      return wxString(SVG_SIMPLE_ICONS_ZILCH);
  if (id == wxART_ZILLOW)  
      return wxString(SVG_SIMPLE_ICONS_ZILLOW);
  if (id == wxART_ZINCSEARCH)  
      return wxString(SVG_SIMPLE_ICONS_ZINCSEARCH);
  if (id == wxART_ZINGAT)  
      return wxString(SVG_SIMPLE_ICONS_ZINGAT);
  if (id == wxART_ZOD)  
      return wxString(SVG_SIMPLE_ICONS_ZOD);
  if (id == wxART_ZOHO)  
      return wxString(SVG_SIMPLE_ICONS_ZOHO);
  if (id == wxART_ZOIPER)  
      return wxString(SVG_SIMPLE_ICONS_ZOIPER);
  if (id == wxART_ZOMATO)  
      return wxString(SVG_SIMPLE_ICONS_ZOMATO);
  if (id == wxART_ZOOM)  
      return wxString(SVG_SIMPLE_ICONS_ZOOM);
  if (id == wxART_ZORIN)  
      return wxString(SVG_SIMPLE_ICONS_ZORIN);
  if (id == wxART_ZOTERO)  
      return wxString(SVG_SIMPLE_ICONS_ZOTERO);
  if (id == wxART_ZSH)  
      return wxString(SVG_SIMPLE_ICONS_ZSH);
  if (id == wxART_ZULIP)  
      return wxString(SVG_SIMPLE_ICONS_ZULIP);
  if (id == wxART_ZWAVE)  
      return wxString(SVG_SIMPLE_ICONS_ZWAVE);
  if (id == wxART_ZYTE)  
      return wxString(SVG_SIMPLE_ICONS_ZYTE);


// Any IDs not implemented here will return a null string 
return wxString(); 
}


// Return SVG for the current ID as a string, with given color
wxString IconsSimpleArtColorSVGByID(const wxArtID& id, const wxColour& color)
{
wxString svg = IconsSimpleArtSVGByID(id); 
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
wxArrayString IconsSimpleArtIDs()
{
    wxArrayString list; 

    list.Add(wxART_1001TRACKLISTS); 
    list.Add(wxART_1PASSWORD); 
    list.Add(wxART_3M); 
    list.Add(wxART_42); 
    list.Add(wxART_4CHAN); 
    list.Add(wxART_4D); 
    list.Add(wxART_500PX); 
    list.Add(wxART_ABBOTT); 
    list.Add(wxART_ABBROBOTSTUDIO); 
    list.Add(wxART_ABBVIE); 
    list.Add(wxART_ABLETONLIVE); 
    list.Add(wxART_ABOUTDOTME); 
    list.Add(wxART_ABSTRACT); 
    list.Add(wxART_ACADEMIA); 
    list.Add(wxART_ACCENTURE); 
    list.Add(wxART_ACCLAIM); 
    list.Add(wxART_ACCUSOFT); 
    list.Add(wxART_ACER); 
    list.Add(wxART_ACM); 
    list.Add(wxART_ACTIGRAPH); 
    list.Add(wxART_ACTIVISION); 
    list.Add(wxART_ACTIVITYPUB); 
    list.Add(wxART_ACURA); 
    list.Add(wxART_ADAFRUIT); 
    list.Add(wxART_ADBLOCK); 
    list.Add(wxART_ADBLOCKPLUS); 
    list.Add(wxART_ADDTHIS); 
    list.Add(wxART_ADGUARD); 
    list.Add(wxART_ADIDAS); 
    list.Add(wxART_ADMINER); 
    list.Add(wxART_ADOBE); 
    list.Add(wxART_ADOBEACROBATREADER); 
    list.Add(wxART_ADOBEAFTEREFFECTS); 
    list.Add(wxART_ADOBEAUDITION); 
    list.Add(wxART_ADOBECREATIVECLOUD); 
    list.Add(wxART_ADOBEDREAMWEAVER); 
    list.Add(wxART_ADOBEFONTS); 
    list.Add(wxART_ADOBEILLUSTRATOR); 
    list.Add(wxART_ADOBEINDESIGN); 
    list.Add(wxART_ADOBELIGHTROOM); 
    list.Add(wxART_ADOBELIGHTROOMCLASSIC); 
    list.Add(wxART_ADOBEPHOTOSHOP); 
    list.Add(wxART_ADOBEPREMIEREPRO); 
    list.Add(wxART_ADOBEXD); 
    list.Add(wxART_ADONISJS); 
    list.Add(wxART_ADP); 
    list.Add(wxART_ADROLL); 
    list.Add(wxART_ADVENTOFCODE); 
    list.Add(wxART_ADYEN); 
    list.Add(wxART_AERLINGUS); 
    list.Add(wxART_AEROFLOT); 
    list.Add(wxART_AEROMEXICO); 
    list.Add(wxART_AEROSPIKE); 
    list.Add(wxART_AEW); 
    list.Add(wxART_AFFINE); 
    list.Add(wxART_AFFINITY); 
    list.Add(wxART_AFFINITYDESIGNER); 
    list.Add(wxART_AFFINITYPHOTO); 
    list.Add(wxART_AFFINITYPUBLISHER); 
    list.Add(wxART_AFRAME); 
    list.Add(wxART_AGORA); 
    list.Add(wxART_AIB); 
    list.Add(wxART_AIDUNGEON); 
    list.Add(wxART_AIOHTTP); 
    list.Add(wxART_AIQFOME); 
    list.Add(wxART_AIRASIA); 
    list.Add(wxART_AIRBNB); 
    list.Add(wxART_AIRBRAKEDOTIO); 
    list.Add(wxART_AIRBUS); 
    list.Add(wxART_AIRBYTE); 
    list.Add(wxART_AIRCALL); 
    list.Add(wxART_AIRCANADA); 
    list.Add(wxART_AIRCHINA); 
    list.Add(wxART_AIRFRANCE); 
    list.Add(wxART_AIRINDIA); 
    list.Add(wxART_AIRPLAYAUDIO); 
    list.Add(wxART_AIRPLAYVIDEO); 
    list.Add(wxART_AIRTABLE); 
    list.Add(wxART_AJV); 
    list.Add(wxART_AKAMAI); 
    list.Add(wxART_AKAUNTING); 
    list.Add(wxART_ALACRITTY); 
    list.Add(wxART_ALBERTHEIJN); 
    list.Add(wxART_ALBY); 
    list.Add(wxART_ALCHEMY); 
    list.Add(wxART_ALDINORD); 
    list.Add(wxART_ALDISUD); 
    list.Add(wxART_ALFAROMEO); 
    list.Add(wxART_ALFRED); 
    list.Add(wxART_ALGOLIA); 
    list.Add(wxART_ALGORAND); 
    list.Add(wxART_ALIBABACLOUD); 
    list.Add(wxART_ALIBABADOTCOM); 
    list.Add(wxART_ALIENWARE); 
    list.Add(wxART_ALIEXPRESS); 
    list.Add(wxART_ALIPAY); 
    list.Add(wxART_ALLEGRO); 
    list.Add(wxART_ALLIEDMODDERS); 
    list.Add(wxART_ALLOCINE); 
    list.Add(wxART_ALLTRAILS); 
    list.Add(wxART_ALPINEDOTJS); 
    list.Add(wxART_ALPINELINUX); 
    list.Add(wxART_ALTERYX); 
    list.Add(wxART_ALTIUMDESIGNER); 
    list.Add(wxART_ALWAYSDATA); 
    list.Add(wxART_AMAZON); 
    list.Add(wxART_AMAZONALEXA); 
    list.Add(wxART_AMAZONAPIGATEWAY); 
    list.Add(wxART_AMAZONAWS); 
    list.Add(wxART_AMAZONCLOUDWATCH); 
    list.Add(wxART_AMAZONDOCUMENTDB); 
    list.Add(wxART_AMAZONDYNAMODB); 
    list.Add(wxART_AMAZONEC2); 
    list.Add(wxART_AMAZONECS); 
    list.Add(wxART_AMAZONEKS); 
    list.Add(wxART_AMAZONFIRETV); 
    list.Add(wxART_AMAZONGAMES); 
    list.Add(wxART_AMAZONIAM); 
    list.Add(wxART_AMAZONLUMBERYARD); 
    list.Add(wxART_AMAZONLUNA); 
    list.Add(wxART_AMAZONPAY); 
    list.Add(wxART_AMAZONPRIME); 
    list.Add(wxART_AMAZONRDS); 
    list.Add(wxART_AMAZONREDSHIFT); 
    list.Add(wxART_AMAZONROUTE53); 
    list.Add(wxART_AMAZONS3); 
    list.Add(wxART_AMAZONSIMPLEEMAILSERVICE); 
    list.Add(wxART_AMAZONSQS); 
    list.Add(wxART_AMD); 
    list.Add(wxART_AMEBA); 
    list.Add(wxART_AMERICANAIRLINES); 
    list.Add(wxART_AMERICANEXPRESS); 
    list.Add(wxART_AMG); 
    list.Add(wxART_AMP); 
    list.Add(wxART_AMUL); 
    list.Add(wxART_ANA); 
    list.Add(wxART_ANACONDA); 
    list.Add(wxART_ANALOGUE); 
    list.Add(wxART_ANCHOR); 
    list.Add(wxART_ANDELA); 
    list.Add(wxART_ANDROID); 
    list.Add(wxART_ANDROIDAUTO); 
    list.Add(wxART_ANDROIDSTUDIO); 
    list.Add(wxART_ANGELLIST); 
    list.Add(wxART_ANGULAR); 
    list.Add(wxART_ANGULARJS); 
    list.Add(wxART_ANGULARUNIVERSAL); 
    list.Add(wxART_ANILIST); 
    list.Add(wxART_ANSIBLE); 
    list.Add(wxART_ANSWER); 
    list.Add(wxART_ANSYS); 
    list.Add(wxART_ANTA); 
    list.Add(wxART_ANTDESIGN); 
    list.Add(wxART_ANTENA3); 
    list.Add(wxART_ANYDESK); 
    list.Add(wxART_AOL); 
    list.Add(wxART_APACHE); 
    list.Add(wxART_APACHEAIRFLOW); 
    list.Add(wxART_APACHEANT); 
    list.Add(wxART_APACHECASSANDRA); 
    list.Add(wxART_APACHECLOUDSTACK); 
    list.Add(wxART_APACHECORDOVA); 
    list.Add(wxART_APACHECOUCHDB); 
    list.Add(wxART_APACHEDRUID); 
    list.Add(wxART_APACHEECHARTS); 
    list.Add(wxART_APACHEFLINK); 
    list.Add(wxART_APACHEGROOVY); 
    list.Add(wxART_APACHEGUACAMOLE); 
    list.Add(wxART_APACHEHADOOP); 
    list.Add(wxART_APACHEHIVE); 
    list.Add(wxART_APACHEJMETER); 
    list.Add(wxART_APACHEKAFKA); 
    list.Add(wxART_APACHEKYLIN); 
    list.Add(wxART_APACHEMAVEN); 
    list.Add(wxART_APACHENETBEANSIDE); 
    list.Add(wxART_APACHEOPENOFFICE); 
    list.Add(wxART_APACHEPARQUET); 
    list.Add(wxART_APACHEPULSAR); 
    list.Add(wxART_APACHEROCKETMQ); 
    list.Add(wxART_APACHESOLR); 
    list.Add(wxART_APACHESPARK); 
    list.Add(wxART_APACHESTORM); 
    list.Add(wxART_APACHETOMCAT); 
    list.Add(wxART_APARAT); 
    list.Add(wxART_APIFOX); 
    list.Add(wxART_APOLLOGRAPHQL); 
    list.Add(wxART_APOSTROPHE); 
    list.Add(wxART_APPIAN); 
    list.Add(wxART_APPLE); 
    list.Add(wxART_APPLEARCADE); 
    list.Add(wxART_APPLEMUSIC); 
    list.Add(wxART_APPLENEWS); 
    list.Add(wxART_APPLEPAY); 
    list.Add(wxART_APPLEPODCASTS); 
    list.Add(wxART_APPLETV); 
    list.Add(wxART_APPSIGNAL); 
    list.Add(wxART_APPSMITH); 
    list.Add(wxART_APPSTORE); 
    list.Add(wxART_APPVEYOR); 
    list.Add(wxART_APPWRITE); 
    list.Add(wxART_AQUA); 
    list.Add(wxART_ARAL); 
    list.Add(wxART_ARANGODB); 
    list.Add(wxART_ARC); 
    list.Add(wxART_ARCGIS); 
    list.Add(wxART_ARCHICAD); 
    list.Add(wxART_ARCHIVEOFOUROWN); 
    list.Add(wxART_ARCHLINUX); 
    list.Add(wxART_ARDOUR); 
    list.Add(wxART_ARDUINO); 
    list.Add(wxART_ARGO); 
    list.Add(wxART_ARGOS); 
    list.Add(wxART_ARIAKIT); 
    list.Add(wxART_ARKECOSYSTEM); 
    list.Add(wxART_ARLO); 
    list.Add(wxART_ARM); 
    list.Add(wxART_ARMKEIL); 
    list.Add(wxART_ARSTECHNICA); 
    list.Add(wxART_ARTIFACTHUB); 
    list.Add(wxART_ARTIXLINUX); 
    list.Add(wxART_ARTSTATION); 
    list.Add(wxART_ARXIV); 
    list.Add(wxART_ASANA); 
    list.Add(wxART_ASCIIDOCTOR); 
    list.Add(wxART_ASCIINEMA); 
    list.Add(wxART_ASDA); 
    list.Add(wxART_ASEPRITE); 
    list.Add(wxART_ASKFM); 
    list.Add(wxART_ASKUBUNTU); 
    list.Add(wxART_ASSEMBLYSCRIPT); 
    list.Add(wxART_ASTONMARTIN); 
    list.Add(wxART_ASTRO); 
    list.Add(wxART_ASUS); 
    list.Add(wxART_ATANDT); 
    list.Add(wxART_ATARI); 
    list.Add(wxART_ATLASSIAN); 
    list.Add(wxART_ATOM); 
    list.Add(wxART_AUCHAN); 
    list.Add(wxART_AUDACITY); 
    list.Add(wxART_AUDI); 
    list.Add(wxART_AUDIBLE); 
    list.Add(wxART_AUDIOBOOM); 
    list.Add(wxART_AUDIOMACK); 
    list.Add(wxART_AUDIOTECHNICA); 
    list.Add(wxART_AURELIA); 
    list.Add(wxART_AUTH0); 
    list.Add(wxART_AUTHELIA); 
    list.Add(wxART_AUTHY); 
    list.Add(wxART_AUTODESK); 
    list.Add(wxART_AUTODESKREVIT); 
    list.Add(wxART_AUTOHOTKEY); 
    list.Add(wxART_AUTOMATTIC); 
    list.Add(wxART_AUTOPREFIXER); 
    list.Add(wxART_AVAJS); 
    list.Add(wxART_AVAST); 
    list.Add(wxART_AVIRA); 
    list.Add(wxART_AWESOMELISTS); 
    list.Add(wxART_AWESOMEWM); 
    list.Add(wxART_AWSAMPLIFY); 
    list.Add(wxART_AWSFARGATE); 
    list.Add(wxART_AWSLAMBDA); 
    list.Add(wxART_AWSORGANIZATIONS); 
    list.Add(wxART_AXIOS); 
    list.Add(wxART_AZUREARTIFACTS); 
    list.Add(wxART_AZUREDATAEXPLORER); 
    list.Add(wxART_AZUREDEVOPS); 
    list.Add(wxART_AZUREFUNCTIONS); 
    list.Add(wxART_AZUREPIPELINES); 
    list.Add(wxART_BABEL); 
    list.Add(wxART_BABYLONDOTJS); 
    list.Add(wxART_BACKBLAZE); 
    list.Add(wxART_BACKBONEDOTJS); 
    list.Add(wxART_BACKENDLESS); 
    list.Add(wxART_BACKSTAGE); 
    list.Add(wxART_BADGR); 
    list.Add(wxART_BADOO); 
    list.Add(wxART_BAIDU); 
    list.Add(wxART_BAMBOO); 
    list.Add(wxART_BANDCAMP); 
    list.Add(wxART_BANDLAB); 
    list.Add(wxART_BANDRAUTOMATION); 
    list.Add(wxART_BANDSINTOWN); 
    list.Add(wxART_BANKOFAMERICA); 
    list.Add(wxART_BARCLAYS); 
    list.Add(wxART_BAREMETRICS); 
    list.Add(wxART_BASECAMP); 
    list.Add(wxART_BASTYON); 
    list.Add(wxART_BATA); 
    list.Add(wxART_BATHASU); 
    list.Add(wxART_BATTLEDOTNET); 
    list.Add(wxART_BBC); 
    list.Add(wxART_BBCIPLAYER); 
    list.Add(wxART_BEATPORT); 
    list.Add(wxART_BEATS); 
    list.Add(wxART_BEATSBYDRE); 
    list.Add(wxART_BEHANCE); 
    list.Add(wxART_BEIJINGSUBWAY); 
    list.Add(wxART_BEM); 
    list.Add(wxART_BENTLEY); 
    list.Add(wxART_BENTO); 
    list.Add(wxART_BENTOML); 
    list.Add(wxART_BEREAL); 
    list.Add(wxART_BETFAIR); 
    list.Add(wxART_BIGBASKET); 
    list.Add(wxART_BIGBLUEBUTTON); 
    list.Add(wxART_BIGCARTEL); 
    list.Add(wxART_BIGCOMMERCE); 
    list.Add(wxART_BILIBILI); 
    list.Add(wxART_BILLBOARD); 
    list.Add(wxART_BIM); 
    list.Add(wxART_BINANCE); 
    list.Add(wxART_BIOLINK); 
    list.Add(wxART_BISECTHOSTING); 
    list.Add(wxART_BIT); 
    list.Add(wxART_BITBUCKET); 
    list.Add(wxART_BITCOIN); 
    list.Add(wxART_BITCOINCASH); 
    list.Add(wxART_BITCOINSV); 
    list.Add(wxART_BITDEFENDER); 
    list.Add(wxART_BITLY); 
    list.Add(wxART_BITRISE); 
    list.Add(wxART_BITWARDEN); 
    list.Add(wxART_BITWIG); 
    list.Add(wxART_BLACKBERRY); 
    list.Add(wxART_BLAZEMETER); 
    list.Add(wxART_BLAZOR); 
    list.Add(wxART_BLENDER); 
    list.Add(wxART_BLOCKCHAINDOTCOM); 
    list.Add(wxART_BLOGGER); 
    list.Add(wxART_BLOGLOVIN); 
    list.Add(wxART_BLUEPRINT); 
    list.Add(wxART_BLUETOOTH); 
    list.Add(wxART_BMCSOFTWARE); 
    list.Add(wxART_BMW); 
    list.Add(wxART_BOARDGAMEGEEK); 
    list.Add(wxART_BOEHRINGERINGELHEIM); 
    list.Add(wxART_BOEING); 
    list.Add(wxART_BOMBARDIER); 
    list.Add(wxART_BOOKALOPE); 
    list.Add(wxART_BOOKBUB); 
    list.Add(wxART_BOOKMETER); 
    list.Add(wxART_BOOKMYSHOW); 
    list.Add(wxART_BOOKSTACK); 
    list.Add(wxART_BOOST); 
    list.Add(wxART_BOOTS); 
    list.Add(wxART_BOOTSTRAP); 
    list.Add(wxART_BORGBACKUP); 
    list.Add(wxART_BOSCH); 
    list.Add(wxART_BOSE); 
    list.Add(wxART_BOTBLECMS); 
    list.Add(wxART_BOULANGER); 
    list.Add(wxART_BOWER); 
    list.Add(wxART_BOX); 
    list.Add(wxART_BOXYSVG); 
    list.Add(wxART_BRANDFOLDER); 
    list.Add(wxART_BRAVE); 
    list.Add(wxART_BREAKER); 
    list.Add(wxART_BREVO); 
    list.Add(wxART_BRITISHAIRWAYS); 
    list.Add(wxART_BROADCOM); 
    list.Add(wxART_BSD); 
    list.Add(wxART_BSPWM); 
    list.Add(wxART_BT); 
    list.Add(wxART_BUDDY); 
    list.Add(wxART_BUDIBASE); 
    list.Add(wxART_BUEFY); 
    list.Add(wxART_BUFFER); 
    list.Add(wxART_BUGATTI); 
    list.Add(wxART_BUGCROWD); 
    list.Add(wxART_BUGSNAG); 
    list.Add(wxART_BUILDKITE); 
    list.Add(wxART_BUKALAPAK); 
    list.Add(wxART_BULMA); 
    list.Add(wxART_BUN); 
    list.Add(wxART_BUNQ); 
    list.Add(wxART_BURGERKING); 
    list.Add(wxART_BURTON); 
    list.Add(wxART_BUYMEACOFFEE); 
    list.Add(wxART_BUZZFEED); 
    list.Add(wxART_BVG); 
    list.Add(wxART_BYJUS); 
    list.Add(wxART_BYTE); 
    list.Add(wxART_BYTEDANCE); 
    list.Add(wxART_C); 
    list.Add(wxART_CACHET); 
    list.Add(wxART_CADDY); 
    list.Add(wxART_CADILLAC); 
    list.Add(wxART_CAFEPRESS); 
    list.Add(wxART_CAFFEINE); 
    list.Add(wxART_CAIROGRAPHICS); 
    list.Add(wxART_CAIROMETRO); 
    list.Add(wxART_CAKEPHP); 
    list.Add(wxART_CAMPAIGNMONITOR); 
    list.Add(wxART_CANONICAL); 
    list.Add(wxART_CANVA); 
    list.Add(wxART_CAPACITOR); 
    list.Add(wxART_CARDANO); 
    list.Add(wxART_CARRD); 
    list.Add(wxART_CARREFOUR); 
    list.Add(wxART_CARTHROTTLE); 
    list.Add(wxART_CARTO); 
    list.Add(wxART_CASHAPP); 
    list.Add(wxART_CASTBOX); 
    list.Add(wxART_CASTORAMA); 
    list.Add(wxART_CASTRO); 
    list.Add(wxART_CATERPILLAR); 
    list.Add(wxART_CBS); 
    list.Add(wxART_CDPROJEKT); 
    list.Add(wxART_CELERY); 
    list.Add(wxART_CENTOS); 
    list.Add(wxART_CEPH); 
    list.Add(wxART_CESIUM); 
    list.Add(wxART_CHAI); 
    list.Add(wxART_CHAINGUARD); 
    list.Add(wxART_CHAINLINK); 
    list.Add(wxART_CHAKRAUI); 
    list.Add(wxART_CHANNEL4); 
    list.Add(wxART_CHARTDOTJS); 
    list.Add(wxART_CHARTMOGUL); 
    list.Add(wxART_CHASE); 
    list.Add(wxART_CHATBOT); 
    list.Add(wxART_CHATWOOT); 
    list.Add(wxART_CHECKIO); 
    list.Add(wxART_CHECKMARX); 
    list.Add(wxART_CHECKMK); 
    list.Add(wxART_CHEF); 
    list.Add(wxART_CHEMEX); 
    list.Add(wxART_CHEVROLET); 
    list.Add(wxART_CHIANETWORK); 
    list.Add(wxART_CHINAEASTERNAIRLINES); 
    list.Add(wxART_CHINASOUTHERNAIRLINES); 
    list.Add(wxART_CHOCOLATEY); 
    list.Add(wxART_CHROMATIC); 
    list.Add(wxART_CHROMECAST); 
    list.Add(wxART_CHRYSLER); 
    list.Add(wxART_CHUPACHUPS); 
    list.Add(wxART_CILIUM); 
    list.Add(wxART_CINEMA4D); 
    list.Add(wxART_CIRCLE); 
    list.Add(wxART_CIRCLECI); 
    list.Add(wxART_CIRCUITVERSE); 
    list.Add(wxART_CIRRUSCI); 
    list.Add(wxART_CISCO); 
    list.Add(wxART_CITRIX); 
    list.Add(wxART_CITROEN); 
    list.Add(wxART_CIVICRM); 
    list.Add(wxART_CIVO); 
    list.Add(wxART_CKEDITOR4); 
    list.Add(wxART_CLARIFAI); 
    list.Add(wxART_CLARIS); 
    list.Add(wxART_CLARIVATE); 
    list.Add(wxART_CLICKHOUSE); 
    list.Add(wxART_CLICKUP); 
    list.Add(wxART_CLION); 
    list.Add(wxART_CLIQZ); 
    list.Add(wxART_CLOCKIFY); 
    list.Add(wxART_CLOJURE); 
    list.Add(wxART_CLOUD66); 
    list.Add(wxART_CLOUDBEES); 
    list.Add(wxART_CLOUDCANNON); 
    list.Add(wxART_CLOUDERA); 
    list.Add(wxART_CLOUDFLARE); 
    list.Add(wxART_CLOUDFLAREPAGES); 
    list.Add(wxART_CLOUDFOUNDRY); 
    list.Add(wxART_CLOUDSMITH); 
    list.Add(wxART_CLOUDWAYS); 
    list.Add(wxART_CLUBHOUSE); 
    list.Add(wxART_CLYP); 
    list.Add(wxART_CMAKE); 
    list.Add(wxART_CNCF); 
    list.Add(wxART_CNN); 
    list.Add(wxART_COCACOLA); 
    list.Add(wxART_COCKPIT); 
    list.Add(wxART_COCKROACHLABS); 
    list.Add(wxART_COCOAPODS); 
    list.Add(wxART_COCOS); 
    list.Add(wxART_CODA); 
    list.Add(wxART_CODACY); 
    list.Add(wxART_CODEBERG); 
    list.Add(wxART_CODECADEMY); 
    list.Add(wxART_CODECEPTJS); 
    list.Add(wxART_CODECHEF); 
    list.Add(wxART_CODECLIMATE); 
    list.Add(wxART_CODECOV); 
    list.Add(wxART_CODEFACTOR); 
    list.Add(wxART_CODEFORCES); 
    list.Add(wxART_CODEIGNITER); 
    list.Add(wxART_CODEIUM); 
    list.Add(wxART_CODEMAGIC); 
    list.Add(wxART_CODEMIRROR); 
    list.Add(wxART_CODENEWBIE); 
    list.Add(wxART_CODEPEN); 
    list.Add(wxART_CODEPROJECT); 
    list.Add(wxART_CODEREVIEW); 
    list.Add(wxART_CODERSRANK); 
    list.Add(wxART_CODERWALL); 
    list.Add(wxART_CODESANDBOX); 
    list.Add(wxART_CODESHIP); 
    list.Add(wxART_CODESIGNAL); 
    list.Add(wxART_CODESTREAM); 
    list.Add(wxART_CODEWARS); 
    list.Add(wxART_CODINGAME); 
    list.Add(wxART_CODINGNINJAS); 
    list.Add(wxART_CODIO); 
    list.Add(wxART_COFFEESCRIPT); 
    list.Add(wxART_COGNIZANT); 
    list.Add(wxART_COIL); 
    list.Add(wxART_COINBASE); 
    list.Add(wxART_COINMARKETCAP); 
    list.Add(wxART_COMMERZBANK); 
    list.Add(wxART_COMMITLINT); 
    list.Add(wxART_COMMODORE); 
    list.Add(wxART_COMMONWORKFLOWLANGUAGE); 
    list.Add(wxART_COMPILEREXPLORER); 
    list.Add(wxART_COMPOSER); 
    list.Add(wxART_COMPTIA); 
    list.Add(wxART_COMSOL); 
    list.Add(wxART_CONAN); 
    list.Add(wxART_CONCOURSE); 
    list.Add(wxART_CONDAFORGE); 
    list.Add(wxART_CONEKTA); 
    list.Add(wxART_CONFLUENCE); 
    list.Add(wxART_CONSTRUCT3); 
    list.Add(wxART_CONSUL); 
    list.Add(wxART_CONTACTLESSPAYMENT); 
    list.Add(wxART_CONTAINERD); 
    list.Add(wxART_CONTAO); 
    list.Add(wxART_CONTENTFUL); 
    list.Add(wxART_CONVENTIONALCOMMITS); 
    list.Add(wxART_CONVERTIO); 
    list.Add(wxART_COOKIECUTTER); 
    list.Add(wxART_COOP); 
    list.Add(wxART_CORA); 
    list.Add(wxART_CORONAENGINE); 
    list.Add(wxART_CORONARENDERER); 
    list.Add(wxART_CORSAIR); 
    list.Add(wxART_COUCHBASE); 
    list.Add(wxART_COUNTERSTRIKE); 
    list.Add(wxART_COUNTINGWORKSPRO); 
    list.Add(wxART_COURSERA); 
    list.Add(wxART_COVERALLS); 
    list.Add(wxART_CPANEL); 
    list.Add(wxART_CPLUSPLUS); 
    list.Add(wxART_CPLUSPLUSBUILDER); 
    list.Add(wxART_CRAFTCMS); 
    list.Add(wxART_CRAFTSMAN); 
    list.Add(wxART_CRATEDB); 
    list.Add(wxART_CRAYON); 
    list.Add(wxART_CREALITY); 
    list.Add(wxART_CREATEREACTAPP); 
    list.Add(wxART_CREATIVECOMMONS); 
    list.Add(wxART_CREATIVETECHNOLOGY); 
    list.Add(wxART_CREDLY); 
    list.Add(wxART_CREHANA); 
    list.Add(wxART_CRITICALROLE); 
    list.Add(wxART_CROWDIN); 
    list.Add(wxART_CROWDSOURCE); 
    list.Add(wxART_CRUNCHBASE); 
    list.Add(wxART_CRUNCHYROLL); 
    list.Add(wxART_CRYENGINE); 
    list.Add(wxART_CRYSTAL); 
    list.Add(wxART_CSHARP); 
    list.Add(wxART_CSS3); 
    list.Add(wxART_CSSMODULES); 
    list.Add(wxART_CSSWIZARDRY); 
    list.Add(wxART_CTS); 
    list.Add(wxART_CUCUMBER); 
    list.Add(wxART_CULTURA); 
    list.Add(wxART_CURL); 
    list.Add(wxART_CURSEFORGE); 
    list.Add(wxART_CYBERDEFENDERS); 
    list.Add(wxART_CYCLING74); 
    list.Add(wxART_CYPRESS); 
    list.Add(wxART_CYTOSCAPEDOTJS); 
    list.Add(wxART_D); 
    list.Add(wxART_D3DOTJS); 
    list.Add(wxART_DACIA); 
    list.Add(wxART_DAF); 
    list.Add(wxART_DAILYMOTION); 
    list.Add(wxART_DAIMLER); 
    list.Add(wxART_DAISYUI); 
    list.Add(wxART_DAPR); 
    list.Add(wxART_DARKREADER); 
    list.Add(wxART_DART); 
    list.Add(wxART_DARTY); 
    list.Add(wxART_DASERSTE); 
    list.Add(wxART_DASH); 
    list.Add(wxART_DASHLANE); 
    list.Add(wxART_DASK); 
    list.Add(wxART_DASSAULTSYSTEMES); 
    list.Add(wxART_DATABRICKS); 
    list.Add(wxART_DATACAMP); 
    list.Add(wxART_DATADOG); 
    list.Add(wxART_DATADOTAI); 
    list.Add(wxART_DATAGRIP); 
    list.Add(wxART_DATAIKU); 
    list.Add(wxART_DATASTAX); 
    list.Add(wxART_DATAVERSE); 
    list.Add(wxART_DATOCMS); 
    list.Add(wxART_DATTO); 
    list.Add(wxART_DAZN); 
    list.Add(wxART_DBLP); 
    list.Add(wxART_DBT); 
    list.Add(wxART_DCENTERTAINMENT); 
    list.Add(wxART_DEBIAN); 
    list.Add(wxART_DECAPCMS); 
    list.Add(wxART_DEDGE); 
    list.Add(wxART_DEEPIN); 
    list.Add(wxART_DEEPNOTE); 
    list.Add(wxART_DEEZER); 
    list.Add(wxART_DELICIOUS); 
    list.Add(wxART_DELIVEROO); 
    list.Add(wxART_DELL); 
    list.Add(wxART_DELONGHI); 
    list.Add(wxART_DELPHI); 
    list.Add(wxART_DELTA); 
    list.Add(wxART_DENO); 
    list.Add(wxART_DENON); 
    list.Add(wxART_DEPENDABOT); 
    list.Add(wxART_DEPENDENCYCHECK); 
    list.Add(wxART_DERSPIEGEL); 
    list.Add(wxART_DESIGNERNEWS); 
    list.Add(wxART_DEUTSCHEBAHN); 
    list.Add(wxART_DEUTSCHEBANK); 
    list.Add(wxART_DEVDOTTO); 
    list.Add(wxART_DEVEXPRESS); 
    list.Add(wxART_DEVIANTART); 
    list.Add(wxART_DEVPOST); 
    list.Add(wxART_DEVRANT); 
    list.Add(wxART_DGRAPH); 
    list.Add(wxART_DHL); 
    list.Add(wxART_DIAGRAMSDOTNET); 
    list.Add(wxART_DIALOGFLOW); 
    list.Add(wxART_DIASPORA); 
    list.Add(wxART_DIGG); 
    list.Add(wxART_DIGIKEYELECTRONICS); 
    list.Add(wxART_DIGITALOCEAN); 
    list.Add(wxART_DIOR); 
    list.Add(wxART_DIRECTUS); 
    list.Add(wxART_DISCOGS); 
    list.Add(wxART_DISCORD); 
    list.Add(wxART_DISCOURSE); 
    list.Add(wxART_DISCOVER); 
    list.Add(wxART_DISQUS); 
    list.Add(wxART_DISROOT); 
    list.Add(wxART_DISTROKID); 
    list.Add(wxART_DJANGO); 
    list.Add(wxART_DJI); 
    list.Add(wxART_DLIB); 
    list.Add(wxART_DLNA); 
    list.Add(wxART_DM); 
    list.Add(wxART_DOCKER); 
    list.Add(wxART_DOCSDOTRS); 
    list.Add(wxART_DOCSIFY); 
    list.Add(wxART_DOCUSAURUS); 
    list.Add(wxART_DOCUSIGN); 
    list.Add(wxART_DOGECOIN); 
    list.Add(wxART_DOI); 
    list.Add(wxART_DOLBY); 
    list.Add(wxART_DOORDASH); 
    list.Add(wxART_DOTENV); 
    list.Add(wxART_DOTNET); 
    list.Add(wxART_DOUBAN); 
    list.Add(wxART_DOUBANREAD); 
    list.Add(wxART_DOVECOT); 
    list.Add(wxART_DPD); 
    list.Add(wxART_DRAGONFRAME); 
    list.Add(wxART_DRAUGIEMDOTLV); 
    list.Add(wxART_DRIBBBLE); 
    list.Add(wxART_DRONE); 
    list.Add(wxART_DROOBLE); 
    list.Add(wxART_DROPBOX); 
    list.Add(wxART_DRUPAL); 
    list.Add(wxART_DSAUTOMOBILES); 
    list.Add(wxART_DTS); 
    list.Add(wxART_DTUBE); 
    list.Add(wxART_DUCATI); 
    list.Add(wxART_DUCKDB); 
    list.Add(wxART_DUCKDUCKGO); 
    list.Add(wxART_DUNGEONSANDDRAGONS); 
    list.Add(wxART_DUNKED); 
    list.Add(wxART_DUOLINGO); 
    list.Add(wxART_DVC); 
    list.Add(wxART_DWAVESYSTEMS); 
    list.Add(wxART_DWM); 
    list.Add(wxART_DYNAMICS365); 
    list.Add(wxART_DYNATRACE); 
    list.Add(wxART_E); 
    list.Add(wxART_E3); 
    list.Add(wxART_EA); 
    list.Add(wxART_EAGLE); 
    list.Add(wxART_EASYEDA); 
    list.Add(wxART_EASYJET); 
    list.Add(wxART_EBAY); 
    list.Add(wxART_EBOX); 
    list.Add(wxART_ECLIPSEADOPTIUM); 
    list.Add(wxART_ECLIPSECHE); 
    list.Add(wxART_ECLIPSEIDE); 
    list.Add(wxART_ECLIPSEJETTY); 
    list.Add(wxART_ECLIPSEMOSQUITTO); 
    list.Add(wxART_ECLIPSEVERTDOTX); 
    list.Add(wxART_EDEKA); 
    list.Add(wxART_EDITORCONFIG); 
    list.Add(wxART_EDOTLECLERC); 
    list.Add(wxART_EDX); 
    list.Add(wxART_EGGHEAD); 
    list.Add(wxART_EGNYTE); 
    list.Add(wxART_EIGHTSLEEP); 
    list.Add(wxART_ELASTIC); 
    list.Add(wxART_ELASTICCLOUD); 
    list.Add(wxART_ELASTICSEARCH); 
    list.Add(wxART_ELASTICSTACK); 
    list.Add(wxART_ELAVON); 
    list.Add(wxART_ELECTRON); 
    list.Add(wxART_ELECTRONBUILDER); 
    list.Add(wxART_ELECTRONFIDDLE); 
    list.Add(wxART_ELEMENT); 
    list.Add(wxART_ELEMENTARY); 
    list.Add(wxART_ELEMENTOR); 
    list.Add(wxART_ELEVENTY); 
    list.Add(wxART_ELGATO); 
    list.Add(wxART_ELIXIR); 
    list.Add(wxART_ELJUEVES); 
    list.Add(wxART_ELLO); 
    list.Add(wxART_ELM); 
    list.Add(wxART_ELSEVIER); 
    list.Add(wxART_EMBARCADERO); 
    list.Add(wxART_EMBERDOTJS); 
    list.Add(wxART_EMBY); 
    list.Add(wxART_EMIRATES); 
    list.Add(wxART_EMLAKJET); 
    list.Add(wxART_EMPIREKRED); 
    list.Add(wxART_ENGADGET); 
    list.Add(wxART_ENPASS); 
    list.Add(wxART_ENTERPRISEDB); 
    list.Add(wxART_ENVATO); 
    list.Add(wxART_ENVOYPROXY); 
    list.Add(wxART_EPEL); 
    list.Add(wxART_EPICGAMES); 
    list.Add(wxART_EPSON); 
    list.Add(wxART_EQUINIXMETAL); 
    list.Add(wxART_ERICSSON); 
    list.Add(wxART_ERLANG); 
    list.Add(wxART_ESBUILD); 
    list.Add(wxART_ESEA); 
    list.Add(wxART_ESLGAMING); 
    list.Add(wxART_ESLINT); 
    list.Add(wxART_ESPHOME); 
    list.Add(wxART_ESPRESSIF); 
    list.Add(wxART_ESRI); 
    list.Add(wxART_ETCD); 
    list.Add(wxART_ETHEREUM); 
    list.Add(wxART_ETHIOPIANAIRLINES); 
    list.Add(wxART_ETIHADAIRWAYS); 
    list.Add(wxART_ETSY); 
    list.Add(wxART_EVENTBRITE); 
    list.Add(wxART_EVENTSTORE); 
    list.Add(wxART_EVERNOTE); 
    list.Add(wxART_EXERCISM); 
    list.Add(wxART_EXORDO); 
    list.Add(wxART_EXOSCALE); 
    list.Add(wxART_EXPENSIFY); 
    list.Add(wxART_EXPERTSEXCHANGE); 
    list.Add(wxART_EXPO); 
    list.Add(wxART_EXPRESS); 
    list.Add(wxART_EXPRESSVPN); 
    list.Add(wxART_EYEEM); 
    list.Add(wxART_F1); 
    list.Add(wxART_F5); 
    list.Add(wxART_FACEBOOK); 
    list.Add(wxART_FACEBOOKGAMING); 
    list.Add(wxART_FACEBOOKLIVE); 
    list.Add(wxART_FACEIT); 
    list.Add(wxART_FACEPUNCH); 
    list.Add(wxART_FALCO); 
    list.Add(wxART_FALCON); 
    list.Add(wxART_FAMPAY); 
    list.Add(wxART_FANDANGO); 
    list.Add(wxART_FANDOM); 
    list.Add(wxART_FANFOU); 
    list.Add(wxART_FANTOM); 
    list.Add(wxART_FAREHARBOR); 
    list.Add(wxART_FARFETCH); 
    list.Add(wxART_FASTAPI); 
    list.Add(wxART_FASTIFY); 
    list.Add(wxART_FASTLANE); 
    list.Add(wxART_FASTLY); 
    list.Add(wxART_FATHOM); 
    list.Add(wxART_FAUNA); 
    list.Add(wxART_FAVRO); 
    list.Add(wxART_FDROID); 
    list.Add(wxART_FEATHUB); 
    list.Add(wxART_FEDEX); 
    list.Add(wxART_FEDORA); 
    list.Add(wxART_FEEDLY); 
    list.Add(wxART_FERRARI); 
    list.Add(wxART_FERRARINV); 
    list.Add(wxART_FERRETDB); 
    list.Add(wxART_FFMPEG); 
    list.Add(wxART_FI); 
    list.Add(wxART_FIAT); 
    list.Add(wxART_FIDOALLIANCE); 
    list.Add(wxART_FIFA); 
    list.Add(wxART_FIG); 
    list.Add(wxART_FIGMA); 
    list.Add(wxART_FIGSHARE); 
    list.Add(wxART_FILA); 
    list.Add(wxART_FILES); 
    list.Add(wxART_FILEZILLA); 
    list.Add(wxART_FING); 
    list.Add(wxART_FIREBASE); 
    list.Add(wxART_FIREFISH); 
    list.Add(wxART_FIREFLYIII); 
    list.Add(wxART_FIREFOX); 
    list.Add(wxART_FIREFOXBROWSER); 
    list.Add(wxART_FIRESHIP); 
    list.Add(wxART_FIREWALLA); 
    list.Add(wxART_FIRST); 
    list.Add(wxART_FITBIT); 
    list.Add(wxART_FITE); 
    list.Add(wxART_FIVEM); 
    list.Add(wxART_FIVERR); 
    list.Add(wxART_FLASK); 
    list.Add(wxART_FLAT); 
    list.Add(wxART_FLATHUB); 
    list.Add(wxART_FLATPAK); 
    list.Add(wxART_FLATTR); 
    list.Add(wxART_FLICKR); 
    list.Add(wxART_FLIGHTAWARE); 
    list.Add(wxART_FLIPBOARD); 
    list.Add(wxART_FLIPKART); 
    list.Add(wxART_FLOATPLANE); 
    list.Add(wxART_FLOOD); 
    list.Add(wxART_FLUENTBIT); 
    list.Add(wxART_FLUENTD); 
    list.Add(wxART_FLUKE); 
    list.Add(wxART_FLUTTER); 
    list.Add(wxART_FLUX); 
    list.Add(wxART_FLUXUS); 
    list.Add(wxART_FLYWAY); 
    list.Add(wxART_FMOD); 
    list.Add(wxART_FNAC); 
    list.Add(wxART_FOLIUM); 
    list.Add(wxART_FONOMA); 
    list.Add(wxART_FONTAWESOME); 
    list.Add(wxART_FONTBASE); 
    list.Add(wxART_FONTFORGE); 
    list.Add(wxART_FOODPANDA); 
    list.Add(wxART_FORD); 
    list.Add(wxART_FORESTRY); 
    list.Add(wxART_FORGEJO); 
    list.Add(wxART_FORMSTACK); 
    list.Add(wxART_FORTINET); 
    list.Add(wxART_FORTRAN); 
    list.Add(wxART_FOSSA); 
    list.Add(wxART_FOSSILSCM); 
    list.Add(wxART_FOURSQUARE); 
    list.Add(wxART_FOURSQUARECITYGUIDE); 
    list.Add(wxART_FOX); 
    list.Add(wxART_FOXTEL); 
    list.Add(wxART_FOZZY); 
    list.Add(wxART_FRAMER); 
    list.Add(wxART_FRAMEWORK); 
    list.Add(wxART_FRAMEWORK7); 
    list.Add(wxART_FRANPRIX); 
    list.Add(wxART_FRAUNHOFERGESELLSCHAFT); 
    list.Add(wxART_FREEBSD); 
    list.Add(wxART_FREECODECAMP); 
    list.Add(wxART_FREEDESKTOPDOTORG); 
    list.Add(wxART_FREELANCER); 
    list.Add(wxART_FREENAS); 
    list.Add(wxART_FREEPIK); 
    list.Add(wxART_FRONTENDMENTOR); 
    list.Add(wxART_FRONTIFY); 
    list.Add(wxART_FSECURE); 
    list.Add(wxART_FSHARP); 
    list.Add(wxART_FUGACLOUD); 
    list.Add(wxART_FUJIFILM); 
    list.Add(wxART_FUJITSU); 
    list.Add(wxART_FUNIMATION); 
    list.Add(wxART_FURAFFINITY); 
    list.Add(wxART_FURRYNETWORK); 
    list.Add(wxART_FUTURELEARN); 
    list.Add(wxART_G2); 
    list.Add(wxART_G2A); 
    list.Add(wxART_GAMEANDWATCH); 
    list.Add(wxART_GAMEBANANA); 
    list.Add(wxART_GAMEDEVELOPER); 
    list.Add(wxART_GAMEJOLT); 
    list.Add(wxART_GAMEMAKER); 
    list.Add(wxART_GARMIN); 
    list.Add(wxART_GATLING); 
    list.Add(wxART_GATSBY); 
    list.Add(wxART_GDAL); 
    list.Add(wxART_GEANT); 
    list.Add(wxART_GEEKSFORGEEKS); 
    list.Add(wxART_GENERALELECTRIC); 
    list.Add(wxART_GENERALMOTORS); 
    list.Add(wxART_GENIUS); 
    list.Add(wxART_GENTOO); 
    list.Add(wxART_GEOCACHING); 
    list.Add(wxART_GERRIT); 
    list.Add(wxART_GHOST); 
    list.Add(wxART_GHOSTERY); 
    list.Add(wxART_GIMP); 
    list.Add(wxART_GIPHY); 
    list.Add(wxART_GIT); 
    list.Add(wxART_GITBOOK); 
    list.Add(wxART_GITEA); 
    list.Add(wxART_GITEE); 
    list.Add(wxART_GITEXTENSIONS); 
    list.Add(wxART_GITHUB); 
    list.Add(wxART_GITHUBACTIONS); 
    list.Add(wxART_GITHUBPAGES); 
    list.Add(wxART_GITHUBSPONSORS); 
    list.Add(wxART_GITIGNOREDOTIO); 
    list.Add(wxART_GITKRAKEN); 
    list.Add(wxART_GITLAB); 
    list.Add(wxART_GITLFS); 
    list.Add(wxART_GITPOD); 
    list.Add(wxART_GITTER); 
    list.Add(wxART_GLASSDOOR); 
    list.Add(wxART_GLITCH); 
    list.Add(wxART_GLOBUS); 
    list.Add(wxART_GMAIL); 
    list.Add(wxART_GNOME); 
    list.Add(wxART_GNOMETERMINAL); 
    list.Add(wxART_GNU); 
    list.Add(wxART_GNUBASH); 
    list.Add(wxART_GNUEMACS); 
    list.Add(wxART_GNUICECAT); 
    list.Add(wxART_GNUPRIVACYGUARD); 
    list.Add(wxART_GNUSOCIAL); 
    list.Add(wxART_GO); 
    list.Add(wxART_GOCD); 
    list.Add(wxART_GODADDY); 
    list.Add(wxART_GODOTENGINE); 
    list.Add(wxART_GOFUNDME); 
    list.Add(wxART_GOGDOTCOM); 
    list.Add(wxART_GOLAND); 
    list.Add(wxART_GOLDENLINE); 
    list.Add(wxART_GOODREADS); 
    list.Add(wxART_GOOGLE); 
    list.Add(wxART_GOOGLEADMOB); 
    list.Add(wxART_GOOGLEADS); 
    list.Add(wxART_GOOGLEADSENSE); 
    list.Add(wxART_GOOGLEANALYTICS); 
    list.Add(wxART_GOOGLEAPPSSCRIPT); 
    list.Add(wxART_GOOGLEASSISTANT); 
    list.Add(wxART_GOOGLEBARD); 
    list.Add(wxART_GOOGLEBIGQUERY); 
    list.Add(wxART_GOOGLECALENDAR); 
    list.Add(wxART_GOOGLECARDBOARD); 
    list.Add(wxART_GOOGLECHAT); 
    list.Add(wxART_GOOGLECHROME); 
    list.Add(wxART_GOOGLECLASSROOM); 
    list.Add(wxART_GOOGLECLOUD); 
    list.Add(wxART_GOOGLECLOUDCOMPOSER); 
    list.Add(wxART_GOOGLECOLAB); 
    list.Add(wxART_GOOGLECONTAINEROPTIMIZEDOS); 
    list.Add(wxART_GOOGLEDATASTUDIO); 
    list.Add(wxART_GOOGLEDOCS); 
    list.Add(wxART_GOOGLEDOMAINS); 
    list.Add(wxART_GOOGLEDRIVE); 
    list.Add(wxART_GOOGLEEARTH); 
    list.Add(wxART_GOOGLEEARTHENGINE); 
    list.Add(wxART_GOOGLEFIT); 
    list.Add(wxART_GOOGLEFONTS); 
    list.Add(wxART_GOOGLEFORMS); 
    list.Add(wxART_GOOGLEHANGOUTS); 
    list.Add(wxART_GOOGLEHOME); 
    list.Add(wxART_GOOGLEKEEP); 
    list.Add(wxART_GOOGLELENS); 
    list.Add(wxART_GOOGLEMAPS); 
    list.Add(wxART_GOOGLEMARKETINGPLATFORM); 
    list.Add(wxART_GOOGLEMEET); 
    list.Add(wxART_GOOGLEMESSAGES); 
    list.Add(wxART_GOOGLEMYBUSINESS); 
    list.Add(wxART_GOOGLENEARBY); 
    list.Add(wxART_GOOGLENEWS); 
    list.Add(wxART_GOOGLEOPTIMIZE); 
    list.Add(wxART_GOOGLEPAY); 
    list.Add(wxART_GOOGLEPHOTOS); 
    list.Add(wxART_GOOGLEPLAY); 
    list.Add(wxART_GOOGLEPODCASTS); 
    list.Add(wxART_GOOGLESCHOLAR); 
    list.Add(wxART_GOOGLESEARCHCONSOLE); 
    list.Add(wxART_GOOGLESHEETS); 
    list.Add(wxART_GOOGLESLIDES); 
    list.Add(wxART_GOOGLESTREETVIEW); 
    list.Add(wxART_GOOGLETAGMANAGER); 
    list.Add(wxART_GOOGLETRANSLATE); 
    list.Add(wxART_GOTOMEETING); 
    list.Add(wxART_GRAB); 
    list.Add(wxART_GRADLE); 
    list.Add(wxART_GRADLEPLAYPUBLISHER); 
    list.Add(wxART_GRAFANA); 
    list.Add(wxART_GRAMMARLY); 
    list.Add(wxART_GRANDFRAIS); 
    list.Add(wxART_GRAPHQL); 
    list.Add(wxART_GRAV); 
    list.Add(wxART_GRAVATAR); 
    list.Add(wxART_GRAYLOG); 
    list.Add(wxART_GREENHOUSE); 
    list.Add(wxART_GREENSOCK); 
    list.Add(wxART_GRIDDOTAI); 
    list.Add(wxART_GRIDSOME); 
    list.Add(wxART_GROUPME); 
    list.Add(wxART_GROUPON); 
    list.Add(wxART_GRUBHUB); 
    list.Add(wxART_GRUNT); 
    list.Add(wxART_GSK); 
    list.Add(wxART_GSTREAMER); 
    list.Add(wxART_GTK); 
    list.Add(wxART_GUANGZHOUMETRO); 
    list.Add(wxART_GUILDED); 
    list.Add(wxART_GULP); 
    list.Add(wxART_GUMROAD); 
    list.Add(wxART_GUMTREE); 
    list.Add(wxART_GUNICORN); 
    list.Add(wxART_GUROBI); 
    list.Add(wxART_GUTENBERG); 
    list.Add(wxART_H3); 
    list.Add(wxART_HABR); 
    list.Add(wxART_HACKADAY); 
    list.Add(wxART_HACKCLUB); 
    list.Add(wxART_HACKEREARTH); 
    list.Add(wxART_HACKERNOON); 
    list.Add(wxART_HACKERONE); 
    list.Add(wxART_HACKERRANK); 
    list.Add(wxART_HACKSTER); 
    list.Add(wxART_HACKTHEBOX); 
    list.Add(wxART_HAL); 
    list.Add(wxART_HANDLEBARSDOTJS); 
    list.Add(wxART_HANDM); 
    list.Add(wxART_HANDSHAKE); 
    list.Add(wxART_HANDSHAKE_PROTOCOL); 
    list.Add(wxART_HAPPYCOW); 
    list.Add(wxART_HARBOR); 
    list.Add(wxART_HARMONYOS); 
    list.Add(wxART_HASHICORP); 
    list.Add(wxART_HASHNODE); 
    list.Add(wxART_HASKELL); 
    list.Add(wxART_HASURA); 
    list.Add(wxART_HATENABOOKMARK); 
    list.Add(wxART_HAVEIBEENPWNED); 
    list.Add(wxART_HAXE); 
    list.Add(wxART_HBO); 
    list.Add(wxART_HCL); 
    list.Add(wxART_HEADLESSUI); 
    list.Add(wxART_HEADSPACE); 
    list.Add(wxART_HEARTH); 
    list.Add(wxART_HEARTHISDOTAT); 
    list.Add(wxART_HEDERA); 
    list.Add(wxART_HELLOFRESH); 
    list.Add(wxART_HELLYHANSEN); 
    list.Add(wxART_HELM); 
    list.Add(wxART_HELPDESK); 
    list.Add(wxART_HELPSCOUT); 
    list.Add(wxART_HERE); 
    list.Add(wxART_HEROKU); 
    list.Add(wxART_HETZNER); 
    list.Add(wxART_HEXLET); 
    list.Add(wxART_HEXO); 
    list.Add(wxART_HEY); 
    list.Add(wxART_HIBERNATE); 
    list.Add(wxART_HIBOB); 
    list.Add(wxART_HILTON); 
    list.Add(wxART_HITACHI); 
    list.Add(wxART_HIVE); 
    list.Add(wxART_HIVE_BLOCKCHAIN); 
    list.Add(wxART_HOMEADVISOR); 
    list.Add(wxART_HOMEASSISTANT); 
    list.Add(wxART_HOMEASSISTANTCOMMUNITYSTORE); 
    list.Add(wxART_HOMEBREW); 
    list.Add(wxART_HOMEBRIDGE); 
    list.Add(wxART_HOMIFY); 
    list.Add(wxART_HONDA); 
    list.Add(wxART_HONEY); 
    list.Add(wxART_HONOR); 
    list.Add(wxART_HOOTSUITE); 
    list.Add(wxART_HOPPSCOTCH); 
    list.Add(wxART_HOTELSDOTCOM); 
    list.Add(wxART_HOTJAR); 
    list.Add(wxART_HOTWIRE); 
    list.Add(wxART_HOUDINI); 
    list.Add(wxART_HOUZZ); 
    list.Add(wxART_HP); 
    list.Add(wxART_HSBC); 
    list.Add(wxART_HTML5); 
    list.Add(wxART_HTMLACADEMY); 
    list.Add(wxART_HTOP); 
    list.Add(wxART_HTTPIE); 
    list.Add(wxART_HUAWEI); 
    list.Add(wxART_HUBSPOT); 
    list.Add(wxART_HUGO); 
    list.Add(wxART_HULU); 
    list.Add(wxART_HUMBLEBUNDLE); 
    list.Add(wxART_HUNGRYJACKS); 
    list.Add(wxART_HURRIYETEMLAK); 
    list.Add(wxART_HUSQVARNA); 
    list.Add(wxART_HYPER); 
    list.Add(wxART_HYPERLEDGER); 
    list.Add(wxART_HYPOTHESIS); 
    list.Add(wxART_HYUNDAI); 
    list.Add(wxART_I18NEXT); 
    list.Add(wxART_I3); 
    list.Add(wxART_IATA); 
    list.Add(wxART_IBEACON); 
    list.Add(wxART_IBM); 
    list.Add(wxART_IBMCLOUD); 
    list.Add(wxART_IBMWATSON); 
    list.Add(wxART_ICED); 
    list.Add(wxART_ICELAND); 
    list.Add(wxART_ICINGA); 
    list.Add(wxART_ICLOUD); 
    list.Add(wxART_ICOMOON); 
    list.Add(wxART_ICON); 
    list.Add(wxART_ICONFINDER); 
    list.Add(wxART_ICONIFY); 
    list.Add(wxART_ICONJAR); 
    list.Add(wxART_ICONS8); 
    list.Add(wxART_ICQ); 
    list.Add(wxART_IEEE); 
    list.Add(wxART_IFIXIT); 
    list.Add(wxART_IFOOD); 
    list.Add(wxART_IFTTT); 
    list.Add(wxART_IGDB); 
    list.Add(wxART_IHEARTRADIO); 
    list.Add(wxART_IKEA); 
    list.Add(wxART_ILEDEFRANCEMOBILITES); 
    list.Add(wxART_IMAGEJ); 
    list.Add(wxART_IMDB); 
    list.Add(wxART_IMGUR); 
    list.Add(wxART_IMMER); 
    list.Add(wxART_IMMICH); 
    list.Add(wxART_IMOU); 
    list.Add(wxART_IMPROVMX); 
    list.Add(wxART_INDEED); 
    list.Add(wxART_INDIGO); 
    list.Add(wxART_INERTIA); 
    list.Add(wxART_INFINITI); 
    list.Add(wxART_INFLUXDB); 
    list.Add(wxART_INFOQ); 
    list.Add(wxART_INFORMATICA); 
    list.Add(wxART_INFOSYS); 
    list.Add(wxART_INFRACOST); 
    list.Add(wxART_INGRESS); 
    list.Add(wxART_INKDROP); 
    list.Add(wxART_INKSCAPE); 
    list.Add(wxART_INSOMNIA); 
    list.Add(wxART_INSTACART); 
    list.Add(wxART_INSTAGRAM); 
    list.Add(wxART_INSTAPAPER); 
    list.Add(wxART_INSTATUS); 
    list.Add(wxART_INSTRUCTABLES); 
    list.Add(wxART_INSTRUCTURE); 
    list.Add(wxART_INTEGROMAT); 
    list.Add(wxART_INTEL); 
    list.Add(wxART_INTELLIJIDEA); 
    list.Add(wxART_INTERACTIONDESIGNFOUNDATION); 
    list.Add(wxART_INTERACTJS); 
    list.Add(wxART_INTERBASE); 
    list.Add(wxART_INTERCOM); 
    list.Add(wxART_INTERMARCHE); 
    list.Add(wxART_INTERNETARCHIVE); 
    list.Add(wxART_INTERNETCOMPUTER); 
    list.Add(wxART_INTERNETEXPLORER); 
    list.Add(wxART_INTIGRITI); 
    list.Add(wxART_INTUIT); 
    list.Add(wxART_INVISION); 
    list.Add(wxART_INVOICENINJA); 
    list.Add(wxART_IOBROKER); 
    list.Add(wxART_IONIC); 
    list.Add(wxART_IONOS); 
    list.Add(wxART_IOS); 
    list.Add(wxART_IOTA); 
    list.Add(wxART_IPFS); 
    list.Add(wxART_IRIS); 
    list.Add(wxART_ISC2); 
    list.Add(wxART_ISCSQUARED); 
    list.Add(wxART_ISSUU); 
    list.Add(wxART_ISTIO); 
    list.Add(wxART_ITCHDOTIO); 
    list.Add(wxART_ITERM2); 
    list.Add(wxART_ITUNES); 
    list.Add(wxART_ITVX); 
    list.Add(wxART_IVECO); 
    list.Add(wxART_JABBER); 
    list.Add(wxART_JAEGER); 
    list.Add(wxART_JAGUAR); 
    list.Add(wxART_JAMBOARD); 
    list.Add(wxART_JAMESON); 
    list.Add(wxART_JAMSTACK); 
    list.Add(wxART_JASMINE); 
    list.Add(wxART_JAVASCRIPT); 
    list.Add(wxART_JBL); 
    list.Add(wxART_JCB); 
    list.Add(wxART_JEEP); 
    list.Add(wxART_JEKYLL); 
    list.Add(wxART_JELLYFIN); 
    list.Add(wxART_JENKINS); 
    list.Add(wxART_JENKINSX); 
    list.Add(wxART_JEST); 
    list.Add(wxART_JET); 
    list.Add(wxART_JETBLUE); 
    list.Add(wxART_JETBRAINS); 
    list.Add(wxART_JETPACKCOMPOSE); 
    list.Add(wxART_JFROG); 
    list.Add(wxART_JFROGBINTRAY); 
    list.Add(wxART_JFROGPIPELINES); 
    list.Add(wxART_JINJA); 
    list.Add(wxART_JIRA); 
    list.Add(wxART_JIRASOFTWARE); 
    list.Add(wxART_JITSI); 
    list.Add(wxART_JOHNDEERE); 
    list.Add(wxART_JOOMLA); 
    list.Add(wxART_JOPLIN); 
    list.Add(wxART_JORDAN); 
    list.Add(wxART_JOVIAN); 
    list.Add(wxART_JPEG); 
    list.Add(wxART_JQUERY); 
    list.Add(wxART_JRGROUP); 
    list.Add(wxART_JSDELIVR); 
    list.Add(wxART_JSFIDDLE); 
    list.Add(wxART_JSON); 
    list.Add(wxART_JSONWEBTOKENS); 
    list.Add(wxART_JSS); 
    list.Add(wxART_JUCE); 
    list.Add(wxART_JUEJIN); 
    list.Add(wxART_JUKE); 
    list.Add(wxART_JULIA); 
    list.Add(wxART_JUNIPERNETWORKS); 
    list.Add(wxART_JUNIT5); 
    list.Add(wxART_JUPYTER); 
    list.Add(wxART_JUSTEAT); 
    list.Add(wxART_JUSTGIVING); 
    list.Add(wxART_K3S); 
    list.Add(wxART_K6); 
    list.Add(wxART_KAGGLE); 
    list.Add(wxART_KAHOOT); 
    list.Add(wxART_KAIOS); 
    list.Add(wxART_KAKAO); 
    list.Add(wxART_KAKAOTALK); 
    list.Add(wxART_KALILINUX); 
    list.Add(wxART_KAMAILIO); 
    list.Add(wxART_KANIKO); 
    list.Add(wxART_KARLSRUHERVERKEHRSVERBUND); 
    list.Add(wxART_KASASMART); 
    list.Add(wxART_KASHFLOW); 
    list.Add(wxART_KASPERSKY); 
    list.Add(wxART_KATACODA); 
    list.Add(wxART_KATANA); 
    list.Add(wxART_KAUFLAND); 
    list.Add(wxART_KDE); 
    list.Add(wxART_KDENLIVE); 
    list.Add(wxART_KEDRO); 
    list.Add(wxART_KEEPACHANGELOG); 
    list.Add(wxART_KEEPASSXC); 
    list.Add(wxART_KENTICO); 
    list.Add(wxART_KERAS); 
    list.Add(wxART_KEYBASE); 
    list.Add(wxART_KEYCDN); 
    list.Add(wxART_KEYSTONE); 
    list.Add(wxART_KFC); 
    list.Add(wxART_KHANACADEMY); 
    list.Add(wxART_KHRONOSGROUP); 
    list.Add(wxART_KIA); 
    list.Add(wxART_KIBANA); 
    list.Add(wxART_KICAD); 
    list.Add(wxART_KICKSTARTER); 
    list.Add(wxART_KIK); 
    list.Add(wxART_KINGSTONTECHNOLOGY); 
    list.Add(wxART_KINOPOISK); 
    list.Add(wxART_KINSTA); 
    list.Add(wxART_KIRBY); 
    list.Add(wxART_KIT); 
    list.Add(wxART_KITSU); 
    list.Add(wxART_KLARNA); 
    list.Add(wxART_KLM); 
    list.Add(wxART_KLOOK); 
    list.Add(wxART_KNATIVE); 
    list.Add(wxART_KNOWLEDGEBASE); 
    list.Add(wxART_KNOWN); 
    list.Add(wxART_KOA); 
    list.Add(wxART_KOC); 
    list.Add(wxART_KODAK); 
    list.Add(wxART_KODI); 
    list.Add(wxART_KOFAX); 
    list.Add(wxART_KOFI); 
    list.Add(wxART_KOMOOT); 
    list.Add(wxART_KONAMI); 
    list.Add(wxART_KONG); 
    list.Add(wxART_KONGREGATE); 
    list.Add(wxART_KONVA); 
    list.Add(wxART_KOTLIN); 
    list.Add(wxART_KOYEB); 
    list.Add(wxART_KRITA); 
    list.Add(wxART_KTM); 
    list.Add(wxART_KUAISHOU); 
    list.Add(wxART_KUBERNETES); 
    list.Add(wxART_KUBUNTU); 
    list.Add(wxART_KUMA); 
    list.Add(wxART_KUULA); 
    list.Add(wxART_KYOCERA); 
    list.Add(wxART_LABVIEW); 
    list.Add(wxART_LADA); 
    list.Add(wxART_LAMBORGHINI); 
    list.Add(wxART_LANDROVER); 
    list.Add(wxART_LAPCE); 
    list.Add(wxART_LARAGON); 
    list.Add(wxART_LARAVEL); 
    list.Add(wxART_LARAVELHORIZON); 
    list.Add(wxART_LARAVELNOVA); 
    list.Add(wxART_LASTDOTFM); 
    list.Add(wxART_LASTPASS); 
    list.Add(wxART_LATEX); 
    list.Add(wxART_LAUNCHPAD); 
    list.Add(wxART_LAZARUS); 
    list.Add(wxART_LBRY); 
    list.Add(wxART_LEADERPRICE); 
    list.Add(wxART_LEAFLET); 
    list.Add(wxART_LEAGUEOFLEGENDS); 
    list.Add(wxART_LEANPUB); 
    list.Add(wxART_LEETCODE); 
    list.Add(wxART_LEGACYGAMES); 
    list.Add(wxART_LEICA); 
    list.Add(wxART_LEMMY); 
    list.Add(wxART_LENOVO); 
    list.Add(wxART_LENS); 
    list.Add(wxART_LEPTOS); 
    list.Add(wxART_LERNA); 
    list.Add(wxART_LEROYMERLIN); 
    list.Add(wxART_LESS); 
    list.Add(wxART_LETSENCRYPT); 
    list.Add(wxART_LETTERBOXD); 
    list.Add(wxART_LEVELSDOTFYI); 
    list.Add(wxART_LG); 
    list.Add(wxART_LGTM); 
    list.Add(wxART_LIBERADOTCHAT); 
    list.Add(wxART_LIBERAPAY); 
    list.Add(wxART_LIBRARIESDOTIO); 
    list.Add(wxART_LIBRARYTHING); 
    list.Add(wxART_LIBREOFFICE); 
    list.Add(wxART_LIBUV); 
    list.Add(wxART_LICHESS); 
    list.Add(wxART_LIDL); 
    list.Add(wxART_LIFX); 
    list.Add(wxART_LIGHTBURN); 
    list.Add(wxART_LIGHTHOUSE); 
    list.Add(wxART_LIGHTNING); 
    list.Add(wxART_LINE); 
    list.Add(wxART_LINEAGEOS); 
    list.Add(wxART_LINEAR); 
    list.Add(wxART_LINKEDIN); 
    list.Add(wxART_LINKERD); 
    list.Add(wxART_LINKFIRE); 
    list.Add(wxART_LINKTREE); 
    list.Add(wxART_LINUX); 
    list.Add(wxART_LINUXCONTAINERS); 
    list.Add(wxART_LINUXFOUNDATION); 
    list.Add(wxART_LINUXMINT); 
    list.Add(wxART_LIONAIR); 
    list.Add(wxART_LIQUIBASE); 
    list.Add(wxART_LIT); 
    list.Add(wxART_LITECOIN); 
    list.Add(wxART_LITIENGINE); 
    list.Add(wxART_LIVECHAT); 
    list.Add(wxART_LIVEJOURNAL); 
    list.Add(wxART_LIVEWIRE); 
    list.Add(wxART_LLVM); 
    list.Add(wxART_LMMS); 
    list.Add(wxART_LOCAL); 
    list.Add(wxART_LODASH); 
    list.Add(wxART_LOGITECH); 
    list.Add(wxART_LOGMEIN); 
    list.Add(wxART_LOGSEQ); 
    list.Add(wxART_LOGSTASH); 
    list.Add(wxART_LOOKER); 
    list.Add(wxART_LOOM); 
    list.Add(wxART_LOOP); 
    list.Add(wxART_LOOPBACK); 
    list.Add(wxART_LOSPEC); 
    list.Add(wxART_LOTPOLISHAIRLINES); 
    list.Add(wxART_LTSPICE); 
    list.Add(wxART_LUA); 
    list.Add(wxART_LUBUNTU); 
    list.Add(wxART_LUDWIG); 
    list.Add(wxART_LUFTHANSA); 
    list.Add(wxART_LUMEN); 
    list.Add(wxART_LUNACY); 
    list.Add(wxART_LUTRIS); 
    list.Add(wxART_LYDIA); 
    list.Add(wxART_LYFT); 
    list.Add(wxART_MAAS); 
    list.Add(wxART_MACOS); 
    list.Add(wxART_MACPAW); 
    list.Add(wxART_MACYS); 
    list.Add(wxART_MAGASINSU); 
    list.Add(wxART_MAGENTO); 
    list.Add(wxART_MAGISK); 
    list.Add(wxART_MAILCHIMP); 
    list.Add(wxART_MAILDOTCOM); 
    list.Add(wxART_MAILDOTRU); 
    list.Add(wxART_MAILGUN); 
    list.Add(wxART_MAJORLEAGUEHACKING); 
    list.Add(wxART_MAKERBOT); 
    list.Add(wxART_MAMBAUI); 
    list.Add(wxART_MAMP); 
    list.Add(wxART_MAN); 
    list.Add(wxART_MANAGEIQ); 
    list.Add(wxART_MANJARO); 
    list.Add(wxART_MANTINE); 
    list.Add(wxART_MAPBOX); 
    list.Add(wxART_MAPLIBRE); 
    list.Add(wxART_MARIADB); 
    list.Add(wxART_MARIADBFOUNDATION); 
    list.Add(wxART_MARKDOWN); 
    list.Add(wxART_MARKETO); 
    list.Add(wxART_MARKO); 
    list.Add(wxART_MARRIOTT); 
    list.Add(wxART_MARVELAPP); 
    list.Add(wxART_MASERATI); 
    list.Add(wxART_MASTERCARD); 
    list.Add(wxART_MASTERCOMFIG); 
    list.Add(wxART_MASTODON); 
    list.Add(wxART_MATERIALDESIGN); 
    list.Add(wxART_MATERIALDESIGNICONS); 
    list.Add(wxART_MATILLION); 
    list.Add(wxART_MATOMO); 
    list.Add(wxART_MATRIX); 
    list.Add(wxART_MATTERDOTJS); 
    list.Add(wxART_MATTERMOST); 
    list.Add(wxART_MATTERNET); 
    list.Add(wxART_MAUTIC); 
    list.Add(wxART_MAX); 
    list.Add(wxART_MAXPLANCKGESELLSCHAFT); 
    list.Add(wxART_MAYTAG); 
    list.Add(wxART_MAZDA); 
    list.Add(wxART_MCAFEE); 
    list.Add(wxART_MCDONALDS); 
    list.Add(wxART_MCLAREN); 
    list.Add(wxART_MDBOOK); 
    list.Add(wxART_MDNWEBDOCS); 
    list.Add(wxART_MDX); 
    list.Add(wxART_MEDIAFIRE); 
    list.Add(wxART_MEDIAMARKT); 
    list.Add(wxART_MEDIATEK); 
    list.Add(wxART_MEDIATEMPLE); 
    list.Add(wxART_MEDIBANGPAINT); 
    list.Add(wxART_MEDIUM); 
    list.Add(wxART_MEETUP); 
    list.Add(wxART_MEGA); 
    list.Add(wxART_MEILISEARCH); 
    list.Add(wxART_MENDELEY); 
    list.Add(wxART_MERCADOPAGO); 
    list.Add(wxART_MERCEDES); 
    list.Add(wxART_MERCK); 
    list.Add(wxART_MERCURIAL); 
    list.Add(wxART_MESSENGER); 
    list.Add(wxART_META); 
    list.Add(wxART_METABASE); 
    list.Add(wxART_METAFILTER); 
    list.Add(wxART_METEOR); 
    list.Add(wxART_METRO); 
    list.Add(wxART_METRODELACIUDADDEMEXICO); 
    list.Add(wxART_METRODEMADRID); 
    list.Add(wxART_METRODEPARIS); 
    list.Add(wxART_MEWE); 
    list.Add(wxART_MG); 
    list.Add(wxART_MICROBIT); 
    list.Add(wxART_MICRODOTBLOG); 
    list.Add(wxART_MICROEDITOR); 
    list.Add(wxART_MICROGENETICS); 
    list.Add(wxART_MICROPYTHON); 
    list.Add(wxART_MICROSOFT); 
    list.Add(wxART_MICROSOFTACADEMIC); 
    list.Add(wxART_MICROSOFTACCESS); 
    list.Add(wxART_MICROSOFTAZURE); 
    list.Add(wxART_MICROSOFTBING); 
    list.Add(wxART_MICROSOFTEDGE); 
    list.Add(wxART_MICROSOFTEXCEL); 
    list.Add(wxART_MICROSOFTEXCHANGE); 
    list.Add(wxART_MICROSOFTOFFICE); 
    list.Add(wxART_MICROSOFTONEDRIVE); 
    list.Add(wxART_MICROSOFTONENOTE); 
    list.Add(wxART_MICROSOFTOUTLOOK); 
    list.Add(wxART_MICROSOFTPOWERPOINT); 
    list.Add(wxART_MICROSOFTSHAREPOINT); 
    list.Add(wxART_MICROSOFTSQLSERVER); 
    list.Add(wxART_MICROSOFTTEAMS); 
    list.Add(wxART_MICROSOFTTRANSLATOR); 
    list.Add(wxART_MICROSOFTVISIO); 
    list.Add(wxART_MICROSOFTWORD); 
    list.Add(wxART_MICROSTATION); 
    list.Add(wxART_MICROSTRATEGY); 
    list.Add(wxART_MIDI); 
    list.Add(wxART_MIKROTIK); 
    list.Add(wxART_MILVUS); 
    list.Add(wxART_MINDS); 
    list.Add(wxART_MINECRAFT); 
    list.Add(wxART_MINETEST); 
    list.Add(wxART_MINI); 
    list.Add(wxART_MINIO); 
    list.Add(wxART_MINUTEMAILER); 
    list.Add(wxART_MIRAHEZE); 
    list.Add(wxART_MIRO); 
    list.Add(wxART_MISSKEY); 
    list.Add(wxART_MITSUBISHI); 
    list.Add(wxART_MIX); 
    list.Add(wxART_MIXCLOUD); 
    list.Add(wxART_MIXPANEL); 
    list.Add(wxART_MLB); 
    list.Add(wxART_MLFLOW); 
    list.Add(wxART_MOBX); 
    list.Add(wxART_MOBXSTATETREE); 
    list.Add(wxART_MOCHA); 
    list.Add(wxART_MOCKSERVICEWORKER); 
    list.Add(wxART_MODIN); 
    list.Add(wxART_MODRINTH); 
    list.Add(wxART_MODX); 
    list.Add(wxART_MOJANGSTUDIOS); 
    list.Add(wxART_MOLECULER); 
    list.Add(wxART_MOMENTEO); 
    list.Add(wxART_MONERO); 
    list.Add(wxART_MONEYGRAM); 
    list.Add(wxART_MONGODB); 
    list.Add(wxART_MONGOOSE); 
    list.Add(wxART_MONGOOSEDOTWS); 
    list.Add(wxART_MONICA); 
    list.Add(wxART_MONKEYTIE); 
    list.Add(wxART_MONKEYTYPE); 
    list.Add(wxART_MONOGAME); 
    list.Add(wxART_MONOPRIX); 
    list.Add(wxART_MONSTER); 
    list.Add(wxART_MONZO); 
    list.Add(wxART_MOO); 
    list.Add(wxART_MOONREPO); 
    list.Add(wxART_MORRISONS); 
    list.Add(wxART_MOSCOWMETRO); 
    list.Add(wxART_MOTOROLA); 
    list.Add(wxART_MOZILLA); 
    list.Add(wxART_MQTT); 
    list.Add(wxART_MSI); 
    list.Add(wxART_MSIBUSINESS); 
    list.Add(wxART_MTA); 
    list.Add(wxART_MTR); 
    list.Add(wxART_MUBI); 
    list.Add(wxART_MUI); 
    list.Add(wxART_MULESOFT); 
    list.Add(wxART_MULLER); 
    list.Add(wxART_MULTISIM); 
    list.Add(wxART_MUMBLE); 
    list.Add(wxART_MURAL); 
    list.Add(wxART_MUSESCORE); 
    list.Add(wxART_MUSICBRAINZ); 
    list.Add(wxART_MXLINUX); 
    list.Add(wxART_MYANIMELIST); 
    list.Add(wxART_MYOB); 
    list.Add(wxART_MYSPACE); 
    list.Add(wxART_MYSQL); 
    list.Add(wxART_N26); 
    list.Add(wxART_NAMEBASE); 
    list.Add(wxART_NAMECHEAP); 
    list.Add(wxART_NANO); 
    list.Add(wxART_NASA); 
    list.Add(wxART_NATIONALGRID); 
    list.Add(wxART_NATIVESCRIPT); 
    list.Add(wxART_NATSDOTIO); 
    list.Add(wxART_NAVER); 
    list.Add(wxART_NBA); 
    list.Add(wxART_NBB); 
    list.Add(wxART_NBC); 
    list.Add(wxART_NDR); 
    list.Add(wxART_NEAR); 
    list.Add(wxART_NEC); 
    list.Add(wxART_NEO4J); 
    list.Add(wxART_NEOVIM); 
    list.Add(wxART_NESTJS); 
    list.Add(wxART_NETAPP); 
    list.Add(wxART_NETBSD); 
    list.Add(wxART_NETFLIX); 
    list.Add(wxART_NETLIFY); 
    list.Add(wxART_NETTE); 
    list.Add(wxART_NETTO); 
    list.Add(wxART_NEUTRALINOJS); 
    list.Add(wxART_NEWBALANCE); 
    list.Add(wxART_NEWEGG); 
    list.Add(wxART_NEWJAPANPROWRESTLING); 
    list.Add(wxART_NEWRELIC); 
    list.Add(wxART_NEWYORKTIMES); 
    list.Add(wxART_NEXTBILLIONDOTAI); 
    list.Add(wxART_NEXTCLOUD); 
    list.Add(wxART_NEXTDOOR); 
    list.Add(wxART_NEXTDOTJS); 
    list.Add(wxART_NEXTRA); 
    list.Add(wxART_NEXTUI); 
    list.Add(wxART_NFC); 
    list.Add(wxART_NGINX); 
    list.Add(wxART_NGINXPROXYMANAGER); 
    list.Add(wxART_NGROK); 
    list.Add(wxART_NGRX); 
    list.Add(wxART_NICONICO); 
    list.Add(wxART_NIKE); 
    list.Add(wxART_NIKON); 
    list.Add(wxART_NIM); 
    list.Add(wxART_NINTENDO); 
    list.Add(wxART_NINTENDO3DS); 
    list.Add(wxART_NINTENDOGAMECUBE); 
    list.Add(wxART_NINTENDONETWORK); 
    list.Add(wxART_NINTENDOSWITCH); 
    list.Add(wxART_NISSAN); 
    list.Add(wxART_NIXOS); 
    list.Add(wxART_NODEDOTJS); 
    list.Add(wxART_NODEMON); 
    list.Add(wxART_NODERED); 
    list.Add(wxART_NOKIA); 
    list.Add(wxART_NORCO); 
    list.Add(wxART_NORDVPN); 
    list.Add(wxART_NORMALIZEDOTCSS); 
    list.Add(wxART_NORTON); 
    list.Add(wxART_NORWEGIAN); 
    list.Add(wxART_NOTEPADPLUSPLUS); 
    list.Add(wxART_NOTION); 
    list.Add(wxART_NOTIST); 
    list.Add(wxART_NOUNPROJECT); 
    list.Add(wxART_NOVU); 
    list.Add(wxART_NOW); 
    list.Add(wxART_NPM); 
    list.Add(wxART_NRWL); 
    list.Add(wxART_NUBANK); 
    list.Add(wxART_NUCLEO); 
    list.Add(wxART_NUGET); 
    list.Add(wxART_NUKE); 
    list.Add(wxART_NUMBA); 
    list.Add(wxART_NUMPY); 
    list.Add(wxART_NUNJUCKS); 
    list.Add(wxART_NUTANIX); 
    list.Add(wxART_NUXTDOTJS); 
    list.Add(wxART_NVIDIA); 
    list.Add(wxART_NX); 
    list.Add(wxART_NXP); 
    list.Add(wxART_NZXT); 
    list.Add(wxART_OBSERVABLE); 
    list.Add(wxART_OBSIDIAN); 
    list.Add(wxART_OBSSTUDIO); 
    list.Add(wxART_OCAML); 
    list.Add(wxART_OCTANERENDER); 
    list.Add(wxART_OCTAVE); 
    list.Add(wxART_OCTOBERCMS); 
    list.Add(wxART_OCTOPRINT); 
    list.Add(wxART_OCTOPUSDEPLOY); 
    list.Add(wxART_OCULUS); 
    list.Add(wxART_ODNOKLASSNIKI); 
    list.Add(wxART_ODYSEE); 
    list.Add(wxART_OHDEAR); 
    list.Add(wxART_OKCUPID); 
    list.Add(wxART_OKTA); 
    list.Add(wxART_ONEPLUS); 
    list.Add(wxART_ONLYFANS); 
    list.Add(wxART_ONLYOFFICE); 
    list.Add(wxART_ONNX); 
    list.Add(wxART_ONSTAR); 
    list.Add(wxART_OPEL); 
    list.Add(wxART_OPENACCESS); 
    list.Add(wxART_OPENAI); 
    list.Add(wxART_OPENAIGYM); 
    list.Add(wxART_OPENAPIINITIATIVE); 
    list.Add(wxART_OPENBADGES); 
    list.Add(wxART_OPENBSD); 
    list.Add(wxART_OPENBUGBOUNTY); 
    list.Add(wxART_OPENCOLLECTIVE); 
    list.Add(wxART_OPENCONTAINERSINITIATIVE); 
    list.Add(wxART_OPENCV); 
    list.Add(wxART_OPENFAAS); 
    list.Add(wxART_OPENGL); 
    list.Add(wxART_OPENID); 
    list.Add(wxART_OPENJDK); 
    list.Add(wxART_OPENLAYERS); 
    list.Add(wxART_OPENMINED); 
    list.Add(wxART_OPENNEBULA); 
    list.Add(wxART_OPENPROJECT); 
    list.Add(wxART_OPENSCAD); 
    list.Add(wxART_OPENSEA); 
    list.Add(wxART_OPENSEARCH); 
    list.Add(wxART_OPENSOURCEHARDWARE); 
    list.Add(wxART_OPENSOURCEINITIATIVE); 
    list.Add(wxART_OPENSSL); 
    list.Add(wxART_OPENSTACK); 
    list.Add(wxART_OPENSTREETMAP); 
    list.Add(wxART_OPENSUSE); 
    list.Add(wxART_OPENTELEMETRY); 
    list.Add(wxART_OPENTEXT); 
    list.Add(wxART_OPENTF); 
    list.Add(wxART_OPENVERSE); 
    list.Add(wxART_OPENVPN); 
    list.Add(wxART_OPENWRT); 
    list.Add(wxART_OPENZEPPELIN); 
    list.Add(wxART_OPENZFS); 
    list.Add(wxART_OPERA); 
    list.Add(wxART_OPERAGX); 
    list.Add(wxART_OPNSENSE); 
    list.Add(wxART_OPSGENIE); 
    list.Add(wxART_OPSLEVEL); 
    list.Add(wxART_ORACLE); 
    list.Add(wxART_ORCID); 
    list.Add(wxART_OREILLY); 
    list.Add(wxART_ORG); 
    list.Add(wxART_ORIGIN); 
    list.Add(wxART_OSANO); 
    list.Add(wxART_OSGEO); 
    list.Add(wxART_OSHKOSH); 
    list.Add(wxART_OSMC); 
    list.Add(wxART_OSU); 
    list.Add(wxART_OTTO); 
    list.Add(wxART_OVERCAST); 
    list.Add(wxART_OVERLEAF); 
    list.Add(wxART_OVH); 
    list.Add(wxART_OWASP); 
    list.Add(wxART_OWNCLOUD); 
    list.Add(wxART_OXYGEN); 
    list.Add(wxART_OYO); 
    list.Add(wxART_P5DOTJS); 
    list.Add(wxART_PACKAGIST); 
    list.Add(wxART_PACKER); 
    list.Add(wxART_PADDLEPADDLE); 
    list.Add(wxART_PADDYPOWER); 
    list.Add(wxART_PAGEKIT); 
    list.Add(wxART_PAGERDUTY); 
    list.Add(wxART_PAGESPEEDINSIGHTS); 
    list.Add(wxART_PAGSEGURO); 
    list.Add(wxART_PALANTIR); 
    list.Add(wxART_PALOALTONETWORKS); 
    list.Add(wxART_PALOALTOSOFTWARE); 
    list.Add(wxART_PANASONIC); 
    list.Add(wxART_PANDAS); 
    list.Add(wxART_PANDORA); 
    list.Add(wxART_PANTHEON); 
    list.Add(wxART_PAPERSPACE); 
    list.Add(wxART_PARITYSUBSTRATE); 
    list.Add(wxART_PARSEDOTLY); 
    list.Add(wxART_PASSPORT); 
    list.Add(wxART_PASTEBIN); 
    list.Add(wxART_PATREON); 
    list.Add(wxART_PAYCHEX); 
    list.Add(wxART_PAYLOADCMS); 
    list.Add(wxART_PAYONEER); 
    list.Add(wxART_PAYPAL); 
    list.Add(wxART_PAYTM); 
    list.Add(wxART_PCGAMINGWIKI); 
    list.Add(wxART_PEAKDESIGN); 
    list.Add(wxART_PEARSON); 
    list.Add(wxART_PEERLIST); 
    list.Add(wxART_PEERTUBE); 
    list.Add(wxART_PEGASUSAIRLINES); 
    list.Add(wxART_PELICAN); 
    list.Add(wxART_PELOTON); 
    list.Add(wxART_PENNY); 
    list.Add(wxART_PENPOT); 
    list.Add(wxART_PEPSI); 
    list.Add(wxART_PERCY); 
    list.Add(wxART_PERFORCE); 
    list.Add(wxART_PERL); 
    list.Add(wxART_PERSISTENT); 
    list.Add(wxART_PERSONIO); 
    list.Add(wxART_PETSATHOME); 
    list.Add(wxART_PEUGEOT); 
    list.Add(wxART_PEXELS); 
    list.Add(wxART_PFSENSE); 
    list.Add(wxART_PHABRICATOR); 
    list.Add(wxART_PHILIPSHUE); 
    list.Add(wxART_PHOENIXFRAMEWORK); 
    list.Add(wxART_PHONEPE); 
    list.Add(wxART_PHOTOBUCKET); 
    list.Add(wxART_PHOTOCROWD); 
    list.Add(wxART_PHOTOPEA); 
    list.Add(wxART_PHP); 
    list.Add(wxART_PHPMYADMIN); 
    list.Add(wxART_PHPSTORM); 
    list.Add(wxART_PIAGGIOGROUP); 
    list.Add(wxART_PICARDSURGELES); 
    list.Add(wxART_PICARTODOTTV); 
    list.Add(wxART_PICNIC); 
    list.Add(wxART_PICPAY); 
    list.Add(wxART_PIHOLE); 
    list.Add(wxART_PIMCORE); 
    list.Add(wxART_PINBOARD); 
    list.Add(wxART_PINGDOM); 
    list.Add(wxART_PINTEREST); 
    list.Add(wxART_PIONEERDJ); 
    list.Add(wxART_PIVOTALTRACKER); 
    list.Add(wxART_PIWIGO); 
    list.Add(wxART_PIX); 
    list.Add(wxART_PIXABAY); 
    list.Add(wxART_PIXIV); 
    list.Add(wxART_PKGSRC); 
    list.Add(wxART_PLANET); 
    list.Add(wxART_PLANETSCALE); 
    list.Add(wxART_PLANGRID); 
    list.Add(wxART_PLATFORMDOTSH); 
    list.Add(wxART_PLATZI); 
    list.Add(wxART_PLAUSIBLEANALYTICS); 
    list.Add(wxART_PLAYCANVAS); 
    list.Add(wxART_PLAYERDOTME); 
    list.Add(wxART_PLAYERFM); 
    list.Add(wxART_PLAYSTATION); 
    list.Add(wxART_PLAYSTATION2); 
    list.Add(wxART_PLAYSTATION3); 
    list.Add(wxART_PLAYSTATION4); 
    list.Add(wxART_PLAYSTATION5); 
    list.Add(wxART_PLAYSTATIONVITA); 
    list.Add(wxART_PLAYWRIGHT); 
    list.Add(wxART_PLEROMA); 
    list.Add(wxART_PLESK); 
    list.Add(wxART_PLEX); 
    list.Add(wxART_PLOTLY); 
    list.Add(wxART_PLURALSIGHT); 
    list.Add(wxART_PLURK); 
    list.Add(wxART_PLUSCODES); 
    list.Add(wxART_PM2); 
    list.Add(wxART_PNPM); 
    list.Add(wxART_POCKET); 
    list.Add(wxART_POCKETBASE); 
    list.Add(wxART_POCKETCASTS); 
    list.Add(wxART_PODCASTADDICT); 
    list.Add(wxART_PODCASTINDEX); 
    list.Add(wxART_PODMAN); 
    list.Add(wxART_POE); 
    list.Add(wxART_POETRY); 
    list.Add(wxART_POINTY); 
    list.Add(wxART_POKEMON); 
    list.Add(wxART_POLARS); 
    list.Add(wxART_POLKADOT); 
    list.Add(wxART_POLY); 
    list.Add(wxART_POLYMERPROJECT); 
    list.Add(wxART_POLYWORK); 
    list.Add(wxART_POPOS); 
    list.Add(wxART_PORSCHE); 
    list.Add(wxART_PORTAINER); 
    list.Add(wxART_POSTCSS); 
    list.Add(wxART_POSTGRESQL); 
    list.Add(wxART_POSTHOG); 
    list.Add(wxART_POSTMAN); 
    list.Add(wxART_POSTMATES); 
    list.Add(wxART_POWERAPPS); 
    list.Add(wxART_POWERAUTOMATE); 
    list.Add(wxART_POWERBI); 
    list.Add(wxART_POWERFX); 
    list.Add(wxART_POWERPAGES); 
    list.Add(wxART_POWERS); 
    list.Add(wxART_POWERSHELL); 
    list.Add(wxART_POWERVIRTUALAGENTS); 
    list.Add(wxART_PRDOTCO); 
    list.Add(wxART_PREACT); 
    list.Add(wxART_PRECOMMIT); 
    list.Add(wxART_PREFECT); 
    list.Add(wxART_PREMIERLEAGUE); 
    list.Add(wxART_PRESTASHOP); 
    list.Add(wxART_PRESTO); 
    list.Add(wxART_PRETTIER); 
    list.Add(wxART_PRETZEL); 
    list.Add(wxART_PREVENTION); 
    list.Add(wxART_PREZI); 
    list.Add(wxART_PRIME); 
    list.Add(wxART_PRIMEVIDEO); 
    list.Add(wxART_PRINTABLES); 
    list.Add(wxART_PRISMA); 
    list.Add(wxART_PRISMIC); 
    list.Add(wxART_PRIVATEINTERNETACCESS); 
    list.Add(wxART_PROBOT); 
    list.Add(wxART_PROCESSINGFOUNDATION); 
    list.Add(wxART_PROCESSWIRE); 
    list.Add(wxART_PRODUCTHUNT); 
    list.Add(wxART_PROGATE); 
    list.Add(wxART_PROGRESS); 
    list.Add(wxART_PROMETHEUS); 
    list.Add(wxART_PROSIEBEN); 
    list.Add(wxART_PROTOCOLSDOTIO); 
    list.Add(wxART_PROTODOTIO); 
    list.Add(wxART_PROTON); 
    list.Add(wxART_PROTONCALENDAR); 
    list.Add(wxART_PROTONDB); 
    list.Add(wxART_PROTONDRIVE); 
    list.Add(wxART_PROTONMAIL); 
    list.Add(wxART_PROTONVPN); 
    list.Add(wxART_PROTOOLS); 
    list.Add(wxART_PROTRACTOR); 
    list.Add(wxART_PROXMOX); 
    list.Add(wxART_PTERODACTYL); 
    list.Add(wxART_PUBG); 
    list.Add(wxART_PUBLONS); 
    list.Add(wxART_PUBMED); 
    list.Add(wxART_PUG); 
    list.Add(wxART_PULUMI); 
    list.Add(wxART_PUMA); 
    list.Add(wxART_PUPPET); 
    list.Add(wxART_PUPPETEER); 
    list.Add(wxART_PURESCRIPT); 
    list.Add(wxART_PURGECSS); 
    list.Add(wxART_PURISM); 
    list.Add(wxART_PUSHER); 
    list.Add(wxART_PWA); 
    list.Add(wxART_PYCHARM); 
    list.Add(wxART_PYDANTIC); 
    list.Add(wxART_PYG); 
    list.Add(wxART_PYPI); 
    list.Add(wxART_PYPY); 
    list.Add(wxART_PYSCAFFOLD); 
    list.Add(wxART_PYSYFT); 
    list.Add(wxART_PYTEST); 
    list.Add(wxART_PYTHON); 
    list.Add(wxART_PYTHONANYWHERE); 
    list.Add(wxART_PYTORCH); 
    list.Add(wxART_PYUP); 
    list.Add(wxART_QANTAS); 
    list.Add(wxART_QATARAIRWAYS); 
    list.Add(wxART_QEMU); 
    list.Add(wxART_QGIS); 
    list.Add(wxART_QI); 
    list.Add(wxART_QIITA); 
    list.Add(wxART_QISKIT); 
    list.Add(wxART_QIWI); 
    list.Add(wxART_QLIK); 
    list.Add(wxART_QMK); 
    list.Add(wxART_QT); 
    list.Add(wxART_QUALCOMM); 
    list.Add(wxART_QUALTRICS); 
    list.Add(wxART_QUALYS); 
    list.Add(wxART_QUANTCAST); 
    list.Add(wxART_QUANTCONNECT); 
    list.Add(wxART_QUARKUS); 
    list.Add(wxART_QUASAR); 
    list.Add(wxART_QUBESOS); 
    list.Add(wxART_QUEST); 
    list.Add(wxART_QUICKBOOKS); 
    list.Add(wxART_QUICKLOOK); 
    list.Add(wxART_QUICKTIME); 
    list.Add(wxART_QUIP); 
    list.Add(wxART_QUORA); 
    list.Add(wxART_QWANT); 
    list.Add(wxART_QWIKLABS); 
    list.Add(wxART_QZONE); 
    list.Add(wxART_R); 
    list.Add(wxART_R3); 
    list.Add(wxART_RABBITMQ); 
    list.Add(wxART_RACKET); 
    list.Add(wxART_RADAR); 
    list.Add(wxART_RADIOPUBLIC); 
    list.Add(wxART_RADIXUI); 
    list.Add(wxART_RADSTUDIO); 
    list.Add(wxART_RAILWAY); 
    list.Add(wxART_RAINMETER); 
    list.Add(wxART_RAKUTEN); 
    list.Add(wxART_RAM); 
    list.Add(wxART_RANCHER); 
    list.Add(wxART_RARIBLE); 
    list.Add(wxART_RASA); 
    list.Add(wxART_RASPBERRYPI); 
    list.Add(wxART_RAVELRY); 
    list.Add(wxART_RAY); 
    list.Add(wxART_RAZER); 
    list.Add(wxART_RAZORPAY); 
    list.Add(wxART_REACT); 
    list.Add(wxART_REACTHOOKFORM); 
    list.Add(wxART_REACTIVEX); 
    list.Add(wxART_REACTOS); 
    list.Add(wxART_REACTQUERY); 
    list.Add(wxART_REACTROUTER); 
    list.Add(wxART_REACTTABLE); 
    list.Add(wxART_READDOTCV); 
    list.Add(wxART_README); 
    list.Add(wxART_READTHEDOCS); 
    list.Add(wxART_REALM); 
    list.Add(wxART_REASON); 
    list.Add(wxART_REASONSTUDIOS); 
    list.Add(wxART_RECOIL); 
    list.Add(wxART_RED); 
    list.Add(wxART_REDBUBBLE); 
    list.Add(wxART_REDDIT); 
    list.Add(wxART_REDHAT); 
    list.Add(wxART_REDHATOPENSHIFT); 
    list.Add(wxART_REDIS); 
    list.Add(wxART_REDMINE); 
    list.Add(wxART_REDOX); 
    list.Add(wxART_REDUX); 
    list.Add(wxART_REDUXSAGA); 
    list.Add(wxART_REDWOODJS); 
    list.Add(wxART_REEBOK); 
    list.Add(wxART_RELAY); 
    list.Add(wxART_RELIANCEINDUSTRIESLIMITED); 
    list.Add(wxART_REMARK); 
    list.Add(wxART_REMIX); 
    list.Add(wxART_RENAULT); 
    list.Add(wxART_RENDER); 
    list.Add(wxART_RENOVATEBOT); 
    list.Add(wxART_RENPY); 
    list.Add(wxART_RENREN); 
    list.Add(wxART_REPLIT); 
    list.Add(wxART_REPUBLICOFGAMERS); 
    list.Add(wxART_RESCRIPT); 
    list.Add(wxART_RESCUETIME); 
    list.Add(wxART_RESEARCHGATE); 
    list.Add(wxART_RESHARPER); 
    list.Add(wxART_RESURRECTIONREMIXOS); 
    list.Add(wxART_RETOOL); 
    list.Add(wxART_RETROARCH); 
    list.Add(wxART_RETROPIE); 
    list.Add(wxART_REVANCED); 
    list.Add(wxART_REVEALDOTJS); 
    list.Add(wxART_REVERBNATION); 
    list.Add(wxART_REVOLTDOTCHAT); 
    list.Add(wxART_REVOLUT); 
    list.Add(wxART_REVUE); 
    list.Add(wxART_REWE); 
    list.Add(wxART_REZGO); 
    list.Add(wxART_RHINOCEROS); 
    list.Add(wxART_RIDER); 
    list.Add(wxART_RIMACAUTOMOBILI); 
    list.Add(wxART_RING); 
    list.Add(wxART_RIOTGAMES); 
    list.Add(wxART_RIPPLE); 
    list.Add(wxART_RISCV); 
    list.Add(wxART_RISEUP); 
    list.Add(wxART_ROADMAPDOTSH); 
    list.Add(wxART_ROAMRESEARCH); 
    list.Add(wxART_ROBINHOOD); 
    list.Add(wxART_ROBLOX); 
    list.Add(wxART_ROBLOXSTUDIO); 
    list.Add(wxART_ROBOTFRAMEWORK); 
    list.Add(wxART_ROCKETDOTCHAT); 
    list.Add(wxART_ROCKSDB); 
    list.Add(wxART_ROCKYLINUX); 
    list.Add(wxART_ROKU); 
    list.Add(wxART_ROLLSROYCE); 
    list.Add(wxART_ROLLUPDOTJS); 
    list.Add(wxART_ROME); 
    list.Add(wxART_ROOTME); 
    list.Add(wxART_ROOTS); 
    list.Add(wxART_ROOTSBEDROCK); 
    list.Add(wxART_ROOTSSAGE); 
    list.Add(wxART_ROS); 
    list.Add(wxART_ROSSMANN); 
    list.Add(wxART_ROTARYINTERNATIONAL); 
    list.Add(wxART_ROTTENTOMATOES); 
    list.Add(wxART_ROUNDCUBE); 
    list.Add(wxART_RSOCKET); 
    list.Add(wxART_RSS); 
    list.Add(wxART_RSTUDIO); 
    list.Add(wxART_RTE); 
    list.Add(wxART_RTL); 
    list.Add(wxART_RTLZWEI); 
    list.Add(wxART_RUBOCOP); 
    list.Add(wxART_RUBY); 
    list.Add(wxART_RUBYGEMS); 
    list.Add(wxART_RUBYONRAILS); 
    list.Add(wxART_RUBYSINATRA); 
    list.Add(wxART_RUFF); 
    list.Add(wxART_RUMBLE); 
    list.Add(wxART_RUNDECK); 
    list.Add(wxART_RUNKEEPER); 
    list.Add(wxART_RUNKIT); 
    list.Add(wxART_RUST); 
    list.Add(wxART_RXDB); 
    list.Add(wxART_RYANAIR); 
    list.Add(wxART_S7AIRLINES); 
    list.Add(wxART_SABANCI); 
    list.Add(wxART_SAFARI); 
    list.Add(wxART_SAGE); 
    list.Add(wxART_SAHIBINDEN); 
    list.Add(wxART_SAILFISHOS); 
    list.Add(wxART_SAILSDOTJS); 
    list.Add(wxART_SALESFORCE); 
    list.Add(wxART_SALTPROJECT); 
    list.Add(wxART_SAMSUNG); 
    list.Add(wxART_SAMSUNGPAY); 
    list.Add(wxART_SANDISK); 
    list.Add(wxART_SANFRANCISCOMUNICIPALRAILWAY); 
    list.Add(wxART_SANIC); 
    list.Add(wxART_SANITY); 
    list.Add(wxART_SAOPAULOMETRO); 
    list.Add(wxART_SAP); 
    list.Add(wxART_SASS); 
    list.Add(wxART_SAT1); 
    list.Add(wxART_SATURN); 
    list.Add(wxART_SAUCELABS); 
    list.Add(wxART_SCALA); 
    list.Add(wxART_SCALEWAY); 
    list.Add(wxART_SCANIA); 
    list.Add(wxART_SCHNEIDERELECTRIC); 
    list.Add(wxART_SCIKITLEARN); 
    list.Add(wxART_SCIPY); 
    list.Add(wxART_SCOPUS); 
    list.Add(wxART_SCPFOUNDATION); 
    list.Add(wxART_SCRAPBOX); 
    list.Add(wxART_SCRATCH); 
    list.Add(wxART_SCREENCASTIFY); 
    list.Add(wxART_SCRIBD); 
    list.Add(wxART_SCRIMBA); 
    list.Add(wxART_SCROLLREVEAL); 
    list.Add(wxART_SCRUMALLIANCE); 
    list.Add(wxART_SCRUTINIZERCI); 
    list.Add(wxART_SCYLLADB); 
    list.Add(wxART_SEAGATE); 
    list.Add(wxART_SEARXNG); 
    list.Add(wxART_SEAT); 
    list.Add(wxART_SECURITYSCORECARD); 
    list.Add(wxART_SEFARIA); 
    list.Add(wxART_SEGA); 
    list.Add(wxART_SELENIUM); 
    list.Add(wxART_SELLFY); 
    list.Add(wxART_SEMANTICRELEASE); 
    list.Add(wxART_SEMANTICSCHOLAR); 
    list.Add(wxART_SEMANTICUIREACT); 
    list.Add(wxART_SEMANTICWEB); 
    list.Add(wxART_SEMAPHORECI); 
    list.Add(wxART_SEMRUSH); 
    list.Add(wxART_SEMVER); 
    list.Add(wxART_SENCHA); 
    list.Add(wxART_SENDINBLUE); 
    list.Add(wxART_SENNHEISER); 
    list.Add(wxART_SENSU); 
    list.Add(wxART_SENTRY); 
    list.Add(wxART_SEPA); 
    list.Add(wxART_SEQUELIZE); 
    list.Add(wxART_SERVERFAULT); 
    list.Add(wxART_SERVERLESS); 
    list.Add(wxART_SESSIONIZE); 
    list.Add(wxART_SETAPP); 
    list.Add(wxART_SFML); 
    list.Add(wxART_SHADOW); 
    list.Add(wxART_SHANGHAIMETRO); 
    list.Add(wxART_SHAREX); 
    list.Add(wxART_SHARP); 
    list.Add(wxART_SHAZAM); 
    list.Add(wxART_SHELL); 
    list.Add(wxART_SHELLY); 
    list.Add(wxART_SHENZHENMETRO); 
    list.Add(wxART_SHIELDSDOTIO); 
    list.Add(wxART_SHIKIMORI); 
    list.Add(wxART_SHOPEE); 
    list.Add(wxART_SHOPIFY); 
    list.Add(wxART_SHOPWARE); 
    list.Add(wxART_SHORTCUT); 
    list.Add(wxART_SHOTCUT); 
    list.Add(wxART_SHOWPAD); 
    list.Add(wxART_SHOWTIME); 
    list.Add(wxART_SHUTTERSTOCK); 
    list.Add(wxART_SIEMENS); 
    list.Add(wxART_SIFIVE); 
    list.Add(wxART_SIGNAL); 
    list.Add(wxART_SIMILARWEB); 
    list.Add(wxART_SIMKL); 
    list.Add(wxART_SIMPLEANALYTICS); 
    list.Add(wxART_SIMPLEICONS); 
    list.Add(wxART_SIMPLENOTE); 
    list.Add(wxART_SINAWEIBO); 
    list.Add(wxART_SINGAPOREAIRLINES); 
    list.Add(wxART_SINGLESTORE); 
    list.Add(wxART_SITECORE); 
    list.Add(wxART_SITEPOINT); 
    list.Add(wxART_SKETCH); 
    list.Add(wxART_SKETCHFAB); 
    list.Add(wxART_SKETCHUP); 
    list.Add(wxART_SKILLSHARE); 
    list.Add(wxART_SKODA); 
    list.Add(wxART_SKY); 
    list.Add(wxART_SKYNET); 
    list.Add(wxART_SKYPACK); 
    list.Add(wxART_SKYPE); 
    list.Add(wxART_SKYPEFORBUSINESS); 
    list.Add(wxART_SKYROCK); 
    list.Add(wxART_SLACK); 
    list.Add(wxART_SLACKWARE); 
    list.Add(wxART_SLASHDOT); 
    list.Add(wxART_SLICKPIC); 
    list.Add(wxART_SLIDES); 
    list.Add(wxART_SLIDESHARE); 
    list.Add(wxART_SMART); 
    list.Add(wxART_SMARTTHINGS); 
    list.Add(wxART_SMASHDOTGG); 
    list.Add(wxART_SMASHINGMAGAZINE); 
    list.Add(wxART_SMRT); 
    list.Add(wxART_SMUGMUG); 
    list.Add(wxART_SNAPCHAT); 
    list.Add(wxART_SNAPCRAFT); 
    list.Add(wxART_SNCF); 
    list.Add(wxART_SNOWFLAKE); 
    list.Add(wxART_SNOWPACK); 
    list.Add(wxART_SNYK); 
    list.Add(wxART_SOCIALBLADE); 
    list.Add(wxART_SOCIETY6); 
    list.Add(wxART_SOCKETDOTIO); 
    list.Add(wxART_SOGOU); 
    list.Add(wxART_SOLID); 
    list.Add(wxART_SOLIDITY); 
    list.Add(wxART_SOLOLEARN); 
    list.Add(wxART_SOLUS); 
    list.Add(wxART_SONAR); 
    list.Add(wxART_SONARCLOUD); 
    list.Add(wxART_SONARLINT); 
    list.Add(wxART_SONARQUBE); 
    list.Add(wxART_SONARSOURCE); 
    list.Add(wxART_SONATYPE); 
    list.Add(wxART_SONGKICK); 
    list.Add(wxART_SONGODA); 
    list.Add(wxART_SONICWALL); 
    list.Add(wxART_SONOS); 
    list.Add(wxART_SONY); 
    list.Add(wxART_SOUNDCHARTS); 
    list.Add(wxART_SOUNDCLOUD); 
    list.Add(wxART_SOURCEENGINE); 
    list.Add(wxART_SOURCEFORGE); 
    list.Add(wxART_SOURCEGRAPH); 
    list.Add(wxART_SOURCEHUT); 
    list.Add(wxART_SOURCETREE); 
    list.Add(wxART_SOUTHWESTAIRLINES); 
    list.Add(wxART_SPACEMACS); 
    list.Add(wxART_SPACEX); 
    list.Add(wxART_SPACY); 
    list.Add(wxART_SPARKAR); 
    list.Add(wxART_SPARKASSE); 
    list.Add(wxART_SPARKFUN); 
    list.Add(wxART_SPARKPOST); 
    list.Add(wxART_SPDX); 
    list.Add(wxART_SPEAKERDECK); 
    list.Add(wxART_SPECTRUM); 
    list.Add(wxART_SPEEDTEST); 
    list.Add(wxART_SPEEDYPAGE); 
    list.Add(wxART_SPHINX); 
    list.Add(wxART_SPIGOTMC); 
    list.Add(wxART_SPINNAKER); 
    list.Add(wxART_SPINRILLA); 
    list.Add(wxART_SPLUNK); 
    list.Add(wxART_SPOJ); 
    list.Add(wxART_SPOND); 
    list.Add(wxART_SPOTIFY); 
    list.Add(wxART_SPOTLIGHT); 
    list.Add(wxART_SPREADSHIRT); 
    list.Add(wxART_SPREAKER); 
    list.Add(wxART_SPRING); 
    list.Add(wxART_SPRING_CREATORS); 
    list.Add(wxART_SPRINGBOOT); 
    list.Add(wxART_SPRINGSECURITY); 
    list.Add(wxART_SPYDERIDE); 
    list.Add(wxART_SQLALCHEMY); 
    list.Add(wxART_SQLITE); 
    list.Add(wxART_SQUARE); 
    list.Add(wxART_SQUAREENIX); 
    list.Add(wxART_SQUARESPACE); 
    list.Add(wxART_SSRN); 
    list.Add(wxART_SST); 
    list.Add(wxART_STACKBIT); 
    list.Add(wxART_STACKBLITZ); 
    list.Add(wxART_STACKEDIT); 
    list.Add(wxART_STACKEXCHANGE); 
    list.Add(wxART_STACKHAWK); 
    list.Add(wxART_STACKOVERFLOW); 
    list.Add(wxART_STACKPATH); 
    list.Add(wxART_STACKSHARE); 
    list.Add(wxART_STADIA); 
    list.Add(wxART_STAFFBASE); 
    list.Add(wxART_STANDARDJS); 
    list.Add(wxART_STANDARDRESUME); 
    list.Add(wxART_STARBUCKS); 
    list.Add(wxART_STARDOCK); 
    list.Add(wxART_STARLINGBANK); 
    list.Add(wxART_STARSHIP); 
    list.Add(wxART_STARTREK); 
    list.Add(wxART_STARZ); 
    list.Add(wxART_STATAMIC); 
    list.Add(wxART_STATUSPAGE); 
    list.Add(wxART_STATUSPAL); 
    list.Add(wxART_STEAM); 
    list.Add(wxART_STEAMDB); 
    list.Add(wxART_STEAMDECK); 
    list.Add(wxART_STEAMWORKS); 
    list.Add(wxART_STEELSERIES); 
    list.Add(wxART_STEEM); 
    list.Add(wxART_STEEMIT); 
    list.Add(wxART_STEINBERG); 
    list.Add(wxART_STELLAR); 
    list.Add(wxART_STENCYL); 
    list.Add(wxART_STIMULUS); 
    list.Add(wxART_STITCHER); 
    list.Add(wxART_STMICROELECTRONICS); 
    list.Add(wxART_STOPSTALK); 
    list.Add(wxART_STORYBLOK); 
    list.Add(wxART_STORYBOOK); 
    list.Add(wxART_STRAPI); 
    list.Add(wxART_STRAVA); 
    list.Add(wxART_STREAMLIT); 
    list.Add(wxART_STRIPE); 
    list.Add(wxART_STRONGSWAN); 
    list.Add(wxART_STRYKER); 
    list.Add(wxART_STUBHUB); 
    list.Add(wxART_STUDIO3T); 
    list.Add(wxART_STUDYVERSE); 
    list.Add(wxART_STYLEDCOMPONENTS); 
    list.Add(wxART_STYLELINT); 
    list.Add(wxART_STYLESHARE); 
    list.Add(wxART_STYLUS); 
    list.Add(wxART_SUBARU); 
    list.Add(wxART_SUBLIMETEXT); 
    list.Add(wxART_SUBSTACK); 
    list.Add(wxART_SUBTITLEEDIT); 
    list.Add(wxART_SUBVERSION); 
    list.Add(wxART_SUCKLESS); 
    list.Add(wxART_SUMOLOGIC); 
    list.Add(wxART_SUPABASE); 
    list.Add(wxART_SUPERCREASE); 
    list.Add(wxART_SUPERMICRO); 
    list.Add(wxART_SUPERUSER); 
    list.Add(wxART_SURREALDB); 
    list.Add(wxART_SURVEYMONKEY); 
    list.Add(wxART_SUSE); 
    list.Add(wxART_SUZUKI); 
    list.Add(wxART_SVELTE); 
    list.Add(wxART_SVG); 
    list.Add(wxART_SVGDOTJS); 
    list.Add(wxART_SVGO); 
    list.Add(wxART_SWAGGER); 
    list.Add(wxART_SWARM); 
    list.Add(wxART_SWC); 
    list.Add(wxART_SWIFT); 
    list.Add(wxART_SWIGGY); 
    list.Add(wxART_SWIPER); 
    list.Add(wxART_SWR); 
    list.Add(wxART_SYMANTEC); 
    list.Add(wxART_SYMBOLAB); 
    list.Add(wxART_SYMFONY); 
    list.Add(wxART_SYMPHONY); 
    list.Add(wxART_SYMPY); 
    list.Add(wxART_SYNOLOGY); 
    list.Add(wxART_SYSTEM76); 
    list.Add(wxART_TABLEAU); 
    list.Add(wxART_TABLECHECK); 
    list.Add(wxART_TACOBELL); 
    list.Add(wxART_TADO); 
    list.Add(wxART_TAICHIGRAPHICS); 
    list.Add(wxART_TAICHILANG); 
    list.Add(wxART_TAILS); 
    list.Add(wxART_TAILWINDCSS); 
    list.Add(wxART_TALEND); 
    list.Add(wxART_TALENTHOUSE); 
    list.Add(wxART_TAMIYA); 
    list.Add(wxART_TAMPERMONKEY); 
    list.Add(wxART_TAOBAO); 
    list.Add(wxART_TAPAS); 
    list.Add(wxART_TARGET); 
    list.Add(wxART_TASK); 
    list.Add(wxART_TASMOTA); 
    list.Add(wxART_TATA); 
    list.Add(wxART_TAURI); 
    list.Add(wxART_TAXBUZZ); 
    list.Add(wxART_TCS); 
    list.Add(wxART_TEAMCITY); 
    list.Add(wxART_TEAMSPEAK); 
    list.Add(wxART_TEAMVIEWER); 
    list.Add(wxART_TED); 
    list.Add(wxART_TEESPRING); 
    list.Add(wxART_TEKTON); 
    list.Add(wxART_TELE5); 
    list.Add(wxART_TELEGRAM); 
    list.Add(wxART_TELEGRAPH); 
    list.Add(wxART_TEMPORAL); 
    list.Add(wxART_TENCENTQQ); 
    list.Add(wxART_TENSORFLOW); 
    list.Add(wxART_TERADATA); 
    list.Add(wxART_TERATAIL); 
    list.Add(wxART_TERMIUS); 
    list.Add(wxART_TERRAFORM); 
    list.Add(wxART_TESCO); 
    list.Add(wxART_TESLA); 
    list.Add(wxART_TESTCAFE); 
    list.Add(wxART_TESTIN); 
    list.Add(wxART_TESTINGLIBRARY); 
    list.Add(wxART_TESTRAIL); 
    list.Add(wxART_TETHER); 
    list.Add(wxART_TEXTPATTERN); 
    list.Add(wxART_TGA); 
    list.Add(wxART_THANGS); 
    list.Add(wxART_THEALGORITHMS); 
    list.Add(wxART_THECONVERSATION); 
    list.Add(wxART_THEIRISHTIMES); 
    list.Add(wxART_THEMIGHTY); 
    list.Add(wxART_THEMODELSRESOURCE); 
    list.Add(wxART_THEMOVIEDATABASE); 
    list.Add(wxART_THENORTHFACE); 
    list.Add(wxART_THEREGISTER); 
    list.Add(wxART_THESOUNDSRESOURCE); 
    list.Add(wxART_THESPRITERSRESOURCE); 
    list.Add(wxART_THEWASHINGTONPOST); 
    list.Add(wxART_THINGIVERSE); 
    list.Add(wxART_THINKPAD); 
    list.Add(wxART_THREADLESS); 
    list.Add(wxART_THREADS); 
    list.Add(wxART_THREEDOTJS); 
    list.Add(wxART_THREEMA); 
    list.Add(wxART_THUMBTACK); 
    list.Add(wxART_THUNDERBIRD); 
    list.Add(wxART_THURGAUERKANTONALBANK); 
    list.Add(wxART_THYMELEAF); 
    list.Add(wxART_TICKETMASTER); 
    list.Add(wxART_TIDAL); 
    list.Add(wxART_TIDDLYWIKI); 
    list.Add(wxART_TIDE); 
    list.Add(wxART_TIDYVERSE); 
    list.Add(wxART_TIETOEVRY); 
    list.Add(wxART_TIKTOK); 
    list.Add(wxART_TILE); 
    list.Add(wxART_TIMESCALE); 
    list.Add(wxART_TINA); 
    list.Add(wxART_TINDER); 
    list.Add(wxART_TINYLETTER); 
    list.Add(wxART_TISTORY); 
    list.Add(wxART_TMOBILE); 
    list.Add(wxART_TMUX); 
    list.Add(wxART_TNT); 
    list.Add(wxART_TODOIST); 
    list.Add(wxART_TOGGL); 
    list.Add(wxART_TOGGLTRACK); 
    list.Add(wxART_TOKYOMETRO); 
    list.Add(wxART_TOML); 
    list.Add(wxART_TOMORROWLAND); 
    list.Add(wxART_TOPCODER); 
    list.Add(wxART_TOPTAL); 
    list.Add(wxART_TORBROWSER); 
    list.Add(wxART_TORPROJECT); 
    list.Add(wxART_TOSHIBA); 
    list.Add(wxART_TOURBOX); 
    list.Add(wxART_TOYOTA); 
    list.Add(wxART_TPLINK); 
    list.Add(wxART_TQDM); 
    list.Add(wxART_TRAEFIKMESH); 
    list.Add(wxART_TRAEFIKPROXY); 
    list.Add(wxART_TRAILFORKS); 
    list.Add(wxART_TRAINERROAD); 
    list.Add(wxART_TRAKT); 
    list.Add(wxART_TRANSPORTFORIRELAND); 
    list.Add(wxART_TRANSPORTFORLONDON); 
    list.Add(wxART_TRAVISCI); 
    list.Add(wxART_TREEHOUSE); 
    list.Add(wxART_TRELLO); 
    list.Add(wxART_TRENDMICRO); 
    list.Add(wxART_TREYARCH); 
    list.Add(wxART_TRILIUM); 
    list.Add(wxART_TRILLER); 
    list.Add(wxART_TRINO); 
    list.Add(wxART_TRIPADVISOR); 
    list.Add(wxART_TRIPDOTCOM); 
    list.Add(wxART_TRIVY); 
    list.Add(wxART_TROVE); 
    list.Add(wxART_TRPC); 
    list.Add(wxART_TRUENAS); 
    list.Add(wxART_TRULIA); 
    list.Add(wxART_TRUSTEDSHOPS); 
    list.Add(wxART_TRUSTPILOT); 
    list.Add(wxART_TRYHACKME); 
    list.Add(wxART_TRYITONLINE); 
    list.Add(wxART_TSNODE); 
    list.Add(wxART_TUBI); 
    list.Add(wxART_TUI); 
    list.Add(wxART_TUMBLR); 
    list.Add(wxART_TUNEIN); 
    list.Add(wxART_TURBO); 
    list.Add(wxART_TURBOREPO); 
    list.Add(wxART_TURBOSQUID); 
    list.Add(wxART_TURKISHAIRLINES); 
    list.Add(wxART_TURSO); 
    list.Add(wxART_TUTANOTA); 
    list.Add(wxART_TVTIME); 
    list.Add(wxART_TWILIO); 
    list.Add(wxART_TWITCH); 
    list.Add(wxART_TWITTER); 
    list.Add(wxART_TWOO); 
    list.Add(wxART_TYPEFORM); 
    list.Add(wxART_TYPESCRIPT); 
    list.Add(wxART_TYPO3); 
    list.Add(wxART_UBER); 
    list.Add(wxART_UBEREATS); 
    list.Add(wxART_UBIQUITI); 
    list.Add(wxART_UBISOFT); 
    list.Add(wxART_UBLOCKORIGIN); 
    list.Add(wxART_UBUNTU); 
    list.Add(wxART_UBUNTUMATE); 
    list.Add(wxART_UDACITY); 
    list.Add(wxART_UDEMY); 
    list.Add(wxART_UFC); 
    list.Add(wxART_UIKIT); 
    list.Add(wxART_ULULE); 
    list.Add(wxART_UMAMI); 
    list.Add(wxART_UMBRACO); 
    list.Add(wxART_UML); 
    list.Add(wxART_UNACADEMY); 
    list.Add(wxART_UNDERARMOUR); 
    list.Add(wxART_UNDERSCOREDOTJS); 
    list.Add(wxART_UNDERTALE); 
    list.Add(wxART_UNICODE); 
    list.Add(wxART_UNILEVER); 
    list.Add(wxART_UNITEDAIRLINES); 
    list.Add(wxART_UNITEDNATIONS); 
    list.Add(wxART_UNITY); 
    list.Add(wxART_UNLICENSE); 
    list.Add(wxART_UNO); 
    list.Add(wxART_UNOCSS); 
    list.Add(wxART_UNRAID); 
    list.Add(wxART_UNREALENGINE); 
    list.Add(wxART_UNSPLASH); 
    list.Add(wxART_UNTANGLE); 
    list.Add(wxART_UNTAPPD); 
    list.Add(wxART_UPCLOUD); 
    list.Add(wxART_UPLABS); 
    list.Add(wxART_UPLOADED); 
    list.Add(wxART_UPS); 
    list.Add(wxART_UPSTASH); 
    list.Add(wxART_UPTIMEKUMA); 
    list.Add(wxART_UPTOBOX); 
    list.Add(wxART_UPWORK); 
    list.Add(wxART_USPS); 
    list.Add(wxART_UTORRENT); 
    list.Add(wxART_V); 
    list.Add(wxART_V2EX); 
    list.Add(wxART_V8); 
    list.Add(wxART_VAADIN); 
    list.Add(wxART_VAGRANT); 
    list.Add(wxART_VALA); 
    list.Add(wxART_VALORANT); 
    list.Add(wxART_VALVE); 
    list.Add(wxART_VAPOR); 
    list.Add(wxART_VAULT); 
    list.Add(wxART_VAULTWARDEN); 
    list.Add(wxART_VAUXHALL); 
    list.Add(wxART_VBULLETIN); 
    list.Add(wxART_VECTORLOGOZONE); 
    list.Add(wxART_VECTORWORKS); 
    list.Add(wxART_VEEAM); 
    list.Add(wxART_VEEPEE); 
    list.Add(wxART_VEGA); 
    list.Add(wxART_VELOG); 
    list.Add(wxART_VENMO); 
    list.Add(wxART_VERCEL); 
    list.Add(wxART_VERDACCIO); 
    list.Add(wxART_VERITAS); 
    list.Add(wxART_VERIZON); 
    list.Add(wxART_VESPA); 
    list.Add(wxART_VEXXHOST); 
    list.Add(wxART_VFAIRS); 
    list.Add(wxART_VIADEO); 
    list.Add(wxART_VIAPLAY); 
    list.Add(wxART_VIBER); 
    list.Add(wxART_VIM); 
    list.Add(wxART_VIMEO); 
    list.Add(wxART_VIMEOLIVESTREAM); 
    list.Add(wxART_VIRGIN); 
    list.Add(wxART_VIRGINMEDIA); 
    list.Add(wxART_VIRTUALBOX); 
    list.Add(wxART_VIRUSTOTAL); 
    list.Add(wxART_VISA); 
    list.Add(wxART_VISUALBASIC); 
    list.Add(wxART_VISUALSTUDIO); 
    list.Add(wxART_VISUALSTUDIOCODE); 
    list.Add(wxART_VITE); 
    list.Add(wxART_VITESS); 
    list.Add(wxART_VITEST); 
    list.Add(wxART_VIVALDI); 
    list.Add(wxART_VIVAWALLET); 
    list.Add(wxART_VIVINO); 
    list.Add(wxART_VK); 
    list.Add(wxART_VLCMEDIAPLAYER); 
    list.Add(wxART_VMWARE); 
    list.Add(wxART_VODAFONE); 
    list.Add(wxART_VOIDLINUX); 
    list.Add(wxART_VOIPDOTMS); 
    list.Add(wxART_VOLKSWAGEN); 
    list.Add(wxART_VOLVO); 
    list.Add(wxART_VONAGE); 
    list.Add(wxART_VORONDESIGN); 
    list.Add(wxART_VOWPALWABBIT); 
    list.Add(wxART_VOX); 
    list.Add(wxART_VSCO); 
    list.Add(wxART_VSCODIUM); 
    list.Add(wxART_VTEX); 
    list.Add(wxART_VUEDOTJS); 
    list.Add(wxART_VUETIFY); 
    list.Add(wxART_VULKAN); 
    list.Add(wxART_VULTR); 
    list.Add(wxART_VYOND); 
    list.Add(wxART_W3C); 
    list.Add(wxART_WACOM); 
    list.Add(wxART_WAGTAIL); 
    list.Add(wxART_WAILS); 
    list.Add(wxART_WAKATIME); 
    list.Add(wxART_WALKMAN); 
    list.Add(wxART_WALLABAG); 
    list.Add(wxART_WALLETCONNECT); 
    list.Add(wxART_WALMART); 
    list.Add(wxART_WANTEDLY); 
    list.Add(wxART_WAPPALYZER); 
    list.Add(wxART_WARNERBROS); 
    list.Add(wxART_WARP); 
    list.Add(wxART_WASABI); 
    list.Add(wxART_WASMCLOUD); 
    list.Add(wxART_WASMER); 
    list.Add(wxART_WATTPAD); 
    list.Add(wxART_WAYLAND); 
    list.Add(wxART_WAZE); 
    list.Add(wxART_WEAROS); 
    list.Add(wxART_WEASYL); 
    list.Add(wxART_WEB3DOTJS); 
    list.Add(wxART_WEBASSEMBLY); 
    list.Add(wxART_WEBAUTHN); 
    list.Add(wxART_WEBCOMPONENTSDOTORG); 
    list.Add(wxART_WEBDRIVERIO); 
    list.Add(wxART_WEBFLOW); 
    list.Add(wxART_WEBGL); 
    list.Add(wxART_WEBHINT); 
    list.Add(wxART_WEBLATE); 
    list.Add(wxART_WEBMIN); 
    list.Add(wxART_WEBMONEY); 
    list.Add(wxART_WEBPACK); 
    list.Add(wxART_WEBRTC); 
    list.Add(wxART_WEBSTORM); 
    list.Add(wxART_WEBTOON); 
    list.Add(wxART_WEBTREES); 
    list.Add(wxART_WECHAT); 
    list.Add(wxART_WEGAME); 
    list.Add(wxART_WEIGHTSANDBIASES); 
    list.Add(wxART_WELCOMETOTHEJUNGLE); 
    list.Add(wxART_WELLFOUND); 
    list.Add(wxART_WEMO); 
    list.Add(wxART_WESTERNDIGITAL); 
    list.Add(wxART_WETRANSFER); 
    list.Add(wxART_WHATSAPP); 
    list.Add(wxART_WHENIWORK); 
    list.Add(wxART_WHITESOURCE); 
    list.Add(wxART_WII); 
    list.Add(wxART_WIIU); 
    list.Add(wxART_WIKIDATA); 
    list.Add(wxART_WIKIDOTGG); 
    list.Add(wxART_WIKIDOTJS); 
    list.Add(wxART_WIKIMEDIACOMMONS); 
    list.Add(wxART_WIKIPEDIA); 
    list.Add(wxART_WIKIQUOTE); 
    list.Add(wxART_WIKIVOYAGE); 
    list.Add(wxART_WINAMP); 
    list.Add(wxART_WINDICSS); 
    list.Add(wxART_WINDOWS); 
    list.Add(wxART_WINDOWS10); 
    list.Add(wxART_WINDOWS11); 
    list.Add(wxART_WINDOWS95); 
    list.Add(wxART_WINDOWSTERMINAL); 
    list.Add(wxART_WINDOWSXP); 
    list.Add(wxART_WINMATE); 
    list.Add(wxART_WIPRO); 
    list.Add(wxART_WIRE); 
    list.Add(wxART_WIREGUARD); 
    list.Add(wxART_WIRESHARK); 
    list.Add(wxART_WISE); 
    list.Add(wxART_WISH); 
    list.Add(wxART_WISTIA); 
    list.Add(wxART_WIX); 
    list.Add(wxART_WIZZAIR); 
    list.Add(wxART_WOLFRAM); 
    list.Add(wxART_WOLFRAMLANGUAGE); 
    list.Add(wxART_WOLFRAMMATHEMATICA); 
    list.Add(wxART_WOO); 
    list.Add(wxART_WOOCOMMERCE); 
    list.Add(wxART_WORDPRESS); 
    list.Add(wxART_WORKPLACE); 
    list.Add(wxART_WORLDHEALTHORGANIZATION); 
    list.Add(wxART_WPENGINE); 
    list.Add(wxART_WPEXPLORER); 
    list.Add(wxART_WPROCKET); 
    list.Add(wxART_WRITEDOTAS); 
    list.Add(wxART_WWE); 
    list.Add(wxART_WWISE); 
    list.Add(wxART_X); 
    list.Add(wxART_XAMARIN); 
    list.Add(wxART_XAML); 
    list.Add(wxART_XAMPP); 
    list.Add(wxART_XBOX); 
    list.Add(wxART_XCODE); 
    list.Add(wxART_XDADEVELOPERS); 
    list.Add(wxART_XDOTORG); 
    list.Add(wxART_XERO); 
    list.Add(wxART_XFCE); 
    list.Add(wxART_XIAOMI); 
    list.Add(wxART_XILINX); 
    list.Add(wxART_XING); 
    list.Add(wxART_XMPP); 
    list.Add(wxART_XO); 
    list.Add(wxART_XRP); 
    list.Add(wxART_XSPLIT); 
    list.Add(wxART_XSTATE); 
    list.Add(wxART_YAHOO); 
    list.Add(wxART_YALE); 
    list.Add(wxART_YAMAHACORPORATION); 
    list.Add(wxART_YAMAHAMOTORCORPORATION); 
    list.Add(wxART_YAML); 
    list.Add(wxART_YAMMER); 
    list.Add(wxART_YANDEXCLOUD); 
    list.Add(wxART_YARN); 
    list.Add(wxART_YCOMBINATOR); 
    list.Add(wxART_YELP); 
    list.Add(wxART_YETI); 
    list.Add(wxART_YOAST); 
    list.Add(wxART_YOLO); 
    list.Add(wxART_YOURTRAVELDOTTV); 
    list.Add(wxART_YOUTUBE); 
    list.Add(wxART_YOUTUBEGAMING); 
    list.Add(wxART_YOUTUBEMUSIC); 
    list.Add(wxART_YOUTUBESTUDIO); 
    list.Add(wxART_YOUTUBETV); 
    list.Add(wxART_YUBICO); 
    list.Add(wxART_ZABKA); 
    list.Add(wxART_ZALANDO); 
    list.Add(wxART_ZALO); 
    list.Add(wxART_ZAPIER); 
    list.Add(wxART_ZARA); 
    list.Add(wxART_ZAZZLE); 
    list.Add(wxART_ZCASH); 
    list.Add(wxART_ZDF); 
    list.Add(wxART_ZEBRATECHNOLOGIES); 
    list.Add(wxART_ZELLE); 
    list.Add(wxART_ZEND); 
    list.Add(wxART_ZENDESK); 
    list.Add(wxART_ZENDFRAMEWORK); 
    list.Add(wxART_ZENN); 
    list.Add(wxART_ZENODO); 
    list.Add(wxART_ZENSAR); 
    list.Add(wxART_ZERODHA); 
    list.Add(wxART_ZEROMQ); 
    list.Add(wxART_ZERPLY); 
    list.Add(wxART_ZETTLR); 
    list.Add(wxART_ZHIHU); 
    list.Add(wxART_ZIG); 
    list.Add(wxART_ZIGBEE); 
    list.Add(wxART_ZILCH); 
    list.Add(wxART_ZILLOW); 
    list.Add(wxART_ZINCSEARCH); 
    list.Add(wxART_ZINGAT); 
    list.Add(wxART_ZOD); 
    list.Add(wxART_ZOHO); 
    list.Add(wxART_ZOIPER); 
    list.Add(wxART_ZOMATO); 
    list.Add(wxART_ZOOM); 
    list.Add(wxART_ZORIN); 
    list.Add(wxART_ZOTERO); 
    list.Add(wxART_ZSH); 
    list.Add(wxART_ZULIP); 
    list.Add(wxART_ZWAVE); 
    list.Add(wxART_ZYTE); 
    return list; 
}


// Return SVG for the current ID as a wxBitmap 
wxBitmap CreateIconsSimpleArtBitmapByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxString svg = IconsSimpleArtColorSVGByID(id,color); 
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
wxBitmapBundle CreateIconsSimpleArtBitmapBundleByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxBitmapBundle bundle; 
  wxString svg = IconsSimpleArtColorSVGByID(id,color); 
  if (svg.IsEmpty()) return bundle; 

  // Create bundle and get bitmap from it 
  wxSize useSize = size==wxDefaultSize? wxSize(24,24) : size;
  bundle = wxBitmapBundle::FromSVG(svg.mb_str(),useSize);
  return bundle; 
}


