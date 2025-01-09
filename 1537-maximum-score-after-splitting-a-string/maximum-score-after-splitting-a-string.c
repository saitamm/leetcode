
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int maxScore(char* s)
{
    int maxScore = 0;
    int leftScore = 0;
    int rightScore = 0;
    int i = 0;
    int j;

    for (i = 0; i < ft_strlen(s); i++)
    {
        if (s[i] == '1')
            rightScore++;
    }
    j = 0;
    for (j = 0;j < ft_strlen(s) - 1;j++)
    {
        if (s[j] == '1')
            rightScore--;
        else
            leftScore++;
        if (maxScore < rightScore + leftScore)
            maxScore = rightScore + leftScore;
    }
    return (maxScore);
}