#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> pages, int books, int students, int maxAllowedPages)
{
    int stud = 1, page = 0;
    for (int i = 0; i < books; i++)
    {
        if (pages[i] > maxAllowedPages)
        {
            return false;
        }

        if (page + pages[i] <= maxAllowedPages)
        {
            page = page + pages[i];
        }
        else
        {
            stud++;
            page = pages[i];
        }
    }
    return stud > students ? false : true;
}

int bookAllocation(vector<int> pages, int books, int students)
{
    int sum = 0;
    for (int i = 0; i < books; i++)
    {
        sum += pages[i];
    }
    int st = pages[0], end = sum, ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(pages, books, students, mid)) // (Valid) left search
        {
            ans = mid;
            end = mid - 1;
        }
        else // (Invalid) right search
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> pages;
    int books,a,result, students;
    cout<<"Enter the number of books: ";
    cin>>books;
    cout<<"Enter the number of students: ";
    cin>>students;
    cout<<"Enter the pages of the books respectively: ";
    for(int i=0; i<books; i++)
    {
        cin>>a;
        pages.push_back(a);
    }
    result= bookAllocation(pages, books, students);
    cout<<result;
}