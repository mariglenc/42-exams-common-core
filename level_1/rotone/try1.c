#include <unistd.h>

int main(int argc, char **argv){
    if(argc==2){
        int i = 0;
        while(argv[1][i]){
            if((argv[1][i] >= 'a' && argv[1][i] < 'z') || (argv[1][i] >= 'A' && argv[1][i] < 'Z')){
                argv[1][i] += 1;
            } else if(argv[1][i] == 'Z' || argv[1][i] == 'z'){
                argv[1][i] = argv[1][i] - 25;
            }
            write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}
/*
0-iterate over first argument
1-if argument is more or equl than a/A or LESS than  z/Z increase it with + 1
2-if argument is equal to z / Z decrease it with 25
3-write out the argv character 
*/