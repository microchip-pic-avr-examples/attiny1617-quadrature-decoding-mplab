<a href="https://www.microchip.com" rel="nofollow"><img src="images/microchip.png" alt="MCHP" width="300"/></a>

# ATtiny1617 Quadrature Decoding using CCL with TCA and TCB

<a><img src="images/diagram.png" alt="diagram" width="800"/></a>

Incremental quadrature encoders are used in a great number of applications across many disciplines as they provide a low-cost way of measuring motion in systems with moving parts. Some typical examples include measuring the position of a physical control wheel or measuring the rotor angle and velocity in an electrical motor.

The example is explained in more details in the application note [AN2434](http://ww1.microchip.com/downloads/en/Appnotes/Interf-Quad-Encoder-CCL-w-TCA-TCB-DS00002434C.pdf).

[![Night Light](https://img.youtube.com/vi/7nc8nTQA1Uo/0.jpg)](https://www.youtube.com/watch?v=7nc8nTQA1Uo)

## Related Documentation

- [AN2434 - Interfacing Quadrature Encoder using CCL with TCA andTCB](http://ww1.microchip.com/downloads/en/Appnotes/Interf-Quad-Encoder-CCL-w-TCA-TCB-DS00002434C.pdf)
- [ATtiny1617 Product Page](https://www.microchip.com/wwwproducts/en/ATtiny1617)

## Software Used

- [MPLAB X IDE v6.25 or later](https://www.microchip.com/mplab/mplab-x-ide)
- [XC8 (v3.00)](https://www.microchip.com/mplab/compilers) alternatively [AVR/GNU C Compiler 5.4.0](https://www.microchip.com/mplab/avr-support/avr-and-arm-toolchains-c-compilers) can be used
- ATtiny_DFP 3.3.272 or later

## Hardware Used

-  [ATtiny1617 QFN](https://www.microchip.com/wwwproducts/en/ATtiny1617)
-  [STK600](https://www.microchip.com/developmenttools/ProductDetails/ATSTK600)
-  [STK600 Routing card](https://www.microchip.com/DevelopmentTools/ProductDetails/atstk600-rc103)
-  [STK600 QFN24](https://www.microchip.com/developmenttools/ProductDetails/ATSTK600-SC62)
- Quadtrature Encoder

## Setup

![Circuit](images/circuit.png)

Setup the connections as described in the diagram above

## Operation

1. Download the zip file or clone the example to get the source code.
2. Open `attiny1617-quadrature-decoding-mplab.X` in MPLAB.
3. Connect the ATtiny1617 with your programmer of choice, we used a Atmel ICE.
4. Make sure the kit is selected as the tool to be programmed under project settings.
5. Press the make and program button to program the device.
6. Interact with the encoder and see the effect on *count* `PA7` *direction* `PA4`.

## Conclusion

We have shown how you can use a attiny1617 to do quadrature decoding. Refer to the application note [AN2434](http://ww1.microchip.com/downloads/en/Appnotes/Interf-Quad-Encoder-CCL-w-TCA-TCB-DS00002434C.pdf) for more details about the implementation.