#include <stdio.h>
float average(float score[10]);
int main()
{
    float score[10], aver;
    int i;
    printf("输入10个成绩：\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &score[i]);
    }
    aver = average(score);
    printf("平均成绩是%f5.2\n", aver);
    system("pause");
    return 0;
}
float average(float score[10])
{
    int i;
    float aver,sum=score[0];
    for (i = 0; i < 10; i++)
    {
        sum = sum + score[i];/* code */
    }
    aver = sum / 10;

    return aver;
    
}