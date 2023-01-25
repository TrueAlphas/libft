int ft_isalnum(int argument)
{
    if((argument >= 65 && argument <= 90) || (argument >= 97 && argument <= 122) || (argument >= 48 && argument <= 57))
        return 1;
    else
        return 0;
}