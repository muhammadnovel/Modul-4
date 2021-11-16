#include <stdio.h>
#include <stdlib.h>

void selectionShort(int A[], int n) {
    int temp;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int shortOrdo2(int array[2][2], int kode) {

    int z[100], index = 0;

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            z[index] = array[a][b];
            index++;
        }
    }

    selectionShort(z, index);

    if (kode == 1) {
        return z[0];
    } else {
        return z[index - 1];
    }
}

int shortOrdo3(int array[3][3], int kode) {

    int z[100], index = 0;

    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            z[index] = array[a][b];
            index++;
        }
    }

    selectionShort(z, index);

    if (kode == 1) {
        return z[0];
    } else {
        return z[index - 1];
    }
}

void ordo2(void) {
    int array[2][2];
    int no = 1;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d. Masukan index matrix [%d][%d] : ", no, i, j);
            scanf("%d", &array[i][j]);
            no++;
        }
    }

    printf("\nMatriks : \n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("Bilangan Terkecil : %d\n", shortOrdo2(array, 1));
    printf("Bilangan Terbesar : %d", shortOrdo2(array, 2));

}

void ordo3(void) {
    int array[3][3];
    int no = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d. Masukan index matrix [%d][%d] : ", no, i, j);
            scanf("%d", &array[i][j]);
            no++;
        }
    }

    printf("\nMatriks : \n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("Bilangan Terkecil : %d\n", shortOrdo3(array, 1));
    printf("Bilangan Terbesar : %d", shortOrdo3(array, 2));

}

int main(void) {

    int menu;

    printf("Pilih ordo matriks : \n\n");
    printf("1. Ordo 2x2\n");
    printf("2. Ordo 3x3\n\n");

    printf("Pilih : ");
    scanf("%d", &menu);
    printf("\n");

    switch (menu) {
    case 1:
        ordo2();
        break;
    case 2:
        ordo3();
        break;
    default:
        return 0;
    }
}
