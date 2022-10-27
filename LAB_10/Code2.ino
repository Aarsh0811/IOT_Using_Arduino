// NAME: AARSH PARIMAL PATEL
// STUDENT ID:200520260
// DATE:27/07/2022
// LAB-10

// setting up master-slave arduino & buttons.
#include <Wire.h>
int button1 = 6; // The button 1 is connected to pin 2 of the Arduino.
int button2 = 3; // The button 2 is connected to pin 3 of the Arduino.

void setup()
{
    // setting up the pinmodes for buttons
    Wire.begin();
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
}

byte x = 0;

void loop()
{
    Wire.beginTransmission(4); // transmit to device #4
    Wire.write("x is ");

    if (digitalRead(button1) == HIGH)
    {
        x = 1;
        Wire.beginTransmission(4);
        Wire.write(x);
        Wire.endTransmission();
    }
    if (digitalRead(button2) == HIGH)
    {
        x = 2;
        Wire.beginTransmission(4);
        Wire.write(x);
        Wire.endTransmission();
    }

    Wire.endTransmission(); // This will end the transmission
    delay(100);

} // end of the loop
