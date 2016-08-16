//
// Created by github.com/s-kostyuk on 16.08.16.
//

#include "time_hms.hpp"

#include <stdexcept>
#include <iomanip>


TimeHMS::TimeHMS( long _hours, short _minutes, short _seconds ) {

	if ( abs( _seconds ) > 59 || abs( _seconds ) > 59 ) {
		std::invalid_argument( "Seconds and minutes can't be bigger than 59 and less than -59" );
	}

	m_hours = _hours;
	m_minutes = _minutes;
	m_seconds = _seconds;

}

TimeHMS::TimeHMS( long _seconds ) {

	m_hours = _seconds / 3600;

	_seconds %= 3600;

	m_minutes = short( _seconds / 60 );

	_seconds %= 60;

	m_seconds = short( _seconds );

}

std::ostream & operator <<( std::ostream & _o, const TimeHMS & _t ) {
	_o << std::setfill( '0' ) << std::setw( 2 ) << _t.getHours() << ":"
	   << std::setfill( '0' ) << std::setw( 2 ) << _t.getMinutes() << ":"
	   << std::setfill( '0' ) << std::setw( 2 ) << _t.getSeconds();

	return _o;
}
