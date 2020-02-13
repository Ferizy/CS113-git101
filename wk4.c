#include <stdio.h>

     
//switch case
//     switch (expression) {                      
//       case const-expr:        const-expr = ค่าคงตัว         
//          statements                         
//          break;                 ถ้าไม่break switch case จะทำงานต่อไปเรื่อยๆ 
//       case const-expr:                                                          
//          statements                                                         
//       default:                 default ไม่ตรงกับเงื่อนไขอื่นๆจะทำงาน
//          statements        
//    }

    int n_digits = 0;
    int n_non_digits = 0;
    int ch;
    while ((ch=getchar()) != EOF) {         // EOF == End Of File (press enter key)
       switch (ch) {
          case '0': case '2': case '4': case '3': 
          case '4':
             n_digits++;
             break;
          default: 
             n_non_digits++;
             break;
       }   
    }
    printf("Numberic: %d, Non-Numberic: %d\n", n_digits, n_non_digits);

    //recursive ฟังก์ชั่นที่เรียกใช้ตนเอง
    long factorial(long n){
    if (n == 0) return 1;
    else return n * factorial(n-1);
    }
    long n;
    n = 5;
    printf("%ld! = %ld\n", n, factorial(n));
    
    return 0;
}