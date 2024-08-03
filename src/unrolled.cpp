#include <utility>

#include "constants.hpp"

template <std::size_t... Is>
auto do_times(std::index_sequence<Is...> seq, list data)
{
    uint32_t acc = 0;

    acc = ( data[Is] + ... );

    return acc;
}

int main()
{
    data_factory f;

    constexpr auto data = f();

    constexpr int size = data.size();
 
    for (int s = 0; s < SAMPLE_SIZE; s++)
        auto acc = do_times(std::make_index_sequence<size>(), data);

    return 0;
}
