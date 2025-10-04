class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int counter=1;
        int sum=0;
        vector <int>y;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            for(int j=1;j<nums[i];j++)
            {
                if( nums[i]%j==0)
                {
                    sum+=j;
                    counter++;
                }
                if(counter>4)
                {
                    sum=0;
                    counter=1;
                    break;
                }
                if(counter<4 && j==nums[i]-1)
                {
                    sum=0;
                    counter=1;
                    break;
                }
                if(counter==4 && j==nums[i]-1)
                {
                    y.push_back(sum);
                    sum=0;
                    counter=1;
                }
            }
        }
        int ss=0;
        for(int i=0;i<y.size();i++)
        {
            ss=ss+y[i];

        }
        return ss;
        
    }
};
