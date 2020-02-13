#include <stdio.h>
#include <stdlib.h>
char name[20];
char number[5];
int main()
{
    // printf("%s",name);
    // int i;
    // scanf("%s %d",name , &i);
    //printf("Enter name :");
    //gets(name);//รับ char 
    // char number[7];
    // fgets(number,5,stdin);//3 parameter (Char,Buffer,file(size)) รับจนครบ buffer
    // int i = atoi(number);//array to int
    // printf("number = %s, i = %d\n", number, i);
    // char a = getchar(); //return int
    // getchar();//***also recieve \n
    // char b = getchar();
    /*long l = atol(number);>
    double d = atof(number);>float */
    //puts(number);//put **string only**
    //putchar(100); putchar('a');//char array 

    // int found = 0; // false
    // float isExist = 0.0; // false
    // char isOnline = '\0'; // false
    // fgets(number, 5, stdin);
    // int i = atoi(number);

    // if (i>=0 && i<=10)
    // {
    //     printf("if = %d",i>=0 && i<=10);
    // }else if (i<=50 || !found){
    //     printf("else if");
    // }else{
    //     printf("esle");
    //     }
    //*****LOOOOOOOOOOPPPPPPPPPPPPPP*****//
    fgets(number, 5, stdin);
    int i = atoi(number);
    int count = 0;
    // while (count < i)
    // {
    //     printf("%d\n", count);
    //     // count++ * count - 5; // unary before bi
    //     // ++count * count -5;
    //     count++;
    // }
    for(int j = 0;j<=i ;j++)
    {
        printf("%d\n",j);
    }
    // while(1)>>>>รับอินพุทเรื่อยๆ

}