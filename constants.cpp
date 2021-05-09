#include <string>
#include <chrono>
#include <sstream>
#include <iomanip>
#include "constants.h"

std::string construct_version() {

    /* Lahar information */
    std::string version_string { "Lahar v" };
    version_string.append(LAHAR_VERSION);
    version_string.append(" (");

    /* Date information */
    const std::chrono::time_point<std::chrono::system_clock> now{ std::chrono::system_clock::now() };
    const std::time_t now_time_t{ std::chrono::system_clock::to_time_t(now) };
    std::stringstream date{};
    date << std::put_time(std::localtime(&now_time_t), "%F %T");
    std::string date_string{ date.str() };
    version_string.append(date_string);
    version_string.append(")");

    /* C++ information */
#ifdef __cplusplus
    const std::string cpp_version{ std::to_string(__cplusplus) };
#else
    const std::string cpp_version{ "C++xx" };
#endif
    version_string.append(" [ C++");
    version_string.append(cpp_version);
    version_string.append(" ]");

    /* Operating system information */
    std::string os = OS;
    version_string.append(" on ");
    version_string.append(os);

    return version_string;
};

