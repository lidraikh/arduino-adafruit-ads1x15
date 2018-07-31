/**************************************************************************/
/*!
    @file     adsGain_t.h
    @author   
    @license  BSD (see license.txt)

*/
/**************************************************************************/
#ifndef _ADS_GAIN_T_H_
#define _ADS_GAIN_T_H_
#define ADS1015_REG_CONFIG_PGA_MASK (0x0E00)
#define ADS1015_REG_CONFIG_PGA_6_144V (0x0000) // +/-6.144V range = Gain 2/3
#define ADS1015_REG_CONFIG_PGA_4_096V (0x0200) // +/-4.096V range = Gain 1
#define ADS1015_REG_CONFIG_PGA_2_048V (0x0400) // +/-2.048V range = Gain 2 (default)
#define ADS1015_REG_CONFIG_PGA_1_024V (0x0600) // +/-1.024V range = Gain 4
#define ADS1015_REG_CONFIG_PGA_0_512V (0x0800) // +/-0.512V range = Gain 8
#define ADS1015_REG_CONFIG_PGA_0_256V (0x0A00) // +/-0.256V range = Gain 16
#endif 

typedef enum
{
    GAIN_TWOTHIRDS = ADS1015_REG_CONFIG_PGA_6_144V,
    GAIN_ONE = ADS1015_REG_CONFIG_PGA_4_096V,
    GAIN_TWO = ADS1015_REG_CONFIG_PGA_2_048V,
    GAIN_FOUR = ADS1015_REG_CONFIG_PGA_1_024V,
    GAIN_EIGHT = ADS1015_REG_CONFIG_PGA_0_512V,
    GAIN_SIXTEEN = ADS1015_REG_CONFIG_PGA_0_256V
} adsGain_t;
