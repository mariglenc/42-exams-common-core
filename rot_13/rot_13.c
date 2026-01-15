#include <unistd.h>

int main(int argc, char **argv){
    if(argc != 2){
        write(1,"\n",1);
        return 0;
    }
    
    int i = 0;

    while (argv[1][i])
    {   
        if (argv[1][i] <= 122 && argv[1][i] >= 109){ // z122 m109
            char temp = argv[1][i] - 13;
            write(1,&temp,1);
            i++;
        } else if (argv[1][i] >= 97 && argv[1][i] <= 109){ //a97 m109
            char temp = argv[1][i] + 13;
            write(1,&temp,1);
            i++;
        } else if (argv[1][i] <= 90 && argv[1][i] >= 77){ //Z90 M77
            char temp = argv[1][i] - 13;
            write(1,&temp,1);
            i++;
        } else if (argv[1][i] >= 65 && argv[1][i] <= 77){ // A65 M77
            char temp = argv[1][i] +13;
            write(1,&temp,1);
            i++;
        }
    }
    
    return 0;
}
