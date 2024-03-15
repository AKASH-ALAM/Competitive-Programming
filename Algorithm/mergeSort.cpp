void Merge(vector <int> &v, int left, int mid, int right) {
    int l = left,  r = mid + 1;
    vector <int> tmp;

    while (l <= mid and r <= right) {
        if (v[l] <= v[r])  tmp.push_back(v[l++]);
        else tmp.push_back(v[r++]);
    }

    while (l <= mid) tmp.push_back(v[l++]);
    while (r <= right) tmp.push_back(v[r++]);

    for (int i = left; i <= right; i++) {
        v[i] = tmp[i - left];
    }
}

void MergeSort(vector <int> &v, int left, int right) {
    if (left == right) return;

    int mid = (left + right) / 2;

    MergeSort(v, left, mid);
    MergeSort(v, mid + 1, right);

    Merge(v, left, mid, right);
}