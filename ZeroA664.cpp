#include <bits/stdc++.h>
#define MAX 8000
using namespace std;

int priority(char); // 運算子優先權
long long solve(char*);
long long calPostfix(long long,long long ,char);

int main(void) {
    char infix[MAX] = {'\0'};
    char postfix[MAX]= {'\0'};
    int times;
    string owo;

    cin>>times;
    getline(cin,owo);  //讓換行字元流產

    while(times--){
        cin>>infix;
        long long result=solve(infix);
        cout<<result<<"\n";
    }

    return 0;
}


int priority(char op) {
    switch(op) {
        case '+': case '-': return 1;
        case '*': case '/': return 2;
        default:            return 0;
    }
}
long long calPostfix(long long owo1,long long owo2,char ope){

    switch(ope){
    case '+':
        return (long long)(owo1+owo2);
        break;
    case '-':
        return (long long)(owo1-owo2);
        break;
    case '*':
        return (long long)(owo1*owo2);
        break;
    case '/':
        return (long long)(owo1/owo2);
        break;

    }


}

//流程是有四種狀態，integer 、 '('  、  ')' 或是 +-*/
// 其中加減乘除若左邊大於右邊優先度就可以做計算，持續狀態有operator.top != '(' and  !operator.empty()
//and  priority(operator.top) >= priority (currentOperator)


// '(' 的時候  operator 要push currentOperator 進去就好
// ')' 的時候直到operator為 '(' 都要持續postfix操作， 持續狀態只需要 operator!='(' 結束操作
// 需要一個isnum在 current_char==char 時把num push進去並且重制， push operator or brace 需要
long long solve(char *infix){
    stack<char> operators;
    stack<long long> operand;
    long long num=0;
    int isnum=0;

    for(int i=0;infix[i]!='\0';i++){
        char current_char = infix[i];
        if(isdigit(current_char)){
            num = num*10 + current_char -'0';
            isnum = 1;
        }
        else{
            if(isnum==1){
                isnum=0;
                operand.push(num);
                num=0;
            }
            if(current_char=='('){
                operators.push(current_char);
            }
            else if(current_char==')'){
                while(operators.top() != '('){
                    long long owo1 = operand.top();
                    operand.pop();
                    long long owo2 = operand.top();
                    operand.pop();
                    char ope=operators.top();
                    operators.pop();
                    long long braceResult = calPostfix(owo2,owo1,ope);
                    operand.push(braceResult);
                }
                operators.pop();
            }
            else{
                while( priority(operators.top()) >= priority(current_char) && operators.empty()!=1 && operators.top()!='('){
                    long long owo1 = operand.top();
                    operand.pop();

                    long long owo2 = operand.top();
                    operand.pop();

                    char ope=operators.top();
                    operators.pop();

                    long long braceResult = calPostfix(owo2,owo1,ope);
                    operand.push(braceResult);
                }
                operators.push(current_char);
            }
        }
    }
    if(isnum==1){          //要check最後還有沒有數字 uwu
        operand.push(num);
    }

    while(operand.size()>1){
        long long owo1 = operand.top();
        operand.pop();
        long long owo2 = operand.top();
        operand.pop();
        char ope=operators.top();
        operators.pop();
        long long braceResult = calPostfix(owo2,owo1,ope);
        operand.push(braceResult);

    }
    long long returnowo=operand.top();
    return returnowo;
}
