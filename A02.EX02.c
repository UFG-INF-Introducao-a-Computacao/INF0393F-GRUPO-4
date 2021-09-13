#include <stdio.h>
#include <stdlib.h>

int main()
{ float A, B, C;

printf("\nDigite o primeiro valor:");
scanf("%f",&A);
printf("\nDigite o segundo valor:");
scanf("%f",&B);
printf("\nDigite o terceiro valor:");
scanf("%f",&C);
if(A<B && B<C){
    printf("\n%2f, %2f, %2f", A, B, C);
}else if(A>B && A<C){
    printf("\n%2f, %2f, %2f", B, A, C);
}else if(A>C && C>B){
    printf("\n%2f, %2f, %2f", B, C, A);
}else if(A<B && C<B){
    printf("\n%2f, %2f, %2f",A, C, B);
}else if(A>C && A<B){
    printf("\n%2f, %2f, %2f",C, A, B);
}else if(A>B && B>C){
    printf("\n%2f, %2f, %2f",C, B, A);
}

    return 0;
}