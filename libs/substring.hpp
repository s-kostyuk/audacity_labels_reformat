//
// Created by github.com/s-kostyuk on 16.08.16.
//

#ifndef AUDACITY_LABELS_REFORMAT_SUBSTRING_HPP
#define AUDACITY_LABELS_REFORMAT_SUBSTRING_HPP

#include <string>
#include <stdexcept>

class Substring {

public:
	Substring()
			: m_start( 0 ), m_end( 0 ) {}

	void setStart( std::string::size_type _startPos );

	void setEnd( std::string::size_type _endPos );

	inline
	std::string::size_type getStart() const {
		return m_start;
	}

	inline
	std::string::size_type getEnd() const {
		return m_end;
	}

	inline
	std::string::size_type getLen() const {
		return m_end - m_start;
	};

	inline
	std::string getSubstring( const std::string & _source ) const {
		return _source.substr( m_start, getLen());
	}

private:
	std::string::size_type m_start;
	std::string::size_type m_end;
};

#endif //AUDACITY_LABELS_REFORMAT_SUBSTRING_HPP
