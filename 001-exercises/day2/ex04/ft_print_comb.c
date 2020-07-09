void ft_print_comb(void);
void ft_putchar(char a, char b, char c);

void ft_print_comb(){
    char a, b, c;
    a = '0';
    b = '1';
    c = '2';

   while(a <= '7')
   {
       while(b <= '8')
       {
           while(c <= '9')
           {
               ft_putchar(a, b, c);
               c++;
           }
           c = '0';
           b++;
       }
       b = '0';
       a++;
   }    
}