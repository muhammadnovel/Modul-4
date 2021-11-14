#include <stdio.h>

int main(void){

    int boruto[3] = {85,90,86};
    int sarada[3] = {84,90,89};

    printf("[+] Nilai Boruto : \n\n");

    for(int i = 0; i < 3; i++){
        printf("Nilai progdas ke %d : %d\n", i+1, boruto[i]);
    }

    printf("\n");

    printf("[+] Nilai Sarada : \n\n");

    for(int i = 0; i < 3; i++){
        printf("Nilai progdas ke %d : %d\n", i+1, sarada[i]);
    }

    printf("\n");

    printf("[+] Perbandingan Nilai Boruto & Sarada :\n\n");

     for(int i = 0; i < 3; i++){
       if(boruto[i] > sarada[i]){
            printf("Perbandingan nilai ke %d : 1\n", i+1);
       }else {
            printf("Perbandingan nilai ke %d : 0\n", i+1);
       }
    }
}
