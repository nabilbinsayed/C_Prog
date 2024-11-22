// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: 
// Note/Highlight: e+1 likha jabe na, e+01 hobe. 10e+02 likha jabe na, 1e+03 likhte hobe. 

// ### **1. Why is there only one digit after the decimal in the first problem?**

// This behavior is due to the nature of the `%g` format specifier. Let’s revisit the details:

// #### **`%g` Rules:**
// - **Significant Digits, Not Decimal Places**: The precision in `%g` specifies the **number of significant digits**, not the number of digits after the decimal. In your example:
//   - **`.2`** means **2 significant digits** total, including digits before and after the decimal point.
//   - For `0.0000009979`, the two significant digits are:
//     ```
//     1.0 (in scientific notation: 1.0e-6)
//     ```

// Thus, only one digit appears after the decimal, making the output `1e-06`.

// #### **Why `%g` Chooses This Representation:**
// The `%g` specifier automatically removes unnecessary trailing zeros, so it trims `1.00e-6` to `1e-6`. This ensures the most compact representation of the number.

// ---

// ### **2. Can the output exceed the minimum field width?**

// Yes, the output **can exceed the minimum field width** if the value requires more space. The **minimum field width** only specifies the smallest width; if the output is larger, the field will automatically expand to fit it.

// #### Example:

// ```c
// printf("X%5.2gX\n", 12345.67);
// ```

// 1. **Format Specifier:**
//    - `%5.2g`: Specifies a minimum field width of **5**, with **2 significant digits**.
// 2. **Value: `12345.67`**
//    - In `%g`, two significant digits are displayed:
//      ```
//      1.2e+04
//      ```
//    - The output `1.2e+04` is **7 characters long**, which exceeds the minimum field width of 5.
// 3. **Result:**
//    The output will still be printed in full:
//    ```
//    X1.2e+04X
//    ```

// ---

// ### **Summary**

// 1. **For `%g`, precision specifies significant digits, not decimal places.** This is why only `1.0` (not `1.00`) appears in the first problem.
// 2. **Field width is a minimum, not a maximum.** If the output requires more space, it will expand beyond the field width.



#include <stdio.h>
int main (void)

{
  // What output do the following calls of printf produce?
  //   (a) printf("%6d,%4d", 86, 1040);
  //   (b) printf("%12.5e", 30.253);
  //   (c) printf("%.4f", 83.162);
  //   (d) printf("%-6.2g", .0000009979);


  printf("%6d,%4d\n", 86, 1040); 
  // guess: "    86", "1040"
  //answer: "    86", "1040" (CORRECT!) 

  printf("%12.5e\n", 30.253); 
  // guess1: ".30253e02" (INCORRECT)
  
  //answer : " 3.02530e+01"

  // explanation: https://chatgpt.com/share/673f46d0-4c24-800b-af9a-a99719dec841


  printf("%.4f\n", 83.162);
  // guess: "83.1620"
  //answer: "83.1620" 

  printf("X%-6.2gX\n", .0000009979);
  //guess  : "99.79e-08" (probably incorrect so going to guess again)
  //guess 2: close
  //answer : "1e-06 " 


  return 0; 
}