#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Artefak {
    char nama[100];
    char kategori[100];
    int tahun;
    int nilai;
} Artefak;

Artefak *arr;

int main() {
    int N;
    scanf("%d", &N);

    arr = (Artefak*) malloc(N * sizeof(Artefak));

    for (int i = 0; i < N; i++) {
        scanf("%s %s %d %d", arr[i].nama, arr[i].kategori, &arr[i].tahun, &arr[i].nilai);
    }

    for (int j = 0; j < N; j++) {
        for (int k = 0; k < N-1; k++) {
            if (strcmp(arr[k].kategori, arr[k+1].kategori) != 0) {
                if (strcmp(arr[k].kategori, arr[k+1].kategori) > 0) {
                    char temp1[100];
                    strcpy(temp1, arr[k].kategori);
                    strcpy(arr[k].kategori, arr[k+1].kategori);
                    strcpy(arr[k+1].kategori, temp1);

                    int temp2 = arr[k].tahun;
                    arr[k].tahun = arr[k+1].tahun;
                    arr[k+1].tahun = temp2;

                    int temp3 = arr[k].nilai;
                    arr[k].nilai = arr[k+1].nilai;
                    arr[k+1].nilai = temp3;

                    char temp4[100];
                    strcpy(temp4, arr[k].nama);
                    strcpy(arr[k].nama, arr[k+1].nama);
                    strcpy(arr[k+1].nama, temp4);
                }
            } else if (arr[k].tahun != arr[k+1].tahun) {
                if (arr[k].tahun > arr[k+1].tahun) {
                    char temp1[100];
                    strcpy(temp1, arr[k].kategori);
                    strcpy(arr[k].kategori, arr[k+1].kategori);
                    strcpy(arr[k+1].kategori, temp1);

                    int temp2 = arr[k].tahun;
                    arr[k].tahun = arr[k+1].tahun;
                    arr[k+1].tahun = temp2;

                    int temp3 = arr[k].nilai;
                    arr[k].nilai = arr[k+1].nilai;
                    arr[k+1].nilai = temp3;

                    char temp4[100];
                    strcpy(temp4, arr[k].nama);
                    strcpy(arr[k].nama, arr[k+1].nama);
                    strcpy(arr[k+1].nama, temp4);
                }
            } else if (arr[k].nilai != arr[k+1].nilai) {
                if (arr[k].nilai < arr[k+1].nilai) {
                    char temp1[100];
                    strcpy(temp1, arr[k].kategori);
                    strcpy(arr[k].kategori, arr[k+1].kategori);
                    strcpy(arr[k+1].kategori, temp1);

                    int temp2 = arr[k].tahun;
                    arr[k].tahun = arr[k+1].tahun;
                    arr[k+1].tahun = temp2;

                    int temp3 = arr[k].nilai;
                    arr[k].nilai = arr[k+1].nilai;
                    arr[k+1].nilai = temp3;

                    char temp4[100];
                    strcpy(temp4, arr[k].nama);
                    strcpy(arr[k].nama, arr[k+1].nama);
                    strcpy(arr[k+1].nama, temp4);
                }
            } else {
                if (strcmp(arr[k].nama, arr[k+1].nama) > 0) {
                    char temp1[100];
                    strcpy(temp1, arr[k].kategori);
                    strcpy(arr[k].kategori, arr[k+1].kategori);
                    strcpy(arr[k+1].kategori, temp1);

                    int temp2 = arr[k].tahun;
                    arr[k].tahun = arr[k+1].tahun;
                    arr[k+1].tahun = temp2;

                    int temp3 = arr[k].nilai;
                    arr[k].nilai = arr[k+1].nilai;
                    arr[k+1].nilai = temp3;

                    char temp4[100];
                    strcpy(temp4, arr[k].nama);
                    strcpy(arr[k].nama, arr[k+1].nama);
                    strcpy(arr[k+1].nama, temp4);
                }
            }
        }
    }

    for (int l = 0; l < N; l++) {
        printf("%s %s %d %d\n", arr[l].nama, arr[l].kategori, arr[l].tahun, arr[l].nilai);
    }

    return 0;
}
