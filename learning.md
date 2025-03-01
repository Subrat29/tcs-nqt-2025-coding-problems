1. Subarray is contiguous elements of an array.
    ```
    Formula: n(n+1)/2
    ```

2. Bitwise OR: | and Logical OR: ||
   ```
   Bitwise OR: 1|1=1, 1|0=1, 0|1=1, 0|0=0
   Logical OR: 1||1=1, 1||0=1, 0||1=1, 0||0=0
   ```
   ​
3. If the size of the array is not given explicitly and you need to take input until the end of the input stream.

   ```cpp
   vector<int> arr;
   int num;

   // Taking input until EOF or newline
   while (cin >> num) {
   arr.push_back(num);
   }
   ```

4. One Soln to handle all multiple input formats (for 1D Array)

```cpp
    string input;
    vector<int> v;

    // Read the entire line as input
    getline(cin, input);

    // Replace commas with spaces to standardize input
    for (char &c : input) {
        if (c == ',') c = ' ';
    }

    // Use stringstream to extract numbers
    stringstream ss(input);
    int num;
    while (ss >> num) {
        v.push_back(num);
    }
```

5. One Soln to handle all multiple input formats (for 2D Array)

```cpp
    vector<vector<int>> matrix;
    string line;

    // Read the entire matrix line by line
    while (getline(cin, line) && !line.empty()) {
        vector<int> row;

        // Replace commas with spaces
        for (char &c : line) {
            if (c == ',') c = ' ';
        }

        // Extract numbers using stringstream
        stringstream ss(line);
        int num;
        while (ss >> num) {
            row.push_back(num);
        }

        // Store the row if it's not empty
        if (!row.empty()) {
            matrix.push_back(row);
        }
    }
```
6. Header for INT_MAX and INT_MIN
```cpp
#include <climits>
```

7. substr() function in C++ STL
✔ s.substr(s.size()) (or beyond) returns an empty string ("").
✔ This behavior allows the recursion to recognize when s has been completely matched and update the answer properly. 🚀
