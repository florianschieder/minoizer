#include "minoizer.h"
#include <stdexcept>

std::map<std::string, int> cache;

int memo(int (*function)(int), int param)
{
    char id[256];
    sprintf(id, "__memoized__%p__%d", function, param);

    std::string cache_id = std::string(id);

    int value;

    try
    {
        value = cache.at(cache_id);
    }
    catch (const std::out_of_range &err)
    {
        value = (*function)(param);
        cache[cache_id] = value;
    }

    return value;
}
