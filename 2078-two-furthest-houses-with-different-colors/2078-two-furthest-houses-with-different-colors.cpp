class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int m_d=0;
        for(int i=0;i<colors.size();i++){
            for(int j=i+1;j<n;j++){
          if(colors[i]!=colors[j]){
            m_d=max(m_d,j-i);
          }
        }
        }
        return m_d;
    }
};