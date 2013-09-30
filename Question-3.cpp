using namespace std;

int main()
{
    int num;
    int check = 0;
    int i;
    cout << "Enter number to check if prime: ";
    cin >> num;
    for(i=1;i<=num;i++){
        if((num%i)==0){
            check++;
        }

    }
    if(check==2){
        cout <<"PRIME NUMBER";
    }else{
        cout << "NOT PRIME";
    }
    return 0;
}
