/*
    Write a program to read  strings from standard input looking for duplicated words. 
    The program should find places in the input where one word is followed immediately 
    by itself. Keep track of the largest number of times a single repetition occurs and 
    which word is repeated. Print the maximum number of duplicates, or else 
    print a message saying that no word was repeated. For example, if the input is 
    ->  how  now now now  brown cow cow 
    the output should indicate that the word  now  occurred three times. 
*/

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string input;
    std::vector<std::string> words;
    std::string word;
    std::string repeatedWord;
    int maxDuplicates = 0;
    int duplicates = 1;

    // Read input from standard input
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Tokenize the input string into words
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ' || input[i] == '\t') {
            words.push_back(word);
            word = "";
        } else {
            word += input[i];
        }
    }
    words.push_back(word);  // Push the last word

    // Find duplicates
    for (int i = 1; i < words.size(); i++) {
        if (words[i] == words[i - 1]) {
            duplicates++;
            if (duplicates > maxDuplicates) {
                maxDuplicates = duplicates;
                repeatedWord = words[i];
            }
        } else {
            duplicates = 1;
        }
    }

    // Print the result
    if (maxDuplicates > 1) {
        std::cout << "The word '" << repeatedWord << "' occurred " << maxDuplicates << " times." << std::endl;
    } else {
        std::cout << "No word was repeated." << std::endl;
    }

    return 0;
}
