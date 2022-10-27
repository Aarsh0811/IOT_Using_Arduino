// NAME: AARSH PARIMAL PATEL
// STUDENT ID: 200520260
// DATE: 13TH JULY 2022
// LAB-8

#include <LiquidCrystal.h>
// Initialize the Serial LCD.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// These pin numbers are hard coded in on the serial backpack board.

// adding variables
int answer[2] = {0, 0};
int start = 0;
int button1 = 8;
int button2 = 9;
int aar = 0;

// adding questions for level 4
char *question[4] = {"How are you?", "Are you fine?", "Do you play?", "Are you good?"};

void setup()
{
    lcd.begin(16, 2); // Initialize the LCD.
    lcd.print("AARSH");
    pinMode(button1, INPUT);
}

void loop()
{
    // This loop function runs forever and it also acts as a container for levels.
    level1();
    // level2();
    // level3();
}

// level 1: Testing the circuit.
void level1()
{
    lcd.clear();
    lcd.setCursor(0, 0);    // goto first column and first line (0,0)
    lcd.print("200520260"); // Print at cursor Location
    lcd.setCursor(0, 1);    // goto first column and second line
    lcd.print("AARSH");     // Print at cursor Location
    delay(1000);

} // end of level 1

// level 2: Writing a program that prints your name and have it shift your name back and forth
// across the LCD. It should move to the right on the top row,stop at the edge of the screen, then
// come back in on the bottom row moving left until the edge of the screen then repeats.

void level2()
{
    // adding for loops
    for (int a = 0; a <= 11; a++)
    {
        lcd.setCursor(a, 0);
        lcd.print("AARSH");
        delay(500);
        lcd.clear();
    }

    for (int p = 11; p >= 0; p--)
    {
        lcd.setCursor(p, 1);
        lcd.print("AARSH");
        delay(500);
        lcd.clear();

    } // end of for loops

} // end of level 2

// level 3: Write a program that will display your name, then when the user presses sw1 (d8) your
// favorite hobby or interest will be displayed. Then if they push sw1 (d8) again, the display will
// show what you want for lunch. Finally if sw1 (d8) is pushed again then the display reset and
// display your name again.

void level3()
{

    // adding if statements
    if (digitalRead(button1) == HIGH)
    {
        start++;
        delay(300);
        if (start > 2)
        {
            start = 0;
        }

        lcd.clear();
        if (start == 0)
        {
            lcd.setCursor(0, 0); // goto first column and first line (0,0)
            lcd.print("AARSH");  // Print at cursor Location
        }

        else if (start == 1)
        {
            lcd.setCursor(0, 0); // goto first column and first line (0,0)
            lcd.print("MUSIC");  // Print at cursor Location
        }

        else if (start == 2)
        {
            lcd.setCursor(0, 0);  // goto first column and first line (0,0)
            lcd.print("BIRYANI"); // Print at cursor Location
        }
        delay(600);
    }
    // end of if statements
}
// end of level 3

// level 4: Add two buttons to the circuit board. Create a short (4-5 questions) survey where the
// person is asked a question then response with either yes or no using the two buttons. Keep
// track of the number of each response.Store all questions and answers in arrays. At the end of
// the program have a closing message that's chosen based on how many times they said yes or
// no.

void level4()
{
}
