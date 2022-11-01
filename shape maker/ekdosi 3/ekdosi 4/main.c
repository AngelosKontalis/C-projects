#include <stdio.h>
#include <stdlib.h>



int give_shape(void);
int give_size(void);
void print_square(int size);
int print_triangle1(int size);
int print_triangle2(int size);
void print_rhombus(int size);

int main (void) {
    int shape;
    int size;

    for (; shape != -1 ; ) {
        shape = give_shape() ; /* Get user choice */

        if (shape >-1 ) { /* if not quit */
            size = give_size() ; /* get size of shape */
            if (shape==0) print_square(size); /* if 0,
                display
                square */
            if (shape==1) print_triangle1(size);

            if (shape==2) print_triangle2(size);

            if (shape==3) print_rhombus(size);
            }
    }
    return 0;
}


int give_shape(void ) {
    int shape;
    printf("Give a number from 0 to 3:(0 for square, 1 for triangle1, 2 for triangle2, 3 for rhombus) \n");
    scanf("%d", &shape);
    return shape;
}


int give_size(void) {
    int size;
    printf("Give a number for the size of the shape:  \n");
    scanf("%d", &size);
    return size;
}


void print_square(int size) {
    int i,j;
    for (i=1; i<= size; i++){
        for (j=1; j<= size; j++){

            if(i==1||j==1||i==size||j==size)
                printf("%d", i);

        else

                printf("-");
        }
        printf("\n");


    }

    return;
}


int print_triangle1(int size) {
    int i,j;

    for (i=1; i<= size; i++){
        for (j=1; j<= i; j++){

            if(i==1||i==size||j==1||j==i)
                printf("%d", i);

        else

                printf("-");
        }
        printf("\n");


    }

    return;
}


int print_triangle2(int size) {
    int i,j;
    size = 2*size;
    for (i=0; i<size/2; i++){
        for (j=1; j<= size; j++){

            if(j==size/2 +i||i == size/2 -1 && j!=size||j==size/2 -i)
                printf("%d", i);

            else if (j<size/2 +i && j> size/2 -i)
                printf("-");


        else

                printf(" ");
        }
        printf("\n");


    }

    return;
}


void print_rhombus(int size){
    int i,j;
    int counter = 1;

    for (i= -size / 2; i<= size / 2 ; i++){

        for (j= 1; j <=size - abs(i); j++)
        {


            if (j==size - abs(i)|| j== abs(i) + 1)

                printf("%d", counter);

            else

                printf("-");


        }
        counter = counter + 1;
        printf("\n");
    }


    return ;

}

