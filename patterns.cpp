#include <bits/stdc++.h>
using namespace std;

int main() {

    int pattern_size;

    const char c = '*';

    cout<<"Enter the size for pattern: ";
    cin>>pattern_size;

    //square
    cout<<endl<<"square"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=0; j<pattern_size; ++j){
            cout << c << ' ';
        }
        cout<<endl;
    }

    //left triangle
    cout<<endl<<endl<<"left triangle"<<endl;
    for(int i=0; i<pattern_size;++i){
        for(int j=0; j<=i; ++j){
            cout<<c;
        }
        cout<<endl;
    }

    //count triangel left
    cout<<endl<<endl<<"count triangel left"<<endl;
    for(int i=1; i<=pattern_size; ++i){
        for(int j=1; j<=i; ++j){
            cout<<j;
        }
        cout<<endl;
    }

    //identical count triangel left
    cout<<endl<<endl<<"identical count triangel left"<<endl;
    for(int i=1; i<=pattern_size; ++i){
        for(int j=1; j<=i; ++j){
            cout<<i;
        }
        cout<<endl;
    }

    //upside-down triangle
    cout<<endl<<endl<<"upside-down triangle"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=pattern_size; j>i; --j){
            cout<<c;
        }
        cout<<endl;
    }

    //upside-down count triangle
    cout<<endl<<endl<<"upside-down count triangle"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=1; j<=pattern_size-i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    //full triangle
    cout<<endl<<endl<<"full triangle"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=1;j<pattern_size-i;++j){
            cout<<' ';
        }
    for(int a=0; a<=i; ++a){
        cout<<c;
    }
    for(int a=0; a<i; ++a){
        cout<<c;
    }
        cout<<endl;
    }

    //upside-down full triangle
    cout<<endl<<endl<<"upside-down full triangle"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=1; j<=i; ++j){
            cout<<' ';
        }
        for(int a=pattern_size; a>i; --a){
            cout<<c;
        }
        for(int a=pattern_size-1; a>i; --a){
            cout<<c;
        }
        cout<<endl;
    }

    //diamond
    cout<<endl<<endl<<"diamond"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=1; j<pattern_size-i; ++j){
            cout<<' ';
        }
        for(int a=0; a<=i; ++a){
            cout<<c;
        }
        for(int a=0; a<i; ++a){
            cout<<c;
        }
        cout<<endl;
    }
    for(int i=0; i<pattern_size; ++i){
        for(int j=0; j<i; ++j){
            cout<<' ';
        }
        for(int a=1; a<pattern_size-i; ++a){
            cout<<c;
        }
        for(int a=pattern_size; a>i; --a){
            cout<<c;
        }
        cout<<endl;
    }

    //side pyramid
    cout<<endl<<endl<<"side pyramid"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=0; j<=i; ++j){
            cout<<c;
        }
        cout<<endl;
    }
    for(int a=0; a<pattern_size-1; ++a){
        for(int b=pattern_size-1; b>a; --b){
            cout<<c;
        }
        cout<<endl;
    }
    
    //binary left-triangle
    cout<<endl<<endl<<"binary left-triangle"<<endl;
    int flag_row = 1, flag_col = 1;
    for(int i=0; i<pattern_size; ++i){
        for(int j=0; j<=i; ++j){
            cout<<flag_col<<' ';
            flag_col = !flag_col;
        }
        cout<<endl;
        flag_col = flag_row = !flag_row;
    }

    //two number pyramids
    cout<<endl<<endl<<"two number pyramids"<<endl;
    for(int i=1; i<pattern_size; ++i){
        for(int j=1; j<=i; ++j){
            cout<<j;
        }
        for(int a=1; a<pattern_size-i; ++a){
            cout<<' ';
        }
        for(int a=1; a<pattern_size-i; ++a){
            cout<<' ';
        }
        int counter = pattern_size-1;
        int skip = counter - i;
        for(int a=pattern_size-1; a>0; --a){
            if(skip){
                skip -= 1;
                continue;
            }
            cout<<a;
        }
        cout<<endl;
    }

    //counting triangle
    cout<<endl<<endl<<"counting triangle"<<endl;
    int count = 1;
    for(int i=0; i<pattern_size; ++i){
        for(int j=0; j<=i; ++j){
            cout<<count++<<" ";
        }
        cout<<endl;
    }

    //alphabet triangle
    cout<<endl<<endl<<"alphabet triangle"<<endl;
    int alpha_code = 65;
    for(int i=0; i<5; ++i){
        for(int j=0; j<=i; ++j){
            cout<<char(alpha_code);
            alpha_code++;
        }
        cout<<endl;
        alpha_code = 65;
    }

    //upside-down alphabet triangle
    cout<<endl<<endl<<"upside-down alphabet triangle"<<endl;
    alpha_code = 65;
    for(int i=0; i<5; ++i){
        for(int j=0; j<5-i; ++j){
            cout<<char(alpha_code);
            alpha_code++;
        }
        cout<<endl;
        alpha_code = 65;
    }

    //repetitive alphabet triangel
    cout<<endl<<endl<<"repetitive alphabet triangle"<<endl;
    for(int i=0; i<5; ++i){
        for(int j=0; j<=i; ++j){
            cout<<char(alpha_code);
        }
        cout<<endl;
        alpha_code++;
    }

    //alphabet pyramid
    cout<<endl<<endl<<"alphabet pyramid"<<endl;
    alpha_code = 65;
    for(int i=0; i<4; ++i){
        for(int j=0; j<4-i; ++j){
            cout<<' ';
        }
        for(int a=0; a<=i; ++a){
            cout<<char(alpha_code);
            ++alpha_code;
        }
            --alpha_code;
        for(int a=0; a<i; ++a){
            --alpha_code;
            cout<<char(alpha_code);
        }
        cout<<endl;
        alpha_code = 65;
    }

    //inverse alphabet triangle
    cout<<endl<<endl<<"inverse alphabet triangle"<<endl;
    alpha_code = 65;
    int counter = alpha_code;
    int skip;
    for(int i=0; i<5; ++i){
        skip = 4-i;
        for(int j=alpha_code; j >= counter - 4; --j){
            if(skip){
                skip--;
                alpha_code++;
                continue;
            }
            cout<<char(alpha_code)<< ' ';
            ++alpha_code;
        }
        cout<<endl;
        alpha_code = 65;
    }

    //hollow diamond
    cout<<endl<<endl<<"hollow diamond"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=0; j<pattern_size-i; ++j){
            cout<<c;
        }
        for(int j=0; j<i; ++j){
            cout<<' ';
        }
        for(int j=0; j<i; ++j){
            cout<<' ';
        }
        for(int j=0; j<pattern_size-i; ++j){
            cout<<c;
        }
        cout<<endl;
    }
    for(int i=0; i<pattern_size; ++i){
        for(int j=0; j<=i; ++j){
            cout<<c;
        }
        for(int j=0; j<pattern_size-1-i; ++j){
            cout<<' ';
        }
        for(int j=0; j<pattern_size-1-i; ++j){
            cout<<' ';
        }
        for(int j=0; j<=i; ++j){
            cout<<c;
        }
        cout<<endl;
    }

    //2 pyramids
    cout<<endl<<endl<<"2 pyramids"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=0; j<=i; ++j){
            cout<<c;
        }
        for(int j=0; j<pattern_size-1-i; ++j){
            cout<<' ';
        }
        for(int j=0; j<pattern_size-1-i; ++j){
            cout<<' ';
        }
        for(int j=0; j<=i; ++j){
            cout<<c;
        }
        cout<<endl;
    }
    for(int i=0; i<pattern_size-1; ++i){
        for(int j=0; j<pattern_size-1-i; ++j){
            cout<<c;
        }
        for(int j=0; j<=i; ++j){
            cout<<' ';
        }
        for(int j=0; j<=i; ++j){
            cout<<' ';
        }
        for(int j=0; j<pattern_size-1-i; ++j){
            cout<<c;
        }
        cout<<endl;
    }

    //hollow square
    cout<<endl<<endl<<"hollow square"<<endl;
    for(int i=0; i<pattern_size; ++i){
        for(int j=0; j<pattern_size; ++j){
            if(i==0 || i==pattern_size-1 || j==0 || j==pattern_size-1){
                cout<<c<<' ';
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    //number matrix
    cout<<endl<<endl<<"number matrix"<<endl;
    for(int i=0; i<7; ++i){
        for(int j=0; j<7; ++j){
            if(i==0 || j==0 || i==6 || j==6){
                cout<<7-3<<' ';
            }else if(i==1 || j==1 || i==5 || j==5){
                cout<<7-4<<' ';
            }else if(i==2 || j==2 || i==4 || j==4){
                cout<<7-5<<' ';
            }else{
                cout<<1<<' ';
            }
        }
        cout<<endl;
    }
    //number matrix (Dyanmic)
    cout<<endl<<endl<<"number matrix (Dynamic)"<<endl;
    int outer = (pattern_size+1)/2;
    for(int i=0; i<pattern_size; ++i){
            int count_f = 0;
            int count_b = 1;
        for(int j=0; j<pattern_size; ++j){
            if(j==count_f || i==count_f || i==pattern_size-count_b || j==pattern_size-count_b){
                cout<<outer-count_f<<' ';
            }else{
                count_f++;
                count_b++;
                cout<<outer-count_f<<' ';

            }
        }
        cout<<endl;
    }

    //number matrix (Dyanmic 2)
    cout<<endl<<endl<<"number matrix (Dynamic 2)"<<endl;
    for(int i=0; i<2*pattern_size-1; ++i){
        for(int j=0; j<2*pattern_size-1; ++j){
            int top = i;
            int left = j;
            int right = (2*pattern_size-2) - j;
            int bottom = (2*pattern_size-2) - i;

            int p = pattern_size - min(min(top,bottom), min(left, right));
            cout<<p<<' ';
        }
        cout<<endl;
    }


    return 0;
}