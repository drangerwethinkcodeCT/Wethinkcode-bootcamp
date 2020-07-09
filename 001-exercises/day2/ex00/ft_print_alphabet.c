void ft_print_alphabet(void);
void ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char    alphabetCount;
    alphabetCount = 'a';
    while (alphabetCount <= 'z')
    {
       ft_putchar(alphabetCount);
       alphabetCount++;
    }
}