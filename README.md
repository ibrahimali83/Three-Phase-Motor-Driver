# Three-Phase-Motor-Driver

Three-Phase-Motor-Driver:

1. Overview:
I implemented this project individually during embedded systems internship, the project represents the ability of using micro-controller in one of the industrial applications. In the project I used ATmega32 micro-controller to control the operation (On/ Off operation) of three phase motor and also reversing the direction of the motor. The motor is connected in star-delta starter method, then we can use the driver with motor consuming high power. Behind this project I aimed to bring up the idea of using micro-controller as an alternative to PLC modules, which will have a great impact on the cost of projects. The project design using the finite state machine model.

2. Operation Modes: 
The operation sequence in any direction is start of main contactor of any direction simultaneously with star contactor and hold for 5 seconds, then star contactor will be off and delta contactor will switch on and remains along with the main one. The driver provides two main safety fearures; first is it provides interlock protection against pressing the reverse direction button by mistake during running, where this order will be ignored. Second it provides protection aginst pressing the reverse direction directly after stopping the motor by ignorng the reverse direction order for 5 minutes after stop, where during this period it will be allowed to re-request the operation of the previous direction.

3. System Components:
1. ATmega32 micro-controller.
2. Three push-buttons to control operation and direction (Star right, start left and stop)
3. Four contactors (Star, Delta, Right and left). "represented by 4 LEDs in the simulation"
4. External interfacing between micro-controller and contactor coils (can use open collector buffer gates, 5V Relays or transistor). "Not included in the simulation".
5. Three phase motor.

4. prepherals used:

GPIO.
Timer 0.

5. System Static Design: 

The system consists of three layers in three levels, each layer is abstracted (isolated) from the others to achieve the modular programming concept, layers arrangement (SOLID principles)
Drivers and folder structure are linked together as follows: 
- System Layers: 
Each layer concerns with the corresponding drivers/ modules: 
1- MCAL: (Micro Controller Abstract Layer) 
This is microcontroller dependent layer, involves the microcontroller peripheral drivers. 
2- ECUAL: (Electronic Unit Abstract Layer) 
This layer is components dependent, involves the drivers of the hardware connected externally with the microcontroller. 
3- APP: (Application Layer) 
This layer includes the application code which will be called by the (main.c) file. 
- System Drivers/ Modules: 
Each layer has its own drivers arranged in separate folders 
- Folder Structure: 
Each layer has its own folder, each folder divided into sub-folders for drivers and each sub-folder has two files (file.c) for function implementation and header (file.h) for function prototypes. The folder structure will be as follows: 
1- MCAL: (Micro Controller Abstract Layer) 
This layer includes the drivers related to microcontroller peripherals: 
1. GPIO driver (DIO.c & DIO.h). 
2. Timer driver (TIMER.c & TIMER.h). 
2- ECUAL: (Electronic Unit Abstract Layer) 
This layer includes the following drivers: 
1. Button driver (BUTTON.c & BUTTON.h). 
2. Contactor driver (CONTACTOR.c & CONTACTOR.h). 
3- APP: (Application Layer) 
This layer includes the application code in two files (APP.c & APP.h) which will be called by the (main.c) file. 

** Micro-controller programmed using Microchip Studio IDE. The project simulated on Proteus software.
