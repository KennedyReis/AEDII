#include <stdio.h>

int rec_mdc(int numA, int numB)
{
    int resp;

    if(numA == numB)
    {
        resp = numA;
    }
    else if(numA > numB)
    {
        resp = rec_mdc(numA - numB, numB);
    }
    else
    {
        resp = rec_mdc(numA, numB - numA);
    }
    return resp;
}

int main()
{
    int numA, numB;
    while(scanf("%d %d", &numA, &numB) != EOF)
    {
        int resp = rec_mdc(numA, numB);
        printf("%d\n", resp);
    }
    return 0;
}