# Projekt-SilnikDC_SM

## To-do list
 - [x] USB serial communication
 - [x] ADC with potentiometer and motor controll
 - [x] PID Control
 - [x] Button for switching between reference signal features
 - [x] Telemetry 

 ## About the project
 Controller can work in two different modes which are being swaped with button. First mode is USB mode in which we use UART serial communication to receive reference signal value and apply it in our programm. Controller is also sending data about measurments via UART to telemetry programm. 

 Second mode uses ADC to read data and then scale its value to fit to our motor. This way we can use simple potentiometer to set motor's rotational speed to value at hand without using PC or other device with USB port.

 We control our motor with PID regulator and we also use LCD display to showcase current rotational speed(and maybe something more). 

 ## Pins configuration:
 Pins:
 - ADC: IN3 -> PA3
 - PWM: OUT -> PE9
 - Encoder TI1 -> PA6, TI2 -> PC7
 - LCD:
    - D4 -> PC0
    - D5 -> PC3
    - D6 -> PF3
    - D7 -> PF7
    - EN -> PD7
    - RS -> PF10


