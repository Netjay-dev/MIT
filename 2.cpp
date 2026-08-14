#include <iostream>
#include <vector>
using namespace std;

// Check if the ith elements < sum of elements excluding ith in n arrays.
bool canFormPolygon(vector<int> segments){
    int totalSegments = 0;
    int n = segments.size();
    
    if(n <= 2) return false;
    
    int largest = 0;
    
    for(int i = 0; i < n; i++){
        totalSegments += segments[i]; // accumulate total segment
        // save the largest
        if(segments[i] > largest) 
            largest = segments[i];
    }
    
    return largest < totalSegments - largest;
}

int main() {
    vector<int> segments;
    int n = 0;
    cout << "Enter number of Sides: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp = 0;
        cin >> temp;
        segments.push_back(temp);
    }
    
    cout << "Result: " << canFormPolygon(segments);
    return 0;
}
