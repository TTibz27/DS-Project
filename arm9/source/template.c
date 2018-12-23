/*---------------------------------------------------------------------------------

	Simple console print demo
	-- dovoto

---------------------------------------------------------------------------------*/
#include <nds.h>
#include <stdio.h>

//---------------------------------------------------------------------------------
int main(void) {
//---------------------------------------------------------------------------------
	touchPosition touch;

	consoleDemoInit();  //setup the sub screen for printing

	iprintf("\n\n\tHello DS dev'rs\n");
	iprintf("\twww.drunkencoders.com\n");
	iprintf("\twww.devkitpro.org");

	while(1) {


		scanKeys();

		touchRead(&touch);
		iprintf("\x1b[10;0HTouch raw x = %04i\n", touch.rawx);
		iprintf("Touch px = %i,\n", touch.px);
		iprintf("Touch y = %04i, \n", touch.rawy);
		iprintf("Touch y = %i, \n", touch.py);

		swiWaitForVBlank();
		
	//	updateOAM();
		
		if (keysDown()&KEY_START) break;
	}

	return 0;
}
