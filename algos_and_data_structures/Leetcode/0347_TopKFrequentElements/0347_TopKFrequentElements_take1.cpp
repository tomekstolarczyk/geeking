#include <vector>
#include <unordered_map>

using namespace std;



class Solution
{

public:

    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        // 1 chcemy najpirw policzyc liczbe wystepowan dla kazdego elementu -> hasz mapa O(n)
        std::unordered_map<int, int> mapka;

        for(int i = 0; i<nums.size();i++)
        {
            mapka[nums[i]]++; 
        }

        // 2 musimy wybrac k liczb z najwiekszymi licznikami 
        // -> clever trick jeden przelot po mapie i wrzucamy to w wektor n+1 elementowy, dzieki temu nie bedzie trzeba tego sortowac

        vector<vector<int>> buckets(nums.size() + 1);

        for(auto& [num, count] : mapka)
        {   
            buckets[count].push_back(num);
        }

        vector<int> result;
        for(int i = buckets.size()-1; i>0; i--)
        {
            for(int elem : buckets[i])
            {
                result.push_back((elem));
                if (result.size() == k) 
                {
                    return result;
                }
            }
        }
        return result;
    }
};