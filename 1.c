float add(float a,float b)
{
    return a+b;
}
int main()
{
    float mun, mun_two, mun_add;
    printf("请输入一个浮点数：");
    scanf("%f", &mun);
    printf("请输入第二个数:");
    scanf("%f",&mun_two);
    mun_add=add(mun,mun_two);
    printf("两个数的和为: %.2f", mun_add);
    return 0;
}