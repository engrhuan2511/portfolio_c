#include<stdio.h>
#include<math.h>

int main()
{
    float n1, n2, med;
    printf("Digite o primeiro numero: \n");
    scanf("%f", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &n2);

    med = (n1+n2)/2;
    printf("A media dos numeros digitados e: %f", med);
    return 0;
}
