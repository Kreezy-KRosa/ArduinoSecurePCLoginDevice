// Arduino Pro Micro (Leonardo) Secure PC Login Device
// By Kreezy(KRosa) 1.21.2018

// This example code is public domain

#include "Keyboard.h"       // Include the Keyboard library 

void setup() {
 
  Keyboard.begin();         // Starts keyboard functionality
}

void loop() {

  delay(2000);              // 2 second delay before starting

  //Keyboard.print("KreezyLive");   // prints the username (Remove the //'s and add a username if needed)

  //delay(2000);              // 2 second delay for demo purposes(Can be shortened to 100 for real use)

  //Keyboard.write(KEY_TAB);      // tab key to move cursor to password field

  //delay(100);                 // delay for stability

  Keyboard.print("PasswordNoobz");  // prints the password (If changing the password for your own needs, do it here)

  delay(100);                   // delay for stability

  Keyboard.write(KEY_RETURN);   // hits enter key to complete logon

  Keyboard.end();               // ends keyboard functionality

  delay(50000);                 // 50 second delay, enough time to remove device
  
} // The End :) Kreezy


