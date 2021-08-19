#include <iostream>
using std::string;
int main(){
	string a = "1235679";
	int len = a.length();
	string insert = "-";
	for(int i = 0; i < len; i++)
	{
		if((a[i] % 2 != 0) && (a[i+1] % 2 != 0) && (a[i] != '-'))
		{
			a.insert((i+1), insert);
		}
	}
	std::cout<<a<<std::endl;
	return 0;
}