// find the shortest distances between every pair of vertices in a given edge-weighted directed graph.
void shortest_distance(vector <vector<int>> &matrix) {
	int n = matrix.size(); // O(n^3)
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j) matrix[i][j] = 0; // salf node distance is nothing but zero
				if (matrix[i][j] == -1) matrix[i][j] = 1e9;
				//if Matrix[i][j] = -1, it means there is no edge from i to j.
			}
		}
	}

	for (int k = 0; k < n; k++) { // main algorithm
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
			}
		}
	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == 1e9) matrix[i][j] = -1;
				//change to same it was
			}
		}
	}
}