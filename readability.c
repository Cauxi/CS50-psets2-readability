#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int calculate_letters(string text);
int calculate_words(string text);
int calculate_sentences(string text);
int main(void)
{
    string text = get_string("Text: ");

    float L = ((float) calculate_letters(text) / calculate_words(text)) * 100;
    float S = ((float) calculate_sentences(text) / calculate_words(text)) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (round(index) >= 16) {
        printf("Grade 16+\n");
    } else if (round(index) < 1) {
        printf("Before Grade 1\n");
    } else {
        printf("Grade %i\n", (int) round(index));
    }
}

int calculate_letters(string text) {
    int n = strlen(text);
    int letters = 0;

    for (int i = 0; i < n; i++) {
        if (isdigit(text[i]) || isblank(text[i]) || ispunct(text[i])){
            letters += 0;
        } else {
            letters++;
        }
    }
    return letters;
}

int calculate_words(string text) {
    int n = strlen(text);
    int words = 0;

    for (int i = 0; i < n; i++) {
        if (isblank(text[i]) || isspace(text[i])) {
            words++;
        }
    }
    return words + 1;
}

int calculate_sentences(string text) {
    int n = strlen(text);
    int sentences = 0;

    for (int i = 0; i < n; i++) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
    }
    return sentences;
}
