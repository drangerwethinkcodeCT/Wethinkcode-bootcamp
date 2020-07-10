
#include <unistd.h>

// Prototype the function:
void ft_print_alphabet(void);
void ft_putchar(char c);

void ft_putchar(char c){
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    // Create a variable that will act as a starting point and a counter.
    char    alphabetCount;
    // Initialize variable to start with the letter a:
    alphabetCount = 'a';
    // Loop through the alphabet, printing each character from a - z
    while (alphabetCount <= 'z')
    {
       ft_putchar(alphabetCount);
       alphabetCount++;
    }
}
