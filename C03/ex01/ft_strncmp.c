
/*
BlockDmask
BlockFmask

strncmp(str1, str2, 5); Black까지만 검사함으로 0반환
strncmp(str1, str2, 6); D < F 이므로 음수 반환

*/
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s2 != *s1)
			break;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
