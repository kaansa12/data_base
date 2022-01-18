//
//  main.cpp
//  object deneme
//
//  Created by Kaan Kalkan on 7.01.2022.
//
// EZ



    
    /*
     
     
     
     string.length() = uzunluk / string.empty() = boşmu diye bakmak / string.clear() = boşaltmak/ string1.append(string2) = stringe string eklemek / string.at(0) = 0. harfini al yani 1. ama 0 dan başlıyo malmısın biliyon yani herhalde/ string.substr(0,3) = 0 dan başlayarak ( yani 1 den demek) 3 tane harf sırasıyla  al / string.insert(0, "string2") = 0. yani 1. karakter  olarak string 2 yi ekle / string.find(string2) = string 2 nin yerini rakam cinsinden söylüğyor/ string.erase(0,5) = 0 dan başlayarak 5 harf sil
     
     
     
     
     Fold All: ⇧ +⌥ + ⌘ + ←
     (Shift + Option + Command + Left Arrow)
     Unfold All: ⇧ +⌥ + ⌘ + →
     (Shift + Option + Command + Right Arrow)
     Fold Current Block: ⌥ + ⌘ + ←
     (Option + Command + Left Arrow)
     
     metodları katlama falan
     
     
     
     (Control + 6)
     
     metoda zıplmama
 
     Shortcut: ⌃ + ⌘ + E
     ( Control + Command + E)
     
     çoklu düzeltme yani kodu düzeltince bütün kodu düzeltiyo mesela bir değişkeni düzeltince hepsi düzeliyo
     
 Shortcut: ⌥ + ⌘ + E
(Option + Command + E)
    çoklu düzeltme yani kodu düzeltince seçilileri düzeltiyo seçmek için birkaç kez basıyon düzeliyo
    
    Focusing current editor
    To hide all but the current editor, use the following set of keys:
    Shortcut: ⇧ + ⌃ + ⌘ +
    (Shift + Control + Command + Enter)
    
    Shortcut: ⌃ + ⌘ + T
     
    (Control + Command + T) = yeni editör
    
    
 command + shift + B = başlat
    
    
    command + B = build
      
     Search in the whole project: ⇧ + ⌘ + F
     (Shift + Command + F)
     Search & Replace in the whole project: ⇧ +⌥ + ⌘ + F
     (Shift + Command + Option + F)

   
    vector<string>v1;
     
    v1.push_back("asdfgh");// sınırsız string dizisi için
     
    cout<<v1[0]<<endl;*/

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

  #include <iostream>
  #include "Object.cpp"
  #include <vector>

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
int main() {
  
    

 
    Data data;// tanımlama soldaki class sağdaki kod içi tanım
    
    string it ,q,demand,d2,d,quit,quitd;
    
    
    
    double a=0 ,del=0,it_n=0,total=0,totaln=0,remind=0;
    
    start:
    
    
    cout <<"The words which are in parantheses are the options:"<<endl;
    
    cout << "What do you want to write [number,mixed(means number or word)]"<<endl<<endl;
    
    cin >> d;
    
  //  T.clear(); sistemi boşaltma ama satyırı alta atıyo .
    
    if(d== "number"){
        
        jump_number:
        
        
        cout << "Write something to write it down [Note: if you want to leave space just write (_) which is shift and short line button]" << endl;
        
      
        cin >> it_n;
        
        
        if (cin.fail())
        {
            
            
                 cout << "Please try again"<<endl<<endl;
                 // clear error state
            
            
                 cin.clear();
                 // discard 'bad' character(s)
            
            
                 cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            
            goto select;
        }
     
        data.writethatnumberdown(it_n);
        
        
        totaln++;
    }
  else  if(d == "mixed"){
      
      
  jump_word:
      
      
      cout << "Write something to write it down " << endl;
      
      cin >> it;
     
      data.writeitdown(it);
      
      total++;
    }
    
    
    else{
        cout << "try again" << endl<<endl;
        
        goto start;
        
    }
    
 

    select:
    cout <<endl <<"What do you want to do" << endl<<endl;
    
    
    cout << "OPTİONS"<<endl<<"------------"
    
    <<endl
    
    <<"-get your data(getdata)"<<
    
    endl<<"-write another thing (other)"<<
    
    endl <<"-wait"<<endl<<"-delete"<<endl
    
    <<"-Write a number(number)"<<endl<<"-get your number data(getndata)"<<
    
    endl<<
    
    "-delete number(deleten) "<<endl<<"-list numbers(ln)"<<endl<<
    
    "-list words(lw)"<<
    
    endl<<
    
    "-or just quit. Note : All of your data will be deleted once you quit.(quit)"<<
    endl<<endl;
    
    cin >> demand;
    
  
    
   
    // 1. array değeri 0'dır
    
    if(demand == "quit"){
        
        
        cout <<"Are you sure one more warning all of your data will be deleted once you quit (yes or no)";
        
        cin >> quitd;
        
        if(quitd == "yes"){
            
            
        return 0;
        }
        
        
        else {
            
            goto select;
            
        }
        
        
    }
    
    
    else if(demand == "other"){
        
        goto jump_word;
        
    }
    
    
    else if (demand == "number"){
        goto jump_number;
        
    }

    
    else if (demand == "ln"){
        
        remind=totaln;
        
        while(totaln>=0){
            
            cout << totaln<<". ";
            
            data.getnumber(totaln);
           

            totaln--;
            
        }
        

        totaln = remind;

        remind=0;
        
        demand.clear();
        
        goto select;
    }
    
    
    else if (demand == "lw"){
        
        remind=total;
        
        while(total>=0){
            
            cout << total<<". ";
            
            data.getit(total);
            

            total--;
            
        }
        total = remind;
        
        remind=0;
        
        demand.clear();
        
        goto select;
  
    }
   
    
    else if (demand == "getdata"){
        
        cout <<"ID" << endl<<endl;
        
        cin >> a;
        
        data.getit(a);
      
        cout << "do you want to wait or select an option"<< endl<<endl;
        
        
        cin >> d2 ;
        
        if(d2=="select") {
            goto select;
        }
        
        else if (d2 == "wait") {
            
            cout << "going sleep"<<endl<<endl;
            
            goto wait;
            
        }
        
        else {
            goto el;
            
        }
    }
    
    else if (demand == "wait"){
        
        cout << "going sleep"<< endl<<endl;
        
        d2.clear();// temizlemek için stringi
        
        goto wait;
        
        
    }
    else if (demand == "getndata"){
        
        cout <<"ID" << endl<<endl;
        
        cin >> a;
        
        data.getnumber(a);
        
        goto select;
        
    }
    
    else if(demand == "delete"){
        
        cout << "write the ID that you want to delete"<<endl<<endl<<endl;
        
        cin>>del;
        
       data. getitdeleted(del);
        
        cout << "do you want to wait or select an option"<< endl<<endl;
        
        
        cin >> d2 ;
        
        if(d2=="select") {
            
            goto select;
            
        }
        
        else if (d2 == "wait") {
            
            cout << "going sleep"<<endl<<endl;
            
            goto wait;
            
        }
        
        else {
            
            goto el;
            
        }
        
    }
    else if(demand == "deleten"){
        
        cout << "write the ID that you want to delete"<<endl<<endl<<endl;
        
        cin>>del;
        
       data. getnumberdeleted(del);
        
        cout << "do you want to wait or select an option"<< endl<<endl;
        
        cin >> d2 ;
        
        if(d2=="select") {
            
            
            goto select;
            
        }
        
        else if (d2 == "wait") {
            
            
            cout << "going sleep"<<endl<<endl;
            
            goto wait;
            
        }
        
        else {
            
            goto el;
            
        }
        
    }
   
    else {
        
        
        el:
        
        cout << "IDK what you said PLEASE ANSWER"<<endl<<endl;
        
        cout << "do you want to wait or select an option"<< endl<<endl;
        
        cin >> d2 ;
        
        if(d2=="select") {
            
            goto select;
        
        }
        
        else {
            cout << "going sleep"<<endl<<endl;
            
            d2.clear();//temizlemek için stringi
            
            goto wait;
            
            
        }
        
    }

    
    wait:
    
    cout
    << "You are waiting"
    
    << endl
    
    <<endl
    
    <<"press any key to start then enter or write quit then enter to close the program "
    
    << endl
    
    <<"Note : All of your data will be deleted once you quit."
    
    <<endl;
   
   
    
    cin >>quit;
    
    
    if(quit == "quit"){
        
        quitd.clear();
        
        cout <<"Are you sure one more warning all of your data will be deleted once you quit (yes or no)";
        
        cin >> quitd;
        
        if(quitd == "yes"){
            
        return 0;
            
            
        }
        
        else {
            
            goto select;
            
        }
    }
    
  else  if (quit.empty()/*boş mu diye bakıyoz*/){
        
        goto wait;
        
    }
    
    else {
        
        goto select;
    }
    
    return 0;//programı sonlandırıyo
    
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
