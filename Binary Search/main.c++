#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    std::string s = "This is a string with spaces.";
    s.erase(remove(s.begin(), s.end(), ' '));
    std::cout << s << std::endl;
    return 0;
}