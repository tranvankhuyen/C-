#include <iostream>
#include <limits.h>
using std::string;

// find MAx function
int MAX(int a[], int size_a)
{
	int Max = INT_MIN;
	for(int i = 0; i <= size_a; i++)
	{
		Max = std::max(Max, a[i]);
	}
	return Max;
}
// find largest substring function.....

int find_largest_substring(string &a, int len, int b[], int &Max)
{
	int x; // Count variable Array b.
	for(int i = 0; i < len; i++)
	{
		// if begin a string, or begin a word, start count.
		if(i == 0 || a[i-1] == ' ')
		{
			// assign variable x equal to i to locate.
			x = i;
			// Continue count until a space is met. End a word.
			while(a[i] != ' ')
			{
				// End of string, break;
				if(a[i] == '\0')
					break;
				// Increase b[x] value at position x.
				b[x]++;
				// Increase i value..
				i++;
			}
		}
	}
	Max = MAX(b, x);
	int address;

	
	for(int i = 0; i <= x; i++)
	{
		if(b[i] == Max)
		{	
			address = i;
		}
	}
	return address;
}

// main function
int main(){
	string a = "abcjbbbvjhdfbvjhfdbvjhbdfjhvbfdjhbvdjhfbvjhfbd ab abcdehjhdbfvjhbfdhjvbjh";
	int len = a.length();


	int b[100];
	for(int i = 0; i < len; i++)
	{
		b[i] = 0;
	}
	int Max;

	int find = find_largest_substring(a, len, b, Max);

	for(int i = find; i <= (Max + find) - 1; i++)
	{
		std::cout<<a[i];
	}
	std::cout<<"\n";

	return 0;
}