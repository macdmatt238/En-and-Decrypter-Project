#include<stdio.h>
#include<string.h>

char *DesToHex(float des, char &hex) {
	
	int des_f=1, max=0, haxdec;
	int hexdec[];
	float des_s;
	char hexa[];

	while (des_f!=0)
	{
		des_f = des / 16;
		des_s = des / 16;
		des_s = des_s - des_f;
		haxdec = des_s * 16;
		hexdec[max] = haxdec;
		max++;
	}

	for (int i = 0; i <= max; i++)
	{
		if (hexdec[max]>=10) {
			switch (hexdec[max])
			{
			case 10:
				hexa[max] = 'A';
				break;

			case 11:
				hexa[max] = 'B';
				break;

			case 12:
				hexa[max] = 'C';
				break;

			case 13:
				hexa[max] = 'D';
				break;

			case 14:
				hexa[max] = 'E';
				break;

			case 15:
				hexa[max] = 'F';
				break;

			}

		}
		if (true)
		{

		}

	}
	






	return hex;
}