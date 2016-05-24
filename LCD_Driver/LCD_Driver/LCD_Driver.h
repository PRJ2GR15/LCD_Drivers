//========================================================================
// FILENAME  : LCD_Driver.h
// CREATED   : 22:36
// AUTHOR   : Stefan Nielsen
// DESCR.   : Header file for the object orientated LCD driver.
//
//------------------------------------------------------------------------
//
// REV - DATE - AUTHOR - CHANGE DESCRIPTION
// 1.0 23-05-2016/Stefan Nielsen Created project.
//========================================================================

#include "lcd162.h"

//=====================================
// CLASS : LCD_Driver
// DESCR : Wrapper for lcd162.h to make this driver object orientated, as well as
//		   adding additional functions for usability.
//=====================================
class LCD_Driver
{
	public:
	//Functions wrapped from the original driver.
	void Init();
	void Clear();
	void DispString(char *str);
	void DispInteger(int i);
	
	protected:
	private:
};