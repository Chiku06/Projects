#include <iostream>
using namespace std;

int playquiz()
{
    char start;
    char option;
    int score = 0;
    cout << "----------Welcome to Quiz Game----------" << endl;
    cout << "------Please follow the instractions-----" << endl;
    cout << "Step 1 : Quiz contains total 10 questions" << endl;
    cout << "Step 2 : You will given 1 marks for each right ans" << endl;
    cout << "Step 3 : There will be no negative marking" << endl;
    cout << "Step 4 : Please press 'S' to start the quiz" << endl;
    cout << "Step 5 : Please select option a, b, c, d" << endl;
    cout << "Step 6 : If your score is >=6 , you will pass the Quiz" << endl;
    cin >> start;

    if (start == 'S' || start == 's')
    {
        cout << "Q1. What is the capital of India" << endl;
        cout << "(a) Delhi (b) Mumbai (c) Kolkata (d)Chennai" << endl;
        cin >> option;
        if (option == 'a')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2. What is the prime minister of India" << endl;
        cout << "(a) Kuldeep Pandit (b)Narendra Modi (c) Lalu yadav (d)kejriwal" << endl;
        cin >> option;
        if (option == 'b')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q3. What is the national bird of India" << endl;
        cout << "(a)peacock (b)sparrow  (c)pigeon (d)sparrow" << endl;
        cin >> option;
        if (option == 'a')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4. What is the national animal of India" << endl;
        cout << "(a)zebra (b)monkey (c)Lion (d)Tiger" << endl;
        cin >> option;
        if (option == 'd')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5. What is the national flower of India" << endl;
        cout << "(a)Lotus (b)Rose  (c)Lily (d)sunflower" << endl;
        cin >> option;
        if (option == 'a')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q6. What is the name of smallest planet in the solar system" << endl;
        cout << "(a)venus (b)earth (c)mercury (d)mars" << endl;
        cin >> option;
        if (option == 'c')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q7. What is the name of hottest planet in the solar system" << endl;
        cout << "(a)venus (b)earth (c)mercury (d)mars" << endl;
        cin >> option;
        if (option == 'a')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q8. What is the name of coldest planet in the solar system" << endl;
        cout << "(a)venus (b)earth (c)mercury (d)neptune" << endl;
        cin >> option;
        if (option == 'd')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q9. What is the name of the planet with the longest day" << endl;
        cout << "(a)venus (b)jupiter (c)mercury (d)mars" << endl;
        cin >> option;
        if (option == 'b')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q10. What is the name of the most populous country in the world" << endl;
        cout << "(a)england (b)pakistan (c)India (d)china" << endl;
        cin >> option;
        if (option == 'c')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
    }
    else
    {
        cout << "You have enterd wrong value, please enternd correct value a,b,c,d" << endl;
    }
}

int main()
{
    int finalresult = 0;
    finalresult = playquiz();
    int playquiz(void);
    cout << "Your score is " <<finalresult<< endl;
    if (finalresult >= 6)
    {
        cout << "You pass the Quiz" << endl;
    }
    else
    {
        cout << "You fail the Quiz" << endl;
    }

    return 0;
}