#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        vector<vector < int>> flipAndInvertImage(vector<vector < int>> &A)
        {
            for (int i = 0; i < A.size(); i++)
            {
                reverse(A[i].begin(), A[i].end());
                for (int j = 0; j < A[i].size(); j++)
                {
                    if(A[i][j] == 0)
                    {
                        A[i][j] = 1;
                    }
                    else
                    {
                        A[i][j] = 0;
                    }
                }
            }
            return A;
        }
};
int main()
{
	
}
