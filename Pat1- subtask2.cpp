#inlude <vector>
int main() { 
  std::vector<int> temperatures(3);

  // Substask1: Input three
temperature readings
  std::cout << "Enter the first
temperature reading: ";
  std::cin>> temperatures[0];

  std::cout<<"Enter the second
temperature reading: ";
  std::cin >> temperatures[1];

  std::cout<< "Enter the third
temperature reading: ";
  std::cin >> temperatures[2];

  //Substask2: checxk temperature
increase between first and second
readings
  if (temperatures[1] -
temperatures[0]>50) {
  std::cout<< "Reduce fryer heat
before taking the third reading."<<
std::end1;
  return0;//Exit the program
as the condition is not met
  }else if (temperatures[1]-
temperatures[0]<10) {

return 0;
  

  




