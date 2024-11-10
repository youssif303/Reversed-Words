#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
 
std::string reverse_words(const std::string& str) {
    string result;
    string temp;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            result = temp + ' ' + result;                   // hello ' '
            temp.clear();
        }
        else
            temp.push_back(str[i]);

    }
    result = temp + ' ' + result;
    result.pop_back();
    
    return result;
}
int main()
{

	cout << reverse_words("yoda doesn't speak like this!");

	return 0;
}