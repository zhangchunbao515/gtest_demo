#ifndef Soundex_h
#define Soundex_h

#include <unordered_map>
#include <string>

static const size_t MaxCodeLength{4};

class Soundex
{
public:
    std::string encode(const std::string& word) const {
        return zeroPad(upperFront(head(word)) + encodedDigits(tail(word)));
    }

    std::string upperFront(const std::string& string) const {
        return std::string(1, std::toupper(static_cast<unsigned char>(string.front())));
    }

    std::string encodedDigit(char letter) const {
        const std::unordered_map<char,std::string> encodings {
            {'b', "1"},{'f', "1"},{'p', "1"},{'v', "1"},
            {'c', "2"},{'g', "2"},{'j', "2"},{'k', "2"},{'q', "2"},{'s', "2"},{'x', "2"},{'z', "2"},
            {'d', "3"},{'t', "3"},
            {'l', "4"},
            {'m', "5"},{'n', "5"},
            {'r', "6"}
        };
        auto it = encodings.find(letter);
        return it == encodings.end() ? NotADigit : it->second;
    }

private:
    const std::string NotADigit{"*"};

    std::string head(const std::string word) const {
        return word.substr(0, 1);
    }
    #if 0
    std::string encodedDigits(const std::string& word) const {
    if (word.length() > 1) return encodedDigit(word[1]);
        return "";
    }
    #endif
    std::string zeroPad(const std::string& word) const {
        auto zeroNeeded = MaxCodeLength - word.length();
        return word + std::string(zeroNeeded, '0');
    }

    std::string tail(const std::string & word) const {
        return word.substr(1);
    }

    std::string encodedDigits (const std::string& word) const {
        std::string encoding;
        for (auto letter: word) 
        {
            if (isComplete(encoding)) break;

            auto digit = encodedDigit(letter);
            if (digit != NotADigit && digit != lastDigit(encoding))																					
                encoding += digit;
        }
        return encoding;
    }

    bool isComplete (const std::string& encoding) const {
        return encoding.length() == MaxCodeLength - 1;
    }

    std::string lastDigit(const std::string& encoding) const {
        if (encoding.empty()) return NotADigit;
            return std::string(1, encoding.back());
    }
};
#endif // Soundex_h
