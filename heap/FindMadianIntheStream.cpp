#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
void addNum(int num) {     
            
            if( maxHeap.empty() ||  num < maxHeap.top())
            {
                maxHeap.push(num);
            }
            else
            {
                minHeap.push(num);
            }
        
            if(minHeap.size() > maxHeap.size()+1)
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
            else if(maxHeap.size() > minHeap.size()+1)
            {
                minHeap.push(maxHeap.top()); maxHeap.pop();
            }
    }
    double findMedian() {
        
        if(maxHeap.size()==minHeap.size())
        {
            return ((float)maxHeap.top() + (float)minHeap.top())/2;
        }
        else if(maxHeap.size()>minHeap.size())
        {
            return maxHeap.top();
        }
        else 
        {
            return minHeap.top();
        }
        return -1;
    }
int main()
{
        /* code here */

    return 0;
}