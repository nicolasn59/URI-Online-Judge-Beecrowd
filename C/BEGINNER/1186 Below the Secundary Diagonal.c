#include <stdio.h>
int main()
{
    int i, j, diagonal;
    char operation[2];
    double matrix[12][12], sum, count;
    scanf("%s ", operation);
    sum = count = 0;
    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &matrix[i][j]);
    diagonal = 11;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (j > diagonal)
            {
                sum += matrix[i][j];
                count += 1;
            }
        }
        diagonal -= 1;
    }
    if (operation[0] == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", (sum / count));
    return 0;
}