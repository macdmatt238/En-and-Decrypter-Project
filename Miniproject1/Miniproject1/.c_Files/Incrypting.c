#include<stdio.h>
#include<string.h>
void Encrypting(char fileName[]) {

	int number;
	char text[130];
	char fileNameCRP[50];
	FILE* FP;
	FILE *OFP;
	int num = 0;
	
	printf("This is file name: %s\n",fileName);

	for (int i=0; i < 52; i++) {
		
		if (fileName[i] == 46)
	{
			num = i;
			
			strncpy(fileNameCRP, fileName, num);
			
			break;
		}
	}

	
	strcat(fileNameCRP, ".crp");
	
	FP = fopen(fileName, "r");

	if (FP == NULL) {
		printf("Somthing went wrong\n");
	
	}
	else
	{
		OFP = fopen(fileNameCRP, "w");
		printf("\nEncrypting:\n");
		fgets(text, 130, FP);
		printf("%s\n", text);

		for (int i = 0; i <= 130; i++)
		{
			printf("hi");
			printf("%c", text[i]);
			/*printf("%d", number);
			number = text[i];
			number -= 16;
			if (number < 32)
			{
				number += 144;
			}
			printf("%d", number);
			text[i]=number;*/
		}

		fprintf(OFP, text);
		/*while (fgetc(FP) != EOF)
		{
			
			fgets(text, 130, FP);
			printf("%s", text);
			
			for (int i = 0; i <= 130; i++)
			{
				(int)text[i] -= 16;
				if (text[i]<32)
				{
					text[i] += 144;
				}
			}
			
			//printf("%s", text);
			fprintf(OFP,text);
		}*/
		

		
		
		printf("Encrypting...\n");

		
		
		







	}


}