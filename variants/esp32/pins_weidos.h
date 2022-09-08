#ifndef PINS_WEIDOS_H
#define PINS_WEIDOS_H

//####Weidmuller####

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