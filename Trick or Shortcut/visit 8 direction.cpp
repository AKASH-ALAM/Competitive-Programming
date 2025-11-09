int row = 1, col = 1;

for (int delrow = -1; delrow <= 1; delrow++) {
    for (int delcol = -1; delcol <= 1; delcol++) {
        int nrow = row + delrow;
        int ncol = col + delcol;
        cout << nrow << ' ' << ncol << endl;
    }
}

//another way

int dx[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {  0, 0, -1, 1, -1, 1, -1, 1};

int row = 1, col = 1;

for (int i = 0; i < 8; i++) {
    int nrow = row + dx[i];
    int ncol = col + dy[i];
    cout << nrow << ' ' << ncol << endl;
}