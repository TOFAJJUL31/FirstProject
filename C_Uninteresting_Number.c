#include <stdio.h>
#include <string.h>

int main() {
    int T; 
    scanf("%d", &T); 
    
    while (T--) {
        char n[100005]; 
        scanf("%s", n); 
        int total_sum = 0;
        int length = strlen(n);
        
        
        for (int i = 0; i < length; i++) {
            total_sum += n[i] - '0'; 
        }
        
        
        if (total_sum % 9 == 0) {
            printf("Yes\n");
            continue;
        }
        
       
        int found = 0;
        for (int i = 0; i < length; i++) {
            int digit = n[i] - '0';  
            int squared_digit;
            
            if (digit == 0 || digit == 1 || digit == 2 || digit == 3) {
                // Square the digit
                squared_digit = digit * digit;
                
         
                int new_sum = total_sum - digit + squared_digit;
                
              
                if (new_sum % 9 == 0) {
                    found = 1;
                    break; }
            }
        }

        
        if (found) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}