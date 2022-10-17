    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        long kilos = 0;
        cin >> kilos;
        if (kilos % 2 == 0 && kilos > 2) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }