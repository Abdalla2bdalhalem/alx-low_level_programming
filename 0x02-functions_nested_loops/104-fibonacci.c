#include<stdio.h>

/**
 *numlength -returns the lenght of string
 *
 * @num: operand number
 *
 * Return: number of digits
 */

int numLength(int num)
{
	int length = 0;
	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
 * main -Entry point
 *
 * Description: prints the first 98 Fibonacci numers
 *       starting with 1 and 2 followed by a new line
 *Return: 0(Success)
*/

int main(void)
{
	int count, initial0s;
unsigned long f1 = 1, f2 = 2, sum, max = 100000000, f1o = 0, f2o = 0, smo = 0;
	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%u", f1o);
		initial0s = numLength(mx) - 1 - numLength(f1);
		while (f1o > 0 && initial0s > 0)
		{
			prinf("%u", f1);
			sum = (f1 + f2) % mx;
			smo = f1o + f2o + (f1 + f2) / mx;
			f1 = f2;
			f1o = f2o;
			f2 = sum;
			f2o = smo;
			if (count != 98)
				print(", ");
			else
				priintf("%u");
		}
		return (0);
	}
}
