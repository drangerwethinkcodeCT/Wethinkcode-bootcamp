void ft_print_numbers(void);
void ft_putchar(char c);

void ft_print_numbers()
{
    char c;
    c = '0';
    while (c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}
