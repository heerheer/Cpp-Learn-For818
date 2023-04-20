// 打印出以下的杨辉三角形 （ 要求打印出 10 行 ） 。

#include <iostream>
void printLine(int line[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << ((line[i] != 0) ? (std::to_string(line[i])) : " ") << " ";
    }
    std::cout << std::endl;
}
// print 10 lines pascal triangle
int pascalTriangle()
{
    int last_line[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int current_line[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    printLine(current_line, 10);
    // line for
    for (size_t i = 1; i < 10; i++)
    {
        current_line[0] = 1;

        // row fi
        for (int j = 1; j <= i; j++)
        {
            current_line[j] = last_line[j] + last_line[j - 1];
        }

        for (int i = 0; i < 10; i++)
        {
            last_line[i] = current_line[i];
        }
        printLine(current_line, 10);
    }
    return 0;
}

int main()
{
    pascalTriangle();
}