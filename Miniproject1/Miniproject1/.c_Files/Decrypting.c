#include<stdio.h>
void Decrypting(char *fileName[]) {

		char text[130], letter[130];
		char fileNameTXT[50];
		FILE* FP;
		FILE* OFP;
		int num = 0;

		printf("This is file name: %s\n", fileName);

		for (int i = 0; i < 52; i++) {

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
				text[i] -= 16;
			}
			fprintf(OFP, text);
			while (fgetc(FP) != EOF)
			{

				fgets(text, 130, FP);
				printf("%s", text);

				for (int i = 0; i <= 130; i++)
				{
					text[i] -= 16;
				}

				//printf("%s", text);
				fprintf(OFP, text);
			}




			printf("Encrypting...\n");











		}


}