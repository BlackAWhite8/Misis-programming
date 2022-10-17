    #include <iostream>
     
     
    int main() {
        int y = 0;
        int a,b,c,d;
        std::cin >> y;
        y += 1;
        while (y < 10000) {
            a = y % 10;
            b = (y/10)%10;
            c = (y/100)%10;
            d = (y/1000);
            if (not(a==b || a == c || a == d || b==c || b == d || c == d)) {
               std::cout << y;
                break;
            }
            else {
                y += 1;
            }
        }
        return 0;
    }