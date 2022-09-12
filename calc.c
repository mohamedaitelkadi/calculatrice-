#include <stdio.h>
#include <stdlib.h>

float plus_f(float x,float y){
    printf("the result is : %.2f \n",x+y);
    printf("----------------------------------------------------------------------------\n");
    return x+y;
}
float multiply_f(float x,float y){
    printf("the result is : %.2f \n",x*y);
    printf("----------------------------------------------------------------------------\n");
    return x*y;
}
float divide_f(float x,float y){
    printf("the result is : %.2f \n",x/y);
    printf("----------------------------------------------------------------------------\n");

    return x/y;
}
float minus_f(float x,float y){
    printf("the result is : %.2f \n",x-y);
    printf("----------------------------------------------------------------------------\n");
    return x-y;
}
float square_f(float x,float y){
    float i,sq=1;
    for(i=0;i<y;i++){
        sq = x*sq ;
    }
    printf("the result is : %.2f \n",sq);
    printf("----------------------------------------------------------------------------\n");
    return sq;
}


int main()
{
    float a,b;
    int c = 1;
    char op;
    do{
        printf("saisir le premiere nombre :\n");
        scanf("%f",&a);
        printf("choisir l'operateur (+ , - , / , ^ , *) :\n");
        scanf(" %c",&op);
        if(op != '+' && op != '*' && op != '-' && op != '/' && op != '^'){
            printf("operateur pas disponible");
            exit(0);
        }
        printf("saisir le deuxieme nombre :\n");
        scanf("\n%f",&b);
        switch(op){
            case '+':
                plus_f(a,b);
                break;
            case '-':
                minus_f(a,b);
                break;
            case '*':
                multiply_f(a,b);
                break;
            case '/':
                divide_f(a,b);
                break;
            case '^':
                square_f(a,b);
                break;
            default:
                printf("ERROR : l'operateur pas disponibe ");
        }
    }
    while(c == 1);

    return 0;
}
