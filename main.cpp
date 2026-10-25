  #include <iostream>
  #include <fstream> 
  #include <string>

  extern "C" {
    #include <netpbm/pam.h> // for netpbm
  }

  int main(){
    
    std::ofstream filePPM("out.ppm", std::ios::out);

    int x = 3;
    int y = 2;

    filePPM << "P3\n" << x << ' ' << y << '\n' << 255 << std::endl;

    int r(0);
    int g(0);
    int b(0);

    std::string black = "0 0 0";
    std::string white = "225 225 225";

    // row 1
    filePPM << black << std::endl;
    filePPM << 0 << ' ' << 255 << ' ' << 0 << '\n';
    filePPM << 0 << ' ' << 0 << ' ' << 255 << '\n';

    // row 2
    filePPM << 225 << ' ' << 225 << ' ' << 0 << '\n';
    filePPM << 225 << ' ' << 225 << ' ' << 225 << '\n';
    filePPM << 0 << ' ' << 0 << ' ' << 0 << '\n';

    filePPM.close();

    return 0; 
  }
