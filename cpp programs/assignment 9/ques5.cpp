/*
Define a class Matrix to represent a 3x3 order matrix.Provide appropriate methods and properties to the class.Also define following methods in the class:
1.Matrix add(Matrix)
2.Matrix sub(Matrix)
3.Matrix multiply(Matrix)
4.Matrix transpose()
5.bool is_singular()
*/
#include<iostream>
using namespace std;

class Matrix
{
private:
    int arr[3][3];
public:
    void set_matrix()
    {
        cout << "Enter matrix elements (3x3):" << endl;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << "Enter element for row " << i+1 << " and column " << j+1 << ": ";
                cin >> arr[i][j];
            }
        }
    }

    Matrix add(Matrix m)
    {
        Matrix temp;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {   
                temp.arr[i][j] = arr[i][j] + m.arr[i][j];  
            }
        }
        return temp;  
    }

    Matrix sub(Matrix m)
    {
        Matrix temp;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                temp.arr[i][j] = arr[i][j] - m.arr[i][j];
            }
        }
        return temp;
    }

    Matrix multiply(Matrix m)
    {
        Matrix temp;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                temp.arr[i][j] = 0;
                for(int k = 0; k < 3; k++)
                {
                    temp.arr[i][j] += arr[i][k] * m.arr[k][j];
                }
            }
        }
        return temp;
    }

    Matrix transpose()
    {
        Matrix temp;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                temp.arr[i][j] = arr[j][i];
            }
        }
        return temp;
    }

    bool is_singular()
    {
        int det = arr[0][0] * (arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1])
                - arr[0][1] * (arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0])
                + arr[0][2] * (arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);
        return (det == 0);
    }

    void print()
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1, m2, res;
    
    cout << "Enter first matrix:" << endl;
    m1.set_matrix();
    
    cout << "\nEnter second matrix:" << endl;
    m2.set_matrix();
    
    cout << "\nMatrix Addition:" << endl;
    res = m1.add(m2);
    res.print();
    
    cout << "\nMatrix Subtraction:" << endl;
    res = m1.sub(m2);
    res.print();
    
    cout << "\nMatrix Multiplication:" << endl;
    res = m1.multiply(m2);
    res.print();
    
    cout << "\nTranspose of first matrix:" << endl;
    res = m1.transpose();
    res.print();
    
    cout << "\nIs first matrix singular? ";
    cout << (m1.is_singular() ? "True" : "False") << endl;
    
    cout << "\nIs second matrix singular? ";
    cout << (m2.is_singular() ? "True" : "False") << endl;
    
    return 0;
}