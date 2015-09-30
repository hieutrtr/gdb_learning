#include <stdio.h>

int main()
{
	const char *ctemp = "Paras";
	char *temp = malloc(sizeof(ctemp));
	strcpy(temp,ctemp);

	int i;
	i=0;

	temp[3]='F';

	for (i =0 ; i < 5 ; i++ )
		printf("%c\n", temp[i]);

	return 0;
}
