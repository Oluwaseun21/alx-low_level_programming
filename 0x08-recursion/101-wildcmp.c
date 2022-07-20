/*
 * File: 101-wildcmp.c
 * Task: Writing a function that compares two strings and returns 1
 *if the strings can be considered identical, otherwise return 0.
 */

#include "main.h"

int strlen_no_wilds(char *s);
void iterate_wild(char **wildstr);
char *postfix_match(char *s, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - Returns the length of a string,
 * ignoring wildcard characters.
 * @s: The string to be measured.
 * Return: The length.
 */
int strlen_no_wilds(char *s)
{

	int len = 0, index = 0;

	if (*(s + index))
{
	if (*s != '*')
	len++;
	index++;
	len += strlen_no_wilds(s + index);
}
	return (len);
}

/**
 * iterate_wild - Iterates through a string located at a wildcard
 * until it points to a non-wildcard character.
 * @wildstr: The string to be iterated through.
 */
void iterate_wild(char **wildstr)
{

	if (**wildstr == '*')
{
	(*wildstr)++;
	iterate_wild(wildstr);
}
}

/**
 * postfix_match - Checks if a string str matches the postfix of
 *another string potentially containing wildcards.
 * @s: The string to be matched.
 * @postfix: The postfix.
 * Return: If str and postfix are identical - a pointer to the null byte
 *  located at the end of postfix.
 *  Otherwise - a pointer to the first unmatched character in postfix.
 */
char *postfix_match(char *s, char *postfix)
{
	int str_len = strlen_no_wilds(s) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
	iterate_wild(&postfix);
	if (*(s + str_len - postfix_len) == *postfix && *postfix != '\0')
{
	postfix++;
	return (postfix_match(s, postfix));
}
	return (postfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */

int wildcmp(char *s1, char *s2)
{

	if (*s2 == '*')
{
	iterate_wild(&s2);
	s2 = postfix_match(s1, s2);
}
	if (*s2 == '\0')
	return (1);
	if (*s1 != *s2)
	return (0);
	return (wildcmp(++s1, ++s2));
}
