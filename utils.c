#include "password_generator.h"

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

void    init_struct(t_pass *pass)
{
    pass->numbers = "0123456789";
    pass->len_numbers = ft_strlen(pass->numbers);
    pass->lower_case = "abcdefghijklmnopqrstuvwxyz";
    pass->len_lower_case = ft_strlen(pass->lower_case);
    pass->upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    pass->len_upper_case = ft_strlen(pass->upper_case);
    pass->symbols = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/`~";
    pass->len_symbols = ft_strlen(pass->symbols);

}

int ft_atoi(char *str)
{
    int signal = 1;
    int i = 0;
    int res = 0;

    while(str[i] == 32 || (str[i]>= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            signal *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * signal);
}

int is_number(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}