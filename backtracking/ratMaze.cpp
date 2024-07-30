#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSafe(int maze[][4], int row, int col, int srcx, int srcy, int newx, int newy, vector<vector<bool>> &track)
{
    if ((newx >= 0) && (newy >= 0) && (newx < row) && (newy < col) && (maze[newx][newy] == 1) && track[newx][newy] == false)
        return true;

    return false;
}

vector<string> findPath(int maze[][4], int row, int col, int srcx, int srcy, string &output, vector<vector<bool>> &track, vector<string> &ans)
{
    if (srcx == row - 1 && srcy == col - 1)
    {
        ans.push_back(output);
        return ans;
    }

    // up
    int newx = srcx;
    int newy = srcy - 1;

    if (isSafe(maze, row, col, srcx, srcy, newx, newy, track))
    {
        track[newx][newy] = true;
        output.push_back('U');
        return findPath(maze, row, col, newx, newy, output, track, ans);
        output.pop_back();
        track[newx][newy] = false;
    }

    // right
    newx = srcx + 1;
    newy = srcy;

    if (isSafe(maze, row, col, srcx, srcy, newx, newy, track))
    {
        track[newx][newy] = true;
        output.push_back('R');
        return findPath(maze, row, col, newx, newy, output, track, ans);
        output.pop_back();
        track[newx][newy] = false;
    }

    // down
    newx = srcx;
    newy = srcy + 1;

    if (isSafe(maze, row, col, srcx, srcy, newx, newy, track))
    {
        track[newx][newy] = true;
        output.push_back('D');
        return findPath(maze, row, col, newx, newy, output, track, ans);
        output.pop_back();
        track[newx][newy] = false;
    }

    // left
    newx = srcx - 1;
    newy = srcy;

    if (isSafe(maze, row, col, srcx, srcy, newx, newy, track))
    {
        track[newx][newy] = true;
        output.push_back('L');
        return findPath(maze, row, col, newx, newy, output, track, ans);
        output.pop_back();
        track[newx][newy] = false;
    }
}

int main()
{
    int maze[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 1, 0}, {1, 1, 1, 1}};
    int row = 4, col = 4;
    int srcx = 0, srcy = 0;
    string output = "";
    vector<vector<bool>> track(row, vector<bool>(col, false));
    vector<string> ans;

    if (maze[0][0] == 0)
        cout << "No path exists" << endl;
    else
    {
        track[srcx][srcy] = true;
        findPath(maze, row, col, srcx, srcy, output, track, ans);
    }

    for (auto s : ans)
    {
        cout << s << " ";
    }

    cout << endl;

    return 0;
}