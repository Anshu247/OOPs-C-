#include<iostream>
#include<cstring>

using namespace std;

class CWH
{
    protected:
        string title;
        float rating;
    
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }

        virtual void display(){
            // cout<<"Bogus Code"<<endl;
         }
};

class CWHVideo: public CWH
{
    float videolength;

    public:
        CWHVideo(string s, float r, float vL): CWH(s,r){
            videolength = vL;
        }
        void display(){
            cout<<"This is an amazing video with title:- "<<title<<endl;
            cout<<"Ratings:- "<<rating<<" Out of 5 stars"<<endl;
            cout<<"Length of this video is:- "<<videolength<<" minutes"<<endl;
        }
};

class CWHText: public CWH
{
    int words;

    public:
        CWHText(string s, float r, int wc): CWH(s,r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing text tutorial with title:- "<<title<<endl;
            cout<<"Ratings of this text tutorial:- "<<rating<<" Out of 5 stars"<<endl;
            cout<<"No. of words in this text tutorial is:- "<<words<<" words"<<endl;
        }
};

int main()
{   
    string title;
    float rating, vlen;
    int words;

    // for code with harry videos

    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo djvideo(title, rating, vlen);
    djvideo.display();

    cout<<endl;

    // for code with harry text

    title = "Django tutorial text";
    words = 433;
    rating = 4.19;

    CWHText djtext(title, rating, words);
    djtext.display();

    cout<<endl;

    CWH *tuts[2];
    
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();

    cout<<endl;

    tuts[1]->display();

    return 0;
}

/*
Rules for virtual functions

1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used
5. If a virtual function defined in the base class, there is no necessity of redefining it in the derived class 
*/