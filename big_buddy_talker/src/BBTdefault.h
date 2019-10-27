#ifndef BBTdefault_h
#define BBTdefault_h

#include "Arduino.h"

#define WORD100 1
#define MILLION  1000000
#define THOUSAND 1000
#define HUNDRED  100
#define TEN     10

//CHIP SELECT 1
//COLOUR
#define _COLOUR 0x00,1 //EU SPELLING
#define _COLOR 0x00,1  //US SPELLING
#define _BLACK 0x01,1
#define _WHITE 0x02,1
#define _BLUE 0x03,1
#define _GREEN 0x04,1
#define _ORANGE 0x05,1
#define _RED 0x06,1
#define _YELLOW 0x07,1
#define _PURPLE 0x08,1

//COMMAND
#define _ABORT 0x09,1
#define _ACTIVATE 0x0A,1
#define _BEGIN 0x0B,1
#define _DEACTIVATE 0x0C,1
#define _DESTRUCT 0x0D,1
#define _GO 0x0E,1
#define _MOVE 0x0F,1
#define _OFF 0x10,1
#define _ON 0x11,1
#define _OPEN 0x12,1
#define _PULL 0x13,1
#define _PUSH 0x14,1
#define _RESET 0x15,1
#define _RUN 0x16,1
#define _STOP 0x17,1
#define _TURN 0x18,1

//MONTHS/DAYS/TIME
#define _JANUARY 0x19,1
#define _JAN 0x19,1
#define _FEBRUARY 0x1A,1
#define _FEB 0x1A,1
#define _MARCH 0x1B,1
#define _MAR 0x1B,1
#define _APRIL 0x1C,1
#define _APR 0x1C,1
#define _MAY 0x1D,1
#define _JUNE 0x1E,1
#define _JULY 0x1F,1
#define _AUGUST 0x20,1
#define _AUG 0x20,1
#define _SEPTEMBER 0x21,1
#define _SEP 0x21,1
#define _SEPT 0x21,1
#define _OCTOBER 0x22,1
#define _OCT 0x22,1
#define _NOVEMBER 0x23,1
#define _NOV 0x23,1
#define _DECEMBER 0x24,1
#define _DEC 0x24,1
#define _MONDAY 0x25,1
#define _MON 0x25,1
#define _TUESDAY 0x26,1
#define _TUE 0x26,1
#define _WEDNESDAY 0x27,1
#define _WED 0x27,1
#define _THURSDAY 0x28,1
#define _THUR 0x28,1
#define _THR 0x28,1
#define _FRIDAY 0x29,1
#define _FRI 0x29,1
#define _SATURDAY 0x2A,1
#define _SAT 0x2A,1
#define _SUNDAY 0x2B,1
#define _SUN 0x2B,1
#define _AM_ 0x2C,1
#define _PM_ 0x2D,1
#define _DATE 0x2E,1
#define _DAY 0x2F,1
#define _HOURS 0x30,1
#define _HRS 0x30,1
#define _MONTH 0x31,1
#define _OCLOCK 0x32,1
#define _TIME 0x33,1
#define _WEEK 0x34,1
#define _YEAR 0x35,1

//NUMBERS
#define _ZERO 0x36,1
#define _0 0x36,1
#define _ONE 0x37,1
#define _1 0x37,1
#define _TWO 0x38,1
#define _2 0x38,1
#define _THREE 0x39,1
#define _3 0x39,1
#define _FOUR 0x3A,1
#define _4 0x3A,1
#define _FIVE 0x3B,1
#define _5 0x3B,1
#define _SIX 0x3C,1
#define _6 0x3C,1
#define _SEVEN 0x3D,1
#define _7 0x3B,1
#define _EIGHT 0x3E,1
#define _8 0x3E,1
#define _NINE 0x3F,1
#define _9 0x3F,1
#define _TEN 0x40,1
#define _10 0x40,1
#define _ELEVEN 0x41,1
#define _11 0x41,1
#define _TWELVE 0x42,1
#define _12 0x42,1
#define _THIRTEEN 0x43,1
#define _13 0x43,1
#define _FOURTEEN 0x44,1
#define _14 0x44,1
#define _FIFTEEN 0x45,1
#define _15 0x45,1
#define _SIXTEEN 0x46,1
#define _16 0x46,1
#define _SEVENTEEN 0x47,1
#define _17 0x47,1
#define _EIGHTEEN 0x48,1
#define _18 0x48,1
#define _NINETEEN 0x49,1
#define _19 0x49,1
#define _TWENTY 0x4A,1
#define _20 0x4A,1
#define _THIRTY 0x4B,1
#define _30 0x4B,1
#define _FORTY 0x4C,1
#define _40 0x4C,1
#define _FIFTY 0x4D,1
#define _50 0x4D,1
#define _SIXTY 0x4E,1
#define _60 0x4E,1
#define _SEVENTY 0x4F,1
#define _70 0x4F,1
#define _EIGHTY 0x50,1
#define _80 0x50,1
#define _NINETY 0x51,1
#define _90 0x51,1
#define _HUNDRED 0x52,1
#define _100 0x52,1
#define _THOUSAND 0x53,1
#define _1000 0x53,1
#define _MILLION 0x54,1

//DIRECTIONS
#define _NORTH 0x55,1
#define _EAST 0x56,1
#define _SOUTH 0x57,1
#define _WEST 0x58,1
#define _UP 0x59,1
#define _DOWN 0x5A,1
#define _LEFT 0x5B,1
#define _RIGHT 0x5C,1
#define _BACKWARD 0x5D,1
#define _FORWARD 0x5E,1

//FEELINGS
#define _HAPPY 0x5F,1
#define _SAD 0x60,1
#define _ANGRY 0x61,1

//MEASUREMENT
#define _AC 0x62,
#define _AMPS 0x63,1
#define _CELSIUS 0x64,1
#define _CENTI 0x65,1
#define _CUBIC 0x66,1
#define _DC 0x67,1
#define _DEGREES 0x68,1
#define _DIAMETER 0x69,1
#define _FAHRENHEIT 0x6A,1
#define _FARADS 0x6B,1
#define _FEET 0x6C,1
#define _FREQUENCY 0x6D,1
#define _GIGA 0x6E,1
#define _GRAM 0x6F,1
#define _HEIGHT 0x70,1
#define _HERTZ 0x71,1
#define _HUMIDITY 0x72,1
#define _INCHES 0x73,1
#define _KILO 0x74,1
#define _LENGTH 0x75,1
#define _LIGHT 0x76,1
#define _LITRE 0x77,1
#define _MEGA 0x78,1
#define _METERS 0x79,1
#define _MICRO 0x7A,1
#define _MILLI 0x7B,1
#define _MINUTES 0x7C,1
#define _NANO 0x7D,1
#define _NEWTON 0x7E,1
#define _NIGHT 0x7F,1
#define _OHMS 0x80,1
#define _PER 0x81,1
#define _PICO 0x82,1
#define _PITCH 0x83,1
#define _POUNDS 0x84,1
#define _RADIUS 0x85,1
#define _RATE 0x86,1
#define _SECONDS 0x87,1
#define _SOUND 0x88,1
#define _SPEED 0x89,1
#define _TEMPERATURE 0x8A,1
#define _VOLTS 0x8B,1
#define _WATTS 0x8C,1
#define _WEIGHT 0x8D,1

//SECURITY
#define _ALARM 0x8E,1
#define _ALERT 0x8F,1
#define _DETECTED 0x90,1
#define _INTRUDER 0x91,1
#define _SECURITY 0x92,1
#define _SYSTEM 0x93,1
#define _WARNING 0x94,1

//MATH
#define _CLOCKWISE 0x95,1
#define _COUNTER 0x96,1
#define _DIVIDE 0x97,1
#define _EQUALS 0x98,1
#define _MINUS 0x99,1
#define _MULTIPLY 0x9A,1
#define _NOT 0x9B,1
#define _PLUS 0x9C,1
#define _SQUARE_ROOT 0x9D,1

 //WORDS GENERAL
 #define _A_ 0x9E,1  //DIFFERENCE HERE _A_ ENGLISH FEMALE
 #define _AHEAD 0x9F,1
 #define _AIR 0xA0,1
 #define _ALTITUDE 0xA1,1
 #define _AN 0xA2,1
 #define _AM 0xA3,1 //AM NOT A.M.
 #define _AND 0xA4,1
 #define _ARE 0xA5,1
 #define _AREA 0xA6,1
 #define _AT 0xA7,1
 #define _AXIS 0xA8,1
 #define _BACK 0xA9,1
 #define _BE 0xAA,1
 #define _BEARING 0xAB,1
 #define _BEEN 0xAC,1
 #define _BUTTON 0xAD,1
 #define _BY 0xAE,1
 #define _CAN 0xAF,1
 #define _CAUTION 0xB0,1
 #define _CHANGE 0xB1,1
 #define _CHECK 0xB2,1
 #define _CLOSED 0xB3,1
 #define _CONDITION 0xB4,1
 #define _CONTACT 0xB5,1
 #define _CRITICAL 0xB6,1
 #define _DOOR 0xB7,1
 #define _EMPTY 0xB8,1  
 #define _END 0xB9,1  
 #define _ENVIRONMENT 0xBA,1  
 #define _FALLING 0xBB,1  
 #define  _FAST 0xBC,1  
 #define  _FATAL 0xBD,1  
 #define  _FEEL 0xBE,1  
 #define  _FIRST 0xBF,1  
 #define  _FROM 0xC0,1  
 #define  _FRONT 0xC1,1  
 #define  _GOING 0xC2,1  
 #define  _GOODBYE 0xC3,1  
 #define  _HE  0xC4,1  
 #define  _HELLO 0xC5,1  
 #define  _HIGH 0xC6,1  
 #define  _HOW 0xC7,1  
 #define  _I_ 0xC8,1 //DIFFERENCE HERE _A_ ENGLISH FEMALE  
 #define  _IN  0xC9,1  
 #define  _INCOMING 0xCA,1  
 #define  _ING 0xCB,1  
 #define  _INSIDE 0xCC,1  
 #define  _IS 0xCD,1  
 #define  _IT 0xCE,1  
 #define  _LASER 0xCF,1  
 #define  _LAST 0xD0,1  
 #define  _LEVEL 0xD1,1  
 #define  _LOCKED 0xD2,1  
 #define  _LOW 0xD3,1  
 #define  _ME 0xD4,1  
 #define  _MESSAGE 0xD5,1  
 #define  _MODE 0xD6,1  
 #define  _MOTOR 0xD7,1  
 #define  _NEW 0xD8,1  
 #define  _NEXT 0xD9,1  
 #define  _NOMINCAL 0xDA,1  
 #define  _OBJECT 0xDB,1  
 #define  _OBSTACLE 0xDC,1  
 #define  _OF 0xDD,1  
 #define  _OUT 0xDE,1  
 #define  _OUTSIDE 0xDF,1  
 #define  _PRESS 0xE0,1  
 #define  _PROCESS 0xE1,1  
 #define  _PURGE 0xE2,1  
 #define  _RANGE 0xE3,1  
 #define  _REAR 0xE4,1  
 #define  _RECEIVED 0xE5,1  
 #define  _RISING 0xE6,1  
 #define  _SENT 0xE7,1  
 #define  _SEQUENCE 0xE8,1  
 #define  _SHE 0xE9,1  
 #define  _SLEEP 0xEA,1  
 #define  _SLOW 0xEB,1 
 #define  _STABLE 0xEC,1  
 #define  _START 0xED,1  
 #define  _STEP 0xEE,1  
 #define  _STEPPER 0xEF,1  
 #define  _SWITCH 0xF0,1  
 #define  _TELL 0xF1,1  
 #define  _THE 0xF2,1  
 #define  _THERE 0xF3,1  
 #define  _THEY 0xF4,1  
 #define  _TO  0xF5,1  
 #define  _TOTAL 0xF6,1  
 #define  _VENT 0xF7,1  
 #define  _WE  0xF9,1  
 #define  _WILL 0xFA,1  
 #define  _WINDOW 0xFB,1  
 #define  _YOU 0xFC,1  
 #define  _ZONE 0xFD,1

//CHIP SELECT 2 ALAPHABETS

//NATO PHONETIC ALPHABET
#define _ALPHA 0xD0,2
#define _BRAVO 0xD1,2
#define _CHARLIE 0xD2,2
#define _DELTA 0xD3,2
#define _ECHO 0xD4,2
#define _FOXTROT 0xD5,2
#define _GOLF 0xD6,2
#define _HOTEL 0xD7,2
#define _INDIA 0xD8,2
#define _JULIET 0xD9,2
#define _KILO 0xDA,2
#define _LIMA 0xDB,2
#define _MIKE 0xDC,2
#define _NOVEMBER 0xDD,2
#define _OSCAR 0xDE,2
#define _PAPA 0xDF,2
#define _QUEBEC 0xE0,2
#define _ROMEO 0xE1,2
#define _SIERRA 0xE2,2
#define _TANGO 0xE3,2
#define _UNIFORM 0xE4,2
#define _VICTOR 0xE5,2
#define _WHISKEY 0xE6,2
#define _XRAY 0xE7,2
#define _YANKEE 0xE8,2
#define _ZULU 0xE9,2

//TRANSMISSION WORD
#define _BRACKET 0xEA,2
#define _BREAK 0xEB,2
#define _CODE 0xEC,2
#define _COLON 0xED,2
#define _COMMAN 0xEE,2
#define _DELETE 0xEF,2
#define _END 0xF0,2
#define _ENTER 0xF1,2
#define _ESCAPE 0xF2,2
#define _INSERT 0xF3,2
#define _OVER 0xF4,2
#define _PASS 0xF5,2
#define _PAUSE 0xF6,2
#define _PERIOD 0xF7,2
#define _POUND 0xF8,2
#define _SEQUENCE 0xF9,2
#define _SPACE 0xFA,2
#define _STAR 0xFB,2
#define _START 0xFC,2
#define _TRANSMIT 0xFD,2


//Chip Select 3 BBT Submissions
#define _ABLE 0x00,3
#define _ACE 0x01,3
#define _ACQUIRED 0x02,3
#define _ADD 0x03,3
#define _ADULTS 0x04,3
#define _AFRAID 0x05,3
#define _AFTER 0x06,3
#define _AGENDA 0x07,3
#define _ALCHOL 0x08,3
#define _ALEXA 0x09,3
#define _ALL 0x0a,3
#define _ALTERNATE 0x0b,3
#define _ANIMAL 0x0c,3
#define _ANNOUNCEMENT 0x0d,3
#define _ANTI 0x0e,3
#define _ANY 0x0f,3
#define _APARTMENT 0x10,3
#define _APOCALYPSE 0x11,3
#define _APOLLO 0x12,3
#define _ARBEITSZIMMER 0x13,3
#define _ARDUINO 0x14,3
#define _ARM 0x15,3
#define _ARMED 0x16,3
#define _ARRAY 0x17,3
#define _ARRIVED 0x18,3
#define _ASSHOLE 0x19,3
#define _ASSIST 0x1a,3
#define _AUSTRIA 0x1b,3
#define _AVERAGE 0x1c,3

#define _BAD  0x1d,3 //German (schlecht?)
#define _BALCONY 0x1e,3
#define _BAR 0x1f,3
#define _BARN 0x20,3
#define _BAROMETRIC 0x21,3
#define _BATTERY 0x22,3
#define _BAY 0x23,3
#define _BEACH 0x24,3
#define _BEER 0x25,3
#define _BEFORE 0x26,3
#define _BELEUCHTUNG 0x27,3 //German (Lighting)
#define _BIG 0x28,3
#define _BIT 0x29,3
#define _BLIZZARD 0x2a,3
#define _BOARD 0x2b,3
#define _BODY 0x2c,3
#define _BOILER 0x2d,3
#define _BOO 0x2e,3
#define _BOOM 0x2f,3
#define _BOSON 0x30,3
#define _BOTH 0x31,3
#define _BOY 0x32,3
#define _BREAKFAST 0x33,3
#define _BRIDGE 0x34,3
#define _BUDDY 0x35,3
#define _BUGGER 0x36,3
#define _BUY 0x37,3
#define _BYTE 0x38,3
#define _BITE 0x38,3
 
#define _CAD 0x39,3
#define _CALLING 0x3a,3
#define _CALM 0x3b,3
#define _CAMERA 0x3c,3
#define _CANADA 0x3d,3
#define _CAPTAIN 0x3e,3
#define _CARD 0x3f,3
#define _CARRIER 0x40,3
#define _CASE 0x41,3
#define _CAT 0x42,3
#define _CENTRAL 0x43,3
#define _CHARGE 0x44,3
#define _CHARGING 0x45,3
#define _CHE 0x46,3
#define _CHEESE 0x47,3
#define _CHEVRON 0x48,3
#define _CHINA 0x49,3
#define _CHOICE 0x4a,3
#define _CHOOSE 0x4b,3
#define _CLOUD 0x4c,3
#define _CLOUDY 0x4d,3
#define _CLUBS 0x4e,3
#define _COCONUT 0x4f,3
#define _COHERENT 0x50,3
#define _COLD 0x51,3
#define _COMING 0x52,3
#define _COMMAND 0x53,3
#define _COMMUNICATIONS 0x54,3
#define _COMPUTER 0x55,3
#define _CONNECTION 0x56,3
#define _CONSUMPTION 0x57,3
#define _CORRECT 0x58,3
#define _COUNTDOWN 0x59,3
#define _COVER 0x5a,3
#define _CREAMY 0x5b,3
#define _CYAN 0x5c,3
#define _CYANIDE 0x5d,3
#define _CYCLONIC 0x5e,3

#define _DAMN 0x5f,3
#define _DANCE 0x60,3
#define _DANGER 0x61,3
#define _DE 0x62,3
#define _DEAD 0x63,3
#define _DECI 0x64,3
#define _DEFENCE 0x65,3
#define _DELIVER 0x66,3
#define _DENIED 0x67,3
#define _DEPRESSED 0x68,3
#define _DIAMONDS 0x69,3
#define _DIASPORA 0x6a,3
#define _DINING 0x6b,3
#define _DINNER 0x6c,3
#define _DISABLE 0x6d,3
#define _DO 0x6e,3
#define _DOCTOR 0x6f,3
#define _DR 0x6f,3
#define _DOC 0x6f,3
#define _DOG 0x70,3
#define _DONT 0x71,3
#define _DOORBELL 0x72,3
#define _DRINK 0x73,3
#define _DUTCH 0x74,3
#define _DYNAMICS 0x75,3

#define _EIGHTH 0x76,3
#define _EITHER 0x77,3
#define _ELIMINATED 0x78,3
#define _ELSE 0x79,3
#define _ENABLE 0x7a,3
#define _ENCODED 0x7b,3
#define _ENCRYPTION 0x7c,3
#define _ENEMY 0x7d,3
#define _ENGINEERING 0x7e,3
#define _ENIGMA 0x7f,3
#define _ENTRANCE 0x80,3
#define _EPSILON 0x81,3
#define _ER 0x82,3
#define _ERROR 0x83,3
#define _ESCAPE 0x84,3
#define _ESTBLISHED 0x85,3
#define _ETA 0x86,3
#define _EVACUATE 0x87,3
#define _EVERY 0x88,3
#define _EXIT 0x89,3
#define _EXTERMINATE 0x8a,3

#define _FACEBOOK 0x8b,3
#define _FACTOR 0x8c,3
#define _FAN 0x8d,3
#define _FAULT 0x8e,3
#define _FIFTH 0x8f,3
#define _FILAMENT 0x90,3
#define _FILTER 0x91,3
#define _FIRE 0x92,3
#define _FLOOR 0x93,3
#define _FLOWER 0x94,3
#define _FLUR 0x95,3 //German (Hall?)
#define _FOG 0x96,3
#define _FOO 0x97,3
#define _FOR 0x98,3
#define _FORGET 0x99,3
#define _FOURTH 0x9a,3
#define _FUCK 0x9b,3
#define _FUEL 0x9c,3
#define _GAIN 0x9d,3
#define _GAME 0x9e,3
#define _GAMING 0x9f,3
#define _GAMMA 0xa0,3
#define _GARDEN 0xa1,3
#define _GAS 0xa2,3
#define _GERMANY 0xa3,3
#define _GET_DUNKED_ON 0xa4,3
#define _GET 0xa5,3
#define _GIRL 0xa6,3
#define _GOD 0xa7,3
#define _GOOBER 0xa8,3
#define _GOOD 0xa9,3
#define _GOOGLE 0xaa,3
#define _GPS 0xab,3
#define _GRASS 0xac,3
#define _GRAYS 0xad,3
#define _GREYS 0xad,3
#define _GREAT 0xae,3
#define _GROOVY 0xaf,3
#define _GUEST 0xb0,3
#define _GUIDANCE 0xb1,3
#define _GUST 0xb2,3
#define _HALF 0xb3,3
#define _HALT 0xb4,3
#define _HAND 0xb5,3
#define _HAVE 0xb6,3
#define _HEAD 0xb7,3
#define _HEART 0xb8,3
#define _HEARTS 0xb9,3
#define _HEAT 0xba,3
#define _HEATER 0xbb,3
#define _HECTO 0xbc,3
#define _HERE 0Xbd,3
#define _HINGE 0xbe,3
#define _HIT 0xbf,3
#define _HOLD 0xc0,3
#define _HORIZONTAL 0xc1,3
#define _HOT 0xc2,3
#define _HOT_TUB 0xc3,3
#define _HUNT 0xc4,3
#define _HUNTER 0xc5,3
#define _HURRICANE 0xc6,3

#define _ICY 0xc7,3
#define _IDEA 0xc8,3
#define _IDENTIFIED 0xc9,3
#define _IDENTITY 0xca,3
#define _IF 0xcb,3
#define _IGNORE 0xcc,3
#define _INCOMING 0xcd,3
#define _INDEX 0xce,3
#define _INITIATE 0xcf,3
#define _INTERNET 0xd0,3
#define _IOTA 0xd1,3
#define _IRON 0xd2,3
#define _ISH 0xd3,3
#define _ITALY 0xd4,3
#define _JACKS 0xd5,3 //jack?
#define _JAPAN 0xd6,3
#define _JESTER 0xd7,3
#define _JESUS 0xd8,3
#define _JOKER 0xd9,3
#define _KAI 0xda,3
#define _KAPPA 0xdb,3
#define _KIAORA 0xdc,3
#define _KEY 0xdd,3
#define _KEYBOARD 0xde,3
#define _KEYPAD 0xdf,3
#define _KEYS 0xe0,3
#define _KIDS 0xe1,3
#define _KINDERZIMMER 0xe2,3
#define _KING 0xe3,3
#define _KITCHEN 0xe4,3
#define _KITTY 0xe5,3
#define _KNIFE 0xe6,3
#define _KUCHE 0xe7,3 //NEED DOTS ABOVE U

#define _LAKE 0xe8,3
#define _LAMDA 0xe9,3
#define _LAME 0xea,3
#define _LATE 0xeb,3
#define _LATITUDE 0xec,3
#define _LEG 0xed,3
#define _LEONARDO 0xee,3
#define _LESS 0xef,3
#define _LETS 0xf0,3
#define _LICHT 0xf1,3
#define _LID 0xf2,3
#define _LIFE 0xf3,3
#define _LIMIT 0xf4,3
#define _LIMITED 0xf5,3
#define _LINE 0xf6,3
#define _LINEAR 0xf7,3
#define _LITTLE 0xf8,3
#define _LIVE 0xf9,3
#define _LIZARD 0xfa,3
#define _LOG_ON 0xfb,3
#define _LOG_OUT 0xfc,3
#define _LONGITUDE 0xfd,3

//Chip Select 4

#define _LOST 0x00,4
#define _LOWER 0x01,4
#define _LOWERED 0x02,4

#define _MADAM 0x03,4
#define _MADE 0x04,4
#define _MAGENTA 0x05,4
#define _MAGIC 0x06,4
#define _MAIL 0x07,4
#define _MAKE 0x08,4
#define _MAN 0x09,4
#define _MANOUVER 0x0a,4
#define _MATTER 0x0b,4
#define _MAXIMUM 0x0c,4
#define _MEASUREMENT 0x0d,4
#define _MEMORY 0x0e,4
#define _MIDNIGHT 0x0f,4
#define _MILES 0x10,4
#define _MIND 0x11,4
#define _MINIMUM 0x12,4
#define _MISSION 0x13,4
#define _MODEM 0x14,4
#define _MONSTER 0x15,4
#define _MORNING 0x16,4
#define _MORTY 0x17,4
#define _MOST 0x18,4
#define _MOUNTAIN 0x19,4
#define _MOWER 01a,4
#define _MULTI 0x1b,4
#define _MY 0x1c,4

#define _NAME 0x1d,4
#define _NARROW 0x1e,4
#define _NEITHER 0x1f,4
#define _NETWORK 0x20,4
#define _NIBBLE 0x21,4
#define _NINTH 0x22,4
#define _NO 0x23,4
#define _NOON 0x24,4
#define _NOR 0x25,4
#define _NOW 0x26,4
#define _NOZZLE 0x27,4

#define _OCCLUDED 0x28,4
#define _OFFICE 0x29,4
#define _OFFICER 0x2a,4
#define _OFFLINE 0x2b,4
#define _OH 0x2c,4
#define _OK 0x2d,4
#define _OKAY 0x2d,4
#define _OMEGA 0x2e,4
#define _OMICRON 0x2f,4
#define _OPENED 0x30,4
#define _ORDER 0x31,4
#define _OUTLET 0x32,4
#define _OVERLORD 0x33,4

#define _PACKAGE 0x34,4
#define _PACKET 0x35,4
#define _PAGE 0x36,4
#define _PALM 0x37,4
#define _PANEL 0x38,4
#define _PAPER 0x39,4
#define _PARTY 0x3a,4
#define _PASCALS 0x3b,4
#define _PAST 0x3c,4
#define _PATH 0x3d,4
#define _PEPPER 0x3e,4
#define _PERCENT 0x3f,4
#define _PERIOD 0x40,4
#define _PHI 0x41,4
#define _PHOTON 0x42,4
#define _PIE 0x43,4
#define _PI 0x43,4
#define _PISS 0x44,4
#define _PIZZA 0x45,4
#define _PLEASE 0x46,4
#define _POINT 0x47,4
#define _POOL 0x48,4
#define _POOR 0x49,4
#define _POST 0x4a,4
#define _POWER 0x4b,4
#define _PRE 0x4c,4
#define _PRESS 0x4d,4
#define _PRESSURE 0x4e,4
#define _PRINT 0x4f,4
#define _PROCEED 0x50,4
#define _PROGRESS 0x51,4
#define _PUMP 0x52,4

#define _QUALIFY 0x53,4
#define _QUARTER 0x54,4
#define _QUEEN 0x55,4

#define _RADIO 0x56,4
#define _RAIN 0x57,4
#define _RAISE 0x58,4
#define _RASPBERRY 0x59,4
#define _RATIO 0x5a,4
#define _REACHED 0x5b,4
#define _REACTOR 0x5c,4
#define _REBOOT 0x5d,4
#define _RECALL 0x5e,4
#define _RECORDING 0x5f,4
#define _REFLECTED 0x60,4
#define _REGROUP 0x61,4
#define _RELEASE 0x62,4
#define _REPEAT 0x63,4
#define _REQUEST 0x64,4
#define _RESPOND 0x65,4
#define _RESULT 0x66,4
#define _RESUME 0x67,4
#define _REVOLUTIONS 0x68,4
#define _REWIND 0x69,4
#define _RFID 0x6a,4
#define _RICK 0x6b,4
#define _RISE 0x6c,4
#define _RIVER 0x6d,4
#define _ROBOT 0x6e,4
#define _ROCK 0x6f,4
#define _ROGER 0x70,4
#define _ROLL 0x71,4
#define _ROOF 0x72,4
#define _ROOM 0x73,4
#define _ROTATE 0x74,4
#define _ROUTER 0x75,4
#define _RUSSIA 0x76,4

#define _SALON 0x77,4
#define _SALTY 0x78,4
#define _SANTA 0x79,4
#define _SAY 0x7a,4
#define _SCAN 0x7b,4
#define _SCARED 0x7c,4
#define _SCARY 0x7d,4
#define _SCHWIFTY 0x7e,4
#define _SCIENCE 0x7f,4
#define _SCISSORS 0x80,4
#define _SEA 0x81,4
#define _SECOND 0x82,4
#define _SELF 0x83,4
#define _SENSOR 0x84,4
#define _SENSORS 0x85,4
#define _SET 0x86,4
#define _SEVENTH 0x87,4
#define _SHEEP 0x88,4
#define _SHIFT 0x89,4
#define _SHOP 0x8a,4
#define _SHUT 0x8b,4
#define _SHUTTER 0x8c,4
#define _SICK 0x8d,4
#define _SIDE 0x8e,4
#define _SIEVERTS 0x8f,4
#define _SIGMA 0x90,4
#define _SIGNAL 0x91,4
#define _SIR 0x92,4
#define _SIRI 0x93,4
#define _SIXTH 0x94,4
#define _SLEEPING 0x95,4
#define _SLEET 0x96,4
#define _SMILING 0x97,4
#define _SNOW 0x98,4
#define _SOLDERING 0x99,4
#define _SOMEONE 0x9a,4
#define _SOUR 0x9b,4
#define _SOYLENT 0x9c,4
#define _SPADES 0x9d,4
#define _SPAIN 0x9e,4
#define _SPEAK 0x9f,4
#define _SPEAKERS 0xa0,4
#define _SPICY 0xa1,4
#define _SPIN 0xa2,4
#define _SPOCK 0xa3,4
#define _SQUANCH 0xa4,4
#define _SQUARED 0xa5,4
#define _STAIRS 0xa6,4
#define _STATES 0xa7,4
#define _STAY 0xa8,4
#define _STEADY 0xa9,4
#define _STECKDOSE 0xaa,4
#define _STORM 0xab,4
#define _STREET 0xac,4
#define _SUBTRACT 0xad,4
#define _SUCKS 0xae,4
#define _SUN_ 0xaf,4 //NOT SAME AS SUNDAY THIS IS THE BIG WHITE BALL IN SPACE
#define _SUNNY 0xb0,4
#define _SURFACE 0xb1,4
#define _SWEET 0xb2,4
#define _SYNC 0xb3,4
#define _SYSTEMS 0xb4,4

#define _TAB 0xb5,4
#define _TACO 0xb6,4
#define _TANK 0xb7,4
#define _TARGET 0xb8,4
#define _TAO 0xb9,4
#define _TELEGRAM 0xba,4
#define _TENTH 0xbb,4
#define _TERMINATE 0xbc,4
#define _TERRIFIED 0xbd,4
#define _TESLA 0xbe,4
#define _THANKS 0xbf,4
#define _THEM 0xc0,4
#define _THEN 0xc1,4
#define _THETA 0xc2,4
#define _THIN 0xc3,4
#define _THINKING 0xc4,4
#define _THIRD 0xc5,4
#define _THREEMA 0xc6,4
#define _THUD 0xc7,4
#define _THUNDER 0xc8,4
#define _TIMER 0xc9,4
#define _TINJAW 0xca,4
#define _TODAY 0xcb,4
#define _TOMORROW 0xcc,4
#define _TOWER 0xcd,4
#define _TRANSMISSION 0xce,4
#define _TREAT 0xcf,4
#define _TREE 0xd0,4
#define _TRICK 0xd1,4
#define _TUNE 0xd2,4
#define _TURN 0xd3,4
#define _TWITTER 0xd4,4
#define _TYPHOON 0xd5,4

#define _UN 0xd6,4
#define _UNDER 0xd7,4
#define _UNITED 0xd8,4
#define _UNO 0xd9,4
#define _UNTIL 0xda,4
#define _UPSILON 0xdb,4
#define _US 0xdc,4
#define _USER 0xdd,4

#define _VALLEY 0xde,4
#define _VALVE 0xdf,4
#define _VERTICAL 0xe0,4
#define _VICTIM 0xe1,4
#define _VISIBILITY 0xe2,4
#define _VISION 0xe3,4
#define _VISITOR 0xe4,4
#define _VOLUME 0xe5,4

#define _WAIT 0xe6,4
#define _WALL 0xe7,4
#define _WAS 0xe8,4
#define _WATER 0xe9,4
#define _WAY 0xea,4
#define _WELL 0xeb,4
#define _WHATSAPP 0xec,4
#define _WHILE 0xed,4
#define _WHO 0xee,4
#define _WIDE 0xef,4
#define _WIND 0xf0,4
#define _WITH 0xf1,4
#define _WOHNZIMMER 0xf2,4
#define _WOMAN 0xf3,4
#define _WORD 0xf4,4
#define _WORDS 0xf5,4

#define _YAW 0xf6,4
#define _YES 0xf7,4
#define _YESTERDAY 0xf8,4
#define _YIKES 0xf9,4
#define _YOUTUBE 0xfa,4

#define _ZED 0xfb,4
#define _ZETA 0xfc,4

#define _FX_WILHELM_SCREEM_ 0xfd,4 //Wilhelm Scream

#endif