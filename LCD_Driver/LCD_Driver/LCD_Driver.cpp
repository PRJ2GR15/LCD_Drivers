#include "LCD_Driver.h"

void LCD_Driver::Init()
{	
	LCDInit();
	LCDOnOffControl(0, 0);	
}

void LCD_Driver::Clear();
{
	LCDClear();
}

void LCD_Driver::GotoXY(unsigned char x, unsigned char y)
{
	LCDGotoXY(x, y);
}

void LCD_Driver::DispString(char *str)
{
	LCDDispString(*str);
}

void LCD_Driver::DispInteger(int i)
{
	LCDDispInteger(i);
}

void LCD_Driver::OnOffControl(unsigned char cursor, unsigned char blink)
{
	LCDOnOffControl(cursor, blink);
}

void LCD_Driver::CursorLeft()
{
	LCDCursorLeft();
}

void LCD_Driver::CursorRight()
{
	LCDCursorRight();
}