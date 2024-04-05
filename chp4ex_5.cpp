#include <iostream>
#include <vector>
#include <string>
#include <map> 

using namespace std;

vector<string> readWordsFromStream(istream& inputStream);
void countWords(const vector<string>& words);

int main() {
    cout << "Enter some words (terminate with Ctrl+D or Ctrl+Z):" << endl;
    vector<string> words = readWordsFromStream(cin);

    countWords(words);

    return 0;
}


vector<string> readWordsFromStream(istream& inputStream) {
    vector<string> words;
    string word;
    while (inputStream >> word) {
        words.push_back(word);
    }
    return words;
}

void countWords(const vector<string>& words) {
    map<string, int> wordCount; 


    for (const string& word : words) {
        wordCount[word]++;
    }

    cout << "Word count: " << words.size() << endl;
    cout << "Unique words: " << wordCount.size() << endl;
    cout << "Word frequency:" << endl;
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }
}
