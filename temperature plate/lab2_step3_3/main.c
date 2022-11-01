#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 20

void make_table(double table[N][M]);
void change_temp(double table[N][M]);
void print_table(double table[N][M]);
void value_checker(double table[N][M]);
void final_table(double table[N][M]);

int main()
{
    int i;
    int n=1;
    double table[N][M];
    make_table(table);
    print_table(table);
    for (i=0; i<n; i++)
    {
        change_temp(table);
        printf("\n");
        print_table(table);
        printf("\n");
        value_checker(table);
        make_table(table);
        final_table(table);
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

}



void change_temp(double table[N][M])
{
    int i,j,t,sec;
    sec= 0;
    printf("\n Put the second you want: ");
    scanf("%d", &sec);
    for (t=0; t<=sec; t++)
    {
        for (i=1; i<N-1; i++)
        {
            for (j=1; j<M-1; j++)
            {
                table[i][j] =0.1 * (table[i-1][j-1]+table[i-1][j]+table[i-1][j+1]+table[i][j-1]+table[i][j]+table[i][j+1]+table[i+1][j-1]+table[i+1][j]+table[i+1][j+1]);


            }

        }
    }
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        {
            if (table[i][j]>=5.40 && table[i][j]<=6.00)
            {
                table[i][j]=9.00;
            }
            if (table[i][j]>=4.80 && table[i][j]<5.40)
            {
                table[i][j]=8.00;
            }
            if (table[i][j]>=4.20 && table[i][j]<4.80)
            {
                table[i][j]=7.00;
            }
            if (table[i][j]>=3.60 && table[i][j]<4.20)
            {
                table[i][j]=6.00;
            }
            if (table[i][j]>=3.00 && table[i][j]<3.60)
            {
                table[i][j]=5.00;
            }
            if (table[i][j]>=2.40 && table[i][j]<3.00)
            {
                table[i][j]=4.00;
            }
            if (table[i][j]>=1.80 && table[i][j]<2.40)
            {
                table[i][j]=3.00;
            }
            if (table[i][j]>=1.20 && table[i][j]<1.80)
            {
                table[i][j]=2.00;
            }
            if (table[i][j]>=0.60 && table[i][j]<1.20 )
            {
                table[i][j]=1.00;
            }
            if(table[i][j]>=0.00 && table[i][j]<0.60 )
            {
                table[i][j]=0.00;
            }
        }
    }
}

void value_checker(double table[N][M])
{
    int sum9=0,sum8=0,sum7=0,sum6=0,sum5=0,sum4=0,sum3=0,sum2=0,sum1=0,sum0=0;
    int i,j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        {
            if(table[i][j]==9.00)
            {
                sum9 += 1;
            }
            else if(table[i][j]==8.00)
            {
                sum8 += 1;
            }
            else if(table[i][j]==7.00)
            {
                sum7 += 1;
            }
            else if(table[i][j]==6.00)
            {
                sum6 += 1;
            }
            else if(table[i][j]==5.00)
            {
                sum5 += 1;
            }
            else if(table[i][j]==4.00)
            {
                sum4 += 1;
            }
            else if(table[i][j]==3.00)
            {
                sum3 += 1;
            }
            else if(table[i][j]==2.00)
            {
                sum2 += 1;
            }
            else if(table[i][j]==1.00)
            {
                sum1 += 1;
            }
            else if(table[i][j]==0.00)
            {
                sum0 += 1;
            }

        }
    }
    printf("there are %d places on the board with the value 9 \n", sum9);
    printf("there are %d places on the board with the value 8 \n", sum8);
    printf("there are %d places on the board with the value 7 \n", sum7);
    printf("there are %d places on the board with the value 6 \n", sum6);
    printf("there are %d places on the board with the value 5 \n", sum5);
    printf("there are %d places on the board with the value 4 \n", sum4);
    printf("there are %d places on the board with the value 3 \n", sum3);
    printf("there are %d places on the board with the value 2 \n", sum2);
    printf("there are %d places on the board with the value 1 \n", sum1);
    printf("there are %d places on the board with the value 0 \n", sum0);
}

void final_table(double table[N][M])
{
    int i,j,t,sec=100;
    int sum,sum1;
    int change = 0;
    printf("\n \n The final temperatures of the board are:  \n \n");

    for (t=0; t<=sec; t++)
    {
        sum = 0;
        sum1 = 0;
        for (i=1; i<N-1; i++)
        {

            for (j=1; j<M-1; j++)

            {

                sum += table[i][j];
                table[i][j] =0.1 * (table[i-1][j-1]+table[i-1][j]+table[i-1][j+1]+table[i][j-1]+table[i][j]+table[i][j+1]+table[i+1][j-1]+table[i+1][j]+table[i+1][j+1]);
                sum1 += table[i][j];
                change= sum1-sum;


            }

        }
        if (change < 1 ){
            break;
        }

    }
}


