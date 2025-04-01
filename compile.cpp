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
        long long seed = chrono::steady_clock::now().time_since_epoch().count();
        seed_seq seq{static_cast<uint32_t>(seed & 0xFFFFFFFF), static_cast<uint32_t>(seed >> 32)};
        mt19937 gen(seq);
        uniform_int_distribution<int> dis(1, value);
    
            int random_number = dis(gen);
            return (random_number == 1) ? 1 : 0;
    }

    EMSCRIPTEN_KEEPALIVE
    int* gacyas(int value) {
        static int results[10]; 

        long long seed = chrono::steady_clock::now().time_since_epoch().count();
        seed_seq seq{static_cast<uint32_t>(seed & 0xFFFFFFFF), static_cast<uint32_t>(seed >> 32)};
        mt19937 gen(seq);
        uniform_int_distribution<int> dis(1, value);

        for(int i = 0;i<10;i++){
            int random_number = dis(gen);
            results[i] = (random_number == 1) ? 1 : 0;
        }
            
        return results;
    }
}
