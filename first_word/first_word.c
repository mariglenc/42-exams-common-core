#include <unistd.h>

int main(int argc, char **argv){
    if(argc != 2 ){ // if more than 1 param
        write(1,"\n",1);
        return 0;
    }
    
    char *first_param = argv[1];
    int i = 0;

    while(first_param[i] == 32 || first_param[i] == 9) 
        i++;

    while(first_param[i] && first_param[i] != 32 && first_param[i] != 9)
    {
        write(1, &first_param[i], 1);
        i++;
    }
    write(1,"\n",1);
}