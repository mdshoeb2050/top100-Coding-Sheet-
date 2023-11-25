#include <iostream>

void countFrequency(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;

        if (arr[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;
                }
            }
            std::cout << arr[i] << "\t" << count << std::endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    countFrequency(arr, size);

    return 0;
}










/*  
    #include <iostream>
    #include <unordered_map>

    void countFrequency(int arr[], int size) {
        std::unordered_map<int, int> frequencyMap;

        for (int i = 0; i < size; i++) {
            frequencyMap[arr[i]]++;
        }

        std::cout << "Element\tFrequency" << std::endl;
        for (const auto &pair : frequencyMap) {
            std::cout << pair.first << "\t" << pair.second << std::endl;
        }
    }

    int main() {
        int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 2, 1};
        int size = sizeof(arr) / sizeof(arr[0]);

        countFrequency(arr, size);

        return 0;
    }
*/