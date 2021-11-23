/*************************************************************
  Warning: Bluetooth support is in beta!

  You’ll need:
   - Blynk IoT app (download from App Store or Google Play)
   - Arduino Uno board
   - Decide how to connect to Blynk
     (USB, Ethernet, Wi-Fi, Bluetooth, ...)

  There is a bunch of great example sketches included to show you how to get
  started. Think of them as LEGO bricks  and combine them as you wish.
  For example, take the Ethernet Shield sketch and combine it with the
  Servo example, or choose a USB sketch and add a code from SendData
  example.
 *************************************************************/

// Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
// See the Device Info tab, or Template settings
#define BLYNK_TEMPLATE_ID           "TMPLxxxxxx"
#define BLYNK_DEVICE_NAME           "Device"
#define BLYNK_AUTH_TOKEN            "ZHwyTVwQa7Flcfq4h0538AaL6RcE4KnO"


// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial


#include <SoftwareSerial.h>
SoftwareSerial SwSerial(2, 3); // RX, TX

#include <BlynkSimpleSerialBLE.h>

char auth[] = BLYNK_AUTH_TOKEN;


void setup()
{
  // Debug console
  Serial.begin(9600);

  SwSerial.begin(9600);
  Blynk.begin(SwSerial, auth);

  Serial.println("Waiting for connections...");
}

void loop()
{
  Blynk.run();
  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}
