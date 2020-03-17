#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int uno, dos;

  printf ("Ingrese el primer numero: ");

  scanf ("%d",&uno);

  printf ("Ingrese el segundo numero: ");

  scanf ("%d",&dos);

  printf ("Resultado: %d.\n",uno-dos);
	return 0;
}
