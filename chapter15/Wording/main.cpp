#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// Function to calculate hash value for a word
size_t calculateHash(const std::string& word,
                     const size_t tableSize) {
    size_t total = 0;
    for(const auto &c : word)
    {
        total += c;
    }

    total = total % tableSize;
    return total;
}

// Hash table implementation
class HashTable {
private:
    static const size_t tableSize = 100;
    std::vector<std::list<std::string>> table;

public:
    HashTable() : table(tableSize) {}

    // Function to insert a word into the hash table
    void insert(const std::string& word) {
        const auto hash = calculateHash(word, tableSize);
        table[hash].push_back(word);
    }

    // Function to check if a word is spelled correctly
    bool isSpelledCorrectly(const std::string& word) {
        const auto hash = calculateHash(word, tableSize);

        const auto &theList = table[hash];
        auto it = std::find(theList.begin(), theList.end(), word);
        return (it != theList.end());
    }
};

int main() {
    HashTable dictionary;

    // Populate the dictionary with sample words
    dictionary.insert("example");
    dictionary.insert("spell");
    dictionary.insert("checker");

    // Check if words are spelled correctly
    std::vector<std::string> wordsToCheck =
        {"example", "spel", "cheker"};

    for (const auto& word : wordsToCheck) {
        if (dictionary.isSpelledCorrectly(word)) {
            std::cout << word << " is spelled correctly.\n";
        } else {
            std::cout << word << " is spelled incorrectly.\n";
        }
    }

    return 0;
}
