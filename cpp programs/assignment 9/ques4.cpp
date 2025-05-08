/*
Write a driver function main() to use TestResult class.Create an array to 5 TestResult objects,set values to all the objects and display the results in sorted order(by net_score);
*/

#include<iostream>
using namespace std;

class TestResult {
private:
    int roll_no, right, wrong;
    static int right_weightage, wrong_weightage; // Class properties

public:
    // Setters
    void set_roll_no(int x) {
        roll_no = x;
    }

    void set_right(int x) {
        right = x;
    }

    void set_wrong(int x) {
        wrong = x;
    }

    // Static setters (for class properties)
    static void set_right_weightage(int x) {
        right_weightage = x;
    }

    static void set_wrong_weightage(int x) {
        wrong_weightage = x;
    }

    // Getters (compute net_score on-demand)
    int get_net_score() {
        return (right * right_weightage) - (wrong * wrong_weightage);
    }

    int get_roll_no() {
        return roll_no;
    }

    int get_right() {
        return right;
    }

    int get_wrong() {
        return wrong;
    }

    // Static getters (for class properties)
    static int get_right_weightage() {
        return right_weightage;
    }

    static int get_wrong_weightage() {
        return wrong_weightage;
    }
};

// Initialize static members
int TestResult::right_weightage = 4;
int TestResult::wrong_weightage = 1;

int main() {
    TestResult s[5];

    // Set values for each student
    s[0].set_roll_no(1);
    s[0].set_right(10);
    s[0].set_wrong(5);

    s[1].set_roll_no(2);
    s[1].set_right(9);
    s[1].set_wrong(4);

    s[2].set_roll_no(3);
    s[2].set_right(8);
    s[2].set_wrong(3);

    s[3].set_roll_no(4);
    s[3].set_right(7);
    s[3].set_wrong(2);

    s[4].set_roll_no(5);
    s[4].set_right(6);
    s[4].set_wrong(1);

    // Manual sorting (ascending order by net_score)
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(s[i].get_net_score() > s[j].get_net_score()) {
                // Swap objects
                TestResult temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Display results
    cout << "Roll No\tRight\tWrong\tNet Score\n";
    cout << "---------------------------------\n";
    for(int i = 0; i < 5; i++) {
        cout <<"  " << s[i].get_roll_no() << "\t  "
             << s[i].get_right() << "\t  "
             << s[i].get_wrong() << "\t  "
             << s[i].get_net_score() << "\n";
    }

    return 0;
}