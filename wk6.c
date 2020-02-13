#include <stdio.h>
int main()
{
    //address
     int x = 100;
     int q = 0144;                                   // เลข 0 = 8
     int w = 0x64;                                    // เลข 0x = 16
     printf("x = %d\n",x);
     printf("refernce x = %lu\n",&x);                 //print address
     printf("refernce x = %p\n",&x);                   //%o = ฐาน8 , %p = ปริ้นแอดฐาน16

    //array
    // int number[] = {2,3,4,5,6,7};                    size = 6
    // int number[100];                                size = 100
    //int number[100] = {2,3,4,5,6,7};                 size = 100
    // number[1000] = 200;                            
    // printf("index 1 = %d\n",number[1000]);
    // printf("refernce number[1] = %p\n",&number[1]);
    // printf("refernce number[0] = %p\n",&number[0]);
    // printf("refernce number = %p\n",number + 1);     // 
    // int number[] = {3,4,5,6,7};

    //POINTER
    int *ptr = &x;
    int *arrPtr;
    int number[] = {2,3,4,5,6,7}; 
    // arrPtr = number;                                     // ประกาศไว้เวลาเรียกใช้ไม่ต้องมี *
    // arrPtr += 3;                                    
    // *arrPtr = *arrPtr + 3;                               // ใช้ * ดึงค่าของจาก address ออกมาแก้ไข
    // printf("arrPtr = %p, * arrPtr = %d\n",arrPtr,*arrPtr);
    // printf("number[2] = %d\n",number[2]);

    // for(int *ptr = number; ptr <= &number[4]; ptr++){
    //     printf("[%p] = %d\n",ptr , *ptr);
    // }
    // int *ptr2 = number;                                  // array === &array[0]
    // for(int i = 0; i < 6; i++){
    //     printf("[%p] = %d\n",ptr2 + i ,*(ptr2 + i));    
    // }