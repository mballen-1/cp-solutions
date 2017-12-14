
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define DEBUG(x) cout<<"x: "<<x<<"\n";

/* 
    Array def => array_name base_address size_each dimensions d_pairs...a b c d...u
    Array ref => array_name i1, i2, i3, ..., i_dimensions

    Address = c0 + c1i1 + c2i2 + .. + Cdid
    cD = size_each
    cd = c_d+1 + (U_d+1 - L_d+1) for 1<= d< D
    c0 = base_address - c1L1- c2L2 - ... - cdld 
*/ 

int data[1000000][30];
int cs[1000000][15];

vector<string> array_names;

int main(){
    
    int n, r, base, size_each, D;
    string array_name; 
    cin>>n>>r;
    
    for(int i = 0; i< n; i++){
        
        cin>>array_name;
        array_names.push_back(array_name);
        
        cin>>data[i][0]; // base_address
        cin>>data[i][1]; //size_each
        cin>>D;          //Dimensions
        
        for(int j = 2; j < 2*D +2; j++){
            cin>>data[i][j];//Lower and upper bounds
        }


        for(int m = 0 ; m < 31 ; m++){
            cout<<data[i][m]<<" ";
        }

        for(int k= D ; k > 0; k--){
            if(k == D)
                cs[i][k]= data[i][1];
            else
                cs[i][k] = cs[i][k+1] + data[i][(k+1)*2] - data[i][(k+2)*2-1]; 
                //DEBUG( data[i][3 + k]);
        }

        cout<<"\n CS: ";
        for(int l =0 ; l< 31; l++){
                cout<< cs[i][l] << " ";
        }
        cout<<"\n";
        
        

    }
    
    return 0;
}