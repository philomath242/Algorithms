#include <stdio.h>
#include <time.h>

int main()
{
    unsigned long int i=0;
    clock_t start_time = clock();
    for(i=0;i<1000000000;){
        i++;
    }
    clock_t lap_1 = clock();
    double time_1 = ((double)(lap_1 - start_time))/CLOCKS_PER_SEC;
    printf("%f\n",time_1);
    i = 0;
    for(i=0;i<1000000000;){
        i = i + 1;
    }
    clock_t lap_2 = clock();
    double time_2 = ((double)(lap_2 - lap_1))/CLOCKS_PER_SEC;
    printf("%f\n",time_2);
    
    return 1;
}
