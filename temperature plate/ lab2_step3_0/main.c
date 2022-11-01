#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 20

void make_table(double table[N][M]);
void change_temp();
void print_table(double table[N][M]);

int main()
{
    int i;
    int n=1;
    double table[N][M];
    make_table(table);
    for (i=0; i<n; i++)
    {
        change_temp(table);
        printf("\n");
        print_table(table);
    }
    return 0;
}

void make_table (double table[N][M])
{
    int i,j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        {
            if(i==0 && j==0)
            {
                table[i][j] = 4.5;
            }
            else if(i==9 && j==0)
            {
                table[i][j] = 2.5;
            }
            else if(i==0 && j==19)
            {
                table[i][j] = 5.5;
            }
            else if(i==9 && j==19)
            {
                table[i][j] = 3.5;
            }
            else if(j==0)
            {
                table[i][j] = 3;
            }
            else if(j==19)
            {
                table[i][j] = 5;
            }
            else if(i==0)
            {
                table[i][j] = 6;
            }
            else if(i==9)
            {
                table[i][j] = 2;
            }
            else
            {
                table[i][j]=0;
            }


        }

    }

}

void print_table(double table[N][M])
{
    int i,j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        {
            printf("%5.2f ", table[i][j]);
        }
        printf("\n");
    }
    printf("\n");


}

void change_temp()
{
    printf("change_temp \n");
}
