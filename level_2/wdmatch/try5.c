#include <unistd.h>

int main(int argc, char **argv){
    if(argc == 3){
        int i=0, l=0, j=0;
        while(argv[1][l])
            l++;
        
        while(argv[1][i] && argv[2][j]){
            if(argv[1][i] == argv[2][j]){
                i++;
            }
            j++;
        }
        if(i==l)
            write(1, argv[1], l);
    }
    write(1,"\n",1);
}