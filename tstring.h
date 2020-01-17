#ifndef TSTRING_H
#define TSTRING_H
#include <cstring>
class TString {
    public:
    TString( const char* s=0);
    TString(const TString& s);
    ~TString();
    TString& operator=( const TString& s );
    TString( TString&& s);
    TString& operator=( TString&& s );

    
    private:

    protected:

};
#endif
