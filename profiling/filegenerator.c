#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc != 3)
		fprintf(stderr, "Chyba argumentov\n");
	
	FILE *pFile;
	
	if((pFile = fopen(argv[2], "w")) == NULL)
		fprintf(stderr, "Chyba suboru\n");
		
	int max = strtol(argv[1], NULL, 10);
	
	fprintf(pFile, "%d\n", max);
	
	for(int i = 1; i <= max; i++)
	{
		fprintf(pFile, "%d\n", i);
	}
	
	fclose(pFile);
}
