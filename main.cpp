#include <iostream>

double usd;
std::string form;

int main() {

  std::cout << "Input USD Amount: " << "\n";
  std::cin >> usd;
  
  std::cout << "What form would you like to convert this too:" << "\n" 
    << "- Euro" << "\n"
    << "- Yuan" << "\n"
    << "- Peso" << "\n"
    << "- Credit" << "\n";
  std::cin >> form;


//European Euro Conversion:
  
if (form == "Euro") {

  int amount_U2E = usd * 0.89;

  std::cout << "Your amount is " << amount_U2E << " Euros" << "\n";
  
}

//Chinese Yuan Conversion:

 else if (form == "Yuan") {

  int amount_U2Y = usd * 7.14;
  
  std::cout << "Your amount is " << amount_U2Y << " Yuan" << "\n";
  
}

//Mexican Peso Conversion:

else if (form == "Peso") {

  int amount_U2P = usd * 16.75;
  
  std::cout << "Your amount is " << amount_U2P << " Pesos" << "\n";
  
}

//Star Wars Credit Conversion:
  
else if (form == "Credit") {

  int amount_U2C = usd * 1.44;

  std::cout << "Your amount is " << amount_U2C << " Credits" << "\n";
  
}
  
//Loop:

else {

  std::cout << "Type in a valid form:" << "\n"
    << "- Euro" << "\n"
    << "- Yuan" << "\n"
    << "- Peso" << "\n";
  
  return 0;

}

}
