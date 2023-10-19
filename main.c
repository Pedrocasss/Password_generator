#include "password_generator.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage : ./a.out <number_of_times_to_generate>\n");
        return -1;
    }
    (void)(*argv);
    t_pass *pass;
    int i = -1;
    pass = NULL;
    int j = ft_atoi(argv[1]);
    if (argc > 2 || j <= 0 || (!(argv[1][0]) >= '0' && argv[1][0] <= '9') || argc == 1)
    {
        printf("Usage : ./a.out <number_of_times_to_generate>\n");
        return -1;
    }
    while(j > 0)
    {
        i = -1;
        printf("Len: ");
        int len;
        scanf("%d", &len);
        if (len <= 0 && !is_number(len))
        {
            if (len <= 0)
                printf("Bro can you please put a valid number?\n");
            printf("Please the len must be >= 1!\n");
            return 1;
        }
        pass = malloc(sizeof(t_pass));
        init_struct(pass);

        char *password = (char *)malloc(sizeof(char) * (len + 1));

        srand(time(NULL) * getpid());
        while(++i < len)
        {
            int char_type = rand() % 4;
            if (char_type == 0)
                password[i] = pass->numbers[rand() % pass->len_numbers];
            else if (char_type == 1)
                password[i] = pass->lower_case[rand() % pass->len_lower_case];
            else if (char_type == 2)
                password[i] = pass->upper_case[rand() % pass->len_upper_case];
            else
                password[i] = pass->symbols[rand() % pass->len_symbols];
        }
        password[len] = '\0';
        printf("Password : %s\n", password);
        j--;
        free(password);
    }
    return 0;

}