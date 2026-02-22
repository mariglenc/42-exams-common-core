#include <unistd.h>

void print_nr(int nr){
    if(nr>10){
        print_nr(nr/10);
    }
    char c = '0' + nr%10;
    write(1, &c, 1);
}

int main(void){
    int i = 1;
    while(i <= 100){
        if (i%5==0 && i%3==0){
            write(1, "fizzbuzz", 8);
        } else if(i%3 == 0){
            write(1, "fizz", 4);
        } else if (i%5==0){
            write(1, "buzz", 4);
        } else {
            print_nr(i);
        }
        
        i++;
        write(1,"\n",1);
    }
    return 0;
}