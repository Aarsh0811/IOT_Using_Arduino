// NAME: AARSH PARIMAL PATEL
// DATE: 01-06-22
// STUDENT ID: 200520260
// LAB-3

// start with adding variables for potentiometer and RGB

int rotationPin = A0; // The rotation sensor is plugged into pin A0 of the Arduino.
int data = 0;         // Used to store data from sensor.
int slow = 1500;      // its the highest amount of delay
int speed = 0;
int incomingByte = 0;
int RGBRedPin = 9;
int RGBGreenPin = 10;
int RGBBluePin = 11;

void setup()
{                       // The Setup function runs once.
    Serial.begin(9600); // This will enable the Arduino to send data to the Serial monitor.
    pinMode(rotationPin, INPUT);
    pinMode(RGBRedPin, OUTPUT);
    pinMode(RGBGreenPin, OUTPUT);
    pinMode(RGBBluePin, OUTPUT);
}
void loop() // The loop function runs forever.

// creating containers for levels
{
    // level1();
    // level2();
    level3();
    // level4();
}

// level1: The voltage changes when you rotate the potentiometer

void level1()
{
    data = analogRead(rotationPin); // Read the value from the light sensor and store it in the lightData variable.
    Serial.print("Rotation value =");
    Serial.println(data); // Print the data to the serial port.
    delay(1000);          // Wait 1 second (1000mS) before running again.

} // end of level 1

// level2: When the dial is at zero the RGB speed is the slowest, when the dial is at max the speed is at max.

void level2()
{
    data = analogRead(rotationPin); // Read the value from the light sensor and store it in the lightData variable.
    Serial.print("Rotation value =");
    Serial.println(data); // Print the data to the serial port.
    speed = slow - data;  // setting up the delay for lights
    Serial.print("Speed =");
    Serial.println(speed);

    digitalWrite(RGBRedPin, HIGH); // Show Red
    delay(speed);
    digitalWrite(RGBRedPin, LOW);

    digitalWrite(RGBGreenPin, HIGH); // Show Green
    delay(speed);
    digitalWrite(RGBGreenPin, LOW);

    digitalWrite(RGBBluePin, HIGH); // Show Blue
    delay(speed);
    digitalWrite(RGBBluePin, LOW);

} // end of level 2

// level3: Using the rotation sensor to cycle through the colours of the rainbow.

void level3()
{
    data = analogRead(rotationPin); // Read the value from the light sensor and store it
    Serial.print("Rotation value =");
    Serial.println(data); // Print the data to the serial port.

    // using  if statements to set up the values with the corresponding colours
    if (data < 150)
    {
        analogWrite(RGBRedPin, 255); // Show Red
        analogWrite(RGBGreenPin, 0);
        analogWrite(RGBBluePin, 0);
    }

    else if (data >= 150 && data < 300)
    {
        analogWrite(RGBRedPin, 255); // Show Orange
        analogWrite(RGBGreenPin, 15);
        analogWrite(RGBBluePin, 0);
    }

    else if (data >= 300 && data < 450)
    {
        analogWrite(RGBRedPin, 255); // Show Yellow
        analogWrite(RGBGreenPin, 255);
        analogWrite(RGBBluePin, 0);
    }

    else if (data >= 450 && data < 600)
    {
        analogWrite(RGBRedPin, 0);
        analogWrite(RGBGreenPin, 255); // Show Green
        analogWrite(RGBBluePin, 0);
    }

    else if (data >= 600 && data < 750)
    {
        analogWrite(RGBRedPin, 0);
        analogWrite(RGBGreenPin, 0);
        analogWrite(RGBBluePin, 255); // Show Blue
    }

    else if (data >= 750 && data < 1023)
    {
        analogWrite(RGBRedPin, 155); // Show Purple
        analogWrite(RGBBluePin, 255);
        analogWrite(RGBGreenPin, 0);
    } // end of if statements

} // end of level 3

// level 4: Displaying the sequence of Red, Green and Blue colors when their values are inputted.

void level4()
{

    Serial.println("\nPlease input the combination of R,G or B letters");
    delay(3000);

    // using if statements
    while (Serial.available() > 0) // using this to check the availability of the variable of the inputted characters.
    {
        // read the incoming byte:
        incomingByte = Serial.read(); // this reads the inputted character
        // say what you got:
        // Serial.print("I received: ");
        //  Serial.println(incomingByte, DEC);

        if (incomingByte == 82)
        {
            analogWrite(RGBRedPin, 255); // Show Red
            analogWrite(RGBGreenPin, 0);
            analogWrite(RGBBluePin, 0);
            Serial.print("R");
        }

        else if (incomingByte == 71)
        {
            analogWrite(RGBRedPin, 0);
            analogWrite(RGBGreenPin, 255); // Show Green
            analogWrite(RGBBluePin, 0);
            Serial.print("G");
        }

        else if (incomingByte == 66)
        {
            analogWrite(RGBRedPin, 0);
            analogWrite(RGBGreenPin, 0);
            analogWrite(RGBBluePin, 255); // Show Blue
            Serial.print("B");
        }
        delay(1000);

    } // end of if statements

} // end of level 4
