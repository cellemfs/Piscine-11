#include <unistd.h>
void putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int	i;
	i = 0;
	
	if(argc < 2)
	 // Se não houver argumentos (além do nome do programa), não faz nada
	{
		return 1;
	}
	
	while(argv[1][i] != '\0')
	{
		putchar(argv[1][i]);
		i++;
	}
	return(0);
}
