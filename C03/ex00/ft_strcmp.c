
/*
두 개의 문자열을 비교하여 문자열이 완전히 같다면 0을 반환,
다르면 음수 혹은 양수를 반환하는 함수

str1 < str2 음수 , str1 > str2 양수 , str1 == str2 0 반환
*/
int ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
