#include <stdio.h>

int rec_potencia(int b, int e)
{
	int resp;
	if(e == 0)
	{
		resp = 1;
	}
	else if(e % 2 != 0)
	{
		resp = b * rec_potencia(b, e - 1);
	}
	else
	{
		resp = rec_potencia(b, e/2) * rec_potencia(b, e/2);
	}
	return resp;
}


int main()
{
	int base, exp;
	
	while(scanf("%d %d", &base, &exp) != EOF)
	{
		printf("%d\n", rec_potencia(base, exp));
	}
	return 0;
}