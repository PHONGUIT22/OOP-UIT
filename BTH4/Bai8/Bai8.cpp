#include <iostream>
#include <vector>

class CVector {
private:
    std::vector<double> elements;

public:
    CVector(const std::vector<double>& values) : elements(values) {}

    int getSize() const {
        return elements.size();
    }

    double& operator[](int index) {
        return elements[index];
    }

    const double& operator[](int index) const {
        return elements[index];
    }

    CVector operator+(const CVector& other) const {
        std::vector<double> result(getSize());
        for (int i = 0; i < getSize(); ++i) {
            result[i] = elements[i] + other.elements[i];
        }
        return CVector(result);
    }

    CVector operator-(const CVector& other) const {
        std::vector<double> result(getSize());
        for (int i = 0; i < getSize(); ++i) {
            result[i] = elements[i] - other.elements[i];
        }
        return CVector(result);
    }

    CVector operator*(double scalar) const {
        std::vector<double> result(getSize());
        for (int i = 0; i < getSize(); ++i) {
            result[i] = elements[i] * scalar;
        }
        return CVector(result);
    }

    friend std::ostream& operator<<(std::ostream& os, const CVector vector) {
        for (int i = 0; i < vector.getSize(); ++i) {
            os << vector[i] << " ";
        }
        return os;
    }

    friend std::istream& operator>>(std::istream& is, CVector& vector) {
        std::vector<double> values(vector.getSize());
        for (int i = 0; i < vector.getSize(); ++i) {
            is >> values[i];
        }
        vector = CVector(values);
        return is;
    }
};

class CMatrix {
private:
    std::vector<std::vector<double>> elements;
    int numRows;
    int numCols;

public:
    CMatrix(const std::vector<std::vector<double>>& values) : elements(values), numRows(values.size()), numCols(values[0].size()) {}

    int getNumRows() const {
        return numRows;
    }

    int getNumCols() const {
        return numCols;
    }

    double& operator()(int row, int col) {
        return elements[row][col];
    }

    const double& operator()(int row, int col) const {
        return elements[row][col];
    }

    CMatrix operator*(double scalar) const {
        std::vector<std::vector<double>> result(numRows, std::vector<double>(numCols));
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                result[i][j] = elements[i][j] * scalar;
            }
        }
        return CMatrix(result);
    }

    friend std::ostream& operator<<(std::ostream& os, const CMatrix& matrix) {
        for (int i = 0; i < matrix.getNumRows(); ++i) {
            for (int j = 0; j < matrix.getNumCols(); ++j) {
                os << matrix(i, j) << " ";
            }
            os << std::endl;
        }
        return os;
    }

    friend std::istream& operator>>(std::istream& is, CMatrix& matrix) {
        std::vector<std::vector<double>> values(matrix.getNumRows(), std::vector<double>(matrix.getNumCols()));
        for (int i = 0; i < matrix.getNumRows(); ++i) {
            for (int j = 0; j < matrix.getNumCols(); ++j) {
                is >> values[i][j];
            }
        }
        matrix = CMatrix(values);
        return is;
    }
};

// Hàm tính tích của một ma trận và một vector
CVector matrixVectorProduct(const CMatrix& matrix, const CVector& vector) {
    int numRows = matrix.getNumRows();
    int numCols = matrix.getNumCols();

    if (numCols != vector.getSize()) {
        throw std::runtime_error("Incompatible matrix and vector dimensions.");
    }

    std::vector<double> result(numRows, 0.0);
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            result[i] += matrix(i, j) * vector[j];
        }
    }

    return CVector(result);
}
//Tich hai ma tran
CMatrix matrixMatrixProduct(const CMatrix& matrix1, const CMatrix& matrix2) {
    int numRows1 = matrix1.getNumRows();
    int numCols1 = matrix1.getNumCols();
    int numRows2 = matrix2.getNumRows();
    int numCols2 = matrix2.getNumCols();

    if (numCols1 != numRows2) {
        throw std::runtime_error("Incompatible matrix dimensions for matrix multiplication.");
    }

    std::vector<std::vector<double>> result(numRows1, std::vector<double>(numCols2));
    for (int i = 0; i < numRows1; ++i) {
        for (int j = 0; j < numCols2; ++j) {
            for (int k = 0; k < numCols1; ++k) {
                result[i][j] += matrix1(i, k) * matrix2(k, j);
            }
        }
    }

    return CMatrix(result);
}

int main() {
    // Tạo vector 
    std::vector<double> values1 = {0, 0, 0};
    CVector vector1(values1);

    // Tạo vector 
    std::vector<double> values2 = {0, 0, 0};
    CVector vector2(values2);

    std::cout << "Nhap gia tri vector 1: ";
    std::cin >> vector1;

    std::cout << "Nhap gia tri cua vector 2: ";
    std::cin >> vector2;

    // Tính tổng của hai vector
    CVector sum = vector1 + vector2;
    std::cout << "Tong hai vector: " << sum << std::endl;

    // Tính hiệu của hai vector
    CVector difference = vector1 - vector2;
    std::cout << "Hieu hai vector: " << difference << std::endl;

    // Nhân vector với một số hạng
    double scalar = 2.5;
    CVector scaledVector = vector1 * scalar;
    std::cout << "Sau khi nhan vector voi mot so hang: " << scaledVector << std::endl;

    // Nhập ma trận từ người dùng
    int numRows1, numCols1;
    std::cout << "Nhap so hang cua ma tran 1: ";
    std::cin >> numRows1;
    std::cout << "Nhap so cot cua ma tran 1: ";
    std::cin >> numCols1;

    std::vector<std::vector<double>> matrixValues1(numRows1, std::vector<double>(numCols1));
    std::cout << "Nhap gia tri cua ma tran 1: " << std::endl;
    for (int i = 0; i < numRows1; ++i) {
        for (int j = 0; j < numCols1; ++j) {
            std::cin >> matrixValues1[i][j];
        }
    }
    CMatrix matrix1(matrixValues1);
    
    // Nhập ma trận từ người dùng
    int numRows2, numCols2;
    std::cout << "Nhap so hang cua ma tran 2: ";
    std::cin >> numRows2;
    std::cout << "Nhap so cot cua ma tran 2: ";
    std::cin >> numCols2;

    std::vector<std::vector<double>> matrixValues2(numRows2, std::vector<double>(numCols2));
    std::cout << "Nhap gia tri cua ma tran 2: " << std::endl;
    for (int i = 0; i < numRows2; ++i) {
        for (int j = 0; j < numCols2; ++j) {
            std::cin >> matrixValues2[i][j];
        }
    }
    CMatrix matrix2(matrixValues2);
    // Nhân ma trận với vector
    CVector matrixVectorProductResult1 = matrixVectorProduct(matrix1, vector1);
    std::cout << "Nhan ma tran thu 1 voi vector thu 1: " << matrixVectorProductResult1 << std::endl;

    CVector matrixVectorProductResult2 = matrixVectorProduct(matrix2, vector2);
    std::cout << "Nhan ma tran thu 2 voi vector thu 2: " << matrixVectorProductResult2 << std::endl;
    

   // Nhân hai ma trận
    CMatrix matrixMatrixProductResult = matrixMatrixProduct(matrix1, matrix2);
    std::cout << "Sau khi nhan 2 ma tran: " << std::endl;
    std::cout << matrixMatrixProductResult << std::endl;

    return 0;
} 



