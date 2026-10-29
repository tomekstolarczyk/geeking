#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {

        // teraz juz po rozwiazaniu widze ze mozna bylo po prostu od tylu isc i wtedy moznaby nawet w miejscu to zrobic bez tablicy results, nastepnym razem zrobie
        int i = 0;
        int j = 0;
        vector<int> results;
        results.reserve(m + n); 

        while(i < m && j < n)
        {

            if(nums1[i]<=nums2[j])
            {
                results.push_back(nums1[i]);
                i++;
            }
            else
            {
                results.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m)
        {
            results.push_back(nums1[i]);
            i++;
        }
        
        while(j<n)
        {
            results.push_back(nums2[j]);
            j++;
        }

        for(int it =0; it<results.size(); it++)
        {
            nums1[it] = results[it];
        }
    }
};

int main()
{

}