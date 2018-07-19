/*
	read in binary file to int array, print int array to file

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE * f3;
	FILE * f6;
	f3 = fopen("f3","r");
	f6 = fopen("f6","wb");
	
	int buffer[11];
	int i = 0;

	fread(buffer, sizeof(int),sizeof(buffer),f3);
	
	if(!f6)
	{
		printf("file does not exist\n");
		return 1;
	}
		
	while(i < 11)
	{
		fprintf(f6,"%d\n",buffer[i]);
		++i;
	}

	fclose(f3);
	fclose(f6);

	return 0;
}
