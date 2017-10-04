/*
  Example for MCP3208 - Library for communicating with MCP3208 Analog to digital converter.
  Forked from work by Uros Petrevski, Nodesign.net 2013
  Released into the public domain.
*/

#include <MCP3208.h>


// NodeMCU pins connections
#define CLOCK_PIN 15 // wire to MCP3208 Pin 13
#define MISO_PIN 13  // wire to MCP3208 Pin 12
#define MOSI_PIN 12  // wire to MCP3208 Pin 11
#define CS_PIN 14    // wire to MCP3208 Pin 10

MCP3208 adc(CLOCK_PIN, MOSI_PIN, MISO_PIN, CS_PIN); // put pins inside MCP3008 constructor
ADC_MODE(ADC_VCC); // read ESP voltage instead of analog_in A0, leave A0 unconnected

void setup() {
 
 // open serial port
 Serial.begin(115200);
  
}


void loop() {
  
  int val = ESP.getVcc(); // analogRead(A0);
  Serial.print("internal voltage: ");
  Serial.println(val);

  // read all MCP3208 channels
  Serial.println("MCP3208 values:");
  for (int i=0; i<=7; i++) {
    val = adc.readADC(i);
    Serial.print(val);
    Serial.print("\t");
  }
  Serial.println("");

  delay(3000);  
}
