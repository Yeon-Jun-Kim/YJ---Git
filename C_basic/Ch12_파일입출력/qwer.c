//search_trade_history.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define MAX_NUM_LENGTH 32
#define MAX_FILENAME_LENGTH 256
#define MAX_DATE_LENGTH 11
#define MAX_TYPE_LENGTH 5
#define MAX_CODE_LENGTH 11

struct Trade {
    char date[MAX_DATE_LENGTH];
    char type[MAX_TYPE_LENGTH];
    char code[MAX_CODE_LENGTH];
    int quantity;
    int price;
};

void print_trade(struct Trade trade) {

    printf("%s %s %d %d %d \n", trade.code, trade.date, trade.quantity, trade.price, trade.type);
}

int main() {
    char member_num[MAX_NUM_LENGTH];
    char input[MAX_LINE_LENGTH];
    char filename[MAX_FILENAME_LENGTH] = "tradelist.txt";
    char date[MAX_DATE_LENGTH];
    char type[MAX_TYPE_LENGTH];
    char code[MAX_CODE_LENGTH];

    FILE* fp = NULL;
    int line_num = 0;
    struct Trade trade;

    // Get member number
    printf("회원번호를 입력해 주세요: \n");
    fgets(member_num, MAX_NUM_LENGTH, stdin);
    member_num[strcspn(member_num, "\n")] = '\0'; // remove newline character

    // Get search criteria
    printf("Enter search criteria (date, type, code): \n"); //날짜, 매매타입, 종목코드
    fgets(input, MAX_LINE_LENGTH, stdin);
    input[strcspn(input, "\n")] = '\0'; // remove newline character

    if (strcmp(input, "date") == 0) {
        printf("Enter date (yyyy.mm.dd): ");
        fgets(date, MAX_DATE_LENGTH, stdin);
        date[strcspn(date, "\n")] = '\0'; // remove newline character
    }
    else if (strcmp(input, "type") == 0) {
        printf("Enter type (buy or sell): ");
        fgets(type, MAX_TYPE_LENGTH, stdin);
        type[strcspn(type, "\n")] = '\0'; // remove newline character
    }
    else if (strcmp(input, "code") == 0) {
        printf("Enter code: ");
        fgets(code, MAX_CODE_LENGTH, stdin);
        code[strcspn(code, "\n")] = '\0'; // remove newline character
    }
    else {
        printf("잘못된 입력입니다. 다시 입력해 주세요. \n");
        return 1;
    }

    // Open file
    fp = fopen("tradelist.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Search for trade
    while (fgets(input, MAX_LINE_LENGTH, fp)) {
        line_num++;
        if (fscanf(input, "%s %s %s %d %d", trade.date, trade.type, trade.code, &trade.quantity, &trade.price) != 5) {
            printf("Invalid data format in line %d\n", line_num);
            continue;
        }
        if (strcmp(member_num, trade.code) == 0) {
            if (strcmp(input, "date") == 0) {
                if (strcmp(date, trade.date) == 0) {
                    print_trade(trade);
                }
            }
            else if (strcmp(input, "type") == 0) {
                if (strcmp(type, trade.type) == 0) {
                    print_trade(trade);
                }
            }
            else if (strcmp(input, "code") == 0) {
                if (strcmp(code, trade.code) == 0) {
                    print_trade(trade);
                }
            }
        }
    }
}
// Close file