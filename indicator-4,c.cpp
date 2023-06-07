#include<stdio.h>

main()
{
	char str[100],*ptr;
	int i;
	printf("enter string=>");
	gets(str);
	ptr=str;
	while(*ptr!='\0')
	{
		i++;
		ptr++;
	}
	printf("\nLenth of string=>%d",i);
}
