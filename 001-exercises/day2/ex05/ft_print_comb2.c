void ft_putchar(char c)

void ft_print_comb(void)
{
    char a = '0', b = '0', c = '0', d = '0';
    while (a <='9')
    {
        while (b<='9')
        {
            while (c<='9')
            {
                while (d<='9')
                {
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(' ');
                    ft_putchar(c);
                    ft_putchar(d);
                    ft_putchar(',');
                    ft_putchar(' ');
                    d++;
                }
                c++;
                d='0';
            }
            b++;
            c='0';
        }
        a++;
        b='0';
    }
}