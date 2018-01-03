
#include <iostream>
#include <string.h>
#include<stdlib.h>
#include <vector>
#include <math.h>
using namespace std;
#define DEBUG(x) cout<<#x<<": "<<x<<"\n";

/* 
    Array def => array_name base_address size_each dimensions d_pairs...a b c d...u
    Array ref => array_name i1, i2, i3, ..., i_dimensions

    Address = c0 + c1i1 + c2i2 + .. + Cdid
    cD = size_each
    cd = c_d+1 * (U_d+1 - L_d+1  + 1) for 1<= d< D
    c0 = base_address - c1L1- c2L2 - ... - cdLd 
*/ 
int def[1000000][31];
int cs[1000000][31];
int ds[1000000];
int c0;
char * pch;

vector<string> array_names;


int find_index(string array_name){
    for(int i = 0; i< array_names.size(); i++){
       if(array_names.at(i) == array_name){
           return i;
        } 
    }
}

int main(){
    
    int n, r, base, size_each;
    string array_name; 
    cin>>n>>r;
    
    for(int i = 0; i< n; i++){
        
        cin>>array_name;
        array_names.push_back(array_name);
        
        cin>>def[i][0]; // base_address
        cin>>def[i][1]; //size_each
        cin>>ds[i];      //Dimensions
        
        for(int j = 2; j < 2*ds[i] +2; j++){
            cin>>def[i][j];//Lower and upper bounds
        }
                
        
        //cd = c_d+1 * (U_d+1 - L_d+1  + 1) for 1<= d< D
        //cd = size_each for k= size_each = ds[i]

        for(int k = ds[i]; k > -1; k--){
            if(k == ds[i]){
                cs[i][k] = def[i][1];
            }
            else{
                cs[i][k] = cs[i][k+1] *(def[i][((k)*2)+3] - def[i][(k)*2+2] + 1); 
                 
            }
        }


        c0 = def[i][0]; //base_address
        int partial = 0;

        for(int l = 1; l< ds[i]+1; l++){
            partial += cs[i][l] * def[i][(l*2)];  //c1*L1 + c2L2 + ... + cDLD
        }

        c0 -= partial;
        cs[i][0] = c0;
        
        
    }
    

    for(int m = 0; m < r ; m++){
        
        
        string name; cin>>name;
        int index = find_index(name);
        int address = cs[index][0];         
        int x; vector<int>lectures;
                
        for(int z = 0; z< ds[index]; z++){
            cin>>x;
            lectures.push_back(x);
        }        
        cout << name<< "[";
        for(int i = 0; i< lectures.size(); i++){
            if (i == lectures.size()-1)
                cout<< lectures[i]<<"] = ";
            else
                cout<< lectures[i]<<", ";
        }

        //Address = c0 + c1i1 + c2i2 + .. + Cdid
        for(int y = 0; y<= ds[index]; y++){
            address += (cs[index][y+1]*lectures[y]);
        }

        cout<<address<<"\n";
        
    }
    //cout<<"\n";
    return 0;
}