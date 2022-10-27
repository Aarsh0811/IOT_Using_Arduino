// Name: Aarsh Parimal Patel
// Student Id: 200520260
// Date: 06/07/2022
// Lab-7

/*************************************************
 * Public Constants
 *************************************************/
#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978

// setting up the pins and rgb
int buzzerPin = 5;  // The buzzerPin is connected to pin 5 of the Arduino.
int button1Pin = 2; // The SW1 button is connect to pin 2 of the Arduino.
int RED = 9;        // The RED Pin is connected to pin 9 of the Arduino.
int GREEN = 10;     // The GREEN Pin is connected to pin 10 of the Arduino.
int BLUE = 11;      // The BLUE Pin is connected to pin 11 of the Arduino.
// setting up the arrays for notes and their durations
int notes[] = {NOTE_C5, NOTE_E5, NOTE_A5, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_B5, NOTE_E5, NOTE_A5, NOTE_B5, NOTE_E5, NOTE_A5, NOTE_B5, NOTE_E5, NOTE_A5, NOTE_B5, NOTE_D5, NOTE_G5, NOTE_B5, NOTE_D5, NOTE_G5, NOTE_B5, NOTE_D5, NOTE_G5, NOTE_B5, NOTE_D5, NOTE_G5, NOTE_B5, NOTE_D5, NOTE_G5};
int duration[] = {150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150};
int colour;
int incomingByte = 0;
void setup()
{                               // The Setup function runs once.
    pinMode(buzzerPin, OUTPUT); // Setup buzzer pin as an output pin.
    pinMode(button1Pin, INPUT); // Setup button1 pin as an input pin.
    pinMode(RED, OUTPUT);       // Setup red pin as output pin.
    pinMode(GREEN, OUTPUT);     // Setup green pin as output pin.
    pinMode(BLUE, OUTPUT);      // Setup blue pin as output pin.
    randomSeed(analogRead(A0)); // for getting random values.
    Serial.begin(9600);         // this will allow us to print in the serial monitor
}
void loop()
{ // The loop function runs forever.
    // this will act as a container for levels.

    // level1();
    // level2();
    // level3();
    level4();
}

// level 1: Checking if the buzzer works.
void level1()
{
    // adding if statement
    if (digitalRead(button1Pin) == HIGH)
    {                              // Check to see if button1 is pressed.
        tone(buzzerPin, 1000, 50); // Play a tone of 1000Hz for 50 milliseconds.

    } // end of if statement
} // end of level 1

// level 2:
void level2()
{
    // adding if statement
    if (digitalRead(button1Pin) == HIGH)
    {

        // adding notes for the tune

        tone(buzzerPin, NOTE_C5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_C5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_C5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_C5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_C5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_C5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_C5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_C5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_B5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_B5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_B5, 150);
        delay(10);
        tone(buzzerPin, NOTE_E5, 150);
        delay(10);
        tone(buzzerPin, NOTE_A5, 150);
        delay(250);
        tone(buzzerPin, NOTE_B5, 150);
        delay(10);
        tone(buzzerPin, NOTE_D5, 150);
        delay(10);
        tone(buzzerPin, NOTE_G5, 150);
        delay(250);
        tone(buzzerPin, NOTE_B5, 150);
        delay(10);
        tone(buzzerPin, NOTE_D5, 150);
        delay(10);
        tone(buzzerPin, NOTE_G5, 150);
        delay(250);
        tone(buzzerPin, NOTE_B5, 150);
        delay(10);
        tone(buzzerPin, NOTE_D5, 150);
        delay(10);
        tone(buzzerPin, NOTE_G5, 150);
        delay(250);
        tone(buzzerPin, NOTE_B5, 150);
        delay(10);
        tone(buzzerPin, NOTE_D5, 150);
        delay(10);
        tone(buzzerPin, NOTE_G5, 150);
        delay(250);
        tone(buzzerPin, NOTE_B5, 150);
        delay(10);
        tone(buzzerPin, NOTE_D5, 150);
        delay(10);
        tone(buzzerPin, NOTE_G5, 150);
        delay(250);

    } // end of if statement
} // end of level 2

// level 3: Creating a song and using arrays to store the notes and durations. Then adding
// a light show.
void level3()
{

    // adding if statement
    if (digitalRead(button1Pin) == HIGH)
    {

        // adding for loop
        for (int i = 0; i < (sizeof(notes) / sizeof(notes[0])); i++)
        {
            colour = random(9, 12); // this will display random lights with the tune.
            tone(buzzerPin, notes[i], duration[i]);
            digitalWrite(colour, HIGH);
            delay(duration[i] + 100);
            digitalWrite(colour, LOW);

        } // end of for loop

    } // end of if statement

} // end of level 3

// level 4: Creating a menu on the monitor that gives the user an option between 3
// songs
void level4()
{
    Serial.println("Please input the value to play your tune!!!");
    Serial.println("1. Tune-1");
    Serial.println("2. Tune-2");
    Serial.println("3. Tune-3");
    while (Serial.available() == 0)
    {
    } // this will stop the loop until input received.
    incomingByte = Serial.read();

    // adding if statements

    if (digitalRead(button1Pin) == LOW)
    { // Check to see if button1 is pressed.
        if (incomingByte == 49)
        {
            tone(buzzerPin, NOTE_C5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_C5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(10);
            tone(buzzerPin, NOTE_E5, 150);
            delay(10);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(10);
            tone(buzzerPin, NOTE_D5, 150);
            delay(10);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(10);
            tone(buzzerPin, NOTE_D5, 150);
            delay(10);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(10);
            tone(buzzerPin, NOTE_D5, 150);
            delay(10);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(10);
            tone(buzzerPin, NOTE_D5, 150);
            delay(10);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(10);
            tone(buzzerPin, NOTE_D5, 150);
            delay(10);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);
        }
        else if (incomingByte == 50)
        {
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_D5, 150);
            delay(250);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_D5, 150);
            delay(250);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_D5, 150);
            delay(250);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_D5, 150);
            delay(250);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);

            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_D5, 150);
            delay(250);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);
        }
        else if (incomingByte == 51)
        {
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_D5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_F5, 150);
            delay(250);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
            tone(buzzerPin, NOTE_B5, 150);
            delay(250);
            tone(buzzerPin, NOTE_A5, 150);
            delay(250);
            tone(buzzerPin, NOTE_G5, 150);
            delay(250);
            tone(buzzerPin, NOTE_F5, 150);
            delay(250);
            tone(buzzerPin, NOTE_E5, 150);
            delay(250);
            tone(buzzerPin, NOTE_D5, 150);
            delay(250);
            tone(buzzerPin, NOTE_C5, 150);
            delay(250);
        }

    } // end of if statements
} // end of level 4
