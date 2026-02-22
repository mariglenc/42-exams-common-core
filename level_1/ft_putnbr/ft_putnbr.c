#include <unistd.h>

int put_nbr(int nr){
    if(nr>10){
        put_nbr(nr/10); // remove last nr (3) , (2)
    }
    char c = '0' + (nr % 10); // print last nr (3), (2)
    write(1, &c, 1); 
}

int main(void){
    int nr = 123;
    put_nbr(nr);
    write(1,"\n",1);
}