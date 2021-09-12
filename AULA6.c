#include <stdio.h>
#include <stdlib.h>
 
	int main () {
    float nota1, nota2, nota3, mídia;
 
    Faz{
        printf ("Digite a nota do trabalho:");
        scanf ("% f", & nota1);
    };
 
    Faz{
        printf ("Digite a nota do teste em laboratório:");
        scanf ("% f", & nota2);
    };
                Faz{
        printf ("Digite a nota da prova escrita em sala de aula:");
        scanf ("% f", & nota3);
    };
 
    mídia = (nota1 * 2 + nota2 * 2 + nota3 * 6) / 10;

    printf ("Nota final:% .2f \ n", mídia);
}
if (media> = 7) {
	imprimir ("APROVADO");
}
if (media <7) {
	imprimir ("REPROVADO");
}
return 0;