#include "importance.hpp"
#include <iostream>

std::string ImportanceLeveltoString(ImportanceLevel importance) {
    switch (importance) {
        case ImportanceLevel::FIRST:      return "FIRST";
        case ImportanceLevel::SECOND:   return "SECOND";
        case ImportanceLevel::THIRD:     return "THIRD";
        default:                        return "UNKNOWN";
    }
}

ImportanceLevel StringtoImportanceLevel(const std::string& importance) {
    if (importance == "FIRST") {
        return ImportanceLevel::FIRST;
    } else if (importance == "SECOND") {
        return ImportanceLevel::SECOND;
    } else if (importance == "THIRD") {
        return ImportanceLevel::THIRD;
    } else {
        return ImportanceLevel::UNKOWN;
    }
}

std::istream& operator>>(std::istream& in, ImportanceLevel& importance) {
    std::string token = "";
    in >> token;
    
    if (token == "FIRST") {
        importance = FIRST;
    } else if (token == "SECOND") {
        importance = SECOND;
    } else {
        importance = THIRD;
    }
    
    return in;
}
