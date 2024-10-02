#include <iostream> 
#include <cstdint>
#include <cmath>

int main()
{
    uint32_t n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    uint32_t* arr = new uint32_t[n];
    
    uint32_t i;
    for (i = 0; i < n; ++i) {
        uint32_t arr_el;
        std::cout << "Enter arr element " << i << ": ";
        std::cin >> arr_el;
        arr[i] = arr_el;
    }

    uint32_t max_el = 0, max_el_index = 0, min_el = UINT_MAX, min_el_index = 0;
    for (i = 0; i < n; ++i) {
        if (arr[i] > max_el) {
            max_el = arr[i];
            max_el_index = i;
        }
        if (arr[i] < min_el) {
            min_el = arr[i];
            min_el_index = i;
        }
    }

    arr[min_el_index] = max_el;
    arr[max_el_index] = min_el;

    std::cout << "Print array:" << std::endl;
    for (i = 0; i < n; ++i) {
        std::cout << "\t" << i << " - " << arr[i] << std::endl;
    }

    delete[] arr;
    return 0;
}