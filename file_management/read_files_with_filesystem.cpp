// Getting the list of files using directory_iterator function

// Works in C++ 17
// #include <filesystem>
#include <iostream>
#include <string>
#include <sys/stat.h>

namespace fs = std::filesystem;

int main()
{
	// Path to the directory
	std::string path
		= "C:\\Users\\Sauleyayan\\Desktop\\New folder";

	// This structure would distinguish a file from a
	// directory
	struct stat sb;

	// Looping until all the items of the directory are
	// exhausted
	for (const auto& entry : fs::directory_iterator(path)) {

		// Converting the path to const char * in the
		// subsequent lines
		std::filesystem::path outfilename = entry.path();
		std::string outfilename_str = outfilename.string();
		const char* path = outfilename_str.c_str();

		// Testing whether the path points to a
		// non-directory or not If it does, displays path
		if (stat(path, &sb) == 0 && !(sb.st_mode & S_IFDIR))
			std ::cout << path << std::endl;
	}
}
