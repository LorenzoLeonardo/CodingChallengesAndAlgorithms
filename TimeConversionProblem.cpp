#include "Header.h"

string timeConversion(string s)
{
    size_t found = 0;
    if (s.find("AM") != string::npos)
    {
        found = s.find("AM");

        struct std::tm tm;
        std::istringstream ss(s);

        ss >> std::get_time(&tm, "%H:%M:%S"); // or just %T in this case
        std::time_t time = mktime(&tm);

        if (tm.tm_hour == 12)
            tm.tm_hour = tm.tm_hour - 12;
        char stTime[32];

        sprintf_s(stTime, sizeof(stTime), "%02d:%02d:%02d", tm.tm_hour, tm.tm_min, tm.tm_sec);
        string newTime(stTime);
        return newTime;
        return s;
    }
    else if (s.find("PM") != string::npos)
    {
        found = s.find("PM");
        s.erase(found);

        struct std::tm tm;
        std::istringstream ss(s);

        ss >> std::get_time(&tm, "%H:%M:%S"); // or just %T in this case
        std::time_t time = mktime(&tm);

        if (tm.tm_hour < 12)
            tm.tm_hour = 12 + tm.tm_hour;
        char stTime[32];

        sprintf_s(stTime, sizeof(stTime), "%02d:%02d:%02d", tm.tm_hour, tm.tm_min, tm.tm_sec);
        string newTime(stTime);
        return newTime;
    }
    else
    {
        return s;
    }
}
