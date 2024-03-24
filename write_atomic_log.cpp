#include <iostream>
#include <fstream>
#include <ctime>

#define WRITE 0
#define DELETE 1

const std::string LOGFILE = "LOGFILE";

bool log(int operation){
  std::ofstream log_fstream (LOGFILE, std::ios_base::out | std::ios_base::app);
  if(!log_fstream.is_open()){
    std::cerr << "Could not open LOGFILE" << std::endl;
    return false;  
  }   
 
  log_fstream << std::time(nullptr) << ", " << operation << "\n"; 

  return true;
}

bool clearlog(){
  std::remove(LOGFILE.c_str());
  if(!std::ifstream(LOGFILE)){
    return false;
  }
  
  return true;
}

int main(){
  std::cout << "basic wal" << std::endl;
  
  return 0;
}


