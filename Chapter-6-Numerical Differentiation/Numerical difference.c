#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i, j;
    int n = 7;
    float x[7] = {1,1.2,1.4,1.6,1.8,2.0,2.2};
    float y[7][7] = {
        { 2.7183,0,0,0, 0, 0, 0 },
        { 3.3201,0,0,0, 0, 0, 0 },
        { 4.0552,0,0,0, 0, 0, 0 },
        { 4.9583,0,0,0, 0, 0, 0 },
        { 6.0496,0,0,0, 0, 0, 0 },
        { 7.3891,0,0,0, 0, 0, 0 },
        { 9.0250,0,0,0, 0, 0, 0 },
    };
 float xp,h,sum=0.0,term,first_derivative;
 int index,flag=0,sign=1;
 float a=8;
    float u,p;
    for(j=1;j<n;j++) {
        for(i=0;i<n-j;i++) {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }
    printf("\n The forward difference table is:\n");
    for(i=0;i<n;i++) {
        printf("\n");
        for (j=0;j<n-i;j++) {
            printf("%f\t", y[i][j]);
        }
}
 printf("\nEnter at what value of x you want to calculate derivative: ");
 scanf("%f",&xp);
 for(i=0;i<n;i++)
 {
     if (fabs(xp-x[i])<0.0001)
     {
        index=i;
        flag=1;
        break;
     }
 }
 if (flag==0)
 {
     printf("Invalid calculation point. Program exiting...");
     exit(0);
 }
 for(i=1;i<n;i++)
 {
  for(j=0;j<n-i;j++)
  {
      y[j][i]=y[j+1][i-1]-y[j][i-1];
  }
 }
 h = x[1]-x[0];
 for(i=1;i< n-index;i++)
 {
     term=pow(y[index][i],i)/i;
     sum=sum+sign*term;
     sign=-sign;
 }
 first_derivative=sum/h;
 printf("First derivative at x = %0.2f is %0.2f",xp,first_derivative);
 return 0;
}
