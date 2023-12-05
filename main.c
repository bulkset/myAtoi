int myAtoi(const char *str)
{
    int i = 0;
    long int num = 0;
    int flag = 0;

    while (str[i] == ' ')
    {
        i++;
    }

    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            flag = 1;
        }
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');

        if (!flag && num > INT_MAX)
        {
            return INT_MAX;
        }
        else if (flag && -num < INT_MIN)
        {
            return INT_MIN;
        }

        i++;
    }
    if (flag)
    {
        num = -num;
    }

    return num;
}
