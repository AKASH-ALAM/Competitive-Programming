#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j = 0;
    char vAc[3][15] = {"vertebrado","ave","carnivoro"} , vAo[3][15] = {"vertebrado","ave","onivoro"} , vMo[3][15] = {"vertebrado","mamifero","onivoro"} , vMh[3][15] = {"vertebrado","mamifero","herbivoro"};
    char iIh[3][15] = {"invertebrado","inseto","hematofago"} , IniH[3][15] = {"invertebrado","inseto","herbivoro"} , iAh[3][15] = {"invertebrado","anelideo","hematofago"} , iAo[3][15] = {"invertebrado","anelideo","onivoro"};
    char input[3][15];
    for(i = 0; i < 3; i++){
        cin>>input[i];
    }
    for(i = 0; i < 3; i++){
        if(strcmp(vAc[i],input[i]) == 0){
            j = 1;
        }
        if(j == 1){
            cout<<"aguia"<<endl;
        }
    }
    for(i = 0; i < 3; i++){
        if(strcmp(vAo[i],input[i]) == 0){
            j = 1;
        }
        if(j == 1){
            cout<<"pomba"<<endl;
        }
    }
    for(i = 0; i < 3; i++){
        if(strcmp(vMo[i],input[i]) == 0){
            j = 1;
        }
        if(j == 1){
            cout<<"homem"<<endl;
        }
    }
    for(i = 0; i < 3; i++){
        if(strcmp(vMh[i],input[i]) == 0){
            j == 1;
        }
        if(j == 1){
            cout<<"vaca"<<endl;
        }
    }
    for(i = 0; i < 3; i++){
        if(strcmp(iIh[i],input[i]) == 0){
            j = 1;
        }
        if(j == 1){
            cout<<"pulga"<<endl;
        }
    }
    for(i = 0; i < 3; i++){
        if(strcmp(IniH[i],input[i]) == 0){
            j = 1;
        }
        if(j == 1){
            cout<<"lagarta"<<endl;
        }
    }
    for(i = 0; i < 3; i++){
        if(strcmp(iAh[i],input[i]) == 0){
            j = 1;
        }
        if(i == 1){
            cout<<"sanguessuga"<<endl;
        }
    }
    for(i = 0; i < 3; i++){
        if(strcmp(iAo[i],input[i]) == 0){
            j = 1;
        }
        if(j == 1){
            cout<<"minhoca"<<endl;
        }
    }

}
