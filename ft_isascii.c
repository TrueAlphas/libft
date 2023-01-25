int ft_isascii(int argument)
{
    if((argument >= 0 && argument <= 127))
        return argument;
    else
        return 0;
}