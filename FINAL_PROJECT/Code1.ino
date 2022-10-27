// NAME: AARSH PARIMAL PATEL
// STUDENT ID: 200520260
// DATE: 16/08/2022
// FINAL PROJECT: SMART DOOR WITH SMART LIGHT

// ***This is the continuation of the smart door system project. The smart light will turn on when a person comes near the door.
// However, the light will only turn ON when it's dawn or night time. It also has a doorbell for the door with lights.***

// adding components for our smart light.
#define NOTE_DS4 311
#define NOTE_B3 247

// adding variables.
int button = 2;                    // The button is connected to pin 2 of the Arduino.
int buzzer = 4;                    // The buzzer is connected to pin 4 of the Arduino.
int bulb = 9;                      // The bulb is connected to pin 9 of the Arduino.
int red = 5;                       // The red rgb is connected to pin 5 of the Arduino.
int green = 6;                     // The green rgb is connected to pin 6 of the Arduino.
int blue = 7;                      // The blue rgb is connected to pin 7 of the Arduino.
int lightPin = A1;                 // The light sensor is plugged into pin A1 of the Arduino.
int data = 0;                      // for our photoresistor
int dark = 75;                     // variable for photoresistor value
int distance;                      // for our ultrasonic sensor
int notes[] = {NOTE_DS4, NOTE_B3}; // notes for our buzzer
int duration[] = {150};            // duration for our buzzer
int trigger_pin = 12;              // The triggerpin of ultrasonic sensor is connnected to pin 12 of Arduino.
int echo_pin = 10;                 // The echopin of ultrasonic sensor is connnected to pin 12 of Arduino.
int time;                          // for our ultrasonic sensor

void setup()

{
    // setting up our components to function.
    pinMode(button, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(bulb, OUTPUT);
    pinMode(trigger_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
}

void loop()

{ // The loop function runs forever.

    data = analogRead(lightPin);      // Read the value from the light sensor and store it in the lightData variable.
    data = map(data, 6, 679, 0, 100); // mapping the values to new values.
    digitalWrite(trigger_pin, HIGH);
    delay(10);
    digitalWrite(trigger_pin, LOW);
    time = pulseIn(echo_pin, HIGH);
    distance = (time * 0.034) / 2;

    // adding if statements
    if (data < dark && distance <= 180)

    {

        digitalWrite(bulb, HIGH); // bulb ON
    }

    else

    {
        digitalWrite(bulb, LOW); // bulb OFF
        delay(100);
    }

    if (digitalRead(button) == HIGH)

    {

        analogWrite(red, 255); // display RED
        analogWrite(green, 0);
        analogWrite(blue, 0);
        delay(50);
        analogWrite(red, 0);
        analogWrite(green, 255); // display GREEN
        analogWrite(blue, 0);
        delay(50);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 255); // display BLUE
        delay(50);
        tone(buzzer, NOTE_DS4, 311); // buzzer ON
        delay(120);
        tone(buzzer, NOTE_B3, 247);
        delay(120);
    }

    else

    {
        digitalWrite(buzzer, LOW); // buzzer OFF
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0); // all RGBs OFF
        delay(100);

    } // end of if statements

} // end of loop

// end of code for smart light.
