#include <Arduino.h>

#include <RFM69.h>
#include <RFM69_ATC.h>

//#include <GxEPD.h>
//#include <GxIO/GxIO_SPI/GxIO_SPI.h>
//#include <GxIO/GxIO.h>
//#include <GxGDEW0154Z04/GxGDEW0154Z04.h>

//#include <Fonts/FreeMonoBold12pt7b.h>

RFM69 radio;

//GxIO_Class io(SPI, /*CS=*/ 9, /*DC=*/ 4, /*RST=*/ A3);
//GxEPD_Class display(io, /*RST=*/ A3, /*BUSY=*/ A2);

#define ENCRYPTKEY "abcd1234abcd1234"

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("setup");
  //display.init(115200);


  radio.initialize(RF69_868MHZ,10,1);
  radio.setHighPower();
  radio.encrypt(ENCRYPTKEY);
  radio.readAllRegs();
}

void loop() {
    delay(5000);
}
