#include <unistd.h>

void	ft_putstr(char *str){
    int i = 0;
    while(str[i]){
        char *c = &str[i];
        write(1, c,1);
        i++;
    }
}

int main(){
    ft_putstr("asd asd");
}