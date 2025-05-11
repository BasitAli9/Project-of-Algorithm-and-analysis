#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    vector<vector<int>> link(n, vector<int>(n));
    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> link[i][j];

    vector<double> hub(n, 1), auth(n, 1);
    int times = 5;

    while (times--) {
        // Calculate authority scores
        for (int i = 0; i < n; i++) {
            auth[i] = 0;
            for (int j = 0; j < n; j++)
                if (link[j][i]) auth[i] += hub[j];
        }

        // Calculate hub scores
        for (int i = 0; i < n; i++) {
            hub[i] = 0;
            for (int j = 0; j < n; j++)
                if (link[i][j]) hub[i] += auth[j];
        }

        // Normalize
        double normA = 0, normH = 0;
        for (int i = 0; i < n; i++) {
            normA += auth[i] * auth[i];
            normH += hub[i] * hub[i];
        }
        normA = sqrt(normA);
        normH = sqrt(normH);
        for (int i = 0; i < n; i++) {
            if (normA != 0) auth[i] /= normA;
            if (normH != 0) hub[i] /= normH;
        }
    }

    // Output
    cout << "\nFinal Scores:\n";
    for (int i = 0; i < n; i++)
        cout << "Node " << i << ": Authority = " << auth[i]
             << ", Hub = " << hub[i] << endl;

return 0;
}
