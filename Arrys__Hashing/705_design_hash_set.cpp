#include<bits/stdc++.h>
using namespace std;

//brute force
//tc = n
//sc = n
class MyHashSet {
private:
      vector<int> data;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(find(data.begin(), data.end(),key) == data.end()){
            data.push_back(key);
        }
    }
    
    void remove(int key) {
      auto it = find(data.begin(),data.end(),key);
      if(it !=  data.end()){
            data.erase(it);
      }
    }
    
    bool contains(int key) {
       return (find(data.begin(),data.end(),key) != data.end()); 
    }
};


//bool arrary
//tc = 1
//sc = n
class MyHashSet {
private:
    vector<int> data;
public:
    MyHashSet() : data(1000001,false) {
        
    }
    
    void add(int key) {
        data[key] = true;
    }
    
    void remove(int key) {
        data[key] = false;
    }
    
    bool contains(int key) {
        return data[key];
    }
};