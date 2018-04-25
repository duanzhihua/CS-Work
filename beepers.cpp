#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main(){
    int numScen;
    cin >> numScen;
    int c[2];
    for(int i = 0; i < numScen; i++){
        cin >> c[0] >> c[1];
        
        int startX;
        int startY;
        cin >> startX >> startY;
        
        int numBeeps;
        cin >> numBeeps;
        
        int beepX[numBeeps];
        int beepY[numBeeps];
        int num[numBeeps];
        
        for(int z = 0; z < numBeeps; z++){
            cin >> beepX[z] >> beepY[z];
            num[z] = z;
        }
        
        int cost = 100000;
        
        do{
            int tempCost = 0;
            int locX = startX;
            int locY = startY;
            int newX, newY;
            for(int z = 0; z < numBeeps; z++){
                newX = beepX[num[z]];
                newY = beepY[num[z]];
                tempCost += abs(newX-locX);
                tempCost += abs(newY-locY);
                locX = newX;
                locY = newY;
                if(tempCost > cost){
                    break;
                }
            }
            tempCost += abs(startX-locX);
            tempCost += abs(startY-locY);
            if(tempCost < cost){
                cost = tempCost;
            }
        }
        while (next_permutation(num, num + numBeeps));
        cout << cost;
        cout << "\n";
    }
    
    return 0;
}
