#include <unistd.h>

int main(int ac, char **argv)
{
    if (ac == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            /* if we encounter an upper-case letter
             * we have to make it lower-case and write a _ before it
             */
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
            {
                /* here, we change the upper-case letter to its
                 * corresponding lower-case letter
                 */
                argv[1][i] += 32;
                /* we write a _ to the screen
                 */
                write(1, "_", 1);
            }
            /* then we can write the current character, changed or not
             */
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    /* finally we can write the newline
     */
    write(1, "\n", 1);
}