// NAME: AARSH PARIMAL PATEL
// STUDENT ID:200520260
// DATE:27/07/2022
// LAB-10

// setting up master-slave arduino & micro-servo.
#include <Wire.h>
#include <Servo.h>

// adding variables
Servo myservo;
int red = 9;    // The red RGB is connected to pin 9 of the Arduino.
int green = 10; // The green RGB is connected to pin 10 of the Arduino.
int blue = 11;  // The blue RGB is connected to pin 11 of the Arduino.
int value = 0;
int x = Wire.read(); // This will receive input as an integer.

void setup()
{
    Wire.begin(4);
    Wire.onReceive(receiveEvent);
    Serial.begin(9600);
    myservo.attach(4);
    myservo.write(0);
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
}

void loop()
{
    delay(100);
}

// level 4:Creating a Master-Slave setup of your level 3 code using two arduinos. The first(Master)
// arduino will have the two buttons. The Slave will have the motor and the LED.

void receiveEvent(int howMany)
{
    while (Wire.available() > 0)
    {
        x = Wire.read();

        if (value == 0)
        {
            myservo.write(0);      // 0%
            analogWrite(red, 255); // show yellow
            analogWrite(green, 255);
            analogWrite(blue, 0);
        }

        // adding conditions for button 1.
        if (x == 1)
        {
            value++;
            if (value == 0)
            {
                value = 1;
            }

            else if (value == 1)
            {
                myservo.write(45);     // 25%
                analogWrite(red, 255); // show red
                analogWrite(green, 0);
                analogWrite(blue, 0);
                delay(1500);
            }
            else if (value == 2)
            {
                myservo.write(90);       // 50%
                analogWrite(green, 255); // show green
                analogWrite(red, 0);
                analogWrite(blue, 0);
                delay(1500);
            }
            else if (value == 3)
            {
                myservo.write(135);     // 75%
                analogWrite(blue, 255); // show blue
                analogWrite(red, 0);
                analogWrite(green, 0);
                delay(1500);
            }
            else if (value == 4)
            {
                myservo.write(180); // 100%
                analogWrite(red, 255);
                analogWrite(green, 255);
                analogWrite(blue, 255); // show white
                delay(1500);
            }
            else if (value == 5)
            {
                myservo.write(135); // 75%
                analogWrite(red, 0);
                analogWrite(green, 0);
                analogWrite(blue, 255); // show blue
                delay(1500);
                myservo.write(90); // 50%
                analogWrite(red, 0);
                analogWrite(green, 255); // show green
                analogWrite(blue, 0);
                delay(1500);
                myservo.write(45);     // 25%
                analogWrite(red, 255); // show red
                analogWrite(green, 0);
                analogWrite(blue, 0);
                delay(1500);
                myservo.write(0); // 0%
                analogWrite(red, 255);
                analogWrite(green, 255);
                analogWrite(blue, 0); // show yellow
                delay(1500);

            } // end of if statements.

        } // end of conditions for button 1.

        // adding conditions for button 2.
        else if (x == 2)
        {
            value++;
            if (value == 6)
            {
                myservo.write(45);     // 25%
                analogWrite(red, 255); // show red
                analogWrite(green, 0);
                analogWrite(blue, 0);
                delay(1500);
                myservo.write(90); // 50%
                analogWrite(red, 0);
                analogWrite(green, 255); // show green
                analogWrite(blue, 0);
                delay(1500);
                myservo.write(135); // 75%
                analogWrite(red, 0);
                analogWrite(green, 0);
                analogWrite(blue, 255); // show blue
                delay(1500);
                myservo.write(180); // 100%
                analogWrite(red, 255);
                analogWrite(green, 255);
                analogWrite(blue, 255); // show white
                delay(1500);

            } // end of if statements

        } // end of conditions for button 2.

    } // end of while loop.

} // end of level 4
