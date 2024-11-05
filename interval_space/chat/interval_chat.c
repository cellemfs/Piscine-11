#include <unistd.h>

void putchar(char c) 
{
    write(1, &c, 1);
}

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        putchar('\n');
        return 0;
    }
    
    int c = 0;
    
    // Loop para imprimir cada caractere
    while (argv[1][c] != '\0')
    {
        putchar(argv[1][c]);
        
        // Verifica se não é o último caractere antes de imprimir um espaço
        if (argv[1][c + 1] != '\0') 
        {
            putchar(' ');
            putchar(' ');
            putchar(' ');
             // Imprime apenas um espaço
        }
        
        c++;
    }
    
    putchar('\n'); // Nova linha ao final
    return 0;
}

