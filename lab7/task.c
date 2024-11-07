//В каждом слове заданного предложения поменять местами первую букву и последнюю.
#include<stdio.h>
#include<string.h>
int main() {
    char a[] = "Her library filled her bookshelves and then overflowed into waist-high stacks of books everywhere, piled haphazardly against the walls";
    int first=-1, last=0; //indexes
    char tmp;                                                                                                                                                                        
    for (int i = 0; i<=strlen(a); i++) {
        if (first==-1) first = i; 
        if (a[i]==' ' || a[i]=='\0') {
            if (a[i-1]==',') last = i-2;
            else last = i-1;
            tmp = a[first];
            a[first] = a[last];
            a[last] = tmp;

            first = -1;
        }
    }
    puts(a);
}