#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    const int SIZE = 20;
    int array[SIZE];
//    generate_n (array, SIZE, [] () { return rand() % 30 + 1; });//Ò²ÐÐ
    for_each (array, array + SIZE, [&] (int &i){i = rand() % 30 + 1; });
    for_each (array, array + SIZE, [] (int a){ cout << a << " "; });
    return 0;
}
