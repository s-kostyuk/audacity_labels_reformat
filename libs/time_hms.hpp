//
// Created by github.com/s-kostyuk on 16.08.16.
//

#ifndef AUDACITY_LABELS_REFORMAT_TIME_HMS_HPP
#define AUDACITY_LABELS_REFORMAT_TIME_HMS_HPP

#include <iostream>

class TimeHMS {

	// Very basic implementation

public:
	TimeHMS()
			: m_hours(0), m_minutes(0), m_seconds(0)
	{}

	TimeHMS(long _hours, short _minutes, short _seconds);

	TimeHMS(long _seconds);

	long getHours() const { return m_hours; }
	short getMinutes() const { return m_minutes; }
	short getSeconds() const { return m_seconds; }

private:
	long m_hours;
	short m_minutes;
	short m_seconds;

};

std::ostream & operator << ( std::ostream & _o, const TimeHMS & _t );

#endif //AUDACITY_LABELS_REFORMAT_TIME_HMS_HPP
