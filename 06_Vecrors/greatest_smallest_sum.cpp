# include <iostream>
# include <vector>
# include <fstream>
using namespace std;

void num_reverse(vector <int> &vec, int size, long long int num)
{
    for (int i=size-1; i>=0; i--)
    {
        vec [i]= num%10;
        num /=10;
    }
}

int check_greatest_digit(vector <int> &vec, int size)
{
    int greatest_digit =vec[0];
    for (int i=1; i<size; i++)
    {
        if (vec[i]> greatest_digit)
        {
            greatest_digit=vec[i];
        }
    }
    return greatest_digit;
}

int check_smallest_digit(vector <int> &vec, int size)
{
    int smallest_digit =vec[0];
    for (int i=1; i<size; i++)
    {
        if (vec[i]< smallest_digit)
        {
            smallest_digit=vec[i];
        }
    }
    return smallest_digit;
}

int sum(vector <int> &vec)
{
    int sum=0;
    for (int i=0; i<vec.size(); i++)
    {
        sum +=vec[i];
    }
    return sum;
}

int main ()
{
    int min_digit, max_digit, digit_sum, size;
    long long int num;
    cout<<"Enter the size of the number: ";
    cin>>size;
    vector <int> vec (size);
    cout<<"Enter a number: ";
    cin>>num;
    num_reverse(vec, size, num);
    max_digit=check_greatest_digit(vec, size);
    min_digit=check_smallest_digit(vec, size);
    digit_sum=sum(vec);

    ofstream file("greatest.txt");
    if (file. is_open())
    {
        file<<"Greatest digit: "<<max_digit<<endl;
        file<<"Smallest digit: "<<min_digit<<endl;
        file<<"Sum of all digits: "<<digit_sum<<endl;
        file.close();
        cout<<"File written successfully";
    }
    else
    {
        cout<<"Error";
    }
}