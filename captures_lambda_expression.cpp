// captures_lambda_expression.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main()
{
   int m = 0, n = 0;
   [&m, n] (int a) mutable { m = ++n + a; }(9);
   cout << m << endl << n << endl;
}
