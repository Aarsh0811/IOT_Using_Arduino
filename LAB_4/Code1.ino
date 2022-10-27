// NAME: AARSH PARIMAL PATEL
// DATE: 5TH JUNE 2022
// STUDENT ID: 200520260
// LAB-4 (LEVELS 1,2 & 4)

int lightPin = A1; // The light sensor is plugged into pin A1 of the Arduino.
int data = 0;      // This will store the data from the sensor.

// setting up the lights
int RED = 12;  // The red LED is connected to pin 12 of the Arduino
int BLUE = 13; // The blue LED is connected to pin 13 of the Arduino

// adding extra lights for level 4
int GREEN = 11;  // The green LED is connected to pin 11 of the Arduino
int YELLOW = 10; // The yellow LED is connected to pin 10 of the Arduino

int darkness = 50; // This determines the value from which the light will start working
void setup()
{ // The Setup function runs once.
    // adding the pinmodes
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    Serial.begin(9600); // This will allow us to print data in the serial monitor
}
void loop()
{ // The loop function runs forever.

    // storing all the levels in the loop

    // level1();
    // level2();
    // level4();
}

// level1:
void level1()
{
    data = analogRead(lightPin);      // Read the value from the light sensor and store it in the lightData variable.
    data = map(data, 6, 679, 0, 100); // map the data value to a percentage
    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.
    delay(1000);          // Wait 1 second (1000mS) before running again.
} // end of level 1

// level2: Turning on both the red LED (D12) and blue LED (D13) at the
// same time when the sensor detects darkness.

void level2()
{
    data = analogRead(lightPin);      // Read the value from the light sensor and store it in the lightData variable.
    data = map(data, 6, 679, 0, 100); // map the data value to a percentage
    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.

    // adding if statement for condition
    if (data < darkness)
    {
        digitalWrite(RED, HIGH); // RED & BLUE ON
        digitalWrite(BLUE, HIGH);
    }

    else
    {
        digitalWrite(RED, LOW); // RED & BLUE OFF
        digitalWrite(BLUE, LOW);

    } // end of if statement

} // end of level 2

// level4:  Using the light sensor mapped from 0 to 15 have the lights count in
// binary as you move the light sensor slider from left to right.

void level4()
{
    data = analogRead(lightPin);     // Read the value from the light sensor and store it in the lightData variable.
    data = map(data, 6, 679, 0, 15); // map the data value to 0-15
    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.

    // adding if statements
    if (data < 1)
    {
        digitalWrite(YELLOW, LOW); // all lights OFF
        digitalWrite(RED, LOW);
        digitalWrite(BLUE, LOW);
        digitalWrite(GREEN, LOW);
    }

    else if (data <= 1)
    {
        digitalWrite(YELLOW, HIGH); // Show YELLOW at value 1
        digitalWrite(RED, LOW);
        digitalWrite(BLUE, LOW);
        digitalWrite(GREEN, LOW);
    }

    else if (data > 1 && data <= 2)
    {
        digitalWrite(GREEN, HIGH); // Show GREEN at value 2
        digitalWrite(YELLOW, LOW);
        digitalWrite(RED, LOW);
        digitalWrite(BLUE, LOW);
    }

    else if (data > 2 && data <= 3)
    {
        digitalWrite(YELLOW, HIGH); // Show YELLOW & GREEN at value 3
        digitalWrite(GREEN, HIGH);
        digitalWrite(RED, LOW);
        digitalWrite(BLUE, LOW);
    }

    else if (data > 3 && data <= 4)
    {
        digitalWrite(BLUE, HIGH); // Show BLUE at value 4
        digitalWrite(YELLOW, LOW);
        digitalWrite(GREEN, LOW);
        digitalWrite(RED, LOW);
    }

    else if (data > 4 && data <= 5)
    {
        digitalWrite(BLUE, HIGH); // Show BLUE & YELLOW at value 5
        digitalWrite(YELLOW, HIGH);
        digitalWrite(GREEN, LOW);
        digitalWrite(RED, LOW);
    }

    else if (data > 5 && data <= 6)
    {
        digitalWrite(BLUE, HIGH); // Show BLUE & GREEN at value 6
        digitalWrite(GREEN, HIGH);
        digitalWrite(YELLOW, LOW);
        digitalWrite(RED, LOW);
    }

    else if (data > 6 && data <= 7)
    {
        digitalWrite(BLUE, HIGH); // Show BLUE,GREEN & YELLOW at value 7
        digitalWrite(GREEN, HIGH);
        digitalWrite(YELLOW, HIGH);
        digitalWrite(RED, LOW);
    }

    else if (data > 7 && data <= 8)
    {
        digitalWrite(RED, HIGH); // Show RED at value 8
        digitalWrite(BLUE, LOW);
        digitalWrite(GREEN, LOW);
        digitalWrite(YELLOW, LOW);
    }

    else if (data > 8 && data <= 9)
    {
        digitalWrite(RED, HIGH); // Show RED & YELLOW at value 9
        digitalWrite(YELLOW, HIGH);
        digitalWrite(BLUE, LOW);
        digitalWrite(GREEN, LOW);
    }

    else if (data > 9 && data <= 10)
    {
        digitalWrite(RED, HIGH); // Show RED & GREEN at value 10
        digitalWrite(GREEN, HIGH);
        digitalWrite(YELLOW, LOW);
        digitalWrite(BLUE, LOW);
    }

    else if (data > 10 && data <= 11)
    {
        digitalWrite(RED, HIGH); // Show RED,GREEN & YELLOW at value 11
        digitalWrite(GREEN, HIGH);
        digitalWrite(YELLOW, HIGH);
        digitalWrite(BLUE, LOW);
    }

    else if (data > 11 && data <= 12)
    {
        digitalWrite(RED, HIGH); // Show RED & BLUE at value 12
        digitalWrite(BLUE, HIGH);
        digitalWrite(GREEN, LOW);
        digitalWrite(YELLOW, LOW);
    }

    else if (data > 12 && data <= 13)
    {
        digitalWrite(RED, HIGH); // Show RED,BLUE & YELLOW at value 13
        digitalWrite(BLUE, HIGH);
        digitalWrite(YELLOW, HIGH);
        digitalWrite(GREEN, LOW);
    }

    else if (data > 13 && data <= 14)
    {
        digitalWrite(RED, HIGH); // Show RED,BLUE & GREEN at value 14
        digitalWrite(BLUE, HIGH);
        digitalWrite(GREEN, HIGH);
        digitalWrite(YELLOW, LOW);
    }

    else if (data > 14 && data <= 15)
    {
        digitalWrite(RED, HIGH); // Show RED,BLUE,GREEN & YELLOW at value 15
        digitalWrite(BLUE, HIGH);
        digitalWrite(GREEN, HIGH);
        digitalWrite(YELLOW, HIGH);

    } // end of if statements

} // end of level 4
