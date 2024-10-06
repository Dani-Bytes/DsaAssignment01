#pragma once
#include<iostream>
#include<stack>
using namespace std;

class Stack {
private:
    stack<pair<int, int>> s;  

public:
    void push(int x) {
        if (s.empty()) {
            s.push({ x, x });  
        }
        else {
            int currentMin = s.top().second;  
            s.push({ x, std::min(x, currentMin) });   
        }
    }
    int pop() {
        if (s.empty()) {
            cout << "Stack Underflow" << endl;
            return -1;  
        }
        int topValue = s.top().first;  
        s.pop();  
        return topValue;  
    } 
    int top() {
        if (s.empty()) {
            return -1;  
        }
        return s.top().first;  
    } 
    int getMin() {
        if (s.empty()) {
            return -1;  
        }
        return s.top().second;  
    } 
    int getSize() {
        return s.size();  
    }
    bool isempty() {
        return s.empty();  
    }
};
