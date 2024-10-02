#include <iostream>
#include <cstdint>
#include <algorithm>

// normalize
void normalize_array(float* arr, size_t n) {
	
	float min_el = arr[0];

	uint32_t i;
	for (i = 0; i < n; ++i) {
		arr[i] -= min_el;
	}

	float max_el = arr[n - 1] / 2;
	for (i = 0; i < n; ++i) {
		arr[i] /= max_el;
	}

	for (i = 0; i < n; ++i) {
		arr[i] -= 1;
	}
}

void print_array(float* arr, size_t n) {
	for (uint32_t i = 0; i < n; ++i) {
		std::cout << "Element " << i << " - " << arr[i] << std::endl;
	}
}

int main() {
	uint32_t arr_size;
	std::cout << "Enter array size: ";
	std::cin >> arr_size;

	float* arr = new float[arr_size];

	srand(time(NULL));
	for (uint32_t i = 0; i < arr_size; ++i) {
		arr[i] = rand() % 20;
	}

	std::cout << "Start array: " << std::endl;
	std::sort(arr, arr + arr_size);
	print_array(arr, arr_size);

	normalize_array(arr, arr_size);

	std::cout << "\nNormalized array: " << std::endl;
	print_array(arr, arr_size);

	delete[] arr;
	return 0;
}