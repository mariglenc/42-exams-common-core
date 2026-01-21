#include <unistd.h>

int main(int argc, char **argv)
{
    
    int index_1 = 0;
    int index_2;

    int seen;
    int found;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    char *string_1 = argv[1];
    char *string_2 = argv[2];
    while (string_1[index_1])
    {
        index_2 = 0;
        found = 0;

        /* check if char exists in argv[2] */
        while (string_2[index_2])
        {
            if (string_1[index_1] == string_2[index_2])
            {
                found = 1;
                break;
            }
            index_2++;
        }

        /* check if already printed */
        seen = 0;
        while (seen < index_1 && string_1[seen] != string_1[index_1])
            seen++;

        if (found && seen == index_1)
            write(1, &string_1[index_1], 1);

        index_1++;
    }

    write(1, "\n", 1);
    return (0);
}



// ./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
//      padinto$
// ./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
//      df6ewg4$
// ./inter "rien" "cette phrase ne cache rien" | cat -e
//      rien$
// ./inter | cat -e
// $