#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

int loadData(const char filename[], int ids[], int scores[], int maxSize) {
    ifstream scoreFile(filename);
    if (!scoreFile.is_open()) return 0;

    string line;
    if (!getline(scoreFile, line)) return 0;

    int count = 0;
    while (count < maxSize && getline(scoreFile, line)) {
        if (line.empty()) continue;
        size_t commaPos = line.find(',');
        if (commaPos == string::npos) continue;
        string idStr = line.substr(0, commaPos);
        string scoreStr = line.substr(commaPos + 1);
        try {
            ids[count] = stoi(idStr);
            scores[count] = stoi(scoreStr);
            count++;
        } catch (...) {
            continue;
        }
    }
    return count;
}

void printAll(int ids[], int scores[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "StudentID: " << ids[i] << "   Score: " << scores[i] << '\n';
    }
}

void computeStats(int scores[], int size, double &average, int &minScore, int &maxScore) {
    if (size <= 0) { average = 0.0; minScore = 0; maxScore = 0; return; }
    int sum = 0;
    minScore = scores[0];
    maxScore = scores[0];
    for (int i = 0; i < size; i++) {
        sum += scores[i];
        if (scores[i] < minScore) minScore = scores[i];
        if (scores[i] > maxScore) maxScore = scores[i];
    }
    average = (double)sum / size;
}

void computeGradeDistribution(int scores[], int size,
                              int &countA, int &countB, int &countC,
                              int &countD, int &countF) {
    countA = countB = countC = countD = countF = 0;
    for (int i = 0; i < size; i++) {
        int s = scores[i];
        if (s >= 70 && s <= 100) countA++;
        else if (s >= 60 && s <= 69) countB++;
        else if (s >= 50 && s <= 59) countC++;
        else if (s >= 45 && s <= 49) countD++;
        else if (s >= 0 && s <= 44) countF++;
    }
}

int pickRandomPassingStudent(int ids[], int scores[], int size) {
    int passingIndices[100];
    int passingCount = 0;
    for (int i = 0; i < size; i++) {
        if (scores[i] >= 50) {
            passingIndices[passingCount] = i;
            passingCount++;
            if (passingCount >= 100) break;
        }
    }
    if (passingCount == 0) return -1;
    int randomIndex = rand() % passingCount;
    return passingIndices[randomIndex];
}

void saveSummary(const char filename[],
                 double average, int minScore, int maxScore,
                 int countA, int countB, int countC,
                 int countD, int countF, int numberOfStudents) {
    ofstream outFile(filename);
    if (!outFile.is_open()) return;
    outFile << "Metric,Value\n";
    outFile << "Number of Students," << numberOfStudents << '\n';
    outFile << "Average Score," << average << '\n';
    outFile << "Minimum Score," << minScore << '\n';
    outFile << "Maximum Score," << maxScore << '\n';
    outFile << "A Count," << countA << '\n';
    outFile << "B Count," << countB << '\n';
    outFile << "C Count," << countC << '\n';
    outFile << "D Count," << countD << '\n';
    outFile << "F Count," << countF << '\n';
    outFile.close();
}

int main() {
    srand((unsigned)time(NULL));
    const int MAX = 100;
    int ids[MAX];
    int scores[MAX];

    int numberOfStudents = loadData("scores.csv", ids, scores, MAX);
    if (numberOfStudents == 0) {
        cout << "No data loaded. Check that scores.csv exists and has lines like:\n";
        cout << "StudentID,Score\n1001,72\n1002,65\n";
        return 0;
    }

    cout << "Total number of students: " << numberOfStudents << '\n';

    printAll(ids, scores, numberOfStudents);

    double average;
    int minScore, maxScore;
    computeStats(scores, numberOfStudents, average, minScore, maxScore);
    cout << "Average score: " << average << '\n';
    cout << "Minimum score: " << minScore << '\n';
    cout << "Maximum score: " << maxScore << '\n';

    int countA, countB, countC, countD, countF;
    computeGradeDistribution(scores, numberOfStudents, countA, countB, countC, countD, countF);
    cout << "A: " << countA << '\n';
    cout << "B: " << countB << '\n';
    cout << "C: " << countC << '\n';
    cout << "D: " << countD << '\n';
    cout << "F: " << countF << '\n';

    int selectedIndex = pickRandomPassingStudent(ids, scores, numberOfStudents);
    if (selectedIndex == -1) {
        cout << "No passing student found.\n";
    } else {
        cout << "Lucky passing student: StudentID: " << ids[selectedIndex] << "   Score: " << scores[selectedIndex] << '\n';
    }

    saveSummary("summary.csv", average, minScore, maxScore, countA, countB, countC, countD, countF, numberOfStudents);
    cout << "Summary saved to summary.csv\n";

    return 0;
}
