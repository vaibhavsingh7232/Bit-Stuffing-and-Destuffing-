#include <stdio.h>
#include <string.h>

// Function to perform bit stuffing
void bitStuffing(char input[], char stuffed[]) {
    int count = 0, j = 0;
    
    for (int i = 0; i < strlen(input); i++) {
        stuffed[j++] = input[i];
        
        if (input[i] == '1') {
            count++;
            if (count == 5) {
                stuffed[j++] = '0'; // Stuff a '0' after five consecutive '1's
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    stuffed[j] = '\0';
}

// Function to perform bit destuffing
void bitDestuffing(char stuffed[], char destuffed[]) {
    int count = 0, j = 0;
    
    for (int i = 0; i < strlen(stuffed); i++) {
        destuffed[j++] = stuffed[i];
        
        if (stuffed[i] == '1') {
            count++;
            if (count == 5 && stuffed[i+1] == '0') {
                i++; // Skip the stuffed '0'
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    destuffed[j] = '\0';
}

int main() {
    char input[100], stuffed[150], destuffed[100];
    
    printf("Enter the bit stream: ");
    scanf("%s", input);
    
    // Perform bit stuffing
    bitStuffing(input, stuffed);
    printf("Stuffed bit stream: %s\n", stuffed);
    
    // Perform bit destuffing
    bitDestuffing(stuffed, destuffed);
    printf("Destuffed bit stream: %s\n", destuffed);
    
    return 0;
}
