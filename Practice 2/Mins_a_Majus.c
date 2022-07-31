#include<string.h>
main()
{
    char ch[30];
    int i=0;
    while(ch[i]!="\0")
    {
        if (ch[i]>=97 && ch[i]<=122)
        {
            ch[i]=ch[i] - 32 ;
        }
    i=i+1;
    }
printf("Alors ; %s",ch);
}
