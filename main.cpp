//
// Created by github.com/s-kostyuk on 16.08.16.
//

#include <iostream>
#include <fstream>
#include <vector>

#include "libs/string_parse.hpp"
#include "libs/time_hms.hpp"

int main( int argc, char * argv[] ) {

	if ( argc < 2 ) {
		std::cout << "Not input file specified. Specify input file as the first argument";
		return -1;
	}

	//std::cout << argv[1] << "\n";  //debug

	std::ifstream source( argv[ 1 ] );  // open input file
	std::string bufferString, desc;  // buffer and description string

	std::cout << "Start\t\t" "End\t\t\t" "Description" "\n";

	// while there is data in stream - count and process rows
	for ( int i_row = 0; std::getline( source, bufferString ); ++i_row ) {

		int startSec, endSec;  // start and end second of the chapter

		std::vector<Substring> substrs = parseStr( bufferString, "\t" );  // tokenize new line

		if ( substrs.size() != 3 ) {  // check number of tokens
			std::cout << "Bad row number " << i_row << " in source file, ignoring" << std::endl;

			continue;
		}

		// process tokens and get values
		startSec = std::stoi( substrs[ 0 ].getSubstring( bufferString ));
		endSec = std::stoi( substrs[ 1 ].getSubstring( bufferString ));
		desc = substrs[ 2 ].getSubstring( bufferString );

		// print processed info
		std::cout << TimeHMS( startSec ) << "\t"
		          << TimeHMS( endSec ) << "\t"
		          << desc << "\n";

	}

	return 0;
}