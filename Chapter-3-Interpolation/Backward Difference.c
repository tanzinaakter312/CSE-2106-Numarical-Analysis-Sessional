#include <stdio.h>
void forward(float x[4], float y[4][4], int n);
void BackWard(float x[4], float y[4][4], int n);
int main(){
    int i, j;
    int n = 8;
    float x[8] = {1,2,3,4,5,6,7,8 };
    float y[8][8] = {
        { 3010, 0, 0, 0 },
        { 3424, 0, 0, 0 },
        { 3802, 0, 0, 0 },
        { 4105, 0, 0, 0 },
        { 4472, 0, 0, 0 },
        { 4771, 0, 0, 0 },
        { 5051, 0, 0, 0 },
        { 5315, 0, 0, 0 }
    };
    for (j = 1; j < n; j++) {
        for (i = j; i < n; i++) {
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
        }
    }
    printf("\nThe backward difference table is:\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j <= i; j++) {
            printf("%f\t", y[i][j]);
        }
    }

}





