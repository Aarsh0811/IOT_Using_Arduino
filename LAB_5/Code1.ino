// Name: Aarsh Parimal Patel
// Student Id: 200520260
// Date: 15th June 2022
// Lab-5

// connecting the items
// adding buttons
int blueLedPin = 13; // The blue LED is connected pin 13 of the Arduino.
int redLedPin = 12;  // The blue LED is connected pin 12 of the Arduino.
int button1Pin = 2;  // The SW1 button is connect to pin 2 of the Arduino.
int button2Pin = 3;  // The SW2 button is connect to pin 3 of the Arduino.
int start = 0;

void setup()
{                                // The Setup function runs once
    pinMode(blueLedPin, OUTPUT); // Setup blue LED pin as an output pin.
    pinMode(redLedPin, OUTPUT);  // Setup red LED pin as an output pin.
    pinMode(button1Pin, INPUT);  // Setup button1 pin as an input pin.
    pinMode(button2Pin, INPUT);  // Setup button2 pin as an input pin.
}

// this works as a container for levels
void loop() // this runs forever
{
    // level1();
    level2();
}

// level1:
void level1()
{ // The loop function runs forever.

    // adding if statements
    if (digitalRead(button1Pin) == HIGH)
    {                                   // Check to see if button1 is pressed.
        digitalWrite(blueLedPin, HIGH); // Turn on the blue LED.
    }
    else
    {
        digitalWrite(blueLedPin, LOW); // Turn off the blue LED.
    }
}

// level2: Add a second button that will control a red led.

void level2()
{
    // adding if statements
    if (digitalRead(button2Pin) == HIGH)
    { // Check to see if button2 is pressed.
        if (start == 0)
        {
            start = 1;
            delay(300);
        }
        else if (start == 1)
        {
            start = 0;
            delay(300);
        }
    }
    if (start == 1)
    {
        digitalWrite(redLedPin, HIGH); // Turn on the red LED.
    }
    else if (start == 0)
    {
        digitalWrite(redLedPin, LOW); // Turn off the red LED.

    } // end of if statement
} // end of level2
