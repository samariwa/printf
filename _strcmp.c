/**
 * _strcmp - compare two strings
 * @s1: first str
 * @s2: second str
 *
 * Return: an integer less than, equal to or greater than 0
 * if s1 is found to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	/**
	 * given:
	 * address location| *s1 |   |   |   | *s2|  |  |   |
	 * Value of address|   a | b | c | \0|   a| b| p| \0|
	 * compare the location of *s1 and *s2 then move to the next location
	 * until we either find a terminator or find a discrepancy
	 * in this case, it will be when *s1 is on c and *s2 is on p's address
	 */
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2) /* they are totally similar */
	{
		return (0);
	}
	else /* somewhere in the loop we found a disparity */
	{
		return (*s1 - *s2);
	}
}
