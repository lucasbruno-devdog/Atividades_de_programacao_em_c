#include <stdio.h>
#define pi 3.1415
float raio()
{
    float r, area;
    printf("Digite o raio: ");
    scanf("%f", &r);
    area = pi * r * r;
}
int main()
{
    float result;
    result = raio();
    printf("Area do circulo = %.2f\n", result);
    return 0;

}