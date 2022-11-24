#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
  int a,b,c,d;
  int daily_production;
  int days_required;
  int a_rq, b_rq, c_rq, d_rq;

  std::cout << "Please input amout of daily producted gadgets : " << std::endl;
  std::cin >> daily_production;

  std::cout << "Please input amount of gudgets already producted : " << std::endl;
  
  std::cout << "a = ";
  std::cin >> a;
  std::cout << "b = ";
  std::cin >> b;
  std::cout << "c = ";
  std::cin >> c;
  std::cout << "d = ";
  std::cin >> d;

  std::cout << "Please input amount of gudgets required to producted : " << std::endl;
  
  std::cout << "rquired a = ";    
  std::cin >> a_rq;
  std::cout << "rquired b = ";
  std::cin >> b_rq;
  std::cout << "rquired c = ";
  std::cin >> c_rq;
  std::cout << "rquired d = ";
  std::cin >> d_rq;
  
 std::cout << std::endl;

    int a_diff = a_rq - a;
    int b_diff = b_rq - b;
    int c_diff = c_rq - c;
    int d_diff = d_rq - d;
  int to_product = a_diff + b_diff + c_diff + d_diff;
  
  days_required =to_product / daily_production;
  if(to_product%daily_production != 0)
    days_required+=1;
  int production_availible;
  std::cout << "Have to produce = " << to_product << std::endl;
  std::cout << std::endl;
  int current_day = 0;
  for(int i = days_required; i>0;i--)
  { 
    current_day++;
    std::cout << std::endl;
    std::cout << "Day " << current_day << std::endl << std::endl;
    
    production_availible = daily_production;
    
    std::cout << "A left to produce = " << a_diff << std::endl;
    std::cout << "B left to produce = " << b_diff << std::endl;
    std::cout << "C left to produce = " << c_diff << std::endl;
    std::cout << "D left to produce = " << d_diff << std::endl;
    std::cout << "Production availible = " << production_availible << std::endl;
    
    while(production_availible != 0 && (a != a_rq || b != b_rq || c != c_rq || d != d_rq))
    {
   if((a_diff) != 0 )
    {
      if(production_availible < (a_diff))
      {        
        std::cout << "a to produce = " << production_availible << std::endl;
        a += production_availible;
        a_diff = a_rq - a;
        production_availible = 0;
        
      }
      if(production_availible >= a_diff)
      {
        std::cout << "a to produce = " << a_diff << std::endl;
        a += a_diff;
        production_availible -= a_diff;
        a_diff = a_rq - a;
      }
    }
    
 if((b_diff) != 0 )
    {
      if(production_availible < (b_diff))
      {        
        std::cout << "b to produce = " << production_availible << std::endl;
        b += production_availible;
        b_diff = b_rq - b;
        production_availible = 0;
        
      }
      if(production_availible >= b_diff)
      {
        std::cout << "b to produce = " << b_diff << std::endl;
        b += b_diff;
        production_availible -= b_diff; 
        b_diff = b_rq - b ;
      }
    }

if((c_diff) != 0 )
    {
      if(production_availible < (c_diff))
      {        
        std::cout << "c to produce = " << production_availible << std::endl;
        c += production_availible;
        c_diff = c_rq - c;
        production_availible = 0;
        
      }
      if(production_availible >= c_diff)
      {
        std::cout << "c to produce = " << c_diff << std::endl;
        c += c_diff;
        production_availible -= c_diff;
        c_diff = c_rq - c;
      }
    }
    
 if((d_diff) != 0 )
    {
      if(production_availible < (d_diff))
      {        
        std::cout << "b to produce = " << production_availible << std::endl;
        d += production_availible;
        d_diff = d_rq - d;
        production_availible = 0;
        
      }
      if(production_availible >= d_diff)
      {
        std::cout << "b to produce = " << d_diff << std::endl;
        d += d_diff;
        production_availible -= d_diff; 
        d_diff = d_rq - d ;
      }
    }

    }
  }






  return 0;
}
