#include <stdio.h>
#include <string.h>
#include <cstdlib>

int main()
{
	char *temp = "Paras"; // new C doesnt let you down
	// char *temp = (char*)malloc(sizeof(ctemp));
	// strcpy(temp,ctemp);

	int i;
	i=0;

	temp[3]='F';

	for (i =0 ; i < 5 ; i++ )
		printf("%c\n", temp[i]);

	return 0;
}
