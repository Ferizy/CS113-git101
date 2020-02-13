#include <stdio.h>

void addTen(int *arr, int n){                                           
    for(int i = 0;i < n; i++){                         
        printf("[%p] = %d\n",arr + i,*(arr+i));           
        *(arr+i) += 10;                                                          
    }                                                                                  

int addTwenty(int *n)                                   
{
    *n += 20;                                        
    return 1;
}
int main()
{
    int numbers[] = {1,2,3,4,5};                            
    int n = 5;
    addTen(&numbers[0],n);                                 
    for(int i = 0;i < n; i++){
        printf("main[%p] = %d\n",numbers+i,*(numbers+i));
   
    addTwenty(&n);
    addTwenty(&numbers[4]);
    printf("n = %d\n",n);
    printf("numbers[4]=%d",numbers[4]);
}