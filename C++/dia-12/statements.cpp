#include <iostream>
using namespace std;
int main () {
    //Switch Statement
    //Using the switch statement to count vowels and consonants.
    string s("Mazurca is a genere played by Chopin");
    int vowels1 = 0;
    for(auto &c : s){
        switch(c){
            case 'a':
                ++vowels1;
                break;
            case 'e':
                ++vowels1;
                break;
            case 'i':
                ++vowels1;
                break; 
            case 'o':
                ++vowels1;
                break;
            case 'u':
                ++vowels1;
                break;
        }
    }
    int vowels2 = 0;
    //Switch Statement and the default Label.
    //Used when any case matches. 
    for(auto &c : s){
        switch(tolower(c)){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            ++vowels2;
            break;
            default:
                ;       //A good practice is to put the default label even thoug it
                break;  //is useless, using a null statememnt (;) and a break.
        }
    }
    //Doing the same thing without the switch statement.
    int vowels3 = 0;
    for(auto &c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            ++vowels3;
        }
    }

    string s2("Lorem ipsum dolor sit amet.");
    //Count vowels, consonants and spaces.
    int spaces = 0, punctuation = 0;
    int vowels4 = 0, consonants = 0;
    for(auto &c : s2){
        if(!ispunct(c)){
            switch(tolower(c)){
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    ++vowels4;
                    break;
                case ' ':
                    ++spaces;
                    break;
                default:
                    ++consonants;
                    break; 
            }
        }
        else{
            ++punctuation;
        }
    }
    int ffcnt = 0, ficnt = 0, flcnt = 0;
    string s3("Laplace fflace for fly fine flowers fist");
    for(auto &c : s3){
        switch(c){
            case 'f':
                switch(*(&c +1)){
                    case 'f':
                        ++ffcnt;
                        break;
                    case 'i':
                        ++ficnt;
                        break;
                    case 'l':
                        ++flcnt;
                        break;
                    default:
                        ;
                        break;
                }
            ;
            break;
        }
    }
    
    return 0;
}