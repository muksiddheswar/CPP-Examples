#include <iostream>
#include <experimental/optional>
using namespace std;

template <typename T>
std::experimental::optional <T> string_to( const std::string& s )
{
  std::istringstream ss( s );
  T result;
  ss >> result >> std::ws;      // attempt the conversion
  if (ss.eof()) return result;  // success
  return {};                    // failure
}

int main()
{
    int n;
    std::cout << "n? ";
    {
    std::string s;
    getline( std::cin, s );
    auto x = string_to <int> ( s );
    if (!x) 
    {
        cout << "Nope!";
        return 0;
    }
    n = *x;
    }
    std::cout << "Multiply that by seven to get " << (7 * n) << ".\n";

    return 0

}