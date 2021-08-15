#include <iostream>
using std::string;

bool check(char element)
{
	string a = "ueoai";
	int len = a.length();
	for(int i = 0; i < len; i++)
	{
		if(element == a[i])
			return true;
				
	}
	return false;
}
int main(){
	string a = "ueoai";
	int len = a.length();
	int count = 0;
	for(int i = 0; i < len; i++)
	{
		if(check(a[i]) == true)
			count++;
	}
	std::cout<<count<<std::endl;
	return 0;
}