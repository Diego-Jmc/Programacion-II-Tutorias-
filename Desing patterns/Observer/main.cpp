#include <iostream>
#include <vector>
class INewsPaperObserver{
public:
   virtual void update(std::string articleName)=0;
};

class INewsPaperObservable{

protected:
    std::vector<INewsPaperObserver*> *suscribers = new std::vector<INewsPaperObserver*>;
    std::string lastArticle;
public:
    void suscribe(INewsPaperObserver *o){
        suscribers->push_back(o);
    }

    void unsuscribe(std::vector<INewsPaperObserver*>::iterator o){
        suscribers->erase(o);
    }

    const std::string &getLastArticle() const {
        return lastArticle;
    }

    void setLastArticle(const std::string &lastArticle) {
       this->lastArticle = lastArticle;
    }

    virtual void notify() = 0;

};

class NewYorkSuscriber :public INewsPaperObserver{

public:
    virtual void update(std::string articleName){
        std::cout<<"El usuario"<<this<<" Ha sido notificado del articulo:"<<articleName<<std::endl;
    }
};

class NewYorkTimes:public INewsPaperObservable{



public:
    virtual void notify() override{
        for(auto & suscriber : *suscribers){
            suscriber->update(lastArticle);
        }
    }
};

int main() {

    INewsPaperObservable *newspaper = new NewYorkTimes();

    newspaper->setLastArticle("Trump is running for the presidential elections 2024");

    newspaper->suscribe(new NewYorkSuscriber());
    newspaper->suscribe(new NewYorkSuscriber());
    newspaper->suscribe(new NewYorkSuscriber());
    newspaper->suscribe(new NewYorkSuscriber());

    newspaper->notify();

    newspaper->setLastArticle("Biden announces Covid-19 emergency is over");

    newspaper->notify();

    return 0;
}
