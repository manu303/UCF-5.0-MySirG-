/*
Define a class TestResult with properties roll_no,right,wrong,net_score.Also define class properties right_weightage,wrong_weightage.provide methods to set and get all the properties
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
    TestResult s1;
    s1.set_roll_no(1);
    s1.set_right(10);
    s1.set_wrong(2);

    cout << "Roll No: " << s1.get_roll_no() << endl;
    cout << "Right: " << s1.get_right() << endl;
    cout << "Wrong: " << s1.get_wrong() << endl;
    cout << "Net Score (Weightage 4,1): " << s1.get_net_score() << endl; // 38

    // Update weightage (affects all future get_net_score() calls)
    TestResult::set_right_weightage(5);
    TestResult::set_wrong_weightage(2);

    cout << "Updated Net Score (Weightage 5,2): " << s1.get_net_score() << endl; // 46

    return 0;
}