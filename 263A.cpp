        #include <iostream>
    #include <string>
     
    int main()
    {
      int arr[5][5];
      int k,pos_i,pos_j,ans = 0;
      for (int i=0; i < 5; i++) {
          for(int j = 0; j < 5; j++) {
             std:: cin >> k;
             arr[i][j] = k;
             if (k==1) {
                 pos_i = i;
                 pos_j = j;
             }
          }
      }
      if ((2-pos_i) >= 0) {
          ans += 2-pos_i;
      }
      else {
          ans += pos_i-2;
      }
      if ((2-pos_j) >= 0) {
          ans += 2-pos_j;
      }
      else {
          ans += pos_j-2;
      }
      std::cout<<ans;
    }