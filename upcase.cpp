#include <iostream>

using std::string;
void up_the_first_case(string &a)
{
	int len = a.length();
	for(int i = 0; i < len; i++)
	{
		if(i == 0 || a[i-1] == ' ')
		{
			a[i] -= 32; 
		}
	}
}
int main(){
	string a = "khuyen dep troai";
	up_the_first_case(a);
	std::cout<<a<<std::endl;
	return 0;
}