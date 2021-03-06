#ifndef GOLF_H_INCLUDED
#define GOLF_H_INCLUDED



const int Len = 40;
struct golf 
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf& g, const char* name, int hc);



#endif