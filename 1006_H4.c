#include <stdio.h>
int main()
{
    int age;
    int height;
    printf("請輸入成績(分):");
    scanf("%d",&age);
    if (age>=60)
    {
        printf("請輸入出席率(%):");
    scanf("%d",&height);
        if(height>=80)
        {
            printf("課程通過 ");
        }
        else
        {
            printf("出席率不及格");
        }
    
    }
    else
    {
        printf("成績不及格");
    }
    return 0;
}