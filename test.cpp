#include<iostream>
#include<string>
#include<cstdlib>
#include "types.h"

using namespace std ;


int  main(int  argc ,const char * argv[] )

{

     if(argc>1) 
     {
          cout<<getSizer(argv[1])<<endl;
     }
     else   {

         cout<<"error  something wrong"<<endl;
     }

     return 1;
}