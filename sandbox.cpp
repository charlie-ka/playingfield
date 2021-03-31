#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> visits;
        for (auto i = rounds.begin(); i!=rounds.end(); ++i){
            *(++i);
        }
        
    }
};