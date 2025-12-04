class Solution {
public:
    string addBinary(string al, string bl) {
        int a=al.size();
        int b=bl.size();
        int carry=0;
        string ans="";
        int i=0;
        while(i<a || i<b || carry!=0){
            int x=0;
            if(i<a && al[a-i-1]=='1'){
                x=1;
            }
            int y=0;
            if(i<b && bl[b-i-1]=='1'){
              y=1;
            }
            ans=to_string((x+y+carry)%2)+ans;
            carry=(x+y+carry)/2;
            i++;
        }
        return ans;
    }
};