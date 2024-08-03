#include "constants.hpp"

int main()
{
    data_factory f;

    constexpr auto data = f();

    uint32_t acc = 0;

    constexpr int size = data.size();

    for (int s = 0; s < SAMPLE_SIZE; s++)
    {
        for (int i = 0; i < size; i++)
        {
            acc += data[i];
        }
    }

    return 0;
}
