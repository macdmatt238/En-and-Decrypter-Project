#include<stdio.h>
#include<string.h>

 int main(int argc, char *argv[]){ //inputs the command line inputs.

	 

	
		if (strcmp(argv[1], "-D") == 0) { //tests if the user inputs -D or not.
			
			Decrypting(argv[2]);	//runs the decrypt funtion.
		}
		else
		{
			
			
			Encrypting(argv[2]);	//runs the encrypt funtion.
		}
	

	return 0;
}
/*gcc -Wall MiniProjectMain.c Incrypting.c Decrypting.c -o cryptoMagic.exe*/
/*./cryptoMagic.exe*/