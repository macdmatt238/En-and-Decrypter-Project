#include<stdio.h>
#include<string.h>
void Encrypting(char fileName[]) {

	int number, exceptions;				
	char text[130];
	char fileNameCRP[50]="holder";
	FILE* FP;
	FILE *OFP;
	int num = 0, i = 0;
	
	printf("This is file name: %s\n",fileName);		//outputs file name.

	for (int i=0; i < 52; i++) {	//scans all of filenameCRP.
		
		if (fileName[i] == 46)	//checks for a period.
	{
			num = i;
			
			strncpy(fileNameCRP, fileName, num);	//copies everything before the period.  
			
			break;
		}
	}

	
	strcat(fileNameCRP, ".crp");	//adds .crp to the file name.
	
	FP = fopen(fileName, "r");	//opens the file.

	if (FP == NULL) {		//checks if there is a file.
		printf("Somthing went wrong\n");
	
	}
	else
	{
		OFP = fopen(fileNameCRP, "w");	//makes and opens a new .crp file.
		printf("\nEncrypting:\n");
		
		while (!feof(FP))	//scans file till the end.
		{
			
			text[i] = fgetc(FP);	//scans each character.
			
			
			
				printf("%c", text[i]);
				
				

				number = text[i];		//turns char into int.
				exceptions = number;
				
				number -=  16;		//starts encryption.
				
				if (number <32)
				{
					number = number - 32;
					
					number += 144;
					
				}
				
				text[i] = number;
				
				
				switch (exceptions)		//prints into .crp file.
				{
				case -1:					//exception for end of page
					
					break;
				case 9:						//exception for tab
					fprintf(OFP, "TT");
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
				case 34:					//exception for !
					fprintf(OFP, "82");
					break;
				case 39:					//exception for '
					fprintf(OFP, "87");
					break;
				case 46:					//exception for .
					fprintf(OFP, "8E");
					break;
				case 47:					//exception for /
					fprintf(OFP, "08");
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