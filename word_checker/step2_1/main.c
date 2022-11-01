#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char get_word(char prox[20],char prox_meg[20][20],int *n);
char dictionary();
char word_checker();
char word_saver();
int statistics();

int main()
{
    int i=0;
    int n=0;
    char prox[20];
    char prox_meg [20][20];
    get_word(prox,prox_meg,&n);


    while (i<n)
    {
        dictionary();
        word_checker();
        word_saver();
        statistics();
        i++;
    }


}

char get_word(char prox[20],char prox_meg[20][20],int *n)
{
    char endword[20]= "*T*E*L*O*S*";
    int i=0;


    while (scanf("%19s", prox), (strcmp(prox,endword) && i<20))
    {
        strcpy(prox_meg[i++], prox);
        (*n)++;

    }



}

char dictionary()
{
    printf("dictionary \n");
    return 0;
}

char word_checker()
{
    printf("word_checker \n");
    return 0;
}

char word_saver()
{
    printf("word_saver \n");
    return 0;
}

int statistics()
{
    printf("statistics \n");
    return 0;
}
