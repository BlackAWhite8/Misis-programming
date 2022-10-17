    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        long km = 0;
        int ans;
        cin >> km;
        if (km%5 == 0) {
            cout << km/5;
        }
        else {
            cout << km/5+1;
        }
        
        
        return 0;
    }