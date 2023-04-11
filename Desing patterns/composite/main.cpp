#include <iostream>
#include <vector>
#include <list>

class Component{
public:
    virtual std::string getResult()=0;
};



class Composite : public Component {
private:
   std::vector<Component *> *children = new std::vector<Component*>();

public:

    void Add(Component *c){
        children->push_back(c);
    }

    void Remove(std::vector<Component*>::iterator c){
        children->erase(c);
    }



      std::string getResult()override{

        std::string result = "brach(";
        int k = 0;

        for(int i=0;i<children->size();i++){
           result+=children->at(i)->getResult();
           if(k<children->size()-1){
               result+="+";
               k++;
           }

        }

        return result+")";
    }

};

class Leaf : public Component{
    std::string getResult()override{
        return "Leaf";
    }
};

int main() {

   std::list<int> myList;

   myList.push_back(1);
   myList.push_back(2);


   for(auto begin = myList.begin();begin!=myList.end();begin++){
       std::cout<<*begin;
   }

    return 0;
}
