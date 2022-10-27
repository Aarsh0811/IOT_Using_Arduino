// NAME: AARSH PARIMAL PATEL
// STUDENT ID: 200520260
// DATE: 25th MAY 2022
// LAB-2

int RGBRedPin = 9;    // The red RGB LED is connected to pin 9 of the Arduino.
int RGBGreenPin = 10; // The green RGB LED is connected to pin 10 of the Arduino.
int RGBBluePin = 11;  // The blue RGB LED is connected to pin 11 of the Arduino.
int waitTime = 2000;  // Sets the amount of time to wait between color changes.
int waitTime1 = 500;
int waitTime2 = 750;
int waitTime3 = 950;
int waitTime4 = 600;

void setup() // The Setup function runs once.
{
    Serial.begin(9600);
    pinMode(RGBRedPin, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(RGBGreenPin, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(RGBBluePin, OUTPUT);  // Setup blue RGB LED pin as an output pin.
}
void loop() // The loop function runs forever.
{
    // level1();
    // level2();
    level3();
}

// LEVEL 1

void level1()
{
    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(waitTime);               // Wait for 2 seconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red
    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on Green
    delay(waitTime);                 // Wait for 2 seconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off Green
    // Display Blue
    digitalWrite(RGBBluePin, HIGH); // Turn on Blue
    delay(waitTime);                // Wait for 2 seconds
    digitalWrite(RGBBluePin, LOW);  // Turn off Blue
    // Display Magenta (Red + Blue)
    digitalWrite(RGBRedPin, HIGH);  // Turn on RED
    digitalWrite(RGBBluePin, HIGH); // Turn on Blue
    delay(waitTime);                // Wait for 2 seconds
    digitalWrite(RGBRedPin, LOW);   // Turn off Red
    digitalWrite(RGBBluePin, LOW);  // Turn on Blue
    // Display Yellow (Red + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBGreenPin, HIGH); // Turn on Green
    delay(waitTime);                 // Wait for 2 seconds
    digitalWrite(RGBRedPin, LOW);    // Turn off Red
    digitalWrite(RGBGreenPin, LOW);  // Turn of Green
    // Display Cyan (Blue + Green)
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime);                 // Wait for 2 seconds
    digitalWrite(RGBBluePin, LOW);   // Turn of BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime);                 // Wait for 2 seconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
}

// LEVEL2

void level2()
{
    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(waitTime1);              // Wait for 500 milliseconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red

    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime2);                // Wait for 750 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on Green
    delay(waitTime3);                // Wait for 950 milliseconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off Green

    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(waitTime1);              // Wait for 500 milliseconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red

    // Display Blue
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(waitTime2);               // Wait for 750 milliseconds
    digitalWrite(RGBBluePin, LOW);  // Turn off BLUE

    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on Green
    delay(waitTime3);                // Wait for 950 milliseconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off Green

    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime4);                // Wait for 600 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

    Serial.println("5 seconds have elapsed"); // This is used to print the required text
    // 5 seconds

    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(waitTime1);              // Wait for 500 milliseconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red

    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime2);                // Wait for 750 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on Green
    delay(waitTime3);                // Wait for 950 milliseconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off Green

    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(waitTime1);              // Wait for 500 milliseconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red

    // Display Blue
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(waitTime2);               // Wait for 750 milliseconds
    digitalWrite(RGBBluePin, LOW);  // Turn off BLUE

    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on Green
    delay(waitTime3);                // Wait for 950 milliseconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off Green

    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime4);                // Wait for 600 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

    Serial.println("10 seconds have elapsed");
    // 10 seconds

    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(waitTime1);              // Wait for 500 milliseconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red

    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime2);                // Wait for 750 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on Green
    delay(waitTime3);                // Wait for 950 milliseconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off Green

    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(waitTime1);              // Wait for 500 milliseconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red

    // Display Blue
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(waitTime2);               // Wait for 750 milliseconds
    digitalWrite(RGBBluePin, LOW);  // Turn off BLUE

    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on Green
    delay(waitTime3);                // Wait for 950 milliseconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off Green

    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime4);                // Wait for 600 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

    Serial.println("15 seconds have elapsed");
    // 15 seconds
}

// LEVEL3

void level3()
{
    // Using "for loop"

    for (int x = 0; x <= 11; x = x + 1)
    {

        for (int i = 143; i <= 1428; i = i + 128)

        // The value of i increases with every cycle.
        {
            // Display Green
            digitalWrite(RGBGreenPin, HIGH); // Turn on Green
            delay(i);                        // This will increase in each cycle
            digitalWrite(RGBGreenPin, LOW);  // Turn off Green
            // Display Red
            digitalWrite(RGBRedPin, HIGH); // Turn on RED
            delay(i);                      // This will increase in each cycle
            digitalWrite(RGBRedPin, LOW);  // Turn off Red
            // Display Blue
            digitalWrite(RGBBluePin, HIGH); // Turn on Blue
            delay(i);                       // This will increase in each cycle
            digitalWrite(RGBBluePin, LOW);  // Turn off Blue
            // Display Yellow (Red + Green)
            digitalWrite(RGBRedPin, HIGH);   // Turn on RED
            digitalWrite(RGBGreenPin, HIGH); // Turn on Green
            delay(i);                        // This will increase in each cycle
            digitalWrite(RGBRedPin, LOW);    // Turn off Red
            digitalWrite(RGBGreenPin, LOW);  // Turn of Green
            // Display Magenta (Red + Blue)
            digitalWrite(RGBRedPin, HIGH);  // Turn on RED
            digitalWrite(RGBBluePin, HIGH); // Turn on Blue
            delay(i);                       // This will increase in each cycle
            digitalWrite(RGBRedPin, LOW);   // Turn off Red
            digitalWrite(RGBBluePin, LOW);  // Turn on Blue
            // Display Cyan (Blue + Green)
            digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
            digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
            delay(i);                        // This will increase in each cycle
            digitalWrite(RGBBluePin, LOW);   // Turn of BLUE
            digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
            // Display White (Red + Blue + Green)
            digitalWrite(RGBRedPin, HIGH);   // Turn on RED
            digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
            digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
            delay(i);                        // This will increase in each cycle
            digitalWrite(RGBRedPin, LOW);    // Turn off RED
            digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
            digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

            Serial.print("cycle completed= ");
            Serial.println(x = x + 1);

            delay(2000); // This will give delay of 2 seconds after every cycle.

            // It will take 10 seconds to complete one cycle after 10 complete cycles
        }
    }
}
