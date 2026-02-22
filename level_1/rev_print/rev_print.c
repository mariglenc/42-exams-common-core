#include <unistd.h>

int main(int argc, char **av){
    if(argc == 2){
        int i = 0;
        while(av[1][i])
            i++;
        
        while(i--)
            write(1,&av[1][i],1);
        
    }
    write(1,"\n",1);
    return 0;
}