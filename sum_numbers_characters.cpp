#include <iostream>
#include <sstream>
using std::string;

// check number function
bool check(char &a)
{
	if(a >= 48 && a <= 57)
		return true;
	return false;
}
int split_numbers(string &a, int &i)
{

	string c;
	int len = a.length();
	for(; i < len; i++)
	{
		if(check(a[i]) == true)
		{
			while(check(a[i]) == true)
			{
				c += a[i];
				i++;
			}
			break;
		}
	}	
	if(a[i] != '\0' && check(a[i]) == false)
		i++;

	int result;
	if(c == "")
		result = 0;

	std::stringstream geek(c);
	geek >> result;
	return result;
}

int Sum(string &a)
{
	int i = 0;
	int sum = 0;
	while(a[i] != '\0')
	{			
		sum += split_numbers(a, i);
	}
	return sum;
}
int main() {

	string a = "C++ Versiuon 14aa11bb23";
	std::cout<<Sum(a)<<std::endl;
	return 0;
}