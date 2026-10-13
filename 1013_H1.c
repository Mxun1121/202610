#include <stdio.h>
int main()
{
    int day;
    printf("產品選項有:\n1. 紅茶 30元\n2. 綠茶 35元\n3. 奶茶 50元\n4. 果汁 45元\n請輸入選項:");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
    printf("紅茶 30元");
    break;
    case 2:
    printf("綠茶 35元");
    break;
    case 3:
    printf("奶茶 50元");
    break;
    case 4:
    printf("果汁 45元");
    break;
    default:
    printf("無此飲料選項");
    }
    return 0;
}