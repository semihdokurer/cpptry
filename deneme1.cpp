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
	int Value2, Value3;
	cin >> Value2;
	cin >> Value3;
	cout << add(Value3,Value2) << endl;
	return 0;
}
