#include <Joystick.h>

Joystick_ Joystick;

int xVal = 0;
int potPin = A0;
double xAxis = 0;
float multiplier = 1.4;

void setup() {
  Joystick.setXAxisRange(-127, 127);
  Joystick.setYAxisRange(-127, 127);
  Joystick.begin();
//Serial.begin(9600);
}

void loop() {
   xVal = analogRead(potPin);
   xAxis = ((0.24828934506 * xVal) - 127) * multiplier;
   
   if (xAxis < -127){
    xAxis = -127;
   }
   else if (xAxis > 127){
    xAxis = 127;
   }
   
   Joystick.setXAxis(xAxis);
   Joystick.setYAxis(0);
   Joystick.sendState();
 //Serial.println(xAxis);
}
