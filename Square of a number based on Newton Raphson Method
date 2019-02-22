#include <stdio.h>

//program for finding square root based on Newton Raphson Method
int main()
{   
    int N, i, R;
    
    printf("Enter the number ");
    scanf("%d", &R); 
    
    printf("How many iterations for NRM ?  ");
    scanf("%d", &N);
    
    double x[N];
    
    printf("What is the initial approximation ? \n");
    scanf("%lf", &x[0]);    // any number can be initial approximation since second derivative is always positive 
    
    for(i=0;i<=N;i++){
        x[i+1]=((x[i]*x[i]) + R)/(2.0*x[i]);  // the baseline for whole 
        printf("%lf \n  ",x[i]);
    }
    return 1;
}
