//统计字符串内"ab"出现次数

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int count = 0;
    getline(cin, str);
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == 'a' && str[i + 1] == 'b')
        {
            count++;
            i++;
        }
    }
    cout << "The number of 'ab' in the string is " << count << endl;
    return 0;
}
