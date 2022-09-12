#ifndef PINS_WEIDOS_H
#define PINS_WEIDOS_H

//####Weidmuller####

//RS485 - UART
#define A       (17)
#define B       (16)
#define Tx_0    (17)
#define Rx_0    (16)
#define RTE_DE  (33)
static const uint32_t pin11 = A;
static const uint32_t pin12 = B;
static const uint32_t pin14 = RTE_DE;

//RS485 macros to be used in the library.
#define HAVE_RS485
#define HAVE_RS485_HARD
#define SERIAL_PORT_HARDWARE        Serial2
#define RS485_TX 					(17)             	 
#define RS485_DE 					(33)              
#define RS485_RE 					(33) 
//UART macro to use Serial1 with this name.
#define UART Serial2

//Analog/Digital inputs
#define ADI_0 (0x342001u)
#define ADI_1 (0x342000u)
#define ADI_2 (0x342002u)
#define ADI_3 (0x342003u)
static const uint32_t pin15 = ADI_0;
static const uint32_t pin16 = ADI_1;
static const uint32_t pin17 = ADI_2;
static const uint32_t pin18 = ADI_3;



//Digital inputs
#define DI_4 (35u)
#define DI_5 (32u)
#define DI_6 (15u)
#define DI_7 (5u)
static const uint32_t pin25 = DI_4;
static const uint32_t pin26 = DI_5;
static const uint32_t pin27 = DI_6;
static const uint32_t pin28 = DI_7;


//Analog output
#define AO_0 (26u)
static const uint32_t pin45 = AO_0;


//Digital outputs
#define DO_0 (0x2100)
#define DO_1 (0x2101)
#define DO_2 (0x2102)
#define DO_3 (0x2103)
static const uint32_t pin55 = DO_0;
static const uint32_t pin56 = DO_1;
static const uint32_t pin57 = DO_2;
static const uint32_t pin58 = DO_3;

#define SDCARD_SS_PIN (0x2106u)    	//SD slave select/chip select
#define ETHERNET_CS (2u)            //Ethernet slave select/chip select

#define HAVE_MAX11613
#define HAVE_MCP23008
static const uint8_t mcp23008Addresses[] = {
	0x20,
	0x21,
	0x23
};
#define NUM_MCP23008_DEVICES (sizeof(mcp23008Addresses) / sizeof(uint8_t))

//####Weidmuller####
#endif
