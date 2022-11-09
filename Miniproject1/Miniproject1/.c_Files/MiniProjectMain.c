#include<stdio.h>
#include<string.h>

 int main(int argc, char *argv[]){

	 

	
		if (strcmp(argv[1], "-D") == 0) {
			//printf("you picked decrypting");
			Decrypting();
		}
		else
		{
			//printf("you picked encrypting");
			
			Encrypting(argv[2]);
		}
	

	return 0;
}
/*gcc -Wall MiniProjectMain.c Incrypting.c Decrypting.c -o cryptoMagic.exe*/
/*./cryptoMagic.exe*/