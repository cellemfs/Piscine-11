#include <unistd.h>


int main(int argc, char *argv[])
{
	int	i;
	int	result;
	
	
	i = 0;
	result = 0;
	if(argc == 2)
	{
		while (argv[1][i]!= '\0')
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
			 	result = (argv[1][i] - 96); // 96 = 'a' - 1
			 	while (result > 0)
			 	{
			 		write(1, &argv[1][i], 1);
			 		result = result - 1;
			 	}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				result = (argv[1][i] - 64); // 64 = 'A' - 1
			 	while (result > 0)
			 	{
			 		write(1, &argv[1][i], 1);
			 		result = result - 1;
			 	}	
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

