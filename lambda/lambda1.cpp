/*************************************************************************
    > File Name: lambda.cpp
    > Author: dongdaoxiang
    > Mail: dongdaoxiang@ncic.ac.cn
    > Created Time: 2013��03��19�� ���ڶ� 11ʱ31��42��
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int temp = 10;
    vector<int> ivec = {30, -10, -20, 50, 40 ,100, -50};
    //std::sort(ivec.begin(), ivec.end(), [](const int &x, const int &y) {return abs(x) < abs(y);});
    std::for_each(ivec.begin(), ivec.end(), [&](int &x) { x += temp; cout << x << endl;});
    return 0;
}
