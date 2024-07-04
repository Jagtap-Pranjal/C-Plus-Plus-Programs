/*
Given an array arr. Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).

Note: There can be more than one element in the array which have the same value as its index. You need to include every such element's index. Follows 1-based indexing of the array.

Examples:

Input: arr[] = [15, 2, 45, 12, 7]
Output: 2
Explanation: Only arr[2] = 2 exists here.
Input: arr[] = [1]
Output: 1
Explanation: Here arr[1] = 1 exists.

*/


/* Step 1: We declare a vector<int> named result to store the indices where the values match the indices (1-based).
Step 2: We use a for loop to iterate through the array arr. The loop runs from 0 to arr.size() - 1.
Step 3: Inside the loop, we check if the current element arr[i] is equal to i + 1 (because the problem uses 1-based indexing).
Step 4: If the condition is true, we use result.push_back(i + 1) to add i + 1 to the result vector.
Step 5: After the loop finishes, we return the result vector. */
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector<int>result;
        for(int i=0;i<arr.size();++i)
        {
            if(arr[i]==i+1)
            {
                result.push_back(i+1);
            }
        }
       return result;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(nums);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x : ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
