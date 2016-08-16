//
// Created by github.com/s-kostyuk on 16.08.16.
//

#include "substring.hpp"

void Substring::setStart( std::string::size_type _startPos ) {

	if ( _startPos > m_end ) {
		throw std::invalid_argument( "Start position can't be bigger than end position" );
	}

	m_start = _startPos;

}

void Substring::setEnd( std::string::size_type _endPos ) {

	if ( m_start > _endPos ) {
		throw std::invalid_argument( "End position can't be less than start position" );
	}

	m_end = _endPos;

}
