#include <iostream>
#include <ctype.h>
#include "Mario_CLass.h" //for Mario
using namespace std;
int pyramid_height; //global variable to be used 
Mario_CLass mario;  //object for Mario class

/**< function declaration of the integer check function */
void check_input(int* input);



int main()
{
    int* pointer = nullptr;
    cout << "Enter the height of the pyramid: ";
  
    //equate the address of the input to the pointer
    pointer = &pyramid_height;
    
    //call function to check if the input is an integer
    check_input(&pyramid_height);
    //set the value of the pyramid
     mario.set_pyramid_height(*pointer);
     
    
        for(int i{0}; i < mario.return_height(); i++)
            
            {
                for(int j{0}; j < i+1; j++)
                    {
                         cout << "#";
                    }//end of loop for j
                cout << "\n";
            }
    
    /** \brief 
     if(!(mario.return_height() >= 1) && !(mario.return_height() <=8))
    {
        cout << "\nPlease enter the value again: ";
        check_input(&pyramid_height);
        //set the value of the pyramid
        mario.set_pyramid_height(*pointer);
        
    }
     */                             
            
    
        
    
}//end of the main function




/**< function to check error */
void check_input(int* input)
{
    while(!(cin >> pyramid_height))
    {
        cout << "\You entered a non-integer";
        cout << "\nEnter the height again: ";
        
        //clear the previous inout
        cin.clear();
        
        //discard the previous input
        cin.ignore(123, '\n');
    }//end of while loop
    
    //return pyramid_height;
}
