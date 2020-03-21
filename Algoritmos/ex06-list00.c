#include <stdio.h>

void mescla_vetor(int tamA, int tamB, int *vetA, int *vetB)
{
    int tamC = tamA + tamB, vetC[tamC], i, j = 0, k = 0;

    for(i = 0; i < tamC; i++)
    {
        if(vetA[j] < vetB[k] && j < tamA)
        {
            vetC[i] = vetA[j];
            j++; 
        }
        else if(k < tamB)
        {
            vetC[i] = vetB[k];
            k++;
        }
    }

    int p;
    for(p = 0; p < tamC; p++)
    {
        printf("%d ", vetC[p]);
    }
}

int main()
{
    int tamA, tamB, qtd_testes;

    scanf("%d", &qtd_testes);

    while(qtd_testes > 0)
    {
        int tamA;
        scanf("%d", &tamA);
        int i, vetA[tamA], valor;
        for(i = 0; i < tamA; i++)
        {
            scanf("%d", &valor);
            vetA[i] = valor;
        }
        int tamB;
        scanf("%d", &tamB);
        int vetB[tamB];
        for(i = 0; i < tamB; i++)
        {
            scanf("%d", &valor);
            vetB[i] = valor;
        }
        mescla_vetor(tamA, tamB, vetA, vetB);
        qtd_testes--;
    }
    return 0;
}