#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	if(argc==1){
		printf("\nThis program reads the contents of file1 line by line and writes them to file2.");
		printf("\nUsage is:: %s file1 file2\n\n", argv[0]);
	}
	else if(argc==3){ 
		printf("\nCopying text from %s to %s\n\n", argv[1], argv[2]);


		//Input file stream object to read from file1
		ifstream in(argv[1]);

		//Output file stream object to write to file2
		ofstream f(argv[2]);

		//Reading file1 entirely using END OF FILE eof() method
		while(!in.eof())
		{
			//string to exctract line from file1
			string text;

			//exctracting line from file1
			getline(in, text);

			//writing extracted line in file2
			f << text << endl;
		}
	}
	else
	{
		printf("\nIncorrect number of commandline arguments!\nUsage is: /%s file1 file2\n\n", argv[0]);
	}

	return 0;
}
