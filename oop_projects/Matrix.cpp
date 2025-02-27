#include <iostream>
#include <vector>
#include <stdexcept> // для std::invalid_argument
class Matrix {
    private:
     std::vector<std::vector<int>> elements;
     int rows;
     int cols;

    public:
     Matrix(int rows, int cols, const std::vector<std::vector<int>>& values) :
	elements(values), rows(rows), cols(cols) {}

     int get(int row, int col) const {
	return elements[row][col];
     }

     int get_rows() {
	return this->rows;
     }

     int get_columns() {
	return this->cols;
     }

     void display() const {
	for (auto& row : elements) {
	    for (int val : row) {
		std::cout << val << ' ';
	    }
	    std::cout << std::endl;
	}
     }
    // Сложение матриц
     Matrix operator+(const Matrix& other) {
	if (this->rows != other.rows || this->cols != other.cols) {
	  throw std::invalid_argument("Матрицы должны иметь одинаковый размер");
	}

	std::vector<std::vector<int>> result(this->rows, std::vector<int>(this->cols, 0));

	for (int i = 0; i < this->rows; i++) {
	    for (int j = 0; j < this->cols; j++) {
		result[i][j] = this->elements[i][j] + other.elements[i][j];
	    }
	}
	return Matrix(this->rows, this->cols, result);
     }
    // Вычитание матриц
     Matrix operator-(const Matrix& other) {
    	if (this->rows != other.rows || this->cols != other.cols) {
	  throw std::invalid_argument("Матрицы должны иметь одинаковый размер");
	}

	std::vector<std::vector<int>> result(this->rows, std::vector<int>(this->cols, 0));

	for (int i = 0; i < this->rows; i++) {
	    for (int j = 0; j < this->cols; j++) {
		result[i][j] = this->elements[i][j] - other.elements[i][j];
	    }
	}
	return Matrix(this->rows, this->cols, result);
     } 	
    // Умножение матрицы на число
     Matrix operator*(const int k) {
       std::vector<std::vector<int>> result(this->rows, std::vector<int>(this->cols, 0));

	for (int i = 0; i < this->rows; i++) {
	    for (int j = 0; j < this->cols; j++) {
		result[i][j] = this->elements[i][j] * k;
	    }
	}
	return Matrix(this->rows, this->cols, result);
     }
    // Перемножение матриц
     Matrix operator*(const Matrix& other) {
	if (this->cols != other.rows) {
	    throw std::invalid_argument(
	"Кол-во столбцов 1 матрицы, должно совпадать с количеством строк 2-ой матрицы"); 
	}
	
        std::vector<std::vector<int>> result(this->rows, std::vector<int>(other.cols, 0));
	
	for (int i = 0; i < this->rows; i++) {
	    for (int j = 0; j < other.cols; j++) {
		for (int k = 0; k < this->cols; k++) {
		    result[i][j] = result[i][j] + 
			this->elements[i][k] * other.elements[k][j];
		}
	    }
	}
	return Matrix(this->rows, other.cols, result);
     }
    
     // Транспонирование матрицы
     Matrix transpose() {
	std::vector<std::vector<int>> result(this->cols, std::vector<int>(this->rows, 0));

	for (int i = 0; i < this->cols; i++) {
	    for (int j = 0; j < this->rows; j++) {
		result[i][j] = this->elements[j][i];
	    }
	}
	return Matrix(this->cols, this->rows, result);
     }

     // Вычисление определителя квадратной матрицы

     long long det() {
	if (this->rows != this->cols) {
	    throw std::invalid_argument("Матрица не квадратная");
	}

	// Базовый случай для матрицы размером 1 и 2 на 2
	
	if (this->rows == 1 && this->cols == 1) {
	    return elements[0][0];
	}

	if (this->rows == 2 && this->cols == 2) {
	    return elements[0][0] * elements[1][1] - elements[0][1] * elements[1][0]; 
	}

	// Рекурсивный шаг
	
	for (int i = 0; i < this->rows; i++) {
	    for (int j = 0; j < this->cols; j++) {
		result = result + elements[0][j] * det()
	    }
	}
     }
};

int main() {
    Matrix m1(2, 3, {{2, 1, 3}, {3, 4, 1}});
    Matrix m2(3, 2, {{2, 3}, {3, 4}, {3, 4}});
    Matrix m3(2, 2, {{2, 2}, {3, 4}});
    long long result = m3.det();
    std::cout << result;
 }
