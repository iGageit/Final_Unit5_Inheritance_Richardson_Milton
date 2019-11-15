#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream> 
#include <sstream>
#include <string> 
#include <ios>
#include<math.h>
#include<algorithm>
using namespace std;
// make text bold 
std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}
string color = "";
    string reset = "\x1b[m";