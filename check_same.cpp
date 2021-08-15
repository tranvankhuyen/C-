// aabcbdeecd -> YES
#include <iostream>
using std::string;


// Count the same elements
void Count_the_same_element(string &a, int b[], int &x)
{
	int len = a.length();
	for(int i = 0 ; i < len; i++)
		b[i] = 1;
	for(int i = 0; i < len; i++)
	{
		if(a[i] == a[i+1])
		{
			while(a[i] == a[i+1])
			{
				i++;
				b[x]++;
				
			}
			x++;
		}
		// x++;
	}
}
// check  function
bool check(int b[], int x)
{

	for(int i = 0; i < x; i++)
	{
		for(int j = i + 1; j < x; j++)
		{
			if(b[i] == b[j])
				return true;
		}
	}
	return false;
}
// Main function
int main(){
	string a = "aaabcdeevhdbhvjbfdhhfhhfbhbfvbhfbvhe";
	int b[1000];
	int x = 0;
	Count_the_same_element(a, b, x);
	if (check(b, x) == true)
	{
		std::cout<<"YES"<<std::endl;
	}
	else
		std::cout<<"NO"<<std::endl;
	return 0;

}