//Escreva um programa que conte o número de argumentos passados para ele, excluindo o nome do próprio programa.
#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}


int main(int argc, char *argv[])
{
	int c;
	c = argc -1;
	while(argv[c] <= c)
	{
		putchar(argv[c]);	
		c++;
	}
	return(0);
	
}
