#include<iostream>
using namespace std;

void waveform(int m,int n,vector <vector<int>> &wave){
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<wave[i][j]<<" ";
            }
        } else{
            for(int i=n-1;i>=0;i--){
                cout<<wave[i][j]<<" ";
            }
        }
    }
}

int main(){
    // vector<vector<int>> matrix(4, vector<int> (4,4));
    // for(int i =0;i<4;i++){
    //     for(int j =0;j<4;j++){

    //         cout<<matrix[i][j]<<" ";
    //     }
    // }
    // cout<<endl<<"rows ="<< matrix.size()<<endl;
    // cout<<"col ="<<matrix[0].size();// for coloum operation we need to specify the coloum
    int n,m;
    cout<<"enter the rows and coloum of the matrix"<<endl;
    cin>>n;
    cin>>m;
    vector <vector<int>> wave(n, vector<int>(m));
    cout<<"enter the value";
    for(int i =0; i<n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>wave[i][j];
        }
    }
    for(int i =0; i<n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<wave[i][j]<<" ";
        }
        cout<<endl;
    }
    waveform(m,n,wave);

    return 0;

}