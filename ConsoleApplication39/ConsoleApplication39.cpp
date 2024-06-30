//#include <iostream>
//
//using namespace std;
//
//
//int* allocateArray(int size) {
//    return new int[size];
//}
//
//
//void initializeArray(int* array, int size) {
//    for (int i = 0; i < size; ++i) {
//        array[i] = i + 1;
//    }
//}
//
//
//void printArray(const int* array, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//
//
//void deleteArray(int* array) {
//    delete[] array;
//}
//
//
//int* addElement(int* array, int& size, int element) {
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < size; ++i) {
//        newArray[i] = array[i];
//    }
//    newArray[size] = element;
//    delete[] array;
//    ++size;
//    return newArray;
//}
//
//
//int* insertElement(int* array, int& size, int element, int index) {
//    if (index < 0 || index > size) {
//        cout << "Invalid index" << endl;
//        return array;
//    }
//
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < index; ++i) {
//        newArray[i] = array[i];
//    }
//    newArray[index] = element;
//    for (int i = index; i < size; ++i) {
//        newArray[i + 1] = array[i];
//    }
//    delete[] array;
//    ++size;
//    return newArray;
//}
//
//
//int* deleteElement(int* array, int& size, int index) {
//    if (index < 0 || index >= size) {
//        cout << "Invalid index" << endl;
//        return array;
//    }
//
//    int* newArray = new int[size - 1];
//    for (int i = 0; i < index; ++i) {
//        newArray[i] = array[i];
//    }
//    for (int i = index + 1; i < size; ++i) {
//        newArray[i - 1] = array[i];
//    }
//    delete[] array;
//    --size;
//    return newArray;
//}
//
//int main() {
//    int size = 5;
//    int* array = allocateArray(size);
//
//    initializeArray(array, size);
//    cout << "Initial array: ";
//    printArray(array, size);
//
//    array = addElement(array, size, 10);
//    cout << "Array after adding element 10: ";
//    printArray(array, size);
//
//    array = insertElement(array, size, 20, 2);
//    cout << "Array after inserting element 20 at index 2: ";
//    printArray(array, size);
//
//    array = deleteElement(array, size, 3);
//    cout << "Array after deleting element at index 3: ";
//    printArray(array, size);
//
//    deleteArray(array);
//
//    return 0;
//}











int* removeEvenNumbers(int* array, int& size) {
    int oddCount = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] % 2 != 0) {
            ++oddCount;
        }
    }

 
    int* newArray = new int[oddCount];
    int j = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] % 2 != 0) {
            newArray[j++] = array[i];
        }
    }

    delete[] array;

  
    size = oddCount;

  
    return newArray;
}


void printArray(const int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = 10;
    int* array = new int[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Original array: ";
    printArray(array, size);

    array = removeEvenNumbers(array, size);

    cout << "Array after removing even numbers: ";
    printArray(array, size);

    delete[] array;

    return 0;
}








