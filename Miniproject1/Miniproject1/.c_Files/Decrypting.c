#include<stdio.h>
#include<string.h>

void Decrypting(char fileName[]) {

		int number, exceptions;		
		char text[130];
		char fileNameTXT[50] = "holder";
		FILE* FP;
		FILE* OFP;
		int num = 0, i = 0;

		printf("This is file name: %s\n", fileName);	// says file name.

		for (i = 0; i < 52; i++) {	//scans all of filenameTXT.

			if (fileName[i] == 46)		//cheaks for a period.
			{
				num = i;

				strncpy(fileNameTXT, fileName, num);	//copies everything before the period.
				
				break;
			}
		}


		strcat(fileNameTXT, ".txt");	//adds .crp to the file name.
		
		FP = fopen(fileName, "r");	//opens the file.

		if (FP == NULL) {		//checks if there is a file.
			printf("Somthing went wrong\n");

		}
		else
		{
			OFP = fopen(fileNameTXT, "w");	//makes and opens a new .txt file.
			printf("\nDecrypting:\n");
			i = 0;
			while (!feof(FP))	//scans file till the end.
			{
				

				text[i] = fgetc(FP);			//scans each charicter.
				
				
				if (i % 2 != 0)		//every other scan it decrypts the two chars.
				{
					
					text[i - 1] *= 16;
					
					
					if (text[i] < 58 && text[i] > 47) {		//if it is a number
						
						text[i] -= 48;
					}
					else
					{
						text[i] -= 55;
					}

					
					text[i] = text[i - 1] + text[i];		//adds the first and second char into the decemal.
					
					



					number = text[i];
					exceptions = number;
					
					

					if (number - 112 < 32 && 0< number-112)		//decrypts numbers
					{
						
						number = number - 144;

						number += 32;

					}
					number += 16;
					
					text[i] = number;
					

					switch (exceptions)		//prints out onto the .txt
					{
					case -1:					//exception for end of page

						break;
					case 93:					//exception for tab
						fprintf(OFP, "\t");
						break;
					case 69:					//exception for y
						fprintf(OFP, "y");
						break;
					case -128:					//exception for space
						fprintf(OFP, " ");
						break;
					case -127:					//exception for !
						fprintf(OFP, "!");
						break;
					case -114:					//exception for .
						fprintf(OFP, ".");
						break;
					default:					//no exceptions
						fprintf(OFP, "%c", text[i]);
						break;
					}


				}
				if (text[i] != 10) // checks if it is enter or not
					i++;
				else
					fprintf(OFP, "\n");
					
				
				
			}

			printf("\nDecryption done\n");














		


		}
		








		


		


}