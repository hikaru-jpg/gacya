#include<iostream>
#include<queue>
#include<cassert>
#include <random>
#include <emscripten.h>
#include <vector>
#include <chrono> 
using namespace std;

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    int gacya(int value) {
        long long seed = std::chrono::steady_clock::now().time_since_epoch().count();
        std::seed_seq seq{static_cast<uint32_t>(seed & 0xFFFFFFFF), static_cast<uint32_t>(seed >> 32)};
        mt19937 gen(seq);
        uniform_int_distribution<int> dis(1, value);
    
            int random_number = dis(gen);
            return random_number;
        
    }
    
}
