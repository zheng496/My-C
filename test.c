#include <stdio.h>

int main(void)
{
    int total_seconds;
    // 相当于 Python: total_seconds = int(input("请输入实验秒数："))
    printf("请输入实验秒数："); // 打印提示文字
    scanf("%d", &total_seconds); // 读取键盘输入的整数

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    printf("实验时长：%d小时%d分钟%d秒\n", hours, minutes, seconds);
    printf("是否大于2小时：%s\n", total_seconds > 2*3600 ? "是" : "否");

    int total_sample = total_seconds * 8;
    printf("总采样次数：%d\n", total_sample);

    int correct = hours * 3600 + minutes * 60 + seconds;
    printf("计算是否正确：%s\n", correct == total_seconds ? "是" : "否");

    return 0;
}
