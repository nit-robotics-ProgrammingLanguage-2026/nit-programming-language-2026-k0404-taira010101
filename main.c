#include <stdio.h>

int main(void) {
    /* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/
    


    
    int x;
    double result;

    scanf("%d", &x);
    result = 1.0 / ((double)x + 100.0);
    printf("%.15f", result);

    return 0;
}
