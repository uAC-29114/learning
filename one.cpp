#include <iostream>
using namespace std;
int main()
{
    long long x,y; //声明两个数
    long long all = 0; //用于计数
    cout << "Enter two numbers, the first number needs to be less than the second number:";
    cin >> x >> y; //用户输入两个数，并分别为x,y赋值
    do
    {
        if(x == y || x > y) //判断数值是否有误
            {
            cout << "Error!data does not meet requirements.Please enter again:";
            cin >> x >> y;
            }
    }while ( x == y || x > y);

    while ( x<=y )
    {
        all += x;
        x++;
    }
    cout << "The result of adding the integers from x to y is:" << all;
    getchar();getchar();//防止处理完成后窗体退出过快
    return 0;
}