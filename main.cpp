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

















//
// double multiplymatrix(const double a[SIZE][SIZE],const double b[SIZE][SIZE]) {
//     double c[SIZE][SIZE];
//     double sum = 0;
//     for (int i = 0; i < SIZE; i++) {
//         for (int j = 0; j < SIZE; j++) {
//             for (int k = 0; k < SIZE; k++) {
//                 sum += a[i][k]*b[k][j];
//
//             }
//             c[i][j]=sum;
//             sum = 0;
//         }
//     }
//     return c[SIZE][SIZE];
// }
//








//problem 4
int findMax( int arr[][], int n,int m) {
    int max = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max < arr[i][j]) {max = arr[i][j];}
        }
    }
    return max;
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








    // double a[SIZE][SIZE]={1.,2.,3.,4.,5.,6.,7.,8.,9.,10.,11.,12.,13.,14.,15.,16.};
    // double b[SIZE][SIZE]={0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5 ,9.5, 10.5, 11.5, 12.5, 13.5, 14.5, 15.5};
    //
    // double go = multiplymatrix(a, b);
    // for (int i = 0; i < SIZE; i++) {
    //     for (int j = 0; j < SIZE; j++) {
    //         cout << go[i][j]<<" ";
    //     }
    // }
    //

int n=3,m=4;
    int lal[][] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 0, 11};
    cout <<findMax(lal,n,m);







    return 0;}