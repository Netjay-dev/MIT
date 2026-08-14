#include <iostream>
using namespace std;

void crazySort(int * items, int numItems){
    int small;
    int numExchanges = 0,
        numComparisons = 0;
    for(int i = 0; i < numItems; i++){
        for(int j = i+1; j < numItems; j++){
            numComparisons++; // count the number of comparison
            if(items[i] > items[j]){ //exchange
                numExchanges++; // count the number of exchange
                small = items[j];
                items[j] = items[i];
                items[i] = small;
            }
        }
        // Display the numExchanges and numComparisons after each iteration 
        std::cout << "Iteration " << i << std::endl;
        std::cout << "Num. of Exchanges: " << numExchanges << std::endl;
        std::cout << "Num. of Comparisons: " << numComparisons << std::endl <<std::endl;
    }
}

int main() {
    int items[] = {3, 2, 4, 5, 2, 0};
    int numItems = 6;
    crazySort(items, numItems);
    return 0;
}


