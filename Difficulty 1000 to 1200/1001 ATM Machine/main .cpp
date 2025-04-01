#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        
        string result = "";
        while(n--){
            
            int peopleReq;
            cin >> peopleReq;
            
            if(peopleReq <= k){
                k -= peopleReq;
                result += "1";
            } else {
                result += "0";
            }
        }

        cout << result << endl;
    }
    return 0;
}
