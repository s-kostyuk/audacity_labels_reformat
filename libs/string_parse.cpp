//
// Created by github.com/s-kostyuk on 16.08.16.
//

#include "string_parse.hpp"

std::vector<Substring>
parseStr( const std::string & _source, const std::string _delim ) {

	std::vector<Substring> substr_v;

	Substring curr;

	curr.setStart( 0 );

	while ( curr.getStart() < _source.size()) {

		curr.setEnd( _source.find( _delim, curr.getStart()));

		if ( curr.getEnd() == std::string::npos ) {
			curr.setEnd( _source.size());
			substr_v.push_back( curr );

			break;
		} else {
			substr_v.push_back( curr );

			curr.setEnd( curr.getEnd() + 1 );
			curr.setStart( curr.getEnd());
		}

	}

	return substr_v;
}