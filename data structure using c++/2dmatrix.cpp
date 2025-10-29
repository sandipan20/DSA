#include<iostream>
#include <vector>
using namespace std;

bool linearsearch(int matrix[][3], int row, int col, int key) {
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            if (matrix[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3, col = 3, n = 3;
    
    vector<vector<int>> mat={{1,2,3},{4,5,6,},{7,8,9}};
    cout<<"vector matrix"<<endl;
    for(int i=0;i<mat.size();i++){// since it is a vector now we can store more element in one row than other because now its not 
        // a matrix only its an array of arrays.
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    vector<vector<int>> mat1={{1,2,3},{4,5,6,2056,7890},{7,8,9}};
    cout<<"vector matrix 1"<<endl;
    for(int i=0;i<mat1.size();i++){// since it is a vector now we can store more element in one row than other because now its not 
        // a matrix only its an array of arrays.
        for(int j=0;j<mat1[i].size();j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    // Print matrix column-wise
    cout << "Matrix column-wise:" << endl;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    // Diagonal sum
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += matrix[i][i];
        if (i != n-1-i) {
            sum += matrix[i][n-1-i];
        }
    }
    cout << "Diagonal sum = " << sum << endl;

    // Linear search test
    int key = 5;
    cout << "Key " << key << (linearsearch(matrix,row,col,key) ? " found" : " not found") << endl;

    return 0;
}
