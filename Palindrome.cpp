#include <iostream>
using std::string;


// recover string function
bool recover_string(string &a)
{
	int len = a.length();
	for(int i = 0; i <= len/2; i++)
	{
		if(a[i] == a[len - i - 1])
			return true;
	}
	return false;
}
// check function

// main function
int main(){
	string a = "madam";
	if(recover_string(a) == true)
		std::cout<<"YES"<<std::endl;
	else
		std::cout<<"NO"<<std::endl;	

	return 0;
}