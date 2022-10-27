// Name: Aarsh Parimal Patel
// Student ID: 200520260
// Date: 15th June 2022
// Lab-5

// adding items
int button1Pin = 2;
int button2Pin = 3;
int redRGBPin = 9;
int greenRGBPin = 10;
int blueRGBPin = 11;
int greenledPin = 13;
int redledPin = 12;
int start1 = 0;
int start2 = 0;

// setup runs only once
void setup()
{
    // adding pinMode for each item
    pinMode(button1Pin, INPUT);
    pinMode(button2Pin, INPUT);
    pinMode(redRGBPin, OUTPUT);
    pinMode(greenRGBPin, OUTPUT);
    pinMode(blueRGBPin, OUTPUT);
    pinMode(greenledPin, OUTPUT);
    pinMode(redledPin, OUTPUT);
}

// loop function runs forever
// it works as a container for levels
void loop()
{
    level4();
}

// level4: Adding a green and red LED to the circuit with the RGB LED. Include 2 buttons. The first
// button will toggle between the red and green LED. If the green LED is on when you hit button 2
// the RGB will start cycling through the 3 colours. If the 2nd button is pressed the RGB lights stop.
// If the 1st button is pressed the RGB stops AND the green LED turn off and the red LED turns
// ON. If the red LED is on, nothing happens when you press the 2nd button

void level4()
{
    // adding if statements
    if (digitalRead(button1Pin) == HIGH)
    {
        if (start1 == 0)
        {
            start1 = 1;
            delay(300);
        }
        else if (start1 == 1)
        {
            start1 = 2;
            delay(300);
        }
        else if (start1 == 2)
        {
            start1 = 1;
            delay(300);
        }
        if (start1 == 0)
        {
            digitalWrite(greenledPin, LOW);
            digitalWrite(redledPin, LOW);
        }
        if (start1 == 1)
        {
            digitalWrite(greenledPin, HIGH);
            digitalWrite(redledPin, LOW);
        }
        if (start1 == 2)
        {
            digitalWrite(greenledPin, LOW);
            digitalWrite(redledPin, HIGH);
        }
    }

    // adding if statements

    if (digitalRead(button2Pin) == HIGH)
    {
        if (start1 == 1)
        {
            if (start2 == 0)
            {
                start2 = 1;
            }
            else if (start2 == 1)
            {
                start2 = 0;
            }
            else if (start2 == 2)
            {
                start2 = 0;
            }
            else if (start2 == 3)
            {
                start2 = 0;
            }

            delay(300);
        }
    }

    if (start2 == 1)
    {
        digitalWrite(redRGBPin, HIGH);
        digitalWrite(greenRGBPin, LOW);
        digitalWrite(blueRGBPin, LOW);
        delay(500);
    }

    else if (start2 == 2)
    {
        digitalWrite(redRGBPin, LOW);
        digitalWrite(greenRGBPin, HIGH);
        digitalWrite(blueRGBPin, LOW);
        delay(500);
    }

    else if (start2 == 3)
    {
        digitalWrite(redRGBPin, LOW);
        digitalWrite(greenRGBPin, LOW);
        digitalWrite(blueRGBPin, HIGH);
        delay(500);
    }

    if (start2 == 1)
    {
        start2 = 2;
        delay(300);
    }
    else if (start2 == 2)
    {
        start2 = 3;
        delay(300);
    }
    else if (start2 == 3)
    {
        start2 = 1;
        delay(300);
    }

    if (start1 == 2)
    {
        start2 = 0;
    }
    if (start2 == 0)
    {
        digitalWrite(redRGBPin, LOW); // all lights off
        digitalWrite(greenRGBPin, LOW);
        digitalWrite(blueRGBPin, LOW);
    } // end of if statement

} // end of level4
