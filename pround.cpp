#include <iostream>

bool check(int a)
{
	for(int i = 2; i < a; i++)
	{
		if(a % i == 0)
			return true;
	}
	return false;
}
int main(){
	for(int i = 2; i <= 100; i++)
	{
		if(check(i) == false)
		{
			std::cout<<i<<" ";
		}
	}
	return 0;
}