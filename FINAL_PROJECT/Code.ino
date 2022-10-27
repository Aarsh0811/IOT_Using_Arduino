// NAME: AARSH PARIMAL PATEL
// STUDENT ID: 200520260
// DATE: 16/08/2022
// FINAL PROJECT: SMART DOOR WITH SMART LIGHT

// ***This project is about the smart door lock system has a smart lock with smart light. The person using the door has to enter
// the correct password in order to unlock the door. If the passcode entered is incorrect the buzzer will ring suggesting an unauthorised
// attempt to open the door. If the correct password is entered, the door will unlock and will re-lock itself after a few moments.***

// adding components for our smart door.
#include <Keypad.h>
#include <Servo.h>
#include <LiquidCrystal.h>
#define NOTE_D6 1175
#include <EEPROM.h>
Servo myservo;                          // adding our servo immitating a door
LiquidCrystal lcd(12, 11, 5, 4, 10, 9); // LCD pins connected to the Arduino

// adding variables.
char password[4];
char initial_password[4];
int i = 0;
int led = 8;             // green led is connected to pin 8 of the Arduino.
int redled = 6;          // red led is connected to pin 6 of the Arduino.
int notes[] = {NOTE_D6}; // note for our buzzer
int duration[] = {150};  // duration for our buzzer
int buzzer = 7;          // buzzer
char keypressed = 0;
const byte rows = 4;
const byte columns = 4;
char hexaKeys[rows][columns] = // for our keypad

    {

        {'1', '2', '3', 'A'},

        {'4', '5', '6', 'B'},

        {'7', '8', '9', 'C'},

        {'*', '0', '#', 'D'}

};

byte rowpins[rows] = {A0, A1, A2, A3};
byte columnpins[columns] = {A4, A5, 3, 2};
Keypad keypadkey = Keypad(makeKeymap(hexaKeys), rowpins, columnpins, rows, columns);

void setup()

{

    // setting up our components to function.
    myservo.attach(13); // servo is attached in port 13
    myservo.write(0);
    pinMode(buzzer, OUTPUT);
    Serial.begin(9600); // this will allow us to print data in our serial monitor
    pinMode(redled, OUTPUT);
    pinMode(led, OUTPUT);
    lcd.begin(16, 2); // this will allow us to print in our lcd screen.
    lcd.print(" Aarsh ");
    lcd.setCursor(0, 1);
    lcd.print("Smart Door Lock ");
    delay(1500);
    lcd.clear();
    lcd.print("Enter Password");
    lcd.setCursor(0, 1);
    initialpassword();
}

void initialpassword() // this is the loop for our password

{

    for (int j = 0; j < 4; j++)
        EEPROM.write(j, j + 49);
    for (int j = 0; j < 4; j++)
        initial_password[j] = EEPROM.read(j);
}

void loop() // loop function runs forever and it will contain all our functional code

{

    keypressed = keypadkey.getKey(); // for key pressed in keypad

    // adding if statements

    if (keypressed)

    {
        password[i++] = keypressed;
        lcd.print(keypressed);
    }

    if (i == 6) // for our six digit passcode.

    {
        delay(200);
        for (int j = 0; j < 6; j++)
            initial_password[j] = EEPROM.read(j);

        if (!(strncmp(password, initial_password, 4))) // for correct password entered

        {
            lcd.clear();
            lcd.print("Pass Accepted");
            lcd.setCursor(0, 1);
            tone(buzzer, NOTE_D6, 70); // turn on buzzer
            delay(120);
            tone(buzzer, NOTE_D6, 70);
            delay(120);
            lcd.print("Opening the door");
            myservo.write(180);      // door unlocks
            digitalWrite(led, HIGH); // green led ON
            delay(2000);
            digitalWrite(led, LOW); // green led OFF
            delay(2500);
            lcd.clear();
            lcd.print("RE-LOCKING");
            myservo.write(0); // relocks the door
            delay(500);
            tone(buzzer, NOTE_D6, 70); // turn on  buzzer
            delay(120);
            tone(buzzer, NOTE_D6, 70);
            delay(120);
            digitalWrite(led, HIGH); // green led ON
            delay(500);
            digitalWrite(led, LOW); // green led OFF
            lcd.setCursor(10, 0);
            lcd.print(".");
            delay(200);
            lcd.setCursor(11, 0);
            lcd.print(".");
            delay(200);
            lcd.setCursor(12, 0);
            lcd.print(".");
            delay(400);
            lcd.clear();
            lcd.setCursor(4, 0);
            lcd.print("LOCKED!");
            delay(1500);
            setup(); // again goes to the start.
        }

        else // if password is incorrect.

        {
            lcd.clear();
            lcd.print("Wrong Password");
            lcd.setCursor(0, 1);
            lcd.print("Try Again!");
            digitalWrite(redled, HIGH); // red led ON
            digitalWrite(buzzer, HIGH); // buzzer ON
            lcd.setCursor(0, 1);
            delay(3000);
            digitalWrite(redled, LOW); // red led OFF
            digitalWrite(buzzer, LOW); // buzzer OFF
            delay(1000);
            setup(); // again goes to the start.
        }

    } // end of if statements

} // end of loop

// end of code for smart door
