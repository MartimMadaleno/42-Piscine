#include <limits.h>
#include <unistd.h>

void ft_print(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if (nb == INT_MIN){
        ft_print('-');
        ft_print('2');
        ft_putnbr(147483648);
    }
    else
    {
        if (nb < 0)
        {
            ft_print('-');
            nb = -nb;
            ft_putnbr(nb);
        }
        else if (nb > 9)
        {
            ft_putnbr(nb / 10);
            ft_putnbr(nb % 10);
        }
        else
        {
            ft_print(nb + '0');
        }
        
    }
}
