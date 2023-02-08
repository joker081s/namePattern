#include<stdio.h>
void main() {

    int a = 6, b = 6;

    printf("\n\n\n");
    
    for (int i = 0; i <= a; i++) {
        
        printf("  ");

        // print S
        for (int j = 0; j <= b; j++) {
            if (i == 0 || (j == 0 && i <= 3) || i == a || (j == b && i >= 3) || i == 3) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("  ");

        // print A
        for (int j = 0; j <= b; j++) {
            if (i == 0 || j == 0 || j == b || i == 3) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("  ");

        //print H
        for (int j = 0; j <= b; j++) {
            if (j == 0 || j == b || i == 3) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("  ");

        // print I
        for (int j = 0; j <= b; j++) {
            if (i == 0 || i == a || j == 3) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("  ");

        // print L
        for (int j = 0; j <= b; j++) {
            if (j == 0 || i == a) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("    ");

        // print N
        for (int j = 0; j <= b; j++) {
            if (j == 0 || j == b || i == j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("  ");

        // print A
        for (int j = 0; j <= b; j++) {
            if (i == 0 || j == 0 || j == b || i == 3) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("  ");

        // print N
        for (int j = 0; j <= b; j++) {
            if (j == 0 || j == b || i == j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("  ");

        // print D
        for (int j = 0; j <= b; j++) {
            if ((j <= 4 && (i == a || i == 0)) || j == 0 || (j == b && (i == 3 || i == 4 || i == 2)) || (j == 5 && (i == 1 || i == 5))) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("  ");

        // print A
        for (int j = 0; j <= b; j++) {
            if (i == 0 || j == 0 || j == b || i == 3) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("  ");

        // print L
        for (int j = 0; j <= b; j++) {
            if (j == 0 || i == a) {
                printf("* ");
            } else {
                printf("  ");
            }
        }       

        printf("\n");

    }

    printf("\n\n\t\t\t\t\t\t\t\t\t  Sahil Nandal\n\n\n");

}