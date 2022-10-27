// NAME: AARSH PARIMAL PATEL
// DATE: 5TH JUNE 2022
// STUDENT ID: 200520260
// LAB: 4 (LEVEL-3)

int lightPin = A1; // The light sensor is plugged into pin A1 of the Arduino.
int data = 0;      // This will store the data from the sensor.

// setting up the lights
int RED = 9;    // The red channel of rgb is connected to pin 9 of the Arduino
int GREEN = 10; // The green channel of rgb is connected to pin 10 of the Arduino
int BLUE = 11;  // The blue channel of rgb is connected to pin 11 of the Arduino

// the below mentioned integers determine the range of  values
// from which the rgb will display different colors.
int dark = 55;
int mid = 80;
int bright = 100;

void setup()
{ // The Setup function runs once.
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    Serial.begin(9600); // This allows us to print text in the serial monitor.
}

// level 3: Writing a program that turn on the red channel on the RGB led (D9)
// when it is dark, the blue channel(D11) when there is some light, and the Green RGB
// channel(D10) when the light sensor detects a bright light.

void loop()
{                                     // The loop function runs forever.
    data = analogRead(lightPin);      // Read the value from the light sensor and store it in the lightData variable.
    data = map(data, 6, 679, 0, 100); // map the data value to a percentage
    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.

    // adding if statement

    if (data < dark)
    {
        analogWrite(RED, 255); // Show RED
        analogWrite(GREEN, 0);
        analogWrite(BLUE, 0);
    }

    else if (data > dark && data < mid)
    {
        analogWrite(RED, 0);
        analogWrite(GREEN, 0);
        analogWrite(BLUE, 255); // Show BLUE
    }

    else if (data > mid && data < bright)
    {
        analogWrite(RED, 0);
        analogWrite(GREEN, 255); // Show GREEN
        analogWrite(BLUE, 0);

    } // end of if statement

} // end of level 3
