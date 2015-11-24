/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <stdio.h>
#include <string.h>
void reverse1(char *str, int len, int k)
{
	int i = k, j = len - 1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}


}


void str_words_in_rev(char *input, int len){
	int i = 0, j = 0, k = 0, s = 0;
	for (i = 0; i < len; i++)
	{
		if (input[i] == ' ')
		{
			j = j + 1;
		}
	}
	if (j != 0){
		reverse1(input, len, 0);

		for (i = 0; i <= len; i++)
		{
			if (input[i] == ' ' || input[i] == '\0')
			{
				if (input[i] == ' ' && input[i - 1] == ' ')
				{
					s = i;
					k = s + 1;
					continue;
				}
				else{
					s = i;
					reverse1(input, s, k);
					
					k = s + 1;

				}

			}
		}
	}
}