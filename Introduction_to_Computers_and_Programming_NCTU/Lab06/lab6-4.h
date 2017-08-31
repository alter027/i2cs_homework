int func1(int x)
{
    return 2*x+5;
}
int func2(int x)
{
    int sum = 0;
    for (int idx = 0; idx < x; idx++)
    {
        sum += idx;
    }
    return sum;
}
