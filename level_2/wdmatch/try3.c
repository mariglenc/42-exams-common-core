#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc ==3){
        char *s1 = argv[1];
        char *s2 = argv[2];
        int i = 0, l = 0, j=0;

        while(s1[l])
        {
            l++;
        }
        
        while(s1[i] && s2[j])
        {
            if(s1[i] == s2[j])
            {
                i++;
            }
            j++;
        }

        if(i==l)
            write(1, s1, l);

    }
    write(1,"\n",1);
    return 0;
}