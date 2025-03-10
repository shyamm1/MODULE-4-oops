// 10 /* Write a Program of Two 1D Matrix Addition using Operator Overloading */
#include<iostream>
using namespace std;
class Matrix {
    private :
        int *arr;
        int size;
    
    public :
        Matrix(int num) {
            size = num;
            arr = new int[size];
        }
        ~Matrix() {
            delete [] arr;
        }
        void set() {
            cout<<"\nEnter " << size << " element = ";
            for (int i = 0; i < size; i++)
            {
                cin>> arr[i];
            } 
        }
        void get() {
            cout<<"\nMatrix:= ";
            for (int i = 0; i < size; i++)
            {
                cout<< arr[i] << " ";
            }
            cout<< endl;
        }
        Matrix operator+(Matrix m) {
            Matrix temp(size);
            for (int i = 0; i < size; i++)
            {
                temp.arr[i] = arr[i] + m.arr[i];
            }
            return temp;
        }
};
int main()
{
    int n;
    cout << "Enter the size of the matrices: ";
    cin >> n;

    Matrix m1(n);
    cout << "Enter elements of Matrix 1: ";
    m1.set();
    m1.get();

    Matrix m2(n);
    cout << "Enter elements of Matrix 2: ";
    m2.set();
    m2.get();

    Matrix m3 = m1 + m2;
    cout << "Matrix 1 + Matrix 2 = ";
    m3.get();
}
