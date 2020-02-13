#include <stdio.h>

//int add_ten(int x)                
//{ 
//    x = x + 10;
//    return x;
//}

//int x = 2000;                                      

int addTwenty(void);                                // ประกาศฟังชัน

int main()
{
    int x = 90;                                     
    int y = add_ten(x);                             // เรียกใช้
    printf("x in main = %d\n",x);
    printf("add_ten in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
}
int addTwenty()                                     
{
    printf("x in addTwenty = %d\n",x);              
    x += 20;                                          
    return x;
}
//int x = 3000;                                     

// ctrl+d = selection words 