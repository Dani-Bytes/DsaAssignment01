#pragma once
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Greater {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, -1);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if (st.empty()) {
                nge[i] = -1;
            }
            else if (!st.empty()) {
                nge[i] = nums[st.top()];
            }
            st.push(i);
        }

        return nge;
    }
};