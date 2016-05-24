//========================================================================
// FILENAME  : LCD_Driver.cpp
// CREATED   : 22:36
// AUTHOR   : Stefan Nielsen
// DESCR.   : Implementation of the functions from LCD_Driver.h
//
//------------------------------------------------------------------------
//
// REV - DATE - AUTHOR - CHANGE DESCRIPTION
// 1.0 23-05-2016/Stefan Nielsen Created project.
//========================================================================

#include "LCD_Driver.h"


//=============================================================
// METHOD : Init()
// DESCR. : Initializes the LCD
//=============================================================
void LCD_Driver::Init()
{	
	LCDInit();
}

//=============================================================
// METHOD : Clear()
// DESCR. : Clear screen
//=============================================================
void LCD_Driver::Clear();
{
	LCDClear();
}

//=============================================================
// METHOD : DispString(char *str)
// DESCR. : Write a string to the LCD.
//=============================================================
void LCD_Driver::DispString(char *str)
{
	LCDDispString(*str);
}

//=============================================================
// METHOD : DispInteger(int i)
// DESCR. : Write an integer to the LCD.
//=============================================================
void LCD_Driver::DispInteger(int i)
{
	LCDDispInteger(i);
}