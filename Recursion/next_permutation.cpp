
do {
    cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
} while (next_permutation(arr, arr + 3));

/*string letter = "akash", tmp;
tmp = letter;*/

for (int i = 0; i < k; i++) {
    cout << letter << endl;
    next_permutation(all(letter));
    if (letter == tmp) break;
}