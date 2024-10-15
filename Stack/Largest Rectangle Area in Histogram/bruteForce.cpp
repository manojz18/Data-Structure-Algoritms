#include<iostream>
#include<vector>
using namespace std;

    int RectArea(vector<vector<int>> arr){
        int maxArea = 0;
        for(int i = 0; i<arr.size(); i++)
        {
            int currArea = arr[i];
            int j = i+1;
            while( j<arr.size() && arr[j] >= arr[i])
            {
                currArea = currArea + arr[i];
                j++;
            }
            int k = i-1;
            while(k>=0 && arr[k] >= arr[i] )
            {
                currArea = currArea + arr[i];
                k--;
            }
            maxArea = max(maxArea , currArea);
        }
        return maxArea;

    }

int main(){
    
    return 0;
}