#include<iostream>
#include<queue>
#include<cassert>
#include <random>
#include <emscripten.h>
#include <vector>
using namespace std;

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    long long gacya(long long value) {
        long long seed_val = std::chrono::steady_clock::now().time_since_epoch().count();
        mt19937 gen(seed); 
        uniform_int_distribution<long long> dis(1, value);
    
            long long random_number = dis(gen);
            return random_number;
        
    }
    
}
