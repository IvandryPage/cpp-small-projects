#include <iostream>

// dynamic array --- dynamic as in memory allocation
size_t size {25};
int main()
{
    // std::size doesn't work on dynamic array and doesn't support range based for loops

    double *p_scores { new double[size]{5, 2, 3} };

    int *p_grades { new(std::nothrow) int[size] {} };


    if(p_scores)
    {
        for(size_t i {0}; i < size; i++)
        {
            std::cout << "score is " << *(p_scores + i) << " : " << p_scores[i] << '\n';
        }
    }

    // static arrays vs dynamic arrays

    std::cout << std::endl;
    std::cout << std::endl;
    int scores[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "Score size : " << std::size(scores) << std::endl;

    for (auto item : scores)
    {
        std::cout << "Score: " << item << std::endl;
    }

    int *p_scores2 = new int[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // std::cout << "p_scores2 size : " << std::size(p_scores2) << std::endl; // compiler error
    

    delete[] p_scores;

    delete[] p_scores2;
    p_scores2 = nullptr;

    delete[] p_grades;
    p_grades = nullptr;
    p_scores = nullptr;
// p_scores2 // compiler error