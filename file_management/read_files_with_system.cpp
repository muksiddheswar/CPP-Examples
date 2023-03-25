// Getting list of files using system function
#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	// This variable contains the path to the directory
	// The path should be given inside double quotes
	// Therefore, escaped the enclosing quotes using
	// backslash
	string path(
		"\"D:\\Codes\\Tiny-CPP-Projects\\File-Management\\test_directory\"");

	// The command which would do the file listing
	// A space is added at the end of the command
	// intentionally to make space for the path
	string command("dir /a-d ");

	// The path is appended after the command string
	command.append(path);

	// The string is converted to const char * as system
	// function requires
	const char* final_command = command.c_str();

	// Sending the final command as the argument to the
	// system function
	system(final_command);

	return 0;
}
