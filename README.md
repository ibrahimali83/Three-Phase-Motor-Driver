# Three-Phase-Motor-Driver

Three-Phase-Motor-Driver:

I implemented this project individually during embedded systems internship, the project represents the ability of using micro-controller in one of the industrial applications. In the project I used ATmega32 micro-controller to control the operation (On/ Off operation) of three phase motor and also reversing the direction of the motor. The motor is connected in star-delta starter method, then we can use the driver with motor consuming high power. Behind this project I aimed to bring up the idea of using micro-controller as an alternative to PLC modules, which will have a great impact on the cost of projects.
The project design using the finite state machine model.
The operation sequence in any direction is start of main contactor of any direction simultaneously with star contactor and hold for 5 seconds, then star contactor will be off and delta contactor will switch on and remains along with the main one.
The driver provides two main safety fearures; first is it provides interlock protection against pressing the reverse direction button by mistake during running, where this order will be ignored. Second it provides protection aginst pressing the reverse direction directly after stopping the motor by ignorng the reverse direction order for 5 minutes after stop, where during this period it will be allowed to re-request the operation of the previous direction.

The components used:

1. ATmega32 micro-controller.
2. Three push-buttons to control operation and direction (Star right, start left and stop)
3. Four contactors (Star, Delta, Right and left).
4. External interfacing between micro-controller and contactor coils (can use open collector buffer gates, 5V Relays or transistor).
5. Three phase motor.

ATmega32 programmed using Microchip Studio IDE. The project simulated on Proteus software.

The prepherals used:

1. GPIO.
2. Timer 0.
