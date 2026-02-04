#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// 声明自定义函数
bool only_digits(string s);
char rotate(char c, int key);

int main(int argc, string argv[])
{
    // 1. 检查命令行参数数量 + 格式
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // 2. 把 key 从 string 转成 int，并做取模
    int key = atoi(argv[1]) % 26;

    // 3. 读取明文
    string plaintext = get_string("plaintext: ");

    // 4. 加密并输出
    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = rotate(plaintext[i], key);
        printf("%c", c);
    }

    printf("\n");
    return 0;
}

// 检查字符串是否全为数字字符
bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

// 对单个字符做 Caesar 位移
char rotate(char c, int key)
{
    if (isupper(c))
    {
        return (c - 'A' + key) % 26 + 'A';
    }
    else if (islower(c))
    {
        return (c - 'a' + key) % 26 + 'a';
    }
    else
    {
        // 非字母不变
        return c;
    }
}
