#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[]) 
{
    
    
	if (argc != 2) 
	{
        // Se o número de argumentos não for exatamente 1, exibe apenas uma nova linha
		putchar('\n');
		return 0;
	}
	
	int c;
	c = 0;
	
	if (argc == 2)
	{
		while (argv[1][c] != '\0')
		{
			if (argv[1][c + 1] == '\0')
			{
				putchar(argv[1][c]);
				break;
			}
			putchar(argv[1][c]);
			putchar(' ');
			putchar(' ');
			putchar(' ');
			c++;
		}
			    	
	}
    	putchar('\n');          // Nova linha ao final
	return 0;
}
