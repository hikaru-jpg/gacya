#include<iostream>
#include<queue>
#include<cassert>
#include <random>
#include <emscripten.h>
#include <vector>
using namespace std;

extern "C" {
    auto gacya(int value) {
        EMSCRIPTEN_KEEPALIVE
        random_device rd;
        seed_seq seed{rd()};  
        mt19937 gen(seed); 
        uniform_int_distribution<> dis(1, value);
    
            int random_number = dis(gen);
            return random_number;
        
    }
    
}
