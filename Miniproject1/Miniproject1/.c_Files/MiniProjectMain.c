#include<stdio.h>


int main(char DorE, char *fileName[]) {

	switch (DorE)
	{
	case 'D':
		Decrypting(fileName);
		break;
	default:
		Incrypting(fileName);
		break;
	}

	return 0;
}
/*gcc -Wall MiniProjectMain.c Incrypting.c Decrypting.c -o cryptoMagic.exe*/
/*./cryptoMagic.exe*/