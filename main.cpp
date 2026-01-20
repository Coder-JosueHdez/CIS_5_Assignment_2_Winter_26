#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
    string name = "";
    int age = 0;
    double weight = 0;
    double height = 0;
    int TestScore = 0;
    double bmi = 0.0;

    //Questions
    cout << "What is your name: ";
    cin >> name;

    cout << "What is your age: ";
    cin >> age;

    cout << "What is your weight in kilograms: ";
    cin >> weight;

    cout << "What is your height in meters: ";
    cin >> height;

    cout << "What is your test score: ";
    cin >> TestScore;

    bmi = weight / (height * height);

    //Statement
    cout << "Hey, " << name << "! You're " << age << " years old! With a BMI of ";
    cout << fixed << setprecision(2) << bmi;

    //display BMI message
    if (bmi < 18.5)
    {
        cout << "(Under weight)." << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        cout << "(Normal weight)." << endl;
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        cout << "(Over weight)." << endl;
    }
    else if (bmi >= 30)
    {
        cout << "(Obese)." << endl;
    }

    cout << "And a test score of " << TestScore << ". You got a grade ";

    //display Test score message
    if (TestScore >= 90 && TestScore <= 100)//90<x<100
    {
        cout << "A. Great Work!:D" << endl;
    }
    else if (TestScore >= 80 && TestScore <= 89)//80<x<89
    {
        cout << "B. Great Job!:)" << endl;
    }
    else if (TestScore >= 70 && TestScore <= 79)//70<x<79
    {
        cout << "C. Good Enough!:)" << endl;
    }
    else if (TestScore >= 60 && TestScore <= 69)//60<x<69
    {
        cout << "D. Stay Determined, you'll get it next time!:)" << endl;
    }
    else if (TestScore < 60)//60<x
    {
        cout << "F. We learn from our failures!" << endl;
    }

    return 0;
}