/*sort(arr, arr + 3);
reverse(arr, arr + 3);*/

do {
    cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
} while (prev_permutation(arr, arr + 3));