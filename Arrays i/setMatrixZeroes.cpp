class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>v;
     int m = matrix.size() ,n = matrix[0].size();
     for(int i=0;i<m;i++){

         for(int j=0;j<n;j++)
         {
             if (matrix[i][j]==0)
             {
                  v.push_back(i);
                  v.push_back(j);
             }
            
         }
     }
         for(int k =0;k<v.size();k++){
            for(int h =0;h<n;h++)
            {

            matrix[v[k]][h]=0;
            }
            k++;
            for(int h=0;h<m;h++)
            {
                matrix[h][v[k]]=0;
            }
         }    //humne ek array bnaya phir jaha jaha p 0 value uske index usme store krwa diye 
         //    phir humne uss array  vo value nikaali aur matrix ki hr uss position ko 0 kra jaha p vo value thi 
         // odd index ko constant rkh kr row 0 kri aur even ko const. rkhkr column 0 kra 
                             
    }
};
