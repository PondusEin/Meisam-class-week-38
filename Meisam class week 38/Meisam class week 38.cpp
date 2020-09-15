#include <iostream>
#include <string>
#include <vector> //for vectors
#include <algorithm>


int sum(int x, int y);  //declare the function. Delcaration have to be above int main.



//define the funtion
int sum(int x, int y) { 
    return x + y;
}




int main()
{

    std::cout << sum(2, 2); //call the function
   /* std::vector <char> board = { '1','2','3','4' };
    std::cout << board.at(2)<<std::endl;
    std::cout << "size of my vector: " << board.size();
    */
   /* int num = 0;
    std::vector <int> numbers(2, 0);
    std::cout << "How many numbers do you want to add? ";
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cout << "Enter a number: ";
        int x = 0;
        std::cin >> x;
        numbers.push_back(x);
    }
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << ' ' << numbers.at(i);
    }*/
    /*
    const int size = 10;
    int myarray[size] = {};
    std::vector <char> board = { '1','2','3','4','5','6','7','8','9' }; //ikke int.
    std::cout << board.size() << std::endl;

  /*  int board2[22] = {};
    std::cout << sizeof(board2) / sizeof(board2[0]) << std::endl;
    std::cout <<"count of: " << _countof(board2);

    
    for (int i = 0; i < board.size(); i++) 
    {
        if (i % 3 == 0) 
        {

            std::cout << "\n";
        }
        std::cout << board[i]; //ikke 0
        std::cout << "|";
    }
    board.push_back('5');
    */
    return 0;
}

/*
char board[9]{ '1', '2', '3', '4', '5', '6', '7', '8', '9' };

double num[100] = {};


//| 1 | 2 | 3 |
//|---+---+---|
//| 4 | 5 | 6 | 
//|---+---+---|
//| 7 | 8 | 9 |
// ------------
*/


/*
* std::vector <int> numbers;
* std::vector <char> inits;
* 
* std::vector <int> num (10);
* std::vector <char> inits (20);
* 
* std::vector int scoreV(5, 10);
* 
* return 0;

std::string name1;
int name1_id;

int studentid[50] = {  };
*/


/*
void main(){


return; //can remove this line as well

}

int main()  //  "()" er for parametere (int, char, string, array, vector, osv...)
{




return 0;
}


funct1(){
    funct2();
    }

funct2(){
    funct3();
}

funct3(){
    funct1();
}
*/