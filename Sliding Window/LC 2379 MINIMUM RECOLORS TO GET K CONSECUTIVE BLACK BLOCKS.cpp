class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int white_count = 0;

        for(int i = 0 ; i <= k-1 ; i++)
        {
          if(blocks[i] == 'W')
          white_count++;
        }

        int left = 0 ;
        int right = k-1;
        int answer = white_count ;

        while(right < blocks.size()-1)
        {
                if(blocks[left] == 'W')
                white_count-=1;

                left++;
                right++;

                if(blocks[right] == 'W')
                white_count+=1;

                answer = min(white_count , answer);
            
        }

        return answer;


    }
};