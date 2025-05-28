#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
int horspool(char[], char[]);
void main()
{
char text[300], pattern[20]; int ans;

printf("\n enter the text:\n");
scanf("%s", text);
printf("\n enter the pattern:\n");
scanf("%s", pattern);
ans=horspool(text, pattern);
if(ans==1)
{
printf("\n pattern found\n");
}
else
{
printf("\n pattern is not found\n");
}
getch();
}int horspool(char text[], char pattern[])
{
int i, j, m, n, shift[300];
n=strlen(text);
m=strlen(pattern);
for(i=0; i<=n-1; i++)
{
shift[text[i]]=m;
}
for(j=0; j<=m-2; j++)
{
shift[pattern[j]]=m-1-j;
}
for(i=m-1; i<=n-1; i=i+shift[text[i]])
{
j=0;
while(pattern[m-1-j]==text[i-j] && j<=m-1)
{
++j;
}
if(j==m)
{
return 1;
}
}
return 0;
}