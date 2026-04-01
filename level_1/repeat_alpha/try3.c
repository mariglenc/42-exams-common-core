#include <unistd.h>

int main(int argc, char **argv){
    if(argc==2){
        int j, i =0;
        while(argv[1][i]){
            if(argv[1][i] > 64 && argv[1][i] < 91){
                j = 64;
                while(argv[1][i] > j){              // A = 65 
                    write(1,&argv[1][i],1);
                    j++;
                }
            } else if(argv[1][i] > 96 && argv[1][i] < 123){
                j = 96;
                while(argv[1][i] > j){              // A = 97 
                    write(1,&argv[1][i],1);
                    j++;
                }
            } else 
                write(1,&argv[1][i],1);

            i++;
        }
    }
    write(1, "\n", 1);
}