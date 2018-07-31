/**************************************************************************/
/*!
    @file     adsGain_t.h
    @author   
    @license  BSD (see license.txt)

*/
/**************************************************************************/
#ifndef _ADS_GAIN_T_H_
#define _ADS_GAIN_T_H_

typedef enum
{
    GAIN_TWOTHIRDS = 0x0000,
    GAIN_ONE = 0x0200,
    GAIN_TWO = 0x0400,
    GAIN_FOUR = 0x0600,
    GAIN_EIGHT = 0x0800,
    GAIN_SIXTEEN = 0x0A00
} adsGain_t;
#endif