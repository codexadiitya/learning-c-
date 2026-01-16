#include <iostream>  // 1️⃣ Input/Output ke liye library
using namespace std; // 2️⃣ cout, cin use karne ke liye std:: likhne ki zarurat nahi

int main()
{ // 3️⃣ Program yahan se start hota hai

    char ch;   // 4️⃣ 'ch' ek character variable hai (sirf ek letter store karega)
    cin >> ch; // 5️⃣ User se ek character input lena

    // 6️⃣ Check kar rahe hain ki ch lowercase hai kya
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is a lowercase letter." << endl;
    }
    // 7️⃣ Agar nahi, to check karo uppercase hai kya
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is an uppercase letter." << endl;
    }
    // 8️⃣ Agar nahi, to check karo digit hai kya
    else if (ch >= '0' && ch <= '9')
    {
        cout << "This is a numeric ." << endl;
    }
    // 9️⃣ Agar in tino me se kuch nahi, to special character hoga
    else
    {
        cout << "This is a special character." << endl;
    }

    return 0; //  🔟 Program successfully end
}
