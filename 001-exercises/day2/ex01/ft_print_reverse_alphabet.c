void ft_print_reverse_alphabet(void);
void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
    char    alphabetCount;
    alphabetCount = 'z';
    while (alphabetCount >= 'a')
    {
       ft_putchar(alphabetCount);
       alphabetCount--;
    }
}
