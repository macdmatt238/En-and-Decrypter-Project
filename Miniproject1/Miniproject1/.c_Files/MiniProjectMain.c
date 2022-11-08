#include<stdio.h>
#include<string.h>

 int main(int argc, char *argv[]){

	 

	for (int i = 1; i < argc; i++)
	{
		if (strcmp(argv[i], "-D") == 0) {
			Decrypting();
		}
		else
		{
			
			
			Encrypting(argv[2]);
		}
	}

	return 0;
}
/*gcc -Wall MiniProjectMain.c Incrypting.c Decrypting.c -o cryptoMagic.exe*/
/*./cryptoMagic.exe*/