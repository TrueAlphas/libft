int ft_isalpha(int argument)
{
    if((argument >= 65 && argument <= 90) || (argument >= 97 && argument <= 122))
        return argument;
    else
        return 0;
}