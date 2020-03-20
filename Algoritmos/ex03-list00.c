#include <stdio.h>
#define ref 18.88
#define sob 25.59
#define lan 20.33

int main()
{
    int id;
    double peso, vlr_total;

    scanf("%d%lf", &id, &peso);

    if(id == 1){vlr_total = ref * (peso-0.422);}
    else if(id == 2){vlr_total = sob * peso;}
    else{vlr_total = lan * peso;}

    printf("%lf", vlr_total);

    return 0;
}