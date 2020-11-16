#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main(){
int n,q;
int value,col,row,size;
vector<vector<int>>n_vector;
cin>>n>>q;
for(int i=0;i<n;i++)
{
    cin>>size;
    vector<int>I_vector;
    for(int j=0;j<size;j++)
    {
        cin>>value;
        I_vector.push_back(value);
        
    }
    n_vector.push_back(I_vector);
}
for(int k=0;k<q;k++)
{
    cin>>row>>col;
    cout<<n_vector[row][col]<<endl;
}
return(0);
}


