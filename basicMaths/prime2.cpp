#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    if (n==0)
    {
       return 0;
    }
    vector<bool>prime(n,true);
    prime[0]=prime[1]=false;
    int ans=0;

    for (int i = 2; i <n; i++)
    {
        if (prime[i])
        {
            ans++;

            int j=2*i;
            while (j<n){
                prime[j]=false;
                j+=i;
            } 
        }
    }
     return ans;

}



int main(){
//    Sieve of Eratosthenes algorithm
    int n = 21;
    int ans = countPrime(n);
    cout << "Number of primes less than " << n << " is: " << ans << endl;
    return 0;
}