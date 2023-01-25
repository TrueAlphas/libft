int ft_isprint(int argument)
{
    if((argument >= 32 && argument <= 127))
        return argument;
    else
        return 0;
}