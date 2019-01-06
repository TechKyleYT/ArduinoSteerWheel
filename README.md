# ArduinoSteerWheel

# Description:
This is an Arduino sketch for the Arduino (pro) micro or Arduino Leonardo aimed to make an analoge steering wheel controller for racing/ car games.
Youtube tutorial: https://www.youtube.com/watch?v=CoUSaNK572E

# Requirements:
- Arduino Joystick Library by MHeironimus: https://github.com/MHeironimus/ArduinoJoystickLibrary

# Tools for Xinput games/ optimize the formula:
- x360ce: https://github.com/x360ce/x360ce
- Desmos graphing calculator online: https://www.desmos.com/calculator

# NOTE:
In the code there is a "Serial.begin(9600);" and a "Serial.println(xAxis);" which are commented out (using a "//" before them). To use these, simply uncomment them. When done troubleshooting: COMMENT THESE! Otherwise you may experience extreme input lag!
