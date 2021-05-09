#include <iostream>

class Singleton {
public: 
  static Singleton* getInstance();

private: 
  static Singleton* instance;

  Singleton(void){
    std::cout << "Im created once" << std::endl;
  }

};

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance(){
  if (instance == nullptr){
    instance =  new Singleton();
  }
  return instance;
}


int main() {
  for (int i = 0; i < 10; i++ ){
    Singleton* obj = Singleton::getInstance();
    std::cout << obj << std::endl;
  }
}