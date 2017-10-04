MCP3208 is an Arduino library for communicating with MCP3208 analog to digital converter.
It was originally created for MCP3008 by Uros Petrevski, Nodesign.net 2013

Released into the public domain.

ported from Python code originaly written by Adafruit learning system for rPI :
http://learn.adafruit.com/send-raspberry-pi-data-to-cosm/python-script

Copy these files into the Aarduino "libraries" folder.


Connections:

MCP3208 Pin16 VDD -> 5V or 3.3V 

MCP3208 Pin15 VREF -> 5V or 3.3V

MCP3208 Pin14 AGND -> GND

MCP3208 Pin13 CLK -> arduino gpio

MCP3208 Pin12 DOUT -> arduino gpio

MCP3208 Pin11 DIN -> arduino gpio

MCP3208 Pin10 CS -> arduino gpio

MCP3208 Pin09 DGND -> GND


MCP3208 Pin1 to Pin8 -> ADC Channels 0 to 7

