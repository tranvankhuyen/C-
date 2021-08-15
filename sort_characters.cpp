#include <iostream>
using std::string;

int main() {
	string a = "python";
	// int Max = a[0];
	int len = a.length();
	for(int i = 0; i < len; i++)
	{
		bool check = false;
		for(int j = 0; j < len; j++)
		{
			if(a[i] < a[j])
				std::swap(a[i], a[j]);
				check = true;
		}
		if(check == false)
			break;
	}
	std::cout<<a<<std::endl;

	return 0;
}