#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

struct Basement{
vector <stack<char>> letter;
};
void movingStacks(Basement storage,vector<int>numbers1, vector<int>numbers2,     
  vector<int>numbers3){
  
  for(int i = 0; i < numbers1.size(); i++){
    stack<char> dzeno;
    for (int j = 0; j< numbers1[i]; j++) {
      dzeno.push(storage.letter[numbers2[i] - 1].top());
      storage.letter[numbers2[i] - 1].pop();
    }
    for(int k = 0; k < numbers1[i]; k++){
      storage.letter[numbers3[i] - 1].push(dzeno.top());
      dzeno.pop();
    }
  }

  cout << storage.letter[0].top();
  cout << storage.letter[1].top();
  cout << storage.letter[2].top();
  cout << storage.letter[3].top();
  cout << storage.letter[4].top();
  cout << storage.letter[5].top();
  cout << storage.letter[6].top();
  cout << storage.letter[7].top();
  cout << storage.letter[8].top();
}

void data(Basement storage){

  string comands, move, from, to, testMove,testFrom,testTo;
  int moveNumber, fromNumber, toNumber;
  vector<int> numbers1, numbers2, numbers3;
  ifstream file("input05.txt");
  
  while(getline(file, comands)){
    stringstream ss(comands);
    getline(ss, move, ' ');
    getline(ss, testMove, ' ');
    moveNumber = stoi(testMove);
    numbers1.push_back(moveNumber);
    getline(ss, from, ' ');
    getline(ss, testFrom, ' ');
    fromNumber = stoi(testFrom);
    numbers2.push_back(fromNumber);
    getline(ss, to, ' ');
    getline(ss, testTo);
    toNumber = stoi(testTo);
    numbers3.push_back(toNumber);
  }
  movingStacks(storage, numbers1, numbers2, numbers3);
}



int main() {

  Basement storage;
  stack<char> stack, stack2, stack3, stack4, stack5, stack6, stack7, stack8, stack9;
  stack.push('B');
  stack.push('S');
  stack.push('V');
  stack.push('Z');
  stack.push('G');
  stack.push('P');
  stack.push('W');
  storage.letter.push_back(stack);

  stack2.push('J');
  stack2.push('V');
  stack2.push('B');
  stack2.push('C');
  stack2.push('Z');
  stack2.push('F');
  storage.letter.push_back(stack2);

  stack3.push('V');
  stack3.push('L');
  stack3.push('M');
  stack3.push('H');
  stack3.push('N');
  stack3.push('Z');
  stack3.push('D');
  stack3.push('C');
  storage.letter.push_back(stack3);

  stack4.push('L');
  stack4.push('D');
  stack4.push('M');
  stack4.push('Z');
  stack4.push('P');
  stack4.push('F');
  stack4.push('J');
  stack4.push('B');
  storage.letter.push_back(stack4);

  stack5.push('V');
  stack5.push('F');
  stack5.push('C');
  stack5.push('G');
  stack5.push('J');
  stack5.push('B');
  stack5.push('Q');
  stack5.push('H');
  storage.letter.push_back(stack5);

  stack6.push('G');
  stack6.push('F');
  stack6.push('Q');
  stack6.push('T');
  stack6.push('S');
  stack6.push('L');
  stack6.push('B');
  storage.letter.push_back(stack6);

  stack7.push('L');
  stack7.push('G');
  stack7.push('C');
  stack7.push('Z');
  stack7.push('V');
  storage.letter.push_back(stack7);

  stack8.push('N');
  stack8.push('L');
  stack8.push('G');
  storage.letter.push_back(stack8);

  stack9.push('J');
  stack9.push('F');
  stack9.push('H');
  stack9.push('C');
  storage.letter.push_back(stack9);

  /*while(!storage.letter[2].empty()){
    cout << storage.letter[2].top() << endl;
    storage.letter[2].pop();
  }*/

  data(storage);
}