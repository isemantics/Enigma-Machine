#ifndef ENIGMA_LETTER_HPP
#define ENIGMA_LETTER_HPP

class EnigmaLetter{
    public:
        // Constructs letter from char
        EnigmaLetter( char value );
        
        // Constructs letter from integer representation
        EnigmaLetter( int value );
        
        // Overrides + operator
        EnigmaLetter operator+(const EnigmaLetter& letter);
        
        // Overrides - operator
        EnigmaLetter operator-(const EnigmaLetter& letter);
        
        // Overrides = operator
        EnigmaLetter operator=(const EnigmaLetter& letter);

        char to_char();
        int to_int();
        
    private:
        int m_representation;
        int mod( int value, int mod_value );
};

#endif