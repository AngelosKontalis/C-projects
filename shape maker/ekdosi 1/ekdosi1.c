#include <stdio.h>
#include <stdlib.h>



int give_shape(void);
int give_symbol(void);
int give_size(void);
int print_square(int size);
int print_triangle1(int size);
int print_triangle2(int size);
int print_rhombus(int size);

int main (void) {
    int shape;
    int size;
    int symbol;

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

int give_symbol(void ) {
    char symbol;
    printf("give a symbol you want: \n");
    scanf("%c", &symbol);
    return symbol;
}

int give_size(void ) {
    int size;
    printf("Give a number for the size of the shape:  \n");
    scanf("%d", &size);
    return size;
}
int print_square(int size) {
    printf("square\n");
    return 0;
}

int print_triangle1(int size) {
    printf("triangle1\n");
    return 0;
}


int print_triangle2(int size) {
    printf("triangle2\n");
    return 0;
}

int print_rhombus(int size) {
    printf("rhombus\n");
    return 0;
}









