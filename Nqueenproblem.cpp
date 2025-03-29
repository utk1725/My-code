 #include<iostream>
 #include<vector>
 #include<unordered_map>

 std::unordered_map<int,bool> rowCheck;
  std::unordered_map<int,bool> upperLeftDiagonalCheck;
  std::unordered_map<int,bool> bottomLeftDiagonalCheck;

 using namespace std;
 void printSolution(vector<vector<char> > &board, int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout <<board[i][j] << " "; 
         }
        cout<<endl;
    }
    cout << endl <<endl;
 }
 bool isSafe(int row, int col,vector<vector<char> > &board, int n){
 if(rowCheck[row]== true || upperLeftDiagonalCheck[col-row]==true || bottomLeftDiagonalCheck[col+row]==true){
 return false;
 }
 
 
 
 
 //check if we can place the queen in the current cell or not
 //int i = row;
//  int j = col;
//  //check left row
//  while(j >= 0){
//     if(board[i][j]=='Q'){
//         return false;
//     }
//     j--;
//  }
 //check upper left diagonal
//  i=row;
//  j=col;
//  while(i>=0 && j>=0){
//      if(board[i][j]=='Q'){
//         return false;
//     }
//     j--;
//     i--;
//  }
//  //check bottom left diagnol
//  i=row;
//  j=col;
//  while(i<n && j>=0){
//     if (board[i][j] =='Q'){
//         return false;
//     }
//     i++;
//     j--;
//  }
 //queen not found hence condition is safe
 return true;
 }
 void solve(vector<vector<char> > board, int col, int n){
    //base case
    if(col >= n){
        printSolution(board ,n);
        return ;
    }
    //solve case 1
    for (int row=0;row <n; row++){
        if(isSafe(row,col,board,n)){
            board[row][col] = 'Q';
            rowCheck[row]=true;
            upperLeftDiagonalCheck[col-row]=true;
            bottomLeftDiagonalCheck[col+row]=true;

            //apply recursion solution
            solve(board, col+1,n);
            //backtracking
            board[row][col] = '-';
             rowCheck[row]=false;
            upperLeftDiagonalCheck[col-row]=false;
            bottomLeftDiagonalCheck[col+row]=false;

        }
    }
 }
 int main(){
    int n = 4;
    vector<vector<char> > board(n, vector<char>(n,'-'));
    int col = 0;
    solve(board,col, n);
    return 0;
    }

