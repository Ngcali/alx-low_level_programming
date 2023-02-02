#include <stdio.h>
#include <string.h>
 
void check_if_palindrome(char [], int);
 
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
