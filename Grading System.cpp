#include <iostream>
#include<string>
using namespace std;
int main() {
	const int max_students = 50;
    string studentNames[max_students];
    int grades[max_students];
    int array = 0;
    string name;
    int grade;
    cout << "******STUDENT GRADING SYSTEM*******" << endl;
    do {
        cout << "Enter student name (or 'exit' to finish): ";
        cin >> name;
        if (name == "exit") {
            break;
        }
    cout << "Enter " << name << "'s grade: ";
    cin >> grade;
    studentNames[array] = name;
    grades[array] = grade;
    array++;
    } while (array< max_students);
    if (array == 0) {
        cout << "No data entered" << endl;
        return 0;
    }
    float sum = 0.0;
    for (int i = 0; i < array; i++) {
        sum += grades[i];
    }
    double averageGrade = sum / array;
    int highestGrade = grades[0];
    int lowestGrade = grades[0];
    for (int i = 1; i < array; i++) {
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
        }
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
    }
    cout << "RESULT:" << endl;
    for (int i = 0; i < array; i++) {
        cout << studentNames[i] << ": " << grades[i] << endl;
    }

    cout << "Average Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
