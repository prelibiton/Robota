/*
The "100+ Word" Arduino Audio Shield! Speak Arduino, Speak!
by Patrick Thomas Mitchell
http://www.engineeringshock.com/100-word-arduino-audio-shield.html

Library version 1.0 Sept 23, 2017 by LeRoy Miller

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  
https://www.patreon.com/kd8bxp  
https://ko-fi.com/lfmiller  

Copyright (c) 2017 LeRoy Miller

This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>
*/

/*
 * Mar 6, 2018 - Updated to work with the Little Buddy Talker
 * http://www.engineeringshock.com/the-little-buddy-talker-project-page.html
 * LeRoy Miller, (c) 2018
 * Mar 11, 2018 Updated words start with underscore.
 * A.M. is _am_ and P.M. is _pm_
 * Based on feedback from user jjdeprisco (Thank You)
 * LeRoy Miller, (C) 2018
 * Ver 1.5.2

Mar 19, 2018 - Cleaned up code a bit. Found a few words that didn't have underscores added and corrected. Split the libraries apart because of a problem that was found with the LBT and Orignal 100+ Word code
May 5, 2018 - Updated for BBT
 */
 
/* Big Buddy Talker Arduino UNO Hookup
 * BBT CS1 to Arduino PIN 7 
 * BBT CS2 to Arduino PIN 8
 * BBT CS3 to Arduino PIN 9
 * BBT CS4 to Arduino PIN 10 
 * BBT SC to Arduino PIN 13 
 * BBT DI to Arduino PIN 11
 *
 *May 5, 2018 - BBT hasn't been tested with the D1 Mini yet, I believe these pins should work.
 * Wemos D1 Mini and Other ESP8266 Based Devices
 * BBT CS1 to D1
 * BBT CS2 to D2
 * BBT CS3 to D3
 * BBT CS4 to D0 
 * BBT SC to D5
 * BBT DI to D7
 * 
 * Some ESP8266 devices need the GPIO PIN number. 
 */

#include "Word100BBT.h"; 

//The Big Buddy Talker uses 4 CS select pins.
#define CS1_PIN 10
#define CS2_PIN 9
#define CS3_PIN 8
#define CS4_PIN 7

Word100bbt Word100(CS1_PIN, CS2_PIN, CS3_PIN, CS4_PIN); //cs pins 

int sentence[] = {_ONE, _TWO, _THREE, _FOUR, _FIVE, _SIX, _SEVEN, _EIGHT, _NINE, _TEN};
int sentence2[] = {_ALERT, _ALERT, _INTRUDER, _IN, _ZONE, _TWO};

/* Because the defined word list contain both the location of the word and the chip number they are
 *  on. The method below maybe a bit better for making sentences, although it looks a bit strange.
 *  Remember:
 *  _ONE is really 0x37,1
 *  _TWO 0x38,1
 *  _THREE 0x39,1
 *  ect....
 *  So an array would look something like this:
 *  int sentence3[4][2] = {{0x37,1},{0x38,1},{0x39,1}};
 *  We can try it below.....
 */

void setup() {
  
Word100.begin();

}

void loop() {

Word100.say(_ROBOT);
delay(10000);

}
