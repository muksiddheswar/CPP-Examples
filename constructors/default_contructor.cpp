#include <vector>
#include <string>
using namespace std;

class User 
{
   public:
      User(string user_name, string address, string password, string type){};

};

class Employee: public User
{
   public:
      Employee(string user_name, string address, string password): User(user_name, address, password, "Employee") {};


};