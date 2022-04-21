#include<iostream>
#include<vector>

using namespace std;


int main() {

    std::vector<int> table = {12,88,71,3300,3301,3333,1,2,20,13};
    int lenght = table.size();

    for (int i=0; i<lenght; i++){
        
        for(int j=0; j<lenght-1; j++){
            
            if(table[j]>table[i]){
                int temp = table[j];
                table[j] = table[i];
                table[i] = temp;
                
            }

            
            
        }
        for (int k=0;k<lenght ; k++){
                cout << table[k] << " || ";
            }
            cout << endl;
        
    }

    return 0;
}