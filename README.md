This is a old project of mine, this is a home automation project based on arduino nano, HC-05 bluetooth module, and 8 channel realy board.
The number of realys canbe upto 12 but that is limited by the pins on the arduino nano.
it is made to help people with minor disability and just for convenience purposes as well.

The reason for choosing bluetooth over Wi-Fi is that in case the wifi goes down for any reason the whole systen shuts down or if you need to change the password on the router you will also have to make changes in the code if you make similar project with ESP8266 or ESP32 but this one uses bluetooth that is satndalone and the HC-05 module has good signal reception it can still work through 2-3 concrete walls in my case there were 4-5 walls but it might vary with your case.


This project is simple and connections are explaine in the code itself and they are simple and self explainatory
The app is no longer availaible on play store for some reason but here is a link for it 



####################################
I CANT GURANTEE THAT THIS APP IS FREE OF ANY MALWARE FROM THIS SOURCE - https://automation-dark-brothers.en.aptoide.com/app
I had downloaded this same software way before it was removed from the app store so my version is totally safe but i cant really say that for this site as i havent used this site,
If you find some other and more creditable source you can download it from there.
####################################

To configure the app just click on settings and change the value of on state to a capital alphabet and the off state to the lower case of that same alphabet.

To prevent unauthorised access to this system you can change the default password of the bluetooth module with the AT commands library, you can easily find a tutorial for it on youtube just search "how to change default password of HC-05 Bluetooth module".
doing so will prevent any one from just connecting to your system and messing with it further you can put longer phrases in on and off state in app and make the corresponding changes in the code as well.

I HOPE THIS HELPS!
