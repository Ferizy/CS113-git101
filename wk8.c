#include <stdio.h>

int main() {

    //struct  (คล้าย list ใน python)
    struct student {
    char id[11];
    char name[40];
    };

    //เข้าถึง structure
    printf("%s\n", std.name);
    std.id = 6210406581;

    //วิธีการเข้าถึง structure ด้วย pointer
    struct student std, *p_std;
    p_std = &std;
    printf("%s\n", (*p_std).name);
    (*p_std).age = 21;

    //typedef กำหนดประเภทข้อมูลให้เป็นชื่อใหม่
    typedef unsigned long int ulint;

    //Self-Referential Structures โครงสร้างที่มี pointer ชี้กลับไปยังโครงสร้างนี้ (linked list)
    struct node {
    int data;
    struct node *next;
    };
การใช้งาน git
git init
add a.txt
git config ---username กับ email
commit -m อย่าลืม**
*****เชื่อมกับgithub*****
git remote add <ชื่อ remote เช่น origin> <git url>
git push -u origin เพื่อเชื่อมเข้ากับgithub

การใช้ terminal เพื่อเชื่อ git



git log --all --decorate --oneline --graph ตรวจเช็คพ้อย//commit
