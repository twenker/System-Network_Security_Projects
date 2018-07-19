#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *f1;
	FILE *f4;
	int bufferW[1024];
	int bufferR[1024];
	int i = 0;
	
	f1 = fopen("f1", "r");
	f4 = fopen("f4", "wb");

	while(!feof(f1))
	{
		fscanf(f1,"%d",&bufferW[i]);
		i++;
	}
	
	fwrite(bufferW,sizeof(int),sizeof(bufferW),f4);
	
	rewind(f4);

	fread(bufferR,sizeof(int),sizeof(bufferR),f4);	
	
	if(memcmp(bufferW,bufferR,sizeof(bufferW)) == 0)
	{
		printf("no difference in arrays.\n");
	}
	else
	{
		printf("there is a difference between the arrays.\n");
	}
	fclose(f1);
	fclose(f4);
	
	return 0;	
}
