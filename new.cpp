#include <iostream>
using namespace std;

int playquiz()
{
    char start;
    char option;
    int score = 0;
    cout << "----------Welcome to Quiz Game----------" << endl;
    cout << "------Please follow the instructions-----" << endl;
    cout << "Step 1 : Quiz contains total 10 questions" << endl;
    cout << "Step 2 : You will be given 1 mark for each right answer" << endl;
    cout << "Step 3 : There will be no negative marking" << endl;
    cout << "Step 4 : Please press 'S' to start the quiz" << endl;
    cout << "Step 5 : Please select option a, b, c, d" << endl;
    cout << "Step 6 : If your score is >=6 , you will pass the Quiz" << endl;
    cin >> start;

    if (start == 'S' || start == 's')
    {
        cout << "Q1. What is the capital of India" << endl;
        cout << "(a) Delhi (b) Mumbai (c) Kolkata (d) Chennai" << endl;
        cin >> option;
        if (option == 'a')
        {
            score = score + 1;
        }

        cout << "Q2. Who is the Prime Minister of India" << endl;
        cout << "(a) Kuldeep Pandit (b) Narendra Modi (c) Lalu Yadav (d) Kejriwal" << endl;
        cin >> option;
        if (option == 'b')
        {
            score = score + 1;
        }

        cout << "Q3. What is the national bird of India" << endl;
        cout << "(a) Peacock (b) Sparrow (c) Pigeon (d) Crow" << endl;
        cin >> option;
        if (option == 'a')
        {
            score = score + 1;
        }

        cout << "Q4. What is the national animal of India" << endl;
        cout << "(a) Zebra (b) Monkey (c) Lion (d) Tiger" << endl;
        cin >> option;
        if (option == 'd')
        {
            score = score + 1;
        }

        cout << "Q5. What is the national flower of India" << endl;
        cout << "(a) Lotus (b) Rose (c) Lily (d) Sunflower" << endl;
        cin >> option;
        if (option == 'a')
        {
            score = score + 1;
        }

        cout << "Q6. What is the name of the smallest planet in the solar system" << endl;
        cout << "(a) Venus (b) Earth (c) Mercury (d) Mars" << endl;
        cin >> option;
        if (option == 'c')
        {
            score = score + 1;
        }

        cout << "Q7. What is the name of the hottest planet in the solar system" << endl;
        cout << "(a) Venus (b) Earth (c) Mercury (d) Mars" << endl;
        cin >> option;
        if (option == 'a')
        {
            score = score + 1;
        }

        cout << "Q8. What is the name of the coldest planet in the solar system" << endl;
        cout << "(a) Venus (b) Earth (c) Mercury (d) Neptune" << endl;
        cin >> option;
        if (option == 'd')
        {
            score = score + 1;
        }

        cout << "Q9. What is the name of the planet with the longest day" << endl;
        cout << "(a) Venus (b) Jupiter (c) Mercury (d) Mars" << endl;
        cin >> option;
        if (option == 'b')
        {
            score = score + 1;
        }

        cout << "Q10. What is the name of the most populous country in the world" << endl;
        cout << "(a) England (b) Pakistan (c) India (d) China" << endl;
        cin >> option;
        if (option == 'd')
        {
            score = score + 1;
        }
    }
    else
    {
        cout << "You have entered the wrong value. Please enter a, b, c, or d." << endl;
    }
    return score;
}

int main()
{
    int finalresult = playquiz();
    cout << "Your score is " << finalresult << endl;
    if (finalresult >= 6)
    {
        cout << "Congratulations! You passed the Quiz" << endl;
    }
    else
    {
        cout << "Sorry! You failed the Quiz" << endl;
    }

    return 0;
}
