#include <stdio.h>
#include <string.h>
 
void check(char [], int);
 
int is_palindrome(char *s)
{
    check_if_palindrome(s, 0);
 
    return 0;
}
 
int check_if_palindrome(char s[], int index)
{
    int len = strlen(s) - (index + 1);
    if (s[index] == s[len])
    {
        if (index + 1 == len || index == len)
        {
            return (1);
        }
        check_if_palindrome(s, index + 1);
    }
    else
    {
      return (0);
    }
}
