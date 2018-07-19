/*
	read in binary file to int array, print int array to file

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE * f2;
	FILE * f5;
	f2 = fopen("f2","r");
	f5 = fopen("f5","wb");
	
	int buffer[1024];
	int i = 0;

	fread(buffer, sizeof(int),sizeof(buffer),f2);
	
	if(!f5)
	{
		printf("file does not exist\n");
		return 1;
	}
		
	while(i < 1024)
	{
		fprintf(f5,"%d\n",buffer[i]);
		++i;
	}

	fclose(f2);
	fclose(f5);

	return 0;
}
