#include <iostream>
#include <iomanip>
#include <cstdint>

static float calculate_matrix_sum(float** matrix, uint32_t matrix_size) {
	// Find max lower el
	float max_lower_el = 0;
	for (uint32_t i = 0; i < matrix_size; ++i) {
		for (int32_t j = i - 1; j >= 0; --j) {
			if (matrix[i][j] > max_lower_el) {
				max_lower_el = matrix[i][j];
			}
		}
	}

	// Calculate sum
	float sum = 0;
	for (uint32_t i = 0; i < matrix_size; ++i) {
		for (int32_t j = i + 1; j < matrix_size; ++j) {
			if (matrix[i][j] > max_lower_el) {
				sum += matrix[i][j];
			}
		}
		sum += matrix[i][i];
	}
	return sum;
}

int main() {
	float** matrix;

	uint32_t matrix_size;
	std::cout << "Input matrix row/col size: ";
	std::cin >> matrix_size;

	// Allocate matrix
	matrix = new float*[matrix_size];
	for (uint32_t i = 0; i < matrix_size; ++i) {
		matrix[i] = new float[matrix_size];
	}

	// Input matrix
	for (uint32_t i = 0; i < matrix_size; ++i) {
		std::cout << "Enter row " << i + 1 << ": ";
		for (uint32_t j = 0; j < matrix_size; ++j) {
			std::cin >> matrix[i][j];
		}
	}

	float sum = calculate_matrix_sum(matrix, matrix_size);
	std::cout << "Sum: " << sum << std::endl;

	// Delete matrix
	for (uint32_t i = 0; i < matrix_size; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}