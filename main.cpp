#include <bits/stdc++.h>
using namespace std;

int main () {
    string secretMessage {};
    string convertedMessage {};
    cout << "Enter a secret message : ";
    getline(cin, secretMessage);
    for (char c : secretMessage) {
        switch (c) {
            case 'a' :
              convertedMessage += "Ⴑ+";
              break;
            case 'A' :
              convertedMessage += "Ⴑ";
              break;
            case 'b' :
              convertedMessage += "Ⴒ+";
              break;
            case 'B' :
              convertedMessage += "Ⴒ";
              break;  
            case 'c' :
              convertedMessage += "Ⴣ+";
              break;  
            case 'C' :
              convertedMessage += "Ⴣ";
              break;  
            case 'd' :
              convertedMessage += "Ⴓ+";
              break;   
            case 'D' :
              convertedMessage += "Ⴓ";
              break;    
            case 'e' :
              convertedMessage += "Ⴔ+";
              break;     
            case 'E' :
              convertedMessage += "Ⴔ";
              break;      
            case 'f' :
              convertedMessage += "Ⴕ+";
              break;
            case 'F' :
              convertedMessage += "Ⴕ";
              break;       
            case 'g' :
              convertedMessage += "Ⴖ+";
              break; 
            case 'G' :
              convertedMessage += "Ⴖ";
              break;       
            case 'h' :
              convertedMessage += "Ⴗ+";
              break;  
            case 'H' :
              convertedMessage += "Ⴗ";
              break;   
            case 'i' :
              convertedMessage += "Ⴚ+";
              break; 
            case 'I' :
              convertedMessage += "Ⴚ";
              break;   
            case 'j' :
              convertedMessage += "θ+";
              break; 
            case 'J' :
              convertedMessage += "θ";
              break;   
            case 'k' :
              convertedMessage += "ι+";
              break;   
            case 'K' :
              convertedMessage += "ι";
              break;   
            case 'l' :
              convertedMessage += "λ+";
              break;   
            case 'L' :
              convertedMessage += "λ";
              break;   
            case 'm' :
              convertedMessage += "ᠥ‍+";
              break;
            case 'M' :
              convertedMessage += "ᠥ‍";
              break;   
            case 'n' :
              convertedMessage += "μ+";
              break; 
            case 'N' :
              convertedMessage += "μ";
              break;   
            case 'o' :
              convertedMessage += "ν+";
              break;
            case 'O' :
              convertedMessage += "ν";
              break;   
            case 'p' :
              convertedMessage += "ξ+";
              break;   
            case 'P' :
              convertedMessage += "ξ";
              break;   
            case 'q' :
              convertedMessage += "ᠠ‍+";
              break;
            case 'Q' :
              convertedMessage += "ᠠ‍";
              break;   
            case 'r' :
              convertedMessage += "ᠢ‍+";
              break;   
            case 'R' :
              convertedMessage += "ᠢ‍";
              break;   
            case 's' :
              convertedMessage += "ᠤ‍+";
              break;   
            case 'S' :
              convertedMessage += "ᠤ‍";
              break;   
            case 't' :
              convertedMessage += "ᠤ‍+";
              break;   
            case 'T' :
              convertedMessage += "ᠤ‍";
              break;   
            case 'u' :
              convertedMessage += "б+";
              break;
            case 'U' :
              convertedMessage += "б";
              break;
            case 'v' :
              convertedMessage += "ж+";
              break;
            case 'V' :
              convertedMessage += "ж";
              break;
            case 'w' :
              convertedMessage += "и+";
              break;
            case 'W' :
              convertedMessage += "и";
              break;
            case 'x' :
              convertedMessage += "л+";
              break;
            case 'X' :
              convertedMessage += "л";
              break;
            case 'y' :
              convertedMessage += "п+";
              break;
            case 'Y' :
              convertedMessage += "п";
              break;
            case 'z' :
              convertedMessage += "ц+";
              break;
            case 'Z' :
              convertedMessage += "ц";
              break;
            case ' ' :
              convertedMessage += "щ";
              break;      
        }
    }
    cout << endl << endl;
    cout << "Encyrpted message is : " << convertedMessage;
}