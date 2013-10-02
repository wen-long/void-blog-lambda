#include <functional>

int main()
{
   // Assign the lambda expression that adds two numbers to an auto variable.
   auto f1 = [] (int x, int y) { return x + y; };

   // Assign the same lambda expression to a function object.
   using namespace std::tr1;
   function<int (int, int)> f2 = [] (int x, int y) { return x + y; };
}
