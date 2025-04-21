int scoreOfString(char* s) 
{
    int i;
    int score;

    score = 0;
    i = 0;
    while (s[i+1])
    {
        score = score + abs(s[i] - s[i + 1]);
        i++;
    }
    return (score);
}