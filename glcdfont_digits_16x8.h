#ifndef FONT_DIGITS_8x16_H
#define FONT_DIGITS_8x16_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#else
 #define PROGMEM
#endif

const unsigned char font_digits8x16[][16] PROGMEM = {
{0xF8,0x07,0xFC,0x0F,0x06,0x18,0xC2,0x10,0xC2,0x10,0x06,0x18,0xFC,0x0F,0xF8,0x07},/*"0",15*/
{0x00,0x00,0x08,0x10,0x0C,0x10,0xFE,0x1F,0xFE,0x1F,0x00,0x10,0x00,0x10,0x00,0x00},/*"1",16*/
{0x04,0x1C,0x06,0x1E,0x02,0x13,0x82,0x11,0xC2,0x10,0x62,0x10,0x3E,0x18,0x1C,0x18},/*"2",17*/
{0x04,0x08,0x06,0x18,0x02,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0xFE,0x1F,0xBC,0x0F},/*"3",18*/
{0xC0,0x01,0xE0,0x01,0x30,0x01,0x18,0x01,0x0C,0x11,0xFE,0x1F,0xFE,0x1F,0x00,0x11},/*"4",19*/
{0x7E,0x08,0x7E,0x18,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0xC2,0x1F,0x82,0x0F},/*"5",20*/
{0xF8,0x0F,0xFC,0x1F,0x46,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0xC0,0x1F,0x80,0x0F},/*"6",21*/
{0x06,0x00,0x06,0x00,0x02,0x00,0x02,0x1F,0xC2,0x1F,0xF2,0x00,0x3E,0x00,0x0E,0x00},/*"7",22*/
{0xBC,0x0F,0xFE,0x1F,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0xFE,0x1F,0xBC,0x0F},/*"8",23*/
{0x3C,0x00,0x7E,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x18,0xFE,0x0F,0xFC,0x07},/*"9",24*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00},/*".",13*/
{0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00},/*"-",12*/
{0x00,0x00,0x00,0x00,0x0C,0x00,0x12,0x00,0x12,0x00,0x0C,0x00,0x00,0x00,0x00,0x00},/*"°",0xf7 */
};

#endif
