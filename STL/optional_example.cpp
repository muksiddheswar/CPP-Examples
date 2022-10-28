// C++ Program to demonstrate the working of
// capacity(), resize() and shrink_to_fit()
#include <iostream>
#include <string> // for string class
using namespace std;

class Match
{
    public:
          explicit Match(int position, std::string matchingString):
          m_position{position},
          m_value{matchingString}
          {}

          Match() = delete;

          void print(){}
    private:
int  m_position = 0;
std::string m_value = "";
};

class Text {       // The class
  public:             // Access specifier
        Text(string sub_string) { // Constructor with parameters
            myString = sub_string;
        }

        /*!
        finds the first occurrence of the searchTerm in the text, either complete or as part of a word, or nothing 
        
        find the optional occurrence of the searchTerm in the text, ....*/
        std::optional<Match> find(std::string searchTerm)
        {
           return Match(0, "a");
        }

    private:
        // int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)

};



int main()
{

Text myText = Text("this is a text");

auto matchFound = myText.find("dummy");
if (matchFound.has_value())
   matchFound.print(); // this, 0   

return 0;

}