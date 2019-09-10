#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

// https://leetcode.com/problems/reverse-only-letters/

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    string reverseOnlyLetters(string& S) {
        int left = 0;
        int right = S.size() - 1;
        while (left < right) {
            if (!isalpha(S[left])) {
                ++left;
                continue;
            }
            if (!isalpha(S[right])) {
                --right;
                continue;
            }
            swap(S[left], S[right]);
            ++left;
            --right;
        }
        return S;
    }
};

void test1() {
    string s = "ab-cd";


    cout << "dc-ba ? " << Solution().reverseOnlyLetters(s) << endl;
}

void test2() {

}

void test3() {

}