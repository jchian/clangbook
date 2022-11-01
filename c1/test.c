#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int mgetline(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */
main()
{
int len; /* current line length */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    while ((len = mgetline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
if (max > 0) /* there was a line */
        printf("%s", longest);
        return 0;
