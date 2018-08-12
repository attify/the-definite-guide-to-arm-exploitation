//formatstr2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char login_key[25];
char user_key[25];

void read_password_from_disk()
{
    FILE *f = fopen("key.txt", "r");
    fgets(login_key, sizeof(login_key), f);
    fclose(f);
}

void login_success()
{
    printf("Access Granted!\n");
}

void login_failure()
{
    printf("Access Denied!\n");
}

void main()
{
    read_password_from_disk();
    
    char user_name[100];    
    printf("Login name: ");

    fgets(user_name, sizeof(user_name), stdin);
    printf("Welcome ");
    printf(user_name);

    printf("Password: ");
    fgets(user_key, sizeof(user_key), stdin);

    user_key[strlen(user_key)-1] = '\0';

    if (!strcmp(login_key, user_key)) login_success();
    else login_failure();
}