#include <stdio.h>
#include <math.h>

int main()
{
    int qtd_monst, cont_monst = 0, vida_ray = 100, forca_ray = 40, vida_monst, forca_monst; 
 
    scanf("%d", &qtd_monst);

    while(qtd_monst > 0 && vida_ray >= 0)
    {
        scanf("%d%d", &vida_monst, &forca_monst);

        double aux1, aux2;

        aux1 = (double)vida_monst/(double)forca_ray;
        aux2 = (double)vida_ray/(double)forca_monst;

        if(aux1 - (int)(aux1) > 0.4)
        {
            //printf("aqui1: %lf\n", aux1);
            aux1 = ceil(aux1);
            //printf("aqui2: %lf\n", aux1);
        }
        else
        {
            //printf("aqui3: %lf\n", aux1);
            aux1 = round(aux1);
            //printf("aqui4: %lf\n", aux1);
        }
        if(aux2 - (int)(aux2) > 0.4)
        {
            //printf("aqui1: %lf\n", aux1);
            aux2 = ceil(aux2);
            //printf("aqui2: %lf\n", aux1);
        }
        else
        {
            //printf("aqui3: %lf\n", aux1);
            aux2 = round(aux2);
            //printf("aqui4: %lf\n", aux1);
        }
        int alternar = 0;
        while (aux1 >= 0 && aux2 >= 0 && (vida_ray - forca_monst) > 0 || (vida_monst-forca_ray) > 0)
        {
            if(alternar % 2 == 0 & vida_monst >= 0)
            {
                //printf("aqui5: %d\n", vida_monst);
                vida_monst += - forca_ray;
            }
            else
            {
                //printf("aqui6: %d\n", vida_ray);
                vida_ray += - forca_monst;
            }
            alternar++;
            aux1--;
            aux2--;
        }
        printf("ray: %d\n", vida_ray);
        qtd_monst--;
        cont_monst++;
    }
    printf("%d %d", cont_monst, vida_ray);
    return 0;
}