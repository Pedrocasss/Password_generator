#ifndef PASSWORD_GENERATOR
# define PASSWORD_GENERATOR


# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <unistd.h>
# include <string.h>
typedef struct s_pass
{
    char *numbers;
    int len_numbers;
    char *lower_case;
    int len_lower_case;
    char *upper_case;
    int len_upper_case;
    char *symbols;
    int len_symbols;
}               t_pass;

void    init_struct(t_pass *pass);
int ft_strlen(char *str);
int ft_atoi(char *str);
int is_number(int c);

#endif
