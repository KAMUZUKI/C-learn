// 本题要求编写程序计算某年某月某日是该年中的第几天。

// 输入格式:
// 输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。

// 输出格式:
// 在一行输出日期是该年中的第几天。

// 输入样例1:
// 2009/03/02
// 输出样例1:
// 61
// 输入样例2:
// 2000/03/02
// 输出样例2:
// 62
#include <stdio.h>

int main()
{
    int year, month, day;
    int sum = 0, flag = 0;
    scanf("%d/%d/%d", &year, &month, &day);
    switch(month)
    {
        case 1: sum = 0; break;
        case 2: sum = 31; break;
        case 3: sum = 59; break;
        case 4: sum =90; break;
        case 5: sum = 120; break;
        case 6: sum = 151; break;
        case 7: sum = 181; break;
        case 8: sum = 212; break;
        case 9: sum = 243; break;
        case 10: sum = 273; break;
        case 11: sum = 304; break;
        default: sum = 334; break;
    }
    sum += day;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        flag = 1;
    if(flag == 1 && month > 2)
        sum++;
    printf("%d", sum);
    return 0;
}
