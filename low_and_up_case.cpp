#include <iostream>
using std::string;

int main(){
	string a = "Python";
	int len = a.length();
	for(int i = 0; i < len; i++)
	{
		if(a[i] >= 65 && a[i] <= 90)
			a[i] += 32;
		else if(a[i] >= 97 && a[i] <= 122)
			a[i] -= 32; 
	}
	std::cout<<a<<std::endl;

	return 0;
}