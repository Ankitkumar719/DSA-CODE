#include<iostream>
#include<string>
using namespace std;

bool isSafe(char maze[3][3], int row, int col, bool visited[3][3], int newX, int newY){
    if((newX >= 0 && newX < row) && (newY >= 0 && newY < col) && maze[newX][newY] == '.' && visited[newX][newY] == false){
        return true;
    }else{
        return false;
    }
}

void solve(char maze[][3], int row, int col, int srcX, int srcY, int desX, int desY, string output, bool visited[3][3]){
    if(srcX == desX && srcY == desY){
        cout << output << endl;
        return;
    }

    int newX = srcX - 1;
    int newY = srcY;
    if(isSafe(maze, row, col, visited, newX, newY)){
        visited[newX][newY] = true;
        solve(maze, row, col, newX, newY, desX, desY, output+'U', visited);
        visited[newX][newY] = false;
    }

    newX = srcX + 1;
    newY = srcY;
    if(isSafe(maze, row, col, visited, newX, newY)){
        visited[newX][newY] = true;
        solve(maze, row, col, newX, newY, desX, desY, output+'D', visited);
        visited[newX][newY] = false;
    }

    newX = srcX;
    newY = srcY - 1;
    if(isSafe(maze, row, col, visited, newX, newY)){
        visited[newX][newY] = true;
        solve(maze, row, col, newX, newY, desX, desY, output+'L', visited);
        visited[newX][newY] = false;
    }

    newX = srcX;
    newY = srcY + 1;
    if(isSafe(maze, row, col, visited, newX, newY)){
        visited[newX][newY] = true;
        solve(maze, row, col, newX, newY, desX, desY, output+'R', visited);
        visited[newX][newY] = false;
    }
}

int main(){
    char maze[3][3] = {{'.', '.', '.'},
                       {'.', '_', '_'},
                       {'.', '.', '.'}};

    int row = 3;
    int col = 3;

    int srcX = 0;
    int srcY = 0;

    int desX = row - 1;
    int desY = col - 1;

    string output = "";

    bool visited[3][3] = {{true, false, false},
                          {false, false, false},
                          {false, false, false}};

    solve(maze, row, col, srcX, srcY, desX, desY, output, visited);

    return 0;
}