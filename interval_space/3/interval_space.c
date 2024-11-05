#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		putchar('\n');
	}
	
	int c = 0;
	while(argv[1][c] != '\0')
	{
		putchar(argv[1][c]);
		if(argv[1][c+1] != '\0')
		{
			putchar(' ');
			putchar(' ');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
