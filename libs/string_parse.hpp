//
// Created by github.com/s-kostyuk on 16.08.16.
//

#ifndef AUDACITY_LABELS_REFORMAT_STRING_PARSE_HPP
#define AUDACITY_LABELS_REFORMAT_STRING_PARSE_HPP

#include "substring.hpp"

#include <vector>

std::vector<Substring>
parseStr( const std::string & _source, const std::string _delim );

#endif //AUDACITY_LABELS_REFORMAT_STRING_PARSE_HPP
