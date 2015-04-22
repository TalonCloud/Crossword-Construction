#ifndef _WORD_H
#define _WORD_H

#include <string>

using namespace std;

struct Word {
    private:
        string word;
        bool used;
    
    public:
        Word(string w);
        
        string getWord();
        bool isUsed();
    
        void setUsed(bool u);
};

#endif