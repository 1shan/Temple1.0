//
//  main.c
//  B10330023-江威廷-A29
//
//  Created by 江威廷 on 2015/11/18.
//  Copyright © 2015年 江威廷. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#define N 7
void read(void);
void write(char n[], int a);
char n[N];
int ch[N];

int main(void) {
    read();
    write(n, 0);
    system("pause");
    return 0;
}

void read(void) {
    char digit;
    printf("Input %d digits : ", N);
    for (int i = 0; i < N; ) {
        scanf(" %c", &digit);
        if (digit == '0' || digit == '1') {
            printf("Wrong input.\n");
            return 0;
        }
        else {
            n[i] = digit;
            i++;
        }
    }
}

void write(char n[], int a) {
    if (a == N - 1) {
        switch (n[a]) {
            case '2':
                for (ch[a] = 65; ch[a] <= 67; ch[a]++) {
                    printf("%c%c%c%c%c%c%c ", ch[0], ch[1], ch[2], ch[3], ch[4], ch[5], ch[6]);
                }
                break;
            case '3':
                for (ch[a] = 68; ch[a] <= 70; ch[a]++) {
                    printf("%c%c%c%c%c%c%c ", ch[0], ch[1], ch[2], ch[3], ch[4], ch[5], ch[6]);
                }
                break;
            case '4':
                for (ch[a] = 71; ch[a] <= 73; ch[a]++) {
                    printf("%c%c%c%c%c%c%c ", ch[0], ch[1], ch[2], ch[3], ch[4], ch[5], ch[6]);
                }
                break;
            case '5':
                for (ch[a] = 74; ch[a] <= 76; ch[a]++) {
                    printf("%c%c%c%c%c%c%c ", ch[0], ch[1], ch[2], ch[3], ch[4], ch[5], ch[6]);
                }
                break;
            case '6':
                for (ch[a] = 77; ch[a] <= 79; ch[a]++) {
                    printf("%c%c%c%c%c%c%c ", ch[0], ch[1], ch[2], ch[3], ch[4], ch[5], ch[6]);
                }
                break;
            case '7':
                for (ch[a] = 80; ch[a] <= 83; ch[a]++) {
                    if (ch[a] == 81)continue;
                    printf("%c%c%c%c%c%c%c ", ch[0], ch[1], ch[2], ch[3], ch[4], ch[5], ch[6]);
                }
                break;
            case '8':
                for (ch[a] = 84; ch[a] <= 86; ch[a]++) {
                    printf("%c%c%c%c%c%c%c ", ch[0], ch[1], ch[2], ch[3], ch[4], ch[5], ch[6]);
                }
                break;
            case '9':
                for (ch[a] = 87; ch[a] <= 89; ch[a]++) {
                    printf("%c%c%c%c%c%c%c ", ch[0], ch[1], ch[2], ch[3], ch[4], ch[5], ch[6]);
                }
                break;
        }
    }
    else {
        switch (n[a]) {
            case '2':
                for (ch[a] = 65; ch[a] <= 67; ch[a]++) {
                    write(n, a + 1);
                }
                break;
            case '3':
                for (ch[a] = 68; ch[a] <= 70; ch[a]++) {
                    write(n, a + 1);
                }
                break;
            case '4':
                for (ch[a] = 71; ch[a] <= 73; ch[a]++) {
                    write(n, a + 1);
                }
                break;
            case '5':
                for (ch[a] = 74; ch[a] <= 76; ch[a]++) {
                    write(n, a + 1);
                }
                break;
            case '6':
                for (ch[a] = 77; ch[a] <= 79; ch[a]++) {
                    write(n, a + 1);
                }
                break;
            case '7':
                for (ch[a] = 80; ch[a] <= 83; ch[a]++) {
                    if (ch[a] == 81)continue;
                    write(n, a + 1);
                }
                break;
            case '8':
                for (ch[a] = 84; ch[a] <= 86; ch[a]++) {
                    write(n, a + 1);
                }
                break;
            case '9':
                for (ch[a] = 87; ch[a] <= 89; ch[a]++) {
                    write(n, a + 1);
                }
                break;
        }
    }
    
}