#include <stdio.h>
#include <stdlib.h>

int** newmorpion()
{
	int** morpion = malloc(sizeof(int*)*3);
	for (int i=0; i<3; i++)
	{
		morpion[i] = malloc(sizeof(int)*3);
	}
	return morpion;
}

void delete(int** morpion)
{
	for (int i=0; i<3; free(morpion[i++]));
	free( morpion);
}

int main()
{

	return 0;
}
