#include <stdio.h>
#include <string.h>

void remove2same(int sz, char str[])
{   
    int num = 1, check = 0;
    for (int j = 0; j < num; j++)
    {
        check = 0;
        for(int i = 0; i < sz; i++)
        {
            if(str[i] == str[i+1])
            {   
                check = 1;
                num++;
                if(str[i] == str[i+1] && str[i] == str[i+2])
                {   
                    for(int j = i; j < sz; j++)
                    {
                        str[j] = str[j+3];
                    }
                    sz -= 3;
                }
                else{
                    for(int j = i; j < sz; j++)
                {
                    str[j] = str[j + 2];
                }
                sz -= 2;
                }
            }

        }
        if(check){
            printf("%s\n", str);
        }
    }
}

int main(void)
{
    char str[100];
    scanf("%s", str);
    int sz = strlen(str);
    remove2same(sz, str);
}