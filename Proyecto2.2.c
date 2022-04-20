#include <stdio.h>
#include <stdlib.h>

int main()
{
    float not1,not2,promedio;
    printf("Ingrese la primera nota: ");
    scanf("%f",&not1);
    printf("Ingrese la segunda nota: ");
    scanf("%f",&not2);
    promedio =(not1+not2)/2;
    printf("Tu promedio es de : %f",promedio);
    return 0;
}
