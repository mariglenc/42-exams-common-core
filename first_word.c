#include <unistd.h>

void	ft_putstr(char *str){
    int i = 0;
    while(str[i] == 32){
            i++;
    }
    while(str[i] && str[i] != 32){
        char *c = &str[i];
        write(1, c,1);
        i++;
    }
}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1,"\n",1);
        return 0;
    }

    char *string = argv[1];
    ft_putstr(string);
    write(1,"\n",1);
    return 0;
}
