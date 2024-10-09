# psets2-readability


Here’s a README file for pset2-readability with the 2024 course links:

pset2-readability
NOTE: Copying this data and using it for your submission will breach the academic honesty policy of CS50. Make sure to learn the material and solve the problem on your own—it's worth it!

This is my solution to the CS50 "Readability" problem set, implemented in C. You can find the full problem description here: https://cs50.harvard.edu/x/2024/psets/2/readability/

Problem Overview
In this problem set, I wrote a program that determines the reading grade level of a given text using the Coleman-Liau index. The program calculates the number of letters, words, and sentences in the text and then outputs the corresponding grade level based on the formula.

This problem was solved as part of CS50: Introduction to Computer Science. Uploading my solution to GitHub is done in line with CS50’s academic honesty policy. For additional insights, you can refer to this Reddit discussion.

Program Structure
The main tasks in this program include:

Input: The program prompts the user for a block of text.
Text Analysis: It then counts the number of letters, words, and sentences in the text.
Coleman-Liau Index Calculation: Using these counts, the program computes the reading grade level.
Output: The program prints the grade level, indicating whether the text is suitable for someone in a particular grade.
Key Steps:
Prompt for Text: The program asks the user to input a piece of text for analysis.
Letter, Word, and Sentence Counting: It uses loops and conditionals to count the number of letters, words, and sentences in the input text.
Coleman-Liau Index: The formula index = 0.0588 * L - 0.296 * S - 15.8 is used, where L is the average number of letters per 100 words, and S is the average number of sentences per 100 words.
Print Result: The program outputs the grade level or a special message if the text is too simple (before Grade 1) or too complex (Grade 16+).

Note: This repository does not include any files provided by CS50, such as standard libraries or the Makefile.
