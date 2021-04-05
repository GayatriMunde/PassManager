#include "structs.h"
#include <bits/stdc++.h>

using namespace std;

void invAddRoundKey(vector<vector<unsigned char>> &encryptedMsg, int c){
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            encryptedMsg[i][j] ^= keys[c][i][j];
}

void invShiftRows(vector<vector<unsigned char>> &encryptedMsg){
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

void invSubBytes(vector<vector<unsigned char>> &encryptedMsg){
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            encryptedMsg[i][j] = getInvSBoxVal(encryptedMsg[i][j]);
}

void invMixColumns(vector<vector<unsigned char>> &encryptedMsg){
    vector<int> temp = {0,0,0,0};

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            for(int k=0; k<4; k++){
                if(invMD5matrix[j][k] == 9)
                    temp[j] ^= ((((encryptedMsg[k][i] * 2) * 2) * 2) ^ encryptedMsg[k][i]);
                else if(invMD5matrix[j][k] == 11)
		            temp[j] ^= (((((encryptedMsg[k][i] * 2) * 2) ^ encryptedMsg[k][i]) * 2) ^ encryptedMsg[k][i]);
		        else if(invMD5matrix[j][k] == 13)
		            temp[j] ^= (((((encryptedMsg[k][i] * 2) ^ encryptedMsg[k][i]) * 2) * 2) ^ encryptedMsg[k][i]);
		        else
                    temp[j] ^= (((((encryptedMsg[k][i] * 2) ^ encryptedMsg[k][i]) * 2) ^ encryptedMsg[k][i]) * 2);
            }
        }
        for(int k=0; k<4; k++){
            encryptedMsg[k][i] = temp[k];
            temp[k] = 0;
        }
    }
}

void firstRound(vector<vector<unsigned char>> &encryptedMsg){
    invAddRoundKey(encryptedMsg, 10);
    invShiftRows(encryptedMsg);
    invSubBytes(encryptedMsg);
}

void rounds(vector<vector<unsigned char>> &encryptedMsg){
    for (int i = 9; i > 0; i--){
        invAddRoundKey(encryptedMsg, i);
        invMixColumns(encryptedMsg);
        invShiftRows(encryptedMsg);
        invSubBytes(encryptedMsg);
    }
    invAddRoundKey(encryptedMsg, 0);
}

void decryptAES(vector<vector<unsigned char>> encryptedMsg){
    firstRound(encryptedMsg);
    rounds(encryptedMsg); 
    display(encryptedMsg);
}