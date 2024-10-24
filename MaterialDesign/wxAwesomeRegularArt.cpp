#include "wxAwesomeRegularArt.hpp" 
#include <wx/regex.h> 

// Return SVG for the current ID as a string 
wxString RegularAwesomeArtSVGByID(const wxArtID& id)
{
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADDRESS_BOOK))  
      return wxString(SVG_AWESOME_REGULAR_ADDRESS_BOOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ADDRESS_CARD))  
      return wxString(SVG_AWESOME_REGULAR_ADDRESS_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BELL_SLASH))  
      return wxString(SVG_AWESOME_REGULAR_BELL_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BELL))  
      return wxString(SVG_AWESOME_REGULAR_BELL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BOOKMARK))  
      return wxString(SVG_AWESOME_REGULAR_BOOKMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_BUILDING))  
      return wxString(SVG_AWESOME_REGULAR_BUILDING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_CHECK))  
      return wxString(SVG_AWESOME_REGULAR_CALENDAR_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_DAYS))  
      return wxString(SVG_AWESOME_REGULAR_CALENDAR_DAYS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_MINUS))  
      return wxString(SVG_AWESOME_REGULAR_CALENDAR_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_PLUS))  
      return wxString(SVG_AWESOME_REGULAR_CALENDAR_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR_XMARK))  
      return wxString(SVG_AWESOME_REGULAR_CALENDAR_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CALENDAR))  
      return wxString(SVG_AWESOME_REGULAR_CALENDAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHART_BAR))  
      return wxString(SVG_AWESOME_REGULAR_CHART_BAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_BISHOP))  
      return wxString(SVG_AWESOME_REGULAR_CHESS_BISHOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_KING))  
      return wxString(SVG_AWESOME_REGULAR_CHESS_KING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_KNIGHT))  
      return wxString(SVG_AWESOME_REGULAR_CHESS_KNIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_PAWN))  
      return wxString(SVG_AWESOME_REGULAR_CHESS_PAWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_QUEEN))  
      return wxString(SVG_AWESOME_REGULAR_CHESS_QUEEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CHESS_ROOK))  
      return wxString(SVG_AWESOME_REGULAR_CHESS_ROOK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_CHECK))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_DOT))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_DOT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_DOWN))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_LEFT))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_PAUSE))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_PAUSE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_PLAY))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_PLAY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_QUESTION))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_QUESTION);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_RIGHT))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_STOP))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_STOP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_UP))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_USER))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE_XMARK))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CIRCLE))  
      return wxString(SVG_AWESOME_REGULAR_CIRCLE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLIPBOARD))  
      return wxString(SVG_AWESOME_REGULAR_CLIPBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOCK))  
      return wxString(SVG_AWESOME_REGULAR_CLOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLONE))  
      return wxString(SVG_AWESOME_REGULAR_CLONE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CLOSED_CAPTIONING))  
      return wxString(SVG_AWESOME_REGULAR_CLOSED_CAPTIONING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT_DOTS))  
      return wxString(SVG_AWESOME_REGULAR_COMMENT_DOTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENT))  
      return wxString(SVG_AWESOME_REGULAR_COMMENT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMMENTS))  
      return wxString(SVG_AWESOME_REGULAR_COMMENTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COMPASS))  
      return wxString(SVG_AWESOME_REGULAR_COMPASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COPY))  
      return wxString(SVG_AWESOME_REGULAR_COPY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_COPYRIGHT))  
      return wxString(SVG_AWESOME_REGULAR_COPYRIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_CREDIT_CARD))  
      return wxString(SVG_AWESOME_REGULAR_CREDIT_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENVELOPE_OPEN))  
      return wxString(SVG_AWESOME_REGULAR_ENVELOPE_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ENVELOPE))  
      return wxString(SVG_AWESOME_REGULAR_ENVELOPE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EYE_SLASH))  
      return wxString(SVG_AWESOME_REGULAR_EYE_SLASH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_EYE))  
      return wxString(SVG_AWESOME_REGULAR_EYE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_ANGRY))  
      return wxString(SVG_AWESOME_REGULAR_FACE_ANGRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_DIZZY))  
      return wxString(SVG_AWESOME_REGULAR_FACE_DIZZY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_FLUSHED))  
      return wxString(SVG_AWESOME_REGULAR_FACE_FLUSHED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_FROWN_OPEN))  
      return wxString(SVG_AWESOME_REGULAR_FACE_FROWN_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_FROWN))  
      return wxString(SVG_AWESOME_REGULAR_FACE_FROWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIMACE))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIMACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_BEAM_SWEAT))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_BEAM_SWEAT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_BEAM))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_BEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_HEARTS))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_HEARTS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_SQUINT_TEARS))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_SQUINT_TEARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_SQUINT))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_SQUINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_STARS))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_STARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_TEARS))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_TEARS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_TONGUE_SQUINT))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_TONGUE_SQUINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_TONGUE_WINK))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_TONGUE_WINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_TONGUE))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_TONGUE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_WIDE))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_WIDE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN_WINK))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN_WINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_GRIN))  
      return wxString(SVG_AWESOME_REGULAR_FACE_GRIN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_KISS_BEAM))  
      return wxString(SVG_AWESOME_REGULAR_FACE_KISS_BEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_KISS_WINK_HEART))  
      return wxString(SVG_AWESOME_REGULAR_FACE_KISS_WINK_HEART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_KISS))  
      return wxString(SVG_AWESOME_REGULAR_FACE_KISS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_LAUGH_BEAM))  
      return wxString(SVG_AWESOME_REGULAR_FACE_LAUGH_BEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_LAUGH_SQUINT))  
      return wxString(SVG_AWESOME_REGULAR_FACE_LAUGH_SQUINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_LAUGH_WINK))  
      return wxString(SVG_AWESOME_REGULAR_FACE_LAUGH_WINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_LAUGH))  
      return wxString(SVG_AWESOME_REGULAR_FACE_LAUGH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_MEH_BLANK))  
      return wxString(SVG_AWESOME_REGULAR_FACE_MEH_BLANK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_MEH))  
      return wxString(SVG_AWESOME_REGULAR_FACE_MEH);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_ROLLING_EYES))  
      return wxString(SVG_AWESOME_REGULAR_FACE_ROLLING_EYES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SAD_CRY))  
      return wxString(SVG_AWESOME_REGULAR_FACE_SAD_CRY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SAD_TEAR))  
      return wxString(SVG_AWESOME_REGULAR_FACE_SAD_TEAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SMILE_BEAM))  
      return wxString(SVG_AWESOME_REGULAR_FACE_SMILE_BEAM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SMILE_WINK))  
      return wxString(SVG_AWESOME_REGULAR_FACE_SMILE_WINK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SMILE))  
      return wxString(SVG_AWESOME_REGULAR_FACE_SMILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_SURPRISE))  
      return wxString(SVG_AWESOME_REGULAR_FACE_SURPRISE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FACE_TIRED))  
      return wxString(SVG_AWESOME_REGULAR_FACE_TIRED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_AUDIO))  
      return wxString(SVG_AWESOME_REGULAR_FILE_AUDIO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_CODE))  
      return wxString(SVG_AWESOME_REGULAR_FILE_CODE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_EXCEL))  
      return wxString(SVG_AWESOME_REGULAR_FILE_EXCEL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_IMAGE))  
      return wxString(SVG_AWESOME_REGULAR_FILE_IMAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_LINES))  
      return wxString(SVG_AWESOME_REGULAR_FILE_LINES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_PDF))  
      return wxString(SVG_AWESOME_REGULAR_FILE_PDF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_POWERPOINT))  
      return wxString(SVG_AWESOME_REGULAR_FILE_POWERPOINT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_VIDEO))  
      return wxString(SVG_AWESOME_REGULAR_FILE_VIDEO);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_WORD))  
      return wxString(SVG_AWESOME_REGULAR_FILE_WORD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE_ZIPPER))  
      return wxString(SVG_AWESOME_REGULAR_FILE_ZIPPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FILE))  
      return wxString(SVG_AWESOME_REGULAR_FILE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLAG))  
      return wxString(SVG_AWESOME_REGULAR_FLAG);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FLOPPY_DISK))  
      return wxString(SVG_AWESOME_REGULAR_FLOPPY_DISK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_CLOSED))  
      return wxString(SVG_AWESOME_REGULAR_FOLDER_CLOSED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER_OPEN))  
      return wxString(SVG_AWESOME_REGULAR_FOLDER_OPEN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FOLDER))  
      return wxString(SVG_AWESOME_REGULAR_FOLDER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FONT_AWESOME))  
      return wxString(SVG_AWESOME_REGULAR_FONT_AWESOME);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_FUTBOL))  
      return wxString(SVG_AWESOME_REGULAR_FUTBOL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_GEM))  
      return wxString(SVG_AWESOME_REGULAR_GEM);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_BACK_FIST))  
      return wxString(SVG_AWESOME_REGULAR_HAND_BACK_FIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_LIZARD))  
      return wxString(SVG_AWESOME_REGULAR_HAND_LIZARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_PEACE))  
      return wxString(SVG_AWESOME_REGULAR_HAND_PEACE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINT_DOWN))  
      return wxString(SVG_AWESOME_REGULAR_HAND_POINT_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINT_LEFT))  
      return wxString(SVG_AWESOME_REGULAR_HAND_POINT_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINT_RIGHT))  
      return wxString(SVG_AWESOME_REGULAR_HAND_POINT_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINT_UP))  
      return wxString(SVG_AWESOME_REGULAR_HAND_POINT_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_POINTER))  
      return wxString(SVG_AWESOME_REGULAR_HAND_POINTER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_SCISSORS))  
      return wxString(SVG_AWESOME_REGULAR_HAND_SCISSORS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND_SPOCK))  
      return wxString(SVG_AWESOME_REGULAR_HAND_SPOCK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HAND))  
      return wxString(SVG_AWESOME_REGULAR_HAND);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HANDSHAKE))  
      return wxString(SVG_AWESOME_REGULAR_HANDSHAKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HARD_DRIVE))  
      return wxString(SVG_AWESOME_REGULAR_HARD_DRIVE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HEART))  
      return wxString(SVG_AWESOME_REGULAR_HEART);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOSPITAL))  
      return wxString(SVG_AWESOME_REGULAR_HOSPITAL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS_HALF))  
      return wxString(SVG_AWESOME_REGULAR_HOURGLASS_HALF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_HOURGLASS))  
      return wxString(SVG_AWESOME_REGULAR_HOURGLASS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ID_BADGE))  
      return wxString(SVG_AWESOME_REGULAR_ID_BADGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_ID_CARD))  
      return wxString(SVG_AWESOME_REGULAR_ID_CARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGE))  
      return wxString(SVG_AWESOME_REGULAR_IMAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_IMAGES))  
      return wxString(SVG_AWESOME_REGULAR_IMAGES);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_KEYBOARD))  
      return wxString(SVG_AWESOME_REGULAR_KEYBOARD);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LEMON))  
      return wxString(SVG_AWESOME_REGULAR_LEMON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIFE_RING))  
      return wxString(SVG_AWESOME_REGULAR_LIFE_RING);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_LIGHTBULB))  
      return wxString(SVG_AWESOME_REGULAR_LIGHTBULB);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MAP))  
      return wxString(SVG_AWESOME_REGULAR_MAP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MESSAGE))  
      return wxString(SVG_AWESOME_REGULAR_MESSAGE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MONEY_BILL_1))  
      return wxString(SVG_AWESOME_REGULAR_MONEY_BILL_1);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_MOON))  
      return wxString(SVG_AWESOME_REGULAR_MOON);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NEWSPAPER))  
      return wxString(SVG_AWESOME_REGULAR_NEWSPAPER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_NOTE_STICKY))  
      return wxString(SVG_AWESOME_REGULAR_NOTE_STICKY);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OBJECT_GROUP))  
      return wxString(SVG_AWESOME_REGULAR_OBJECT_GROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_OBJECT_UNGROUP))  
      return wxString(SVG_AWESOME_REGULAR_OBJECT_UNGROUP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PAPER_PLANE))  
      return wxString(SVG_AWESOME_REGULAR_PAPER_PLANE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PASTE))  
      return wxString(SVG_AWESOME_REGULAR_PASTE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_PEN_TO_SQUARE))  
      return wxString(SVG_AWESOME_REGULAR_PEN_TO_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECTANGLE_LIST))  
      return wxString(SVG_AWESOME_REGULAR_RECTANGLE_LIST);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_RECTANGLE_XMARK))  
      return wxString(SVG_AWESOME_REGULAR_RECTANGLE_XMARK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_REGISTERED))  
      return wxString(SVG_AWESOME_REGULAR_REGISTERED);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SHARE_FROM_SQUARE))  
      return wxString(SVG_AWESOME_REGULAR_SHARE_FROM_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SNOWFLAKE))  
      return wxString(SVG_AWESOME_REGULAR_SNOWFLAKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CARET_DOWN))  
      return wxString(SVG_AWESOME_REGULAR_SQUARE_CARET_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CARET_LEFT))  
      return wxString(SVG_AWESOME_REGULAR_SQUARE_CARET_LEFT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CARET_RIGHT))  
      return wxString(SVG_AWESOME_REGULAR_SQUARE_CARET_RIGHT);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CARET_UP))  
      return wxString(SVG_AWESOME_REGULAR_SQUARE_CARET_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_CHECK))  
      return wxString(SVG_AWESOME_REGULAR_SQUARE_CHECK);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_FULL))  
      return wxString(SVG_AWESOME_REGULAR_SQUARE_FULL);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_MINUS))  
      return wxString(SVG_AWESOME_REGULAR_SQUARE_MINUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE_PLUS))  
      return wxString(SVG_AWESOME_REGULAR_SQUARE_PLUS);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SQUARE))  
      return wxString(SVG_AWESOME_REGULAR_SQUARE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_HALF_STROKE))  
      return wxString(SVG_AWESOME_REGULAR_STAR_HALF_STROKE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR_HALF))  
      return wxString(SVG_AWESOME_REGULAR_STAR_HALF);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_STAR))  
      return wxString(SVG_AWESOME_REGULAR_STAR);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_SUN))  
      return wxString(SVG_AWESOME_REGULAR_SUN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMBS_DOWN))  
      return wxString(SVG_AWESOME_REGULAR_THUMBS_DOWN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_THUMBS_UP))  
      return wxString(SVG_AWESOME_REGULAR_THUMBS_UP);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_TRASH_CAN))  
      return wxString(SVG_AWESOME_REGULAR_TRASH_CAN);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_USER))  
      return wxString(SVG_AWESOME_REGULAR_USER);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINDOW_MAXIMIZE))  
      return wxString(SVG_AWESOME_REGULAR_WINDOW_MAXIMIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINDOW_MINIMIZE))  
      return wxString(SVG_AWESOME_REGULAR_WINDOW_MINIMIZE);
  if (wxASCII_STR(id) == wxASCII_STR(wxART_WINDOW_RESTORE))  
      return wxString(SVG_AWESOME_REGULAR_WINDOW_RESTORE);


// Any IDs not implemented here will return a null string 
return wxString(); 
}


// Return SVG for the current ID as a string, with given color
wxString RegularAwesomeArtColorSVGByID(const wxArtID& id, const wxColour& color)
{
wxString svg = RegularAwesomeArtSVGByID(id); 
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
wxArrayString RegularAwesomeArtIDs()
{
    wxArrayString list; 

    list.Add(wxART_ADDRESS_BOOK); 
    list.Add(wxART_ADDRESS_CARD); 
    list.Add(wxART_BELL_SLASH); 
    list.Add(wxART_BELL); 
    list.Add(wxART_BOOKMARK); 
    list.Add(wxART_BUILDING); 
    list.Add(wxART_CALENDAR_CHECK); 
    list.Add(wxART_CALENDAR_DAYS); 
    list.Add(wxART_CALENDAR_MINUS); 
    list.Add(wxART_CALENDAR_PLUS); 
    list.Add(wxART_CALENDAR_XMARK); 
    list.Add(wxART_CALENDAR); 
    list.Add(wxART_CHART_BAR); 
    list.Add(wxART_CHESS_BISHOP); 
    list.Add(wxART_CHESS_KING); 
    list.Add(wxART_CHESS_KNIGHT); 
    list.Add(wxART_CHESS_PAWN); 
    list.Add(wxART_CHESS_QUEEN); 
    list.Add(wxART_CHESS_ROOK); 
    list.Add(wxART_CIRCLE_CHECK); 
    list.Add(wxART_CIRCLE_DOT); 
    list.Add(wxART_CIRCLE_DOWN); 
    list.Add(wxART_CIRCLE_LEFT); 
    list.Add(wxART_CIRCLE_PAUSE); 
    list.Add(wxART_CIRCLE_PLAY); 
    list.Add(wxART_CIRCLE_QUESTION); 
    list.Add(wxART_CIRCLE_RIGHT); 
    list.Add(wxART_CIRCLE_STOP); 
    list.Add(wxART_CIRCLE_UP); 
    list.Add(wxART_CIRCLE_USER); 
    list.Add(wxART_CIRCLE_XMARK); 
    list.Add(wxART_CIRCLE); 
    list.Add(wxART_CLIPBOARD); 
    list.Add(wxART_CLOCK); 
    list.Add(wxART_CLONE); 
    list.Add(wxART_CLOSED_CAPTIONING); 
    list.Add(wxART_COMMENT_DOTS); 
    list.Add(wxART_COMMENT); 
    list.Add(wxART_COMMENTS); 
    list.Add(wxART_COMPASS); 
    list.Add(wxART_COPY); 
    list.Add(wxART_COPYRIGHT); 
    list.Add(wxART_CREDIT_CARD); 
    list.Add(wxART_ENVELOPE_OPEN); 
    list.Add(wxART_ENVELOPE); 
    list.Add(wxART_EYE_SLASH); 
    list.Add(wxART_EYE); 
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
    list.Add(wxART_FILE_AUDIO); 
    list.Add(wxART_FILE_CODE); 
    list.Add(wxART_FILE_EXCEL); 
    list.Add(wxART_FILE_IMAGE); 
    list.Add(wxART_FILE_LINES); 
    list.Add(wxART_FILE_PDF); 
    list.Add(wxART_FILE_POWERPOINT); 
    list.Add(wxART_FILE_VIDEO); 
    list.Add(wxART_FILE_WORD); 
    list.Add(wxART_FILE_ZIPPER); 
    list.Add(wxART_FILE); 
    list.Add(wxART_FLAG); 
    list.Add(wxART_FLOPPY_DISK); 
    list.Add(wxART_FOLDER_CLOSED); 
    list.Add(wxART_FOLDER_OPEN); 
    list.Add(wxART_FOLDER); 
    list.Add(wxART_FONT_AWESOME); 
    list.Add(wxART_FUTBOL); 
    list.Add(wxART_GEM); 
    list.Add(wxART_HAND_BACK_FIST); 
    list.Add(wxART_HAND_LIZARD); 
    list.Add(wxART_HAND_PEACE); 
    list.Add(wxART_HAND_POINT_DOWN); 
    list.Add(wxART_HAND_POINT_LEFT); 
    list.Add(wxART_HAND_POINT_RIGHT); 
    list.Add(wxART_HAND_POINT_UP); 
    list.Add(wxART_HAND_POINTER); 
    list.Add(wxART_HAND_SCISSORS); 
    list.Add(wxART_HAND_SPOCK); 
    list.Add(wxART_HAND); 
    list.Add(wxART_HANDSHAKE); 
    list.Add(wxART_HARD_DRIVE); 
    list.Add(wxART_HEART); 
    list.Add(wxART_HOSPITAL); 
    list.Add(wxART_HOURGLASS_HALF); 
    list.Add(wxART_HOURGLASS); 
    list.Add(wxART_ID_BADGE); 
    list.Add(wxART_ID_CARD); 
    list.Add(wxART_IMAGE); 
    list.Add(wxART_IMAGES); 
    list.Add(wxART_KEYBOARD); 
    list.Add(wxART_LEMON); 
    list.Add(wxART_LIFE_RING); 
    list.Add(wxART_LIGHTBULB); 
    list.Add(wxART_MAP); 
    list.Add(wxART_MESSAGE); 
    list.Add(wxART_MONEY_BILL_1); 
    list.Add(wxART_MOON); 
    list.Add(wxART_NEWSPAPER); 
    list.Add(wxART_NOTE_STICKY); 
    list.Add(wxART_OBJECT_GROUP); 
    list.Add(wxART_OBJECT_UNGROUP); 
    list.Add(wxART_PAPER_PLANE); 
    list.Add(wxART_PASTE); 
    list.Add(wxART_PEN_TO_SQUARE); 
    list.Add(wxART_RECTANGLE_LIST); 
    list.Add(wxART_RECTANGLE_XMARK); 
    list.Add(wxART_REGISTERED); 
    list.Add(wxART_SHARE_FROM_SQUARE); 
    list.Add(wxART_SNOWFLAKE); 
    list.Add(wxART_SQUARE_CARET_DOWN); 
    list.Add(wxART_SQUARE_CARET_LEFT); 
    list.Add(wxART_SQUARE_CARET_RIGHT); 
    list.Add(wxART_SQUARE_CARET_UP); 
    list.Add(wxART_SQUARE_CHECK); 
    list.Add(wxART_SQUARE_FULL); 
    list.Add(wxART_SQUARE_MINUS); 
    list.Add(wxART_SQUARE_PLUS); 
    list.Add(wxART_SQUARE); 
    list.Add(wxART_STAR_HALF_STROKE); 
    list.Add(wxART_STAR_HALF); 
    list.Add(wxART_STAR); 
    list.Add(wxART_SUN); 
    list.Add(wxART_THUMBS_DOWN); 
    list.Add(wxART_THUMBS_UP); 
    list.Add(wxART_TRASH_CAN); 
    list.Add(wxART_USER); 
    list.Add(wxART_WINDOW_MAXIMIZE); 
    list.Add(wxART_WINDOW_MINIMIZE); 
    list.Add(wxART_WINDOW_RESTORE); 
    return list; 
}


// Return SVG for the current ID as a wxBitmap 
wxBitmap CreateRegularAwesomeArtBitmapByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxString svg = RegularAwesomeArtColorSVGByID(id,color); 
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
wxBitmapBundle CreateRegularAwesomeArtBitmapBundleByID(const wxArtID& id, const wxSize& size, const wxColour& color)
{
  // Return SVG as a string 
  wxBitmapBundle bundle; 
  wxString svg = RegularAwesomeArtColorSVGByID(id,color); 
  if (svg.IsEmpty()) return bundle; 

  // Create bundle and get bitmap from it 
  wxSize useSize = size==wxDefaultSize? wxSize(24,24) : size;
  bundle = wxBitmapBundle::FromSVG(svg.mb_str(),useSize);
  return bundle; 
}


