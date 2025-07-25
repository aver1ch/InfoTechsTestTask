#ifndef importance_hpp
#define importance_hpp

#include <string>
#include <iostream>

enum ImportanceLevel {
    FIRST = 0,
    SECOND = 1,
    THIRD = 2,
    UNKOWN = -1
};

std::string ImportanceLeveltoString(ImportanceLevel importance);
ImportanceLevel StringtoImportanceLevel(const std::string& importance);
std::istream& operator>>(std::istream& in, ImportanceLevel& level);

#endif
