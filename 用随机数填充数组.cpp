#include <iostream>
#include <cstdlib>
#include <iterator>
#include <algorithm>
using namespace std;

class mi_rand
{
    public:
        mi_rand (int start_pos, int end_pos)
        : a(start_pos), b(end_pos)
        {}

        unsigned operator () ()
        {
            return rand() % (b-a+1) + a;
        }

    private:
        int a, b;
};

int main()
{
    const int SIZE = 20;
    int array[SIZE];
    generate_n (array, SIZE, mi_rand (1, 30));

    copy (array, array + SIZE,
          ostream_iterator<int> (cout, " "));
    cout << endl;

    ostream_iterator<int> p (cout, " ");// = 9999;

    p = 90;
    p = 99009;
    return 0;
    //擦，copy 和 ostream_iterator 竟然能这么用！！
}
