#include <stdlib.h>
#include <stdio.h>

static int count_word(char *str){
    int i = 0;
    int count = 0;

    while(str[i]){
        while(str[i] == ' ')
            i++;
        if(str[i])
            count ++;    
        while(str[i] && str[i] != ' ')
            i++;
    }

    return count;
}

static char *word_dup(char *str, int start, int end){
    int i = 0;
    char *word;
    word = malloc(end - start + 1);
    if(!word)
        return NULL;
    
    while (start < end)
        word[i++] = str[start++];
    
    word[i] = '\0';
    
    return word;
}

char    **ft_split(char *str){
    int i = 0;
    int j = 0;
    int start = 0;
    char **result;
    result = malloc(sizeof(char *) * count_word(str) +1);
    if(!result)
        return NULL;
    while(str[i]){
        while(str[i] == ' ')
            i++;
        start = i;
        while (str[i] && str[i] != ' ')
            i++;
        if(start < i)
            result[j++] = word_dup(str, start, i);
    }
    return result;
}


int main(void)
{
    char *test = "abc def ghi";
    char **res = ft_split(test);

    int i = 0;
    while (res[i])
    {
        printf("%s\n", res[i]);
        i++;
    }

    return 0;
}