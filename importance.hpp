#ifndef importance_hpp
#define importance_hpp

#include <string>
#include <iostream>

/**
 * @brief Перечисление уровней важности сообщений.
 */
enum ImportanceLevel {
    FIRST = 0,   ///< Наивысший уровень важности
    SECOND = 1,  ///< Средний уровень
    THIRD = 2,   ///< Низкий уровень
    UNKOWN = -1  ///< Неизвестный уровень
};

/// Преобразует уровень важности в строку.
std::string ImportanceLeveltoString(ImportanceLevel importance);

/// Преобразует строку в уровень важности.
ImportanceLevel StringtoImportanceLevel(const std::string& importance);

/// Перегрузка оператора ввода для уровня важности.
std::istream& operator>>(std::istream& in, ImportanceLevel& level);

#endif




