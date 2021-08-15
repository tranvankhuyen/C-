// a 97, z 122
#include <iostream>
using std::string;
void increase(string &a)
{
	int len = a.length();
	for(int i = 0; i < len; i++)
	{
			
		if(a[i] >= 97 && a[i] < 122)
		{
			a[i]++;
		}
		else if(a[i] == 122)
		{
			a[i] = 97;
		}
	}
}
int main(){
	string a = "w3resource";
	increase(a);
	std::cout<<a;
	return 0;
}