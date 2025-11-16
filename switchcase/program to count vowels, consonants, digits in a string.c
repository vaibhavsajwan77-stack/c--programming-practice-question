#include <stdio.h>  

int main() {
    char str[100];   
    int i, count = 0, choice;   

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    do {
        printf("\nMenu:\n");  
        printf("1. Count vowels\n");
        printf("2. Count consonants\n");
        printf("3. Count digits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);   

        count = 0;  

        if (choice == 1) {
            for (i = 0; str[i] != '\0'; i++) {   
                switch (str[i]) {   
                    case 'a': case 'e': case 'i': case 'o': case 'u':
                    case 'A': case 'E': case 'I': case 'O': case 'U':
                        count++;
                        break;
                    default:
                        
                        break;
                }
            }
            printf("Number of vowels: %d\n", count);
        }

        else if (choice == 2) {
            for (i = 0; str[i] != '\0'; i++) {   
                switch (str[i]) {
                    
                    case 'a': case 'e': case 'i': case 'o': case 'u':
                    case 'A': case 'E': case 'I': case 'O': case 'U':
                    
                    case '0': case '1': case '2': case '3': case '4':
                    case '5': case '6': case '7': case '8': case '9':
                    case ' ': case '\n': case '\t':
                        break;   
                    default:
                        
                        count++;
                        break;
                }
            }
            printf("Number of consonants: %d\n", count);
        }

        else if (choice == 3) {
            for (i = 0; str[i] != '\0'; i++) {
                switch(str[i]) {
 
                    case '0': case '1': case '2': case '3': case '4':
                    case '5': case '6': case '7': case '8': case '9':
                        count++;   
                        break;
                    default:
                  
                        break;
                }
            }
            printf("Number of digits: %d\n", count);
        }

        else if (choice == 4) {
            printf("Exiting program.\n");
        }

        else {
            printf("Invalid choice! Please select 1-4.\n");
        }

        while (getchar() != '\n');  

    } while (choice != 4); 

    return 0; 
}