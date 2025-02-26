#include<iostream>
#include<queue>
#include<cassert>
#include <bits/stdc++.h>
#include <random>

using namespace std;

extern "C" {
    void gacya(int a) {
        random_device rd;
        seed_seq seed{rd()};  
        mt19937 gen(seed); 
        uniform_int_distribution<> dis(1, a);
    
            int random_number = dis(gen);
            if(random_number==1){
                return ;
            }else{
                return ;
            }
        
    }
    
}
