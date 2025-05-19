//Define a class matrix to represent 3x3 matrix.Provide appropriate instance methods.Also define operator+,operator- and operator *to perform addtion,subtraction and multiplication operations respectively.
#include <iostream>
using namespace std;

class matrix {
private:
    int arr[3][3];

public:
    matrix() {
        int i, j;
        for (i = 0; i <= 2; i++) {
            for (j = 0; j <= 2; j++) {
                arr[i][j] = 0;
            }
        }
    }

    void input_matrix() {
        int i, j;
        cout << "Enter the elements of the 3x3 matrix:" << endl;
        for (i = 0; i <= 2; i++) {
            for (j = 0; j <= 2; j++) {
                cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
                cin >> arr[i][j];
            }
        }
        cout << endl;
    }

    void show_matrix() {
        int i, j;
        for (i = 0; i <= 2; i++) {
            for (j = 0; j <= 2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    matrix operator+(matrix m) {
        matrix temp;
        int i, j;
        for (i = 0; i <= 2; i++) {
            for (j = 0; j <= 2; j++) {
                temp.arr[i][j] = arr[i][j] + m.arr[i][j];
            }
        }
        return temp;
    }

    matrix operator-(matrix m) {
        matrix temp;
        int i, j;
        for (i = 0; i <= 2; i++) {
            for (j = 0; j <= 2; j++) {
                temp.arr[i][j] = arr[i][j] - m.arr[i][j];
            }
        }
        return temp;
    }

    matrix operator*(matrix m) {
        matrix temp;
        int i, j, k;
        for (i = 0; i <= 2; i++) {
            for (j = 0; j <= 2; j++) {
                temp.arr[i][j] = 0;
                for (k = 0; k <= 2; k++) {
                    temp.arr[i][j] = temp.arr[i][j] + (arr[i][k] * m.arr[k][j]);
                }
            }
        }
        return temp;
    }
};

int main() {
    matrix m1, m2, m3;

    cout << "Enter the elements for the first matrix:" << endl;
    m1.input_matrix();

    cout << "Enter the elements for the second matrix:" << endl;
    m2.input_matrix();

    cout << "First Matrix:" << endl;
    m1.show_matrix();

    cout << "Second Matrix:" << endl;
    m2.show_matrix();

    m3 = m1 + m2;
    cout << "Addition of the two matrices:" << endl;
    m3.show_matrix();

    m3 = m1 - m2;
    cout << "Subtraction of the two matrices:" << endl;
    m3.show_matrix();

    m3 = m1 * m2;
    cout << "Multiplication of the two matrices:" << endl;
    m3.show_matrix();

    return 0;
}