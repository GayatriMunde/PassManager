#include "structs.h"
#include <bits/stdc++.h>

using namespace std;

void getMatrix(string text, vector<vector<unsigned char>> &matrix){
    int ch = 0;
    for (int i = 0; i < 4; i++)
    {
        if (ch >= 16) ch = i;
        vector<unsigned char> column;
        for (int j = 0; j < 4; j++){
            column.push_back(int(text[ch]));
            ch += 4;
        }
        matrix.push_back(column);
    }
}

void subBytes(vector<vector<unsigned char>> &stateArr){
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            stateArr[i][j] = getSBoxVal(stateArr[i][j]);
}

void shiftRows(vector<vector<unsigned char>> &stateArr){
    for(int i = 1; i < 4; i++){
        if(i == 1)
            for(int j = 2; j >= 0; j--)
                swap(stateArr[i][j], stateArr[i][3]);
        else if(i == 2){
            swap(stateArr[i][0], stateArr[i][2]);
            swap(stateArr[i][1], stateArr[i][3]);
        } else
            for(int j = 1; j < 4; j++)
                swap(stateArr[i][0], stateArr[i][j]);
    }
}

void MixColumns(vector<vector<unsigned char>> &stateArr){
    vector<int> temp = {0, 0, 0, 0};

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            for(int k=0; k<4; k++){
                if(MD5matrix[j][k] == 3)
                    temp[j] ^= ((stateArr[k][i] * 2) ^ stateArr[k][i]);
                else
                    temp[j] ^= (stateArr[k][i] * MD5matrix[j][k]);
            }
        }
        for(int k=0; k<4; k++){
            stateArr[k][i] = temp[k];
            temp[k] = 0;
        }
    }
}

void addRoundKey(vector<vector<unsigned char>> &stateArr, int c){
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            stateArr[i][j] ^= keys[c][i][j];
}

void lastRound(vector<vector<unsigned char>> stateArray, vector<vector<unsigned char>> keyArray){
    subBytes(stateArray);
    shiftRows(stateArray);
    addRoundKey(stateArray, 10);
}

void rounds(vector<vector<unsigned char>> stateArray, vector<vector<unsigned char>> keyArray){
    for(int count = 0; count<9; count++){
        subBytes(stateArray);
        shiftRows(stateArray);
        MixColumns(stateArray);
        addRoundKey(stateArray, count+1);
    }
    lastRound(stateArray, keyArray);
}

vector<vector<unsigned char>> aes(string text, string key){
    vector<vector<unsigned char>> stateArray, keyArray;
    getMatrix(text, stateArray);
    getMatrix(key, keyArray);

    keyExpansion(keyArray);
    addRoundKey(stateArray, 0);
    rounds(stateArray, keyArray);

    display(stateArray);
    return (stateArray);
}

