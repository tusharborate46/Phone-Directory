#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIRECTORY_SIZE 5
#define PHONE_LENGTH 12

// check input phone number
int is_valid_phone_number(const char *phone) {
    if (strlen(phone) != PHONE_LENGTH) {
        return 0;  // phone number should be 12 digits
    }
    for (int i = 0; i < PHONE_LENGTH; i++) {
        if (!isdigit(phone[i])) {
            return 0;  // non-digit character found
        }
    }
    return 1;  // valid phone number
}

int main() {
    // arrays to store phone numbers and corresponding names
    char phone_numbers[DIRECTORY_SIZE][PHONE_LENGTH + 1] = {
        "911234567890", "012345678901", "993456789012", "554567890123", "885678901234"
    };
    char *names[DIRECTORY_SIZE] = {
        "Person1", "Person2", "Person3", "Person4", "Person5"
    };

    char input_phone[PHONE_LENGTH + 1];
    int found = 0;

    printf("Enter a 12-digit phone number (including country code) to search: ");
    scanf("%12s", input_phone);

    // check input
    if (!is_valid_phone_number(input_phone)) {
        printf("Invalid input. Please enter exactly 12 digits.\n");
        return 1;
    }
    
    //country code indentifier
    int code;
    char *countryName;
    code = (input_phone[0] - '0') * 10 + (input_phone[1] - '0');
    
    switch(code){
        case 91: countryName = "India"; break;
        case 01: countryName = "USA"; break;
        case 44: countryName = "UK"; break;
        case 49: countryName = "Germany"; break;
        default: countryName = "Unknown Country"; break;
    }
    
    printf("The number is from: %s\n", countryName);

    // search for the phone number in the directory
    for (int i = 0; i < DIRECTORY_SIZE; i++) {
        if (strcmp(phone_numbers[i], input_phone) == 0) {
            printf("The number belongs to: %s\n", names[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("The phone number %s is not in the directory.\n", input_phone);
    }

    return 0;
}
