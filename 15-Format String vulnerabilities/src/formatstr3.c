//formatstr3.c
#include<stdio.h>

int access_allowed = 1234;

void impossible_to_execute()
{
    printf("Oh no!, you have done the impossible\n");
}

void main()
{
    char user_name[100];    
    printf("Login name: ");

    fgets(user_name, sizeof(user_name), stdin);
    printf("Welcome ");
    printf(user_name);

    if (access_allowed == 1337)
    {
        impossible_to_execute();
    }
    else
    {
        printf("Sorry, you are not allowed!\n");
    }
}
