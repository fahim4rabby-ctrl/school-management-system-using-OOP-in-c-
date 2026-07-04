#include<bits/stdc++.h>
using namespace std;
int main(){
    int s[4],cnt=1;
    for(int i=0;i<4;i++)
        cin>>s[i];
    sort(s,s+4);
    for(int i=1;i<4;i++){
        if(s[i]!=s[i-1])
            cnt++;
    }
    cout<<(4-cnt)<<endl;
    return 0;
}
