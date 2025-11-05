#include <iostream>
using namespace std;

const int size = 4;
double sumColumn(const double [][size],int rowsize,int columnIndex){
int sum = 0;
for (int i = 0; i < rowsize; i++){
for (int j = 0; j < columnIndex; j++){cout <<"enter : "; cin >> column[i][j];}
}
for (int i = 0; i < size; i++){ for (int j=0; j < rowsize; j++){ sum += column[i][j];}
if (columnIndex == size ) return sum;
}



int main() {

 //problem 1

cout << sumColumn({{1,2,3},{4,5,6},{7,8,9}});

























return 0;}