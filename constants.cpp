#include <string>
#include <chrono>
#include <sstream>
#include <iomanip>
#include "constants.h"

std::string construct_information_string() {

    /* Lahar information */
    std::string information_string { "Lahar v" };
    information_string.append(LAHAR_VERSION);
    information_string.append(" (");

    /* Date information */
    const std::chrono::time_point<std::chrono::system_clock> now{ std::chrono::system_clock::now() };
    const std::time_t now_time_t{ std::chrono::system_clock::to_time_t(now) };
    std::stringstream date{};
    date << std::put_time(std::localtime(&now_time_t), "%F %T");
    std::string date_string{ date.str() };
    information_string.append(date_string);
    information_string.append(")");

    /* C++ information */
#ifdef __cplusplus
    const std::string cpp_version{ std::to_string(__cplusplus) };
#else
    const std::string cpp_version{ "######" };
#endif
    information_string.append(" [ C++");
    information_string.append(cpp_version);
    information_string.append(" ]");

    /* Operating system information */
    std::string os = OS;
    information_string.append(" on ");
    information_string.append(os);

    return information_string;
};

