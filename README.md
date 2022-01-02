# Projekt-SilnikDC_SM

## To-do list
 - [ ] USB serial communication
 - [ ] ADC with potentiometer and motor controll
 - [ ] PID Control
 - [ ] LCD 
 - [ ] Button for switching between reference signal features
 - [ ] Telemetry 

 ## About the project
 Controller can work in two different modes which are being swaped with button. First mode is USB mode in which we use UART serial communication to receive reference signal value and apply it in our programm. Controller is also sending data about measurments via UART to telemetry programm. 

 Second mode uses ADC to read data and then scale its value to fit to our motor. This way we can use simple potentiometer to set motor's rotational speed to value at hand without using PC or other device with USB port.

 We control our motor with PID regulator and we also use LCD display to showcase current rotational speed(and maybe something more). 