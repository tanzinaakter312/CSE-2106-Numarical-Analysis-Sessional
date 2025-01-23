#include <stdio.h>
int main()
{
    int i, j;
    int n = 4;
    float x[4] = {1,3,5,7};
    float y[4][4] = {
        { 24, 0, 0, 0 },
        { 120, 0, 0, 0 },
        { 336, 0, 0, 0 },
        { 720, 0, 0, 0 },
    };
    float a = 8;
    float h, u, sum, p;
    for (j = 1; j < n; j++) {
        for (i = 0; i < n - j; i++) {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }
    printf("\n The forward difference table is:\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n - i; j++) {
            printf("%f\t", y[i][j]);
        }
}
    p = 1;
    sum=y[0][0];
    h=x[1] - x[0];
    u=(a - x[0]) / h;
    for(j=1;j<n;j++) {
        p=p*(u-j+1)/j;
        sum=sum+p*y[0][j];
    }
    printf("\nThe value of y at x=%f is %f", a, sum);
}






