#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 4){
        write(1,"\n",1);
        return 0;
    }
    // int count = 0;
    // while(argv[2][count] || argv[3][count]){
    //     count ++;
    // }
    // if(count != 1){
    //     write(1,"\n",1);
    //     return 0;
    // }
    if (argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        write(1, "\n", 1);
        return 0;
    }

    int i = 0;
    
    char find  = argv[2][0];
    char replace  = argv[3][0];
    while(argv[1][i]){
        if(argv[1][i] == find){
            argv[1][i] = replace;
        }
        write(1,&argv[1][i],1);
        i++;
    }

    write(1,"\n",1);
    
    return 0;
}