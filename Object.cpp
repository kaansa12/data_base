
//object kısmı
#include <iostream>
using namespace std;
#include <string>


class Data{
    

    
    string b,c,thing[10000],q;
    
    int t = 0,a = 0,n=0;
    
    double number[];
    
public:
    
    void clear(){
        
        for (int i = 0; i< 100;i++){ // konsolu boşaltma
            
            cout << ""<<endl;
            
        }
        
    }
    
void writeitdown(string b){
    t++;
    thing[t] = b;
    
    cout << "It's your " << t<<"."<< "data" << endl;
    
  
    }
    
    void writethatnumberdown(double p){
       
      number[n]  = p;
        
        cout << "It's your " << n<<"."<< "number" << endl;
        n++;
      
        }
    
    void getit(int a){
        // veri tabanından çekceğin veri sona aktarcağın başa gelcek örnek alttaki satır
        if(thing[a].empty()){
            
            cout << "It's not existed"<<endl;
        }
        else {
            
        
        cout << "It's "<<thing[a]<< endl;
        }
        
    }
    
    void getnumber(int a){
        // veri tabanından çekceğin veri sona aktarcağın başa gelcek örnek alttaki satır
        if(number[a] == 0){
            
            cout << "It's not existed"<<endl;
        }
        else {
            
        
        cout << "It's "<<number[a]<< endl;
        }
        
    }
    
    void getitdeleted(int w){
        
        if(thing[w].empty()){
            
            cout << "It's already empty."<<endl;
            
        }
        else{
        
        cout << thing[w]<<" got deleted "<< endl<<endl;
        
        thing[w].clear();
        }
        
    }
    
    void getnumberdeleted(int w){
        
   
        if(number[w] == 0){
            
            cout << "It's already empty."<<endl;
            
        }
        
        else{
        
            cout << number[w]<<" got deleted "<< endl<<endl;
            number[a]=0;
            
        }
        
        
        
        
    }
    
    
       
      
        
    
 /*   void sayit(string a){
        
    
        cout << a << endl;
        
        
    }*/
  
     
    
    
};

// baktığnız için teşekkürler yorumlarınızı bekliyorum 
