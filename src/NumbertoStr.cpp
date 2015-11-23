/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
int power(int a, int b){
	int i = 0, sum = 1;
	for (i = b; i > 0; i--)
	{
		sum = sum*a;
	}
	return sum;

}
void reverse(char *str, int len)
{
	int i = 0, j = len - 1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}


int intToStr(int x, char str[], int d)
{
	int i = 0;
	while (x)
	{
		str[i] = (x % 10) + '0';
		x = x / 10;
		i = i + 1;
	}

	
	while (i < d)
		str[i++] = '0';

	reverse(str, i);
	str[i] = '\0';
	return i;
}
void update(char *str, int i)
{
	int len = i - 1;
	int j = 0;
	for (j = len; j >= 0; j--)
	{
		str[j + 1] = str[j];
	}
	str[0] = '-';
}
void number_to_str(float number, char *str,int afterdecimal)
{
	float n = number;
	if (n<0)
	{
		n = -n;
		
		int ipart = (int)n;

		
		float fpart = n - (float)ipart;
		printf("%d %f", ipart, fpart);
		
		int i = intToStr(ipart, str, 0);
		printf(" \n %d", i);
		update(str, i);
		i = i + 1;
	
		if (afterdecimal != 0)
		{
			str[i] = '.';  

		
			fpart = fpart * power(10, afterdecimal);

			intToStr((int)fpart, str + i + 1, afterdecimal);
		}
	}
	else{
		int ipart = (int)n;

	
		float fpart = n - (float)ipart;
	
		int i = intToStr(ipart, str, 0);
		


		
		if (afterdecimal != 0)
		{
			str[i] = '.'; 
			fpart = fpart * power(10, afterdecimal);

			intToStr((int)fpart, str + i + 1, afterdecimal);
		}
	}

	
}

