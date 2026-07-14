# Temperature Converter (C++)
The Temperature Converter is a simple C++ console application that converts temperatures between **Celsius** and **Fahrenheit**. The user selects a conversion option, enters a temperature value, and the program displays the converted result using the correct formula.

# Technologies Used
- C++
- Visual Studio Code
- C++ Standard Library (`iostream`)

# Concepts Used
- Functions - Created separate functions for converting Celsius to Fahrenheit and Fahrenheit to Celsius.
- Return - Each function uses the return statement to send the converted temperature back to the main() function.
- Scope - Variables such as temp and choice are used within the program, while function parameters (celsius and fahrenheit) are only accessible inside their respective functions.
- Return Values - The converted temperature returned by each function is stored and displayed to the user.

# The Process
- Displayed a menu with two conversion options.
- Asked the user to choose a conversion.
- Accepted the temperature value from the user.
- Called the appropriate function based on the selected option.
- Performed the conversion using the correct formula.
- Returned the converted temperature to the `main()` function.
- Displayed the converted result.
- Displayed an error message if the user entered an invalid menu option.

# What I Learned
- How to create and call functions.
- How to use the `return` statement and return values.
- How variable scope affects where variables can be used.
- How to organize a program by separating calculations into functions.
- How to accept user input and display output in C++.

# How It Could Be Improved
- Add Kelvin conversions.
- Allow multiple conversions without restarting the program.
- Improve the menu design.
- Implement function overloading for additional conversion options.

# How to Run the Project
Step 1: Open the project in Visual Studio Code or any C++ IDE.
Step 2: Compile the program using a C++ compiler.
Step 3: Run the program.
Step 4: Select:
        1 for Celsius to Fahrenheit
        2 for Fahrenheit to Celsius
Step 5: Enter the temperature.
Step 6: View the converted result.

# Sample Output 
