///week11-2.cpp
#include <iostream>
#include <vector>
#include <unordered_map> ///c++11 的功能

using namespace std;

int main()
{
    vector<int> a;
    unordered_map<int,int> m; ///如果用預設的 c++98,會不行
    m[999] = 13; /// Hash map 雜湊表， 可以快速找到、對應某個值
    m[137] = 7;
    cout << "m[999]的值是 " << m[999] << endl;
    cout << "m[137]的值是 " << m[137] << endl;
    return 0;
}
