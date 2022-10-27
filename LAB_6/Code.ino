// NAME: Aarsh Parimal Patel
// STUDENT ID: 200520260
// DATE: 21/06/2022
// LAB-6

// connecting the items
int RGBRedPin = 9;    // The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; // The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  // The blue RGB LED is connected pin 11 of the Arduino.
int button1Pin = 2;
int fadeDelay = 5; // This is the number of milliseconds that it will take between steps
int rotationPin = A0;
int data = 0;
int incomingByte = 0;
int change = 0;
void setup()
{                       // The Setup function runs once.
    Serial.begin(9600); // This will allow us to print in the serial monitor

    // setting up the pinMode
    pinMode(RGBRedPin, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(RGBGreenPin, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(RGBBluePin, OUTPUT);  // Setup blue RGB LED pin as an output pin.
    pinMode(rotationPin, INPUT);  // Setup rotation pin as an input pin.
    pinMode(button1Pin, INPUT);   // Setup button as an input pin.
}

// This works as a container for levels
void loop() // The loop function runs forever.
{
    // level1();
    // level2();
    // level3();
    // level4();
}

// level1:
void level1()
{
    for (int x = 0; x <= 255; x++)
    { // Fade in red.
        analogWrite(RGBRedPin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out red.
        analogWrite(RGBRedPin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in green.
        analogWrite(RGBGreenPin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out green.
        analogWrite(RGBGreenPin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in blue.
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out blue.
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in red and blue.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out red and blue.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in red and green.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBGreenPin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out red and green.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBGreenPin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in green and blue.
        analogWrite(RGBGreenPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out green and blue.
        analogWrite(RGBGreenPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in red, green and blue.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBGreenPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out red, green and blue.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBGreenPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);

    } // end of for loops

} // end of level 1

// level 2: Mapping the brightness of the green channel of the RGB led to the rotation sensor A0. As
// you rotate clockwise the light will get brighter.

void level2()
{
    data = analogRead(rotationPin);
    data = map(data, 0, 1023, 0, 255); // mapping the value of rotation pin
    Serial.print("Rotation Value= ");
    Serial.println(data);
    delay(100);

    analogWrite(RGBGreenPin, data); // control the brightness of Green rgb

} // end of level 2

// level 3: Writing a program that allows the user to set the brightness of each of the RGB
// channels by using the rotation dial to control brightness and a push button to select the channel.

void level3()
{
    data = analogRead(rotationPin);
    data = map(data, 0, 1023, 0, 255);
    delay(100);

    // adding if statements
    if (digitalRead(button1Pin) == HIGH)
    {
        change++;
        if (change > 3)
        {
            change = 1;
        }
        Serial.print("change= ");
        Serial.println(change);
        delay(200);
    }
    if (change == 1)
    {
        analogWrite(RGBRedPin, data); // control the brightness of Red rgb
        delay(200);
    }
    else if (change == 2)
    {
        analogWrite(RGBGreenPin, data); // control the brightness of Green rgb
        delay(200);
    }
    else if (change == 3)
    {
        analogWrite(RGBBluePin, data); // control the brightness of Blue rgb
        delay(200);

    } // end of if statements

} // end of  level 3

// level 4: Asking the user which colour they would like to change. Then use the rotation dial to change the brightness then use
// the button to store it in memory. After the button is pressed the user will be asked again what colour they would like to modify.
void level4()
{
    Serial.println("Please input 1. RED , 2. GREEN , 3. BLUE");
    while (Serial.available() == 0)
    {
    } // this will stop the loop till an input from the user is received.

    incomingByte = Serial.read();

    // adding while statement
    while (digitalRead(button1Pin) == LOW)
    {
        data = analogRead(rotationPin);
        data = map(data, 0, 1023, 0, 255);

        // adding if statements
        if (incomingByte == 49)
        {
            analogWrite(RGBRedPin, data); // control the brightness of Red rgb
            Serial.println("RED");
            delay(200);
        }
        else if (incomingByte == 50)
        {
            analogWrite(RGBGreenPin, data); // control the brightness of Green rgb
            Serial.println("GREEN");
            delay(200);
        }
        else if (incomingByte == 51)
        {
            analogWrite(RGBBluePin, data); // control the brightness of Blue rgb
            Serial.println("BLUE");
            delay(200);

        } // end of if statements

    } // end of while statement

} // end of level 4
