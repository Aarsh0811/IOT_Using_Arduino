// NAME: AARSH PARIMAL PATEL
// STUDENT ID: 200520260
// DATE:19/07/2022
// LAB-9

#include <IRremote.h> //including infrared remote header file
int RECV_PIN = 11;    // the pin where you connect the output pin of IR sensor
IRrecv irrecv(RECV_PIN);
decode_results results;
int blueLed = 12;
int redLed = 13;
int redRGB = 8;
int greenRGB = 9;
int blueRGB = 10;
int value = 0;
int brightness = 0;
int low = 255;
void setup()
{
    Serial.begin(9600);
    irrecv.enableIRIn();
}
void loop()
{
    // level1();
    // level2();
    level3();
}
void level1()
{
    if (irrecv.decode(&results))
    {
        value = results.value;
        Serial.println(" ");
        Serial.print("Code: ");
        Serial.println(value); // prints the value a a button press
        Serial.println(" ");
        irrecv.resume(); // Receive the next value
        Serial.println("*****************");
        if (value == 2295)
        {
            digitalWrite(blueLed, HIGH);
            delay(500);
        }
        else
        {
            digitalWrite(blueLed, LOW);
            delay(500);
        }
    }
}
void level2()
{

    if (irrecv.decode(&results))
    {
        value = results.value;
        Serial.println(" ");
        Serial.print("Code: ");
        Serial.println(value); // prints the value a a button press
        Serial.println(" ");
        irrecv.resume(); // Receive the next value
        Serial.println("*****************");
        if (value == 12495)
        {
            digitalWrite(blueLed, HIGH);
            delay(500);
        }
        else if (value == 2295)
        {
            digitalWrite(redLed, HIGH);
            delay(500);
        }
        else if (value == -30601)
        {
            digitalWrite(blueLed, LOW);
            delay(500);
        }
        else if (value == 18615)
        {
            digitalWrite(redLed, LOW);
            delay(500);
        }
        else if (value == 10455)
        {
            digitalWrite(redLed, HIGH);
            digitalWrite(blueLed, HIGH);
            delay(500);
            digitalWrite(redLed, LOW);
            digitalWrite(blueLed, LOW);
            delay(500);
            digitalWrite(redLed, HIGH);
            digitalWrite(blueLed, HIGH);
            delay(500);
            digitalWrite(redLed, LOW);
            digitalWrite(blueLed, LOW);
            delay(500);
            digitalWrite(redLed, HIGH);
            digitalWrite(blueLed, HIGH);
            delay(500);
            digitalWrite(redLed, LOW);
            digitalWrite(blueLed, LOW);
            delay(500);
        }
    }
}

void level3()
{

    if (irrecv.decode(&results))
    {
        value = results.value;
        Serial.println(" ");
        Serial.print("Code: ");
        Serial.println(value); // prints the value a a button press
        Serial.println(" ");
        irrecv.resume(); // Receive the next value
        Serial.println("*****************");
        if (value == 2295)
        {
            analogWrite(rgb, 150);
            analogWrite(rgbR, 0);
            analogWrite(rgbG, 0);
        }
        else if (value == -30601)
        {
            analogWrite(rgbB, 20);
            analogWrite(rgbR, 0);
            analogWrite(rgbG, 0);
        }
        else if (value == 18615)
        {
            analogWrite(rgbB, 255);
            analogWrite(rgbR, 0);
            analogWrite(rgbG, 0);
        }
        else if (value == 10455)
        {
            digitalWrite(rgbR, HIGH);
            delay(500);
            digitalWrite(rgbR, LOW);
            delay(500);
            digitalWrite(rgbG, HIGH);
            delay(500);
            digitalWrite(rgbG, LOW);
            delay(500);
            digitalWrite(rgbB, HIGH);
            delay(500);
            digitalWrite(rgbB, LOW);
        }
        else
        {
            digitalWrite(rgbR, LOW);
