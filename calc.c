    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    
    int main(void)
    {
    char y;
    float A, B, b, D, d, l, P, p, r, h;

        printf("Escolha a figura a ser calculada:\n+(Quadrado ou retângulo)\n-(Triângulo)\n*(Trapézio)\n/(Losango)\n|(Círculo)\n");
        scanf(" %c",&y);

    switch(y)
    {

    case '+':    
        printf("Digite a base:\n");
        scanf("%f",&b);
        printf("Digite a altura:\n");
        scanf("%f",&h);
        A = b*h;
        P = (2*b)+(2*h);

    if (b == h)
    {
        printf("É um quadrado! :3\n\n");
    }
    else
    {
        printf("É um retângulo! :3\n\n");
    }
        printf("A área da figura possui:%.f m² \n", A);
        printf("O perímetro da figura possui:%.f m \n", P);

    break;

    case '-': 
        printf("Digite a base:\n");
        scanf("%f",&b);
        printf("Digite a altura:\n");
        scanf("%f",&h);
        printf("Digite os três lados do trîangulo (Dê espaço após digitar os números) :\n");
        scanf("%f%f%f", &d, &l, &p);
        A = (b*h)/2;
        P = d+l+p;
        printf("A área da figura possui:%.f m² \n", A);
        printf("O perímetro da figura possui:%.f m \n", P);

    break;

    case '*': 
        printf("Digite a base maior:\n");
        scanf("%f",&B);
        printf("Digite a base menor:\n");
        scanf("%f", &b);
        printf("Digite a altura:\n");
        scanf("%f",&h);
        printf("Digite os dois lados do trapézio (Dê espaço após digitar os números) :\n");
        scanf("%f%f", &p, &l);
        A = ((B+b)*h)/2;
        P = B+b+p+l;
        printf("A área da figura possui:%.f m² \n", A);
        printf("O perímetro da figura possui:%.f m \n", P);
    break;

    case '/': 
        printf("Digite a diagonal maior:\n");
        scanf("%f",&D);
        printf("Digite a diagonal menor:\n");
        scanf("%f",&d);
        printf("Digite o lado do losango:\n");
        scanf("%f", &l);
        A = (D*d)/2;
        P = 4*l;
        printf("A área da figura possui:%.f m² \n", A);
        printf("O perímetro da figura possui:%.f m \n", P);
    break;

    case '|': 
        printf("Digite o raio do círculo:\n");
        scanf("%f", &r);
        A = 3.14*(r*r);
        P = (2*3.14)*r;
        printf("A área da figura possui:%.f m² \n", A);
        printf("O perímetro da figura possui:%.f m \n", P);
    break;
    }
    return 0;
    }































































































































































































































































































































































































































//Written by |Lucas_Bruno|