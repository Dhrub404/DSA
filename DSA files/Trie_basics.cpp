#include<iostream>
using namespace std;

class TrieNode{
    public:
        char data ;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char  ch){
            data = ch;
            for(int i=0;i<26;i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root , string word){
        //base case
        if(word.length() == 0) {    //lenght zero means traversal is done , therefore make the isTerminal true as we have traversed last character
            root->isTerminal = true;
            return;
        }
        
        // Assumption :- the word will be in CAPITAL LETTERS(CAPS)
        int index = word[0] - 'A';
        TrieNode* child;

        // case present --> character already present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //case absent --> char is absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //RECURSIVE CALL for whole process
        insertUtil(child , word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }


    //Searching
    bool searchUtil(TrieNode* root , string word){
        //base case
        if(word.length() == 0) { 
            return root->isTerminal;
        }
        
        // Assumption :- the word will be in CAPITAL LETTERS(CAPS)
        int index = word[0] - 'A';
        TrieNode* child;

        // case present --> character already present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //case absent --> char is absent
            return false;
        }

        //RECURSIVE CALL for whole process
        return searchUtil(child , word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }

    
    //remove word
    bool hasChildren(TrieNode* node) {
        for(int i = 0; i < 26; i++) {
            if(node->children[i] != NULL) {
                return true;
            }
        }
        return false;
    }
    bool removeUtil(TrieNode* root , string word){
        // base case
        if(word.length() == 0) { 
            if(root->isTerminal){
                root->isTerminal = false;

                // if no children → tell parent to delete me
                return !hasChildren(root);
            }
            return false;
        }
        
        int index = word[0] - 'A';
        TrieNode* child = root->children[index];

        if(child == NULL) {
            return false;
        }

        // recursive delete
        bool shouldDeleteChild = removeUtil(child , word.substr(1));

        // delete child if needed
        if(shouldDeleteChild) {
            delete child;
            root->children[index] = NULL;

            // now check if current node should be deleted
            return !root->isTerminal && !hasChildren(root);
        }

        return false;
    }

    void removeWord(string word){
        removeUtil(root , word);
    }
};

int main(){
    //Insertion         TC :- O(L) --> L is length of word
    Trie* t = new Trie();

    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    //Searching         TC :- O(L) --> L is length of word
    // cout << "Present or not " << t->searchWord("ARM") << endl;
    // cout << "Present or not " << t->searchWord("TIM") << endl;
    // cout << "Present or not " << t->searchWord("TIME") << endl;

    //Remove Word
    cout << "Present or not " << t->searchWord("DO") << endl;
    t->removeWord("DO");
    cout << "Present or not " << t->searchWord("DO") << endl;

    return 0;
}