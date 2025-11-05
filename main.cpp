#include <iostream>
using namespace std;

const int SIZE = 4;
double sumColumn(const double m[][SIZE],int rowsize,int columnIndex) {
    int sum = 0;
    for (int i = 0; i < rowsize; i++){sum += m[i][columnIndex];}

    return sum;
}

//problem 2ww
double summajordiagonal( const double m[SIZE][SIZE]) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += m[i][i];
    }
    return sum;
}
int main() {

    /*       //problem 1
           int rows;
        cout << "Enter number of rows: ";
           cin >> rows;
           double arr[rows][SIZE];
           for (int i = 0; i < rows; i++) {
               for (int j = 0; j < SIZE; j++) {
                   cout <<" enter: ";
                   cin >> arr[i][j];
               }
           }
           for (int i = 0; i < SIZE; i++) {
               cout << sumColumn(arr,rows,i) << endl;
           }


       //problem 2
           double m[SIZE][SIZE];
       for (int i = 0; i < SIZE; i++) {
           for (int j = 0; j < SIZE; j++) {
               cin >> m[i][j];
           }
       }
       cout << summajordiagonal(m) << endl;*/

    //problem 3


    return 0;}