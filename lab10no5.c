#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account ;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

hoststd cs[5] = {
    {"66-040626-2686-9", "MR.A", "user1", "passwd1"},
    {"66-040626-2686-8", "MR.B", "user2", "passwd2"},
    {"66-040626-2686-7", "MR.C", "user3", "passwd3"},
    {"66-040626-2686-6", "MR.D", "user4", "passwd4"},
    {"66-040626-2686-5", "MR.E", "user5", "passwd5"}
};

int main(){
    int i, f=0;
    char user[64];
    char pass[64];

    scanf("%s %s", user, pass);

    for (i=0; i<5; i++){
        if (strcmp(cs[i].stdACC.loginname, user) == 0 && strcmp(cs[i].stdACC.password, pass) == 0){
            f = 1;
            break;
        }
    }

    if (f == 1){
        printf("Welcome");
    } else {
        printf("Incorrect login or password");
    }

    return 0;
}
