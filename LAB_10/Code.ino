// NAME: AARSH PARIMAL PATEL
// STUDENT ID:200520260
// DATE:27/07/2022
// LAB-10

// setting up our micro-servo
#include <Servo.h>
Servo myservo;

// adding the variables
int red = 9;    // The red RGB is connected to pin 9 of the Arduino.
int green = 10; // The green RGB is connected to pin 10 of the Arduino.
int blue = 11;  // The blue RGB is connected to pin 11 of the Arduino.
int value = 0;
int button1 = 2; // The button 1 is connected to pin 2 of the Arduino.
int button2 = 3; // The button 2 is connected to pin 3 of the Arduino.

// setting up the components
void setup()
{
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
    myservo.attach(4);
    Serial.begin(9600); // This will allow us to print data in the serial monitor
    myservo.write(0);
}

void loop() // The loop will run forever
// It also acts as a container for our levels.

{
    // level1();
    // level2();
    level3();
}

// level 1: Testing the circuit.

void level1()
{
    myservo.write(180); // 100%
    delay(1500);
    myservo.write(0); // 0%
    delay(1500);
}

// level 2: Including two buttons where button 1(d2) will move the motor forward by 25% and
// button 2(d3) will move the motor backwards 25%.

void level2()
{
    // adding conditions for button 1.
    // adding if statements
    if (digitalRead(button1) == HIGH)
    {
        value++;
        if (value == 0)
        {
            value = 1;
        }
        else if (value == 1)
        {
            myservo.write(45); // 25%
            delay(1500);
        }
        else if (value == 2)
        {
            myservo.write(90); // 50%
            delay(1500);
        }
        else if (value == 3)
        {
            myservo.write(135); // 75%
            delay(1500);
        }
        else if (value == 4)
        {
            myservo.write(180); // 100%
            delay(1500);

        } // end of if statements.

    } // end of conditions for button 1.

    // adding conditions for button 2.
    else if (digitalRead(button2) == HIGH)
    {
        value--;
        if (value == 4)
        {
            myservo.write(180); // 100%
            delay(1500);
        }
        else if (value == 3)
        {
            myservo.write(135); // 75%
            delay(1500);
        }
        else if (value == 2)
        {
            myservo.write(90); // 50%
            delay(1500);
        }
        else if (value == 1)
        {
            myservo.write(45); // 25%
            delay(1500);
        }
        else if (value == 0)
        {
            myservo.write(0); // 0%
            delay(1500);

        } // end of if statements

    } // end of conditions for button 2.

} // end of level 2

// level 3: Adding an RGB led to the circuit. Now having a different light colour appear at each of the
// motor positions(0,25,50,75,100). If the motor is at 100% and the user hits button 1(move
// forward) have the motor transition through all colours and position as it returns to 0%. Likewise
// if the motor is at 0% and the user hits button 2(move backwards) then the motor will hit all the
// colours and positions automatically as it moves to 100%.

void level3()
{

    // adding conditions for first button.
    // adding if statements
    if (value == 0)
    {
        myservo.write(0);      // 0%
        analogWrite(red, 255); // show yellow
        analogWrite(green, 255);
        analogWrite(blue, 0);
    }

    if (digitalRead(button1) == HIGH)
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

    // adding conditions for second button
    else if (digitalRead(button2) == HIGH)
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

} // end of level 3.
