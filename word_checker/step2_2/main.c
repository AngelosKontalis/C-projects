#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char get_word(char prox_meg[100][20],int *n);
char dictionary();
char word_checker();
char word_saver();
int statistics();


int main()
{
    char words[100][20];
    int i=0;
    int n=0;
    char prox_meg [100][20];
    get_word(prox_meg,&n);


    while (i<n)
    {

        word_checker();
        word_saver();
        statistics();
        i++;
    }


}

char get_word(char prox_meg[100][20],int *n)
{
    char buf1[20];
    int i;


    FILE *ptrwords;
    ptrwords = fopen("alice.txt", "r");

    while( fscanf(ptrwords, "%19s", buf1) != EOF )
    {
        printf("%s\n", &buf1);
        for (i=0; i<100; i++)
        {
            strcpy(prox_meg[i], buf1);
            (*n)++;
        }
    }


}

char dictionary()
{
    char words[100][20];
    char buf[20];
    int i;

    FILE *ptrdict;
    ptrdict = fopen("words.txt", "r");

    while( fscanf(ptrdict, "%19s", buf) != EOF )
    {
        printf("%s\n", &buf);
        for (i=0; i<100; i++)
        {
            strcpy(words[i], buf);

        }
    }

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


