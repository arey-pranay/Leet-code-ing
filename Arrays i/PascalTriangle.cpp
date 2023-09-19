class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    //vectors ka vector, jo return krna hai
    vector<vector<int>> v1;
    //ints ka vector jo v1 me push krege
    vector<int> v_in;
    //pichla vector store krne ke liye kyuki next iteration me use hoga
    vector<int> v_temp;

    //after each iteration, v1 me daaldege ek vector, aur use vector ko fir khaali krege
        for(int i =1;i<=numRows;i++){
            //jo inner vector hai usme integers daalne ke liye ye loop hai
            for(int j=0;j<i;j++){
            //first aur last index me 1 hi rkhna hai humesha
            if(j==i-1||j==0){
                v_in.push_back(1);
            }
            else{
            //baaki me pichle wale ka pichle do indix ka sum
            int sum = v_temp[j-1] + v_temp[j];
            v_in.push_back(sum);
            }
            }
        v1.push_back(v_in);
        v_temp = v_in;
        v_in.clear();
        }
        return v1;
    }
};
