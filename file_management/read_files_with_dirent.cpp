#include <iostream>
#include <dirent.h>
#include <sys/types.h>
using namespace std;

int main(void) {
   DIR *dr;
   struct dirent *en;
   dr = opendir("\"D:\\Codes\\Tiny-CPP-Projects\\File-Management\\test_directory\""); //open all directory
   if (dr) 
   {
      while ((en = readdir(dr)) != NULL) {
         cout<<" \n"<<en->d_name; //print all directory name
      }
      closedir(dr); //close all directory
   }
   return(0);
}