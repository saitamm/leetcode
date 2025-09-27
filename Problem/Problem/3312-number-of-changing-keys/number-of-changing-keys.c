int countKeyChanges(char* s) 
{
    int i= 0;
    int k = 0;
    
    while (s[i])
    {
        if(s[i] != s[i+1] && (s[i+1] != s[i] +32 && s[i+1] != s[i] -32) && s[i+1])
            k++;
        i++;
    }
    return (k);
}