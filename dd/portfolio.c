#include <stdio.h>

#define MAX_NAME_LEN 20
#define MAX_PASSWORD_LEN 20
void register_member();

struct Member {
    char name[MAX_NAME_LEN];
    char password[MAX_PASSWORD_LEN];

};
struct MemberInfo {
    char name[MAX_NAME_LEN];
    char password[MAX_PASSWORD_LEN];
};
void register_member() {
    FILE* fp;
    struct Member member;

    // ȸ������ ���� �Է¹ޱ�
    printf("Enter your name (up to %d characters): ", MAX_NAME_LEN - 1);
    scanf("%s", member.name);

    printf("Enter your password (up to %d characters): ", MAX_PASSWORD_LEN - 1);
    scanf("%s", member.password);

    // ���Ͽ� ȸ������ ���� �����ϱ�
    fp = fopen("members.txt", "a");
    fprintf(fp, "%s %s\n", member.name, member.password);
    fclose(fp);

    printf("Registration successful!\n");
}

int login() {
    FILE* fp;
    struct MemberInfo member;
    char input_name[MAX_NAME_LEN];
    char input_password[MAX_PASSWORD_LEN];
    int found = 0;

    // �α��� ���� �Է¹ޱ�
    printf("Enter your name (up to %d characters): ", MAX_NAME_LEN - 1);
    scanf("%s", input_name);

    printf("Enter your password (up to %d characters): ", MAX_PASSWORD_LEN - 1);
    scanf("%s", input_password);

    // ���Ͽ��� ȸ������ ���� �о����
    fp = fopen("members.txt", "r");

    while (fscanf(fp, "%s %s", member.name, member.password) == 2) {
        if (strcmp(input_name, member.name) == 0 && strcmp(input_password, member.password) == 0) {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found) {
        printf("Login successful!\n");
        return 1;
    }
    else {
        printf("Login failed. Please check your name and password.\n");
        return 0;
    }
}

