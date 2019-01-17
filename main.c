#include <stdio.h>

//敏感字符管理应用软件---Java C# python js
//C语言一般做硬件控制开发，比如冰箱自动控制程序
//C++ 做算法开发

/*
index
char arr[1024];
arr[0] = 'a'
arr[1] = 'b';

*/

/*
    专车位置管理系统
    1---添加车辆位置
    2---删除车辆位置
    3---显示全部车辆位置
    4---返回离我的位置最近的车辆---业务
    5---退出
 */

int main()
{

    printf("欢迎进入专场位置管理系统!\n");

    while (1)
    {
        printf("1---添加车辆位置\n");
        printf("2---删除车辆位置\n");
        printf("3---显示全部车辆位置\n");
        printf("4---返回离我的位置最近的车辆\n");
        printf("5---退出\n");

        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {

        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("应用已经退出\n");
            break;
        }
    }

    return 0;
}