// Name: Aarsh Parimal Patel
// Student ID: 200520260
// Date: 15th June 2022
// Lab-5

// adding items
int redRGBPin = 9;
int blueRGBPin = 11;
int greenRGBPin = 10;
int button1Pin = 2;
int button2Pin = 3;
int start = 0;

// setup runs once
void setup()
{
    // adding buttons
    pinMode(redRGBPin, OUTPUT);
    pinMode(blueRGBPin, OUTPUT);
    pinMode(greenRGBPin, OUTPUT);
    pinMode(button1Pin, INPUT);
    pinMode(button2Pin, INPUT);
}

// this works as a container for levels
void loop()
{
    level3();
}

// level3: RGB LED have button 1 turn on the RGB light, cycling through the three
// colours in repetition with a 500 msec delay.
// the second button shuts off the lights. The light shut off immediately after the current
// colour and not continue to cycle after the button is pressed.

void level3()
{

    // adding if statements
    if (digitalRead(button1Pin) == HIGH)
    {
        start = 1;
        delay(300);
    }
    if (digitalRead(button2Pin) == HIGH)
    {
        start = 0;
        delay(300);
    }
    if (start == 1)
    {
        digitalWrite(redRGBPin, HIGH); // Turn on the red.
        digitalWrite(greenRGBPin, LOW);
        digitalWrite(blueRGBPin, LOW);
        delay(500);
    }
    else if (start == 2)
    {
        digitalWrite(greenRGBPin, HIGH); // Turn on the green.
        digitalWrite(redRGBPin, LOW);
        digitalWrite(blueRGBPin, LOW);
        delay(500);
    }
    else if (start == 3)
    {
        digitalWrite(blueRGBPin, HIGH); // Turn on the blue.
        digitalWrite(greenRGBPin, LOW);
        digitalWrite(redRGBPin, LOW);
        delay(500);
    }
    if (start == 1)
    {
        start = 2;
    }
    else if (start == 2)
    {
        start = 3;
    }
    else if (start == 3)
    {
        start = 1;
    }
    if (start == 0)
    {
        digitalWrite(redRGBPin, LOW); // all lights off
        digitalWrite(greenRGBPin, LOW);
        digitalWrite(blueRGBPin, LOW);

    } // end of if statements
} // end of level3
