#include <stdio.h>
#include <stdlib.h>


void sorting(int array[], int length){

    int i, j, obj;

    for(i = 0; i < length; i++){
        for(j = i+1; j < length; j++){
            if(array[i] > array[j]){
                obj = array[i];
                array[i] = array[j];
                array[j] = obj;
            }
        }
    }

}


int main(void){

    int menu, i, j, length;

    up:

    printf("==== SILAHKAN PILIH MENU ====\n");
    printf("1. Ordo 2x2\n");
    printf("2. Ordo 3x3\n");
    printf("3. Exit\n\n");
    printf("[~] Pilih : "); scanf("%d", &menu);


    if(menu == 1){
        int array[2][2];
        int convert[4];
        length = 0;

        printf("=== INPUT MATRIX ===\n\n");

        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf("[+] Matrix index [%d][%d] : ", i, j); scanf("%d", &array[i][j]);
            }
        }

        printf("=== RESULT MATRIX ===\n\n");

        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf("%d\t", array[i][j]);
                convert[length] = array[i][j];
                length++;
            }

            printf("\n");
        }

        sorting(convert, length);

        printf("\nSmallest : %d", convert[0]);
        printf("\nBiggest : %d", convert[length-1]);

        fflush(stdin);
        printf("\n\nKlik enter untuk memulai ulang program..."); getchar();


    }else if(menu == 2){

        int array[3][3];
        int convert[9];
        length = 0;

        printf("=== INPUT MATRIX ===\n\n");

        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                printf("[+] Matrix index [%d][%d] : ", i, j); scanf("%d", &array[i][j]);
            }
        }

        printf("=== RESULT MATRIX ===\n\n");

        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                printf("%d\t", array[i][j]);
                convert[length] = array[i][j];
                length++;
            }

            printf("\n");
        }

        sorting(convert, length);

        printf("\nSmallest : %d", convert[0]);
        printf("\nBiggest : %d", convert[length-1]);

        fflush(stdin);
        printf("\n\nKlik enter untuk memulai ulang program..."); getchar();


    }else if(menu == 3){

        printf("Menutup program...");
        return 0;
    }else {

        fflush(stdin);
        printf("Menu tidak ditemukan, klik enter untuk memulai ulang program..."); getchar();
    }


    system("cls");
    goto up;
}
