#include "lcd162.h"

class LCD_Driver
{
	public:
	void Init();
	void Clear();
	void GotoXY(unsigned char x, unsigned char y);
	void DispString(char *str);
	void DispInteger(int i);
	void OnOffControl(unsigned char cursor, unsigned char blink);
	void CursorLeft();
	void CursorRight();

	protected:
	private:
};