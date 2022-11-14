#include<stdio.h>
#include<string.h>
void Encrypting(char fileName[]) {

	int number, exceptions;
	char text[130];
	char fileNameCRP[50]="holder";
	FILE* FP;
	FILE *OFP;
	int num = 0, i = 0;
	
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
		
		while (!feof(FP))
		{
			
			text[i] = fgetc(FP);
			
			
			
				printf("%c", text[i]);

				

				number = text[i];
				exceptions = number;
				
				number -=  16;
				
				if (number <32)
				{
					number = number - 32;
					
					number += 144;
					
				}
				
				text[i] = number;
				
				
				switch (exceptions)
				{
				case -1:					//exception for end of page
					
					break;
				case 9:						//exception for tab
					fprintf(OFP, "\t");
					break;
				case 10:					//exception for enter
					fprintf(OFP, "\n");
					break;
				case 121:					//exception for y
					fprintf(OFP, "69");
					break;
				case 32:					//exception for space
					fprintf(OFP, "80");
					break;
				case 33:					//exception for !
					fprintf(OFP, "81");
					break;
				case 46:					//exception for .
					fprintf(OFP, "8E");
					break;
				default:					//no exceptions
					fprintf(OFP, "%X", text[i]);
					break;
				}
				
				i++;
		}
		
		printf("\nEncryption done\n");
		
		
		

		
		
		







	}


}