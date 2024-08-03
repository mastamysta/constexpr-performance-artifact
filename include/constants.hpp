#pragma once

#include <array>
#include <cstdint>

#define LOOP_COUNT 1000
#define SAMPLE_SIZE 1000000

using list = std::array<uint32_t, LOOP_COUNT>;

class data_factory
{
public:
    constexpr list operator ()()
    {
        list ret = { 0 };

        for (int i = 0; i < LOOP_COUNT; i++)
        {
            ret[i] = i;
        }

        return ret;
    }
};
