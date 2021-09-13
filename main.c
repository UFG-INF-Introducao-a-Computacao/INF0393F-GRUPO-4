/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>

int
main ()
{
  float nota;
/*C Programa para encontrar o conceito para a nota tirada pelo estudante*/
  do
    {
      printf ("\n-----------------------------------");
      printf ("\nEscolha um intervalo de nota entre 0 e 10:");
      printf ("\nInforme a nota: ");
      scanf ("%f", &nota);
      if (nota > 10 || nota < 0)
	{
/* nota maior que 10 */
	  printf
	    ("\nNC#o seja inteligente.Digite sua nota dentro do limite\n");
	}
    }
  while (nota > 10 || nota < 0);
  if (nota <= 10 && nota >= 9)
    {
/* nota entre 9-10 */
      printf ("\n Seu conceito é: A");
    }
  else if (nota < 9 && nota >= 7.5)
    {
/* nota entre 7.5-9 */
      printf ("\n Seu conceito é: B");
    }
  else if (nota < 7.5 && nota >= 6.0)
    {
/* nota entre 6-7.5 */
      printf ("\n Seu conceito é: C");
    }
  else if (nota < 6.0 && nota >= 0.0)
    {
/* nota entre 0-6 */
      printf ("\n Seu conceito é: D");
    }

  return 0;
}
