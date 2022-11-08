#include<stdio.h>
#include<string.h>
void Encrypting(char fileName[]) {

	
	char text[100],fileNameCRP[24];
	FILE* FP;
	int num = 0;
	
	printf("This is file name: %s\n",fileName);

	for (int i=0; i < 100; i++) {
		printf("%c\n", fileName[i]);
		if (fileName[i] == 46)
	{
			num = i - 1;
			printf("%d", num);
			strncpy(fileNameCRP, fileName, num);
			break;
		}
	}

	
	strcat(fileNameCRP,".crp");
	FP = fopen(fileName, "r");

	if (FP == NULL) {
		printf("Somthing went wrong\n");
	
	}
	else
	{
		fgets(text, 100, FP);

		printf("\nEncrypting: %s\n", text);

		printf("Encrypting...\n");



		fopen(fileNameCRP, "w");







	}


}