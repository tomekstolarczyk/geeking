#include <cstddef> // std::size_t

// my implementation of std::memcpy from the <cstring> header file

void* my_memcpy(void* dst, const void* src, std::size_t n) // n to liczba bajtow do skopiowania
{
    // mowimy kompilatorowi : tu leza bajty
    auto* d= static_cast<unsigned char*>(dst);        
    auto* s = static_cast<const unsigned char*>(src);  

    // kopiujemy bajt to bajcie
    for (std::size_t i = 0; i < n; ++i)
    {
        d[i] = s[i];  
    }
                                         
    return dst;
}