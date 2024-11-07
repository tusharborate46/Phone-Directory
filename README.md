
---

# Phone Directory Lookup Program

This is a simple C program that allows users to search for a person's name in a predefined phone directory based on a 12-digit phone number input, including the country code. It also detects the country based on the phone number's country code.

## Features

- **Phone Number Validation**: Ensures the phone number input is exactly 12 digits long and contains only numeric characters.
- **Country Code Identification**: Identifies the country of the phone number based on the first two digits (country code). Currently supports India, USA, UK, and Germany. If the country code is not recognized, it will display "Unknown Country."
- **Phone Directory Lookup**: Searches for the input phone number in a predefined directory and returns the corresponding person's name.

## Predefined Directory

The program includes a small phone directory of 5 contacts with names and phone numbers (12-digit format with country code):

- **Person1**: 911234567890 (India)
- **Person2**: 012345678901 (USA)
- **Person3**: 993456789012
- **Person4**: 554567890123
- **Person5**: 885678901234

## How to Use

1. Compile the program:
   ```bash
   gcc -o phone_directory phone_directory.c
   ```

2. Run the program:
   ```bash
   ./phone_directory
   ```

3. Enter a 12-digit phone number, including the country code, when prompted.

4. The program will:
   - Check if the phone number is valid (exactly 12 digits).
   - Identify the country of origin based on the country code.
   - Search for the phone number in the predefined directory.
   - Display the corresponding name if a match is found, or indicate that the number is not in the directory.

## Example

```
Enter a 12-digit phone number (including country code) to search: 911234567890
The number is from: India
The number belongs to: Person1
```

## Country Codes Supported

- **India**: `91`
- **USA**: `1`
- **UK**: `44`
- **Germany**: `49`

If the phone number does not match any of these country codes, the program will display "Unknown Country."

## Future Enhancements

- Add support for more country codes.
- Allow dynamic addition of phone numbers to the directory.
- Improve phone number validation by handling special formats and spacing.

## License

This program is free to use and distribute under the MIT License.

---

Feel free to modify this `README` based on any further changes or additions you make to the program!
