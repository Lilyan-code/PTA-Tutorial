double funcos(double e, double x)
{
    double item = 1;
    double numerator;        //分子
    double denominator;    //分母
    double result = 0;
    int i = 0;
    double flag = 1.0;

    while (fabs(item) > e)
    {
        numerator = 1;
        for (int j = 1; j <= i; j++)
        {
            numerator = numerator * x;
        }

        denominator = 1;
        for (int k = 1; k <= i; k++)
        {
            denominator = denominator * k;
        }

        item = flag * numerator / denominator;

        result = result + item;

        flag = -flag;

        i = i + 2;
    }

    return result;

}