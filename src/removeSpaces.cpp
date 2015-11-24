#include<stdio.h>

char removeSpaces(char *str) {
	int j = 0, i = 0;
	if (str[0] != '\0' && str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
			{
				for (j = i; str[j] != '\0'; j++)
				{
					str[j] = str[j + 1];
				}
				i = i - 1;
			}
		}
	}
	else
		return '\0';

}