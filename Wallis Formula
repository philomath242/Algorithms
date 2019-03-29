//pi as an infinite product 

#include <stdio.h>
long double Even2Product(int n);
long double Odd2Product(int n);
int main()
{
    int m; long double value; 
    printf("Enter the value of no. of iterations \n");
    scanf("%d",&m);
    
    value = ((Even2Product(m))/(Odd2Product(m)))*(1/(2.0*m+1.0));
    value = 2*value;
    printf("%Lf",value);
    

    return 1;
}
long double Even2Product(int n){
    int i; long double product = 1;
    for(i=1;i<=n;++i){
        product = product*2.0*i;
    }
    product = product*product;
    return product;
}
long double Odd2Product(int n){
    int i; long double product = 1.0;
    for(i=1;i<n;++i){
        product = product*(2.0*i + 1.0);
    }
    product = product*product;
    return product;
}
