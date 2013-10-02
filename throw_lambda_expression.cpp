// throw_lambda_expression.cpp
#include<iostream>
int main() // C4297 expected
{
   []() throw() { std::cout << "wfwefwefwefw"; throw 5; }();
}
