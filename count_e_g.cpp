#include <iostream>
using std::string;


int main(){
	string a = "engengeng";
	int len = a.length();
	int count = 0;
	for(int i = 0; i < len; i++)
	{
		if((i+2) < len && a[i] == 'e' && a[i+2] == 'g')
		{
			count++;
		}
	}
	std::cout<<count<<std::endl;	
	return 0;
}