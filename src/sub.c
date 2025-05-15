#include <stdio.h>
#include <enjoy.h>

// 足し算を行う関数
int add(int a, int b)
{
    int value = get_something(); // 何かの処理
    return a + b + value;
}

int readFile(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        return -1; // エラー: ファイルが開けない
    }
    fclose(file); // ファイルを閉じる
    return 0;     // 読み込んだ値を返す
}