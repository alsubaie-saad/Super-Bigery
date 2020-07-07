#include <Servo.h>

int IDR = 0;

int R = 0;

int PIR = 0;

int R1 = 0;

Servo servo_6;

Servo servo_5;

void setup()
{
  pinMode(A0, INPUT);
  servo_6.attach(6);

  pinMode(A1, INPUT);
  servo_5.attach(5);

}

void loop()
{
  IDR = analogRead(A0);
  R = map(IDR, 0, 1023, 180, 0);
  servo_6.write(R);
  PIR = analogRead(A1);
  R1 = map(PIR, 0, 1023, 180, 0);
  
  if (R1 > 102) {
   servo_5.write(180);
  }
  if (R1 < 100) {
    servo_5.write(90);
  }
  delay(10); // Delay a little bit to improve simulation performance
}