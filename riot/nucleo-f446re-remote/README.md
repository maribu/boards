# About

This contains the RIOT boards files for using a generic "Nokla 5110" Arduino
Joystick shield attached on a Nucleo-F446RE board with an nRF24L01+ breakout
board inserted on the side. Sadly, the nRF24L01+ connector leaves the IRQ pin
of the breakout board unconnected. Hence, this pin has to be connected by
soldering a fly wire which is assumed to be connected to PC0 (connector
CN7 the bottom-most right-most pin).
