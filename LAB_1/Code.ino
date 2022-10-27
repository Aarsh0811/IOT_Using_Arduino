// NAME: AARSH PARIMAL PATEL
// DATE: 12/05/2022

// Use '//' symbols for comments
// variables
int blueLED = 13;
int redLED = 12;
void setup()
{
    pinMode(blueLED, OUTPUT);
    pinMode(redLED, OUTPUT);
}
void loop()
{
    // level1();
    // level2();
    level3();
}

// LEVEL 1

// Below is how to store levels
void level1()
{
    // Slow flashing of blue LED 3 times
    digitalWrite(blueLED, HIGH); // turn LED ON
    delay(1000);                 // Wait for 1000 millisecond(s)

    //'HIGH' manifests that the LED is ON
    //'delay' is the amount of time for which the LED remains ON or OFF
    //'LOW' manifests that the LED is OFF

    digitalWrite(blueLED, LOW); // turn LED OFF
    delay(1000);                // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    // Quick flashing of blue LED 3 times
    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
}

// LEVEL 2 (Using Morse Code)
void level2()
{
    // Here, a 'dot' would have the LED ON for 100 mS
    // And for a 'dash' the LED would be ON for 1000 mS

    // Letter A - DOT,DASH
    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    // Letter P - DOT,DASH,DASH,DOT

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
}

// LEVEL 3 (Simulation of an emergency vehicle)

// Here the times for which the LEDs would remain ON should be alternate.

void level3()
{
    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(redLED, LOW);
    delay(500); // Wait for 500 millisecond(s)

    digitalWrite(redLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(500); // Wait for 500 millisecond(s)
}
