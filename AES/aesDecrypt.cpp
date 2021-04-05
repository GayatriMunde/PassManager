#include "structs.h"
#include <bits/stdc++.h>

using namespace std;

void InvAddRoundKey(vector<vector<unsigned char>> encryptedMsg, vector<vector<unsigned char>> key){
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            encryptedMsg[i][j] ^= key[i][j];
}

void InvShifRows(vector<vector<unsigned char>> encryptedMsg){
    for(int i = 1; i < 4; i++){
        if(i == 1)
            for(int j = 1; j < 4; j++)
                swap(encryptedMsg[i][j], encryptedMsg[i][0]);
        else if(i == 2){
            swap(encryptedMsg[i][0], encryptedMsg[i][2]);
            swap(encryptedMsg[i][1], encryptedMsg[i][3]);
        } else
            for(int j = 2; j >= 0; j--)
                swap(encryptedMsg[i][j], encryptedMsg[i][3]);
    }
}

void InvSubBytes(vector<vector<unsigned char>> encryptedMsg){
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            encryptedMsg[i][j] = getInvSBoxVal(encryptedMsg[i][j]);
}

void firstRound(){
    InvAddRoundKey();
    InvShifRows();
    InvSubBytes();
}

void rounds(){
    firstRound();
    for (int i = 0; i < 9; i++){
        InvAddRoundKey();
        InvMixColumns();
        InvShifRows();
        InvSubBytes();
    }
    InvAddRoundKey();
}

int main(){


    return 0;
}