DESCRIPTION
       The atoi() function converts the initial portion of the string pointed to by nptr to int.  The behavior is the
       same as

           strtol(nptr, NULL, 10);

       except that atoi() does not detect errors.

       The atol() and atoll() functions behave the same as atoi(), except that they convert the  initial  portion  of
       the string to their return type of long or long long.

RETURN VALUE
       The converted value or 0 on error.

int atoi(const char *nptr)
{
    int	i;
	int	is_neg;
	int	res;

    is_neg = 1;
	if (!nptr)
		return (0);
	i = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' ||
			nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
		i++;
	is_neg = (nptr[i] == '-') ? -1 : 1;
	if(nptr[i] == '-')
        is_neg = -is_neg;
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		res = (res * 10) + (nptr[i++] - '0');
	return (res * is_neg);
}