
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define DEBUG(x) cout<<#x<<": "<<x<<"\n";

/* 
    Array def => array_name base_address size_each dimensions d_pairs...a b c d...u
    Array ref => array_name i1, i2, i3, ..., i_dimensions

    Address = c0 + c1i1 + c2i2 + .. + Cdid
    cD = size_each
    cd = c_d+1 + (U_d+1 - L_d+1) for 1<= d< D
    c0 = base_address - c1L1- c2L2 - ... - cdLd 
*/ 

int data[1000000][31];
int cs[1000000][31];
int ds[1000000];
int c0;

vector<string> array_names;


int find_index(string array_name){
    for(int i = 0; i< 1000000; i++){
       if(array_names.at(i) == array_name){
           return i;
        } 
    }

}

int main(){
    
    int n, r, base, size_each, c0 = 0;
    string array_name; 
    cin>>n>>r;
    
    for(int i = 0; i< n; i++){
        
        cin>>array_name;
        array_names.push_back(array_name);
        
        cin>>data[i][0]; // base_address
        cin>>data[i][1]; //size_each
        cin>>ds[i];          //Dimensions
        
        for(int j = 2; j < 2*ds[i] +2; j++){
            cin>>data[i][j];//Lower and upper bounds
        }

        
        for(int m = 0 ; m < 31 ; m++){
            cout<<data[i][m]<<" ";
        }

        for(int k= ds[i] ; k > 0; k--){
            if(k == ds[i])
                cs[i][k]= data[i][1];
            else
                cs[i][k] = cs[i][k+1] + data[i][(k+1)*2] - data[i][(k+2)*2-1]; 
                //DEBUG( data[i][3 + k]);
        }

        int c0 = data[i][0]; //base_address
        int partial = 0;

        for(int l = 1; l< ds[i] +1; l++){
            partial += cs[i][l]* data[i][l+((int)pow(2,l-1))];  //c1*L1 + c2L2 + ... + cdLd
        }

        c0 -= partial;
        cs[i][0] = c0;

        
        cout<<"\n CS: ";
        for(int l =0 ; l< 31; l++){
                cout<< cs[i][l] << " ";
        }
        cout<<"\n";
        
        

    }

    string line;
    for(int m = 0; m < r; m++){
        
        int address = c0;
        line="";        
        cin>>line;
        DEBUG(line);
        int in = find_index(line);
        int x;
        vector<int> the_read;
        
        while(cin>>x){
            the_read.push_back(x);
        }
        DEBUG(ds[in]);
        for(int n = 0; n< ds[in]; ++n){
            cout<< the_read[n]<<" "; //* cs[in][j]; 
        }

        //cout<<address<<"\n";

    }


    


    
    return 0;
}