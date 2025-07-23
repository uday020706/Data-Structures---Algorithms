# include <iostream>
using namespace std;

int binaryToDecimal (int binNum) {
    int ans=0;
    int pow=1;
    int rem;
    while (binNum>0) {
        rem = binNum % 10;
        binNum= binNum /10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main ()
{
    int bNum;
    cout<<"Enter Binary Number: "<<endl;
    cin>>bNum;
    cout<<binaryToDecimal(bNum);
}


//  1010   = 10