#include <bits/stdc++.h>
using namespace std;

struct node
{
  char label[60];
  int ch_count;
  node *child[50];
} * root;

class BST
{
public:
  void insert();
  void display();

  BST()
  {
    root == NULL;
  }
};

void BST::insert()
{
  int secount;
  root = new node();
  cout <<"Enter the name of book :"<< endl;
  cin >> root->label;
  cout <<"Enter the total number of chapters in book :"<< endl;
  cin >> root->ch_count;
  for (int i = 0; i < root->ch_count; i++)
  {
    root->child[i] = new node();
    cout <<"Enter the name of chapters :"<< endl;
    cin >> root->child[i]->label;

    cout <<"Enter the number of sections"<< endl;
    cin >> root->child[i]->ch_count;
    for (int j = 0; j < root->child[i]->ch_count; j++)
    {
      root->child[i]->child[j] = new node();
      cout <<"Enter the name of section :"<< endl;
      cin >> root->child[i]->child[j]->label;

      
    }
  }
}

void BST::display()
{
  if (root != NULL)
  {
    cout <<"BOOK "<< endl;
    cout <<"Book Name is :- "<< root->label << endl;
    for (int i = 0; i < root->ch_count; i++)
    {
      cout <<"Chapter NAme is :- "<< root->child[i]->label << endl;
      for (int j = 0; j < root->child[i]->ch_count; j++)
      {
        cout <<"Section Name is :- "<< root->child[i]->child[j]->label << endl;
        
      }
    }
  }
}

int main()
{
  BST book;
  int ch;
  do
  {
    cout <<"~~~~~MENU ~~~~~"<< endl;
    cout <<"1. Insert."<< endl;
    cout <<"2. Display."<< endl;
    cout <<"3. Exit()"<< endl;
    cout <<"Enter the choice :"<< endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
      book.insert();
      break;
    case 2:
      book.display();
      break;
    }
  } while (ch < 3);
}