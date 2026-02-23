#include <unistd.h>

int main(int argc, char **argv){
    if(argc == 2){
        int i = 0;
        int j;
        while(argv[1][i]){
            if(argv[1][i] > 64 && argv[1][i] < 91){ // uppercase
                j = 0;
                while(j < argv[1][i] - 64){
                    write(1, &argv[1][i], 1);
                    j++;
                }
            } else if(argv[1][i] > 96 && argv[1][i] < 123){ // lowercase
                j = 0;
                while(j < argv[1][i] - 96){
                    write(1, &argv[1][i], 1);
                    j++;
                }
            } else { // write char
                write(1, &argv[1][i], 1);
            }

            i++;
        }
    }
    write(1, "\n", 1);
}