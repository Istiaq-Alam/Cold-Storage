#include <iostream>

using namespace std;

int findMinSwaps(int train[], int n) {
  int desired[n + 1];
  for (int i = 1; i <= n; ++i) {
    desired[i] = i;
  }

  int swaps = 0;
  for (int i = 0; i < n; ++i) {
    if (train[i] != desired[i + 1]) {
      int j = i + 1;
      while (train[j] != desired[i + 1]) {
        ++j;
      }
      // In-place swap without temporary variable or vectors
      train[i] ^= train[j];
      train[j] ^= train[i];
      train[i] ^= train[j];
      ++swaps;
    }
  }

  return swaps;
}

int main() {
  int numTestCases;
  cin >> numTestCases;

  // Store results in an array
  int results[numTestCases];

  for (int i = 0; i < numTestCases; ++i) {
    int trainLength;
    cin >> trainLength;

    int train[trainLength];
    for (int j = 0; j < trainLength; ++j) {
      cin >> train[j];
    }

    results[i] = findMinSwaps(train, trainLength);
  }

  // Print results after all inputs are processed
  for (int i = 0; i < numTestCases; ++i) {
    cout << "Test Case " << i + 1 << ": Optimal train swapping takes " << results[i] << " swaps." << endl;
  }

  return 0;
}
