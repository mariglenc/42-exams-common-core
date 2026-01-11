
#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc != 2 ) // if more than 1 param stop
    {
        write(1,"\n",1);
        return 0;
    }
    
    char *word = argv[1];
    int i = 0;
    while (word[i])
    {   
        if((word[i]>='a' && word[i] < 'z') || (word[i] >= 'A' && word[i] < 'Z'))
        {
            word[i] = word[i]+1;
        } else if(word[i] == 'Z'){
            word[i] = 'A';
        } else if(word[i] == 'z'){
            word[i] = 'a';
        }
        write(1,&word[i],1);
        i++;
    }
    write(1,"\n",1);
}
