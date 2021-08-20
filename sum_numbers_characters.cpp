#include <iostream>
#include <sstream>
using std::string;


// split function
string split_words(string &a, int &i)
{
	// Initialize an empty c string..
	string c;
	// A loop runs until end of a word..
	while (a[i] != ' ')
	{
		// if not end, add a[i] into c string..
		if (a[i] != '\0')
		{
			c += a[i];
			i++;
		}
		if (a[i] == '\0')
			break;
	}
	// Add a value to ignore spaces..
	if (a[i] == ' ')
		i++;
	return c;
}
int split_numbers(string &a)
{
	int len = a.length();
	string c;
	for(int i = 0; i < len; i++)
	{
		if(a[i] >= 48 && a[i] <= 57)
			c += a[i];
	}
	int len_c = c.length();

	int x;
	if(len_c == 0)
		x = 0;
	else
	{
	std::stringstream geek(c);
	geek >> x;
	}
	return x;
}

int main(){
	string a = "C++ Versiuon 14aa11bb23";
	// std::cout<<split_numbers(a);
	int i = 0;
	int sum = 0;
	while(a[i] != '\0')
	{
		string c = split_words(a,i);
		sum += split_numbers(c);



	}
	std::cout<<sum;
	return 0;
}