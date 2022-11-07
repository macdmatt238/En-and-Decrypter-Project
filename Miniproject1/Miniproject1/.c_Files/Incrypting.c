#include<stdio.h>
#include<string.h>
void Incrypting(char *fileName[]) {

	printf("Incryption works");
	char text[100],fileNameCRP[24];
	FILE* FP;
	int num = 0;
	printf("Chars works");
	for (int i=0; i < 100; i++) {
		if (fileName[i]==46)
		{
			num = i - 1;
			printf("%d", num);
			break;
		}
	}

	strncpy(fileNameCRP, fileName,num);
	strcat(fileNameCRP,".crp");
	FP = fopen(fileName, "r");

	if (FP == NULL) {
		printf("Somthing went wrong\n");
	
	}
	else
	{
		fgets(text, 100, FP);

		printf("\nincrypting: %s\n", text);

		printf("incrypting...\n");



		fopen(fileNameCRP, "w");







	}


}