#include <iostream>
using namespace std;

// Question 1: Count total number of negative numbers in an array
void question1() {
    int arr[] = { -1, 2, -3, 4, -5 };
    int count = 0;
    cout << "input array:[ -1,2,-3,4,-5]" << endl;

    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }

    cout << "Total number of negative numbers: " << count << endl;
}

// Question 2: Find max of 5 numbers entered by the user
void question2() {
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Max number: " << max << endl;
}

// Question 3: Merge two sorted arrays into a third sorted array
void question3() {
    int arr1[] = { 1, 3, 5, 7 };
    int arr2[] = { 2, 4, 6, 8 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1 + n2];
    cout << "input array 1:[ 1,3,5,7 ]" << endl;
    cout << "input array 2:[ 2,4,6,8 ]" << endl;

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        arr3[k++] = arr1[i++];
    }

    while (j < n2) {
        arr3[k++] = arr2[j++];
    }

    cout << "Merged array: ";
    cout<<"[";
    for (int i = 0; i < n1 + n2; i++) {
        cout << arr3[i] <<" ";
    }
    cout<<"]";
    cout << endl;
}

// Question 4: Reverse an array of 7 integers
void question4() {
    int arr[7];
    cout << "Enter 7 integers: ";
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    int start = 0, end = 6;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Question 5: Check if an array is a palindrome
void question5() {
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[5 - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }
}

// Question 6: Search for a number in an array and return its index
void question6() {
    int arr[5];
    int searchElement, index = -1;

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> searchElement;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == searchElement) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Number not found." << endl;
    } else {
        cout << "Number found at index: " << index << endl;
    }
}

// Question 7: Print all unique numbers in an array
void question7() {
    int arr[] = { 1, 2, 2, 3, 4, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "input array:[ 1, 2, 2, 3, 4, 4, 5 ]" << endl;

    cout << "Unique numbers: ";
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Question 8: Count the frequency of each number in an array 
void question8() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "input array:[ 1, 2, 2, 3, 4, 4, 5 ]" << endl;
    cout << "Frequency of numbers: " << endl;
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] == -1) continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        cout << arr[i] << " occurs " << count << " times." << endl;
    }
}

// Question 9: Count total number of duplicate numbers in an array
void question9() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int duplicateCount = 0;

   cout << "input array:[ 1, 2, 2, 3, 4, 4, 5 ]" << endl;
    for (int i = 0; i < n; i++) {
        int count = 0;
        if (arr[i] == -1) continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        if (count > 0) {
            duplicateCount++;
        }
    }

    cout << "Total number of duplicate numbers: " << duplicateCount << endl;
}

// Question 10: Print Parallelogram pattern
void question10() {
    int rows = 5; 
    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < rows; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Question 11: Print Right Triangle pattern
void question11() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Question 12: Print Half Diamond pattern
void question12() {
    int cols = 5;
    for (int i = 1; i <= cols; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = cols - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Question 13: Print Diamond pattern
void question13() {
    int rows = 9;
    if (rows % 2 == 0) {
        cout << "Error: Rows must be odd." << endl;
        return;
    }

    int n = rows / 2;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Question 14: Print alternating number pattern
void question14() {
    int rows = 5, cols = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i % 2 == 1) {
                cout << j;
            } else {
                cout << cols - j + 1;
            }
        }
        cout << endl;
    }
}

// Question 15: Print square border pattern
void question15() {
    int rows = 5, cols = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
}

// Question 16: Print increasing number pattern with repetition
void question16() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j <= rows; j++) {
            cout << j;
        }
        for (int j = 2; j <= i; j++) {
            cout << rows;
        }
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\nChoose a question to execute (1-16) or 0 to exit: ";
        cin >> choice;

        switch (choice) {
            case 1: question1(); break;
            case 2: question2(); break;
            case 3: question3(); break;
            case 4: question4(); break;
            case 5: question5(); break;
            case 6: question6(); break;
            case 7: question7(); break;
            case 8: question8(); break;
            case 9: question9(); break;
            case 10: question10(); break;
            case 11: question11(); break;
            case 12: question12(); break;
            case 13: question13(); break;
            case 14: question14(); break;
            case 15: question15(); break;
            case 16: question16(); break;
            case 0: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice. Please choose between 0 and 16." << endl;
        }
    } while (choice != 0);

    return 0;
}

