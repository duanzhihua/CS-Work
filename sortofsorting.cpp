#include <iostream>
#include <string>
using namespace std;

int main () {
    int n = 1;
    int c = 0;
    float comp;
    string temp="1";
    int tempo=0;
    string name;
    
    int asize[501];
    string namelist[501][201];
    while(n&&c<500){
        //cout<<"#?";
        cin>>n;
        asize[c]=n;
        if(n>0){
            //n = n + 1; 
            namelist[c][n];
            for(int i = 0 ; i<n;i++){
                cin>>name;
                namelist[c][i]=name;   
                if(i>0){
                    for(int x = i; x>0; x--){
                        tempo = x;
                        temp = "1";
                        if(namelist[c][x][0]<namelist[c][x-1][0]){
                            comp = -1;   
                        }else if(namelist[c][x][0]==namelist[c][x-1][0]){
                            comp = 0;
                            //if(namelist[c][x].length()>1&&
                            if(namelist[c][x][1]<namelist[c][x-1][1]){
                                comp = -1;   
                            }else if(namelist[c][x][1]==namelist[c][x-1][1]){
                                comp = 0;
                                
                            }else{
                                comp = 1;
                            }
                        }else{
                            comp = 1;
                        }
                        if(comp<0){
                            tempo=x-1;
                            //cout<<"lower\n";
                        }else if(comp == 0){
                            temp = "0";
                            x=0;
                        }else{
                            temp = "0";
                            //cout<<"higher\n";
                            x=0;
                            
                        }
                        if(temp!="0"){
                            temp = namelist[c][tempo];
                            namelist[c][tempo]=namelist[c][x];
                            namelist[c][x]=temp;
                        }
                    }
                }
            }
        c++;    
        }else{
            break;
        }
    }
    
    for(int j = 0; j<c;j++){
        temp = "";
        int len = asize[j];
        //cout<<c;
        //cout<<j;
        //cout<<len;
        for(int k = 0; k<len;k++){
            temp = temp+namelist[j][k]+"\n";
            
        }
        cout<<temp;   
        if(j+1<c){
            //cout<<j;
            cout<<"\n";
        }
    }
}
