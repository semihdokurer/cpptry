// Stdin and Stdout example
// cin for taking input and cout for printing output
// endl means end line or equivalent to "\n" escape character

#include <iostream>

using namespace std;

int add(int nValue1, int nValue2)
{
	return nValue1 + nValue2;
}

int main()
{
	int Value1, Value2;
	cin >> Value1;
	cin >> Value2;
	cout << add(Value1,Value2) << endl;
	return 0;
}
