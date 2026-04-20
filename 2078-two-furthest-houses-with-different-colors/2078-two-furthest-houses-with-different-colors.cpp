class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int m_d=0;
        for(int i=n-1;i>=0;i--){
           if(colors[i]!=colors[0]){
            m_d=max(m_d,i);
           }
           break;
        }
        for(int j=0;j<n;j++){
            if(colors[i]!=colors[n-1]){
                m_d=max(m_d,(n-1)-i);
            }
            break;
        }
        return m_d;
    }
};