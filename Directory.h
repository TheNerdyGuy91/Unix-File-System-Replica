/*
	Benjamin Fletes
	Directory 
	9/19/17
*/
#ifndef DIRECTORY_H
#define DIRECTORY_H
#include<string> // file name
	class Directory
	{
		
		private:
			struct Folder // this will point to other directories and files
			{
				string fileName;
				LinkListD *left; // this will hold directories on the left
				LinkListF *right; // will have files on the right
			};
	};
#endif
