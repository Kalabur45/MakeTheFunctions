#include <iostream>
#include <vector>

using namespace std;

//prototypes:
bool isPositive(int);
void resize(int);
void fillWith(vector<int>, int);
void printVector(vector<int>);

/////DO NOT TOUCH/////
int main()
{
  bool isPositive(int);
  void resize(int);
  void fillWith(vector<int>, int);
  void printVector(vector<int>);

  vector <int> projects;
  vector <int> quizzes;

  int numProjects;
  int numQuizzes;

  cout<<"\nHow many projects are there? ";
  cin>>numProjects;
  cout<<"\nHow many quizzes are there? ";
  cin>>numQuizzes;

  //only proceed if both numbers are positive
  if( isPositive(numProjects) && isPositive(numQuizzes) )
  {
    projects.resize(numProjects);
    quizzes.resize(numQuizzes);

    fillWith(projects, 90); // Fills the vector with all value 90s
    fillWith(quizzes, 80); // Fills the vector with all value 80s

    cout<<"\nProject Scores:\n";
    printVector(projects); // Prints vector with space after each cell
    cout<<"\n\nQuiz Scores:\n";
    printVector(quizzes); // Prints vector with space after each cell
  }
  else
  {
    cout<<"\nSorry, numbers must be bigger than 0.\n";
  }
  return 0;
}

bool isPositive(int x)
{
        bool Positive = true;
                if(x > 0)
                {
                        Positive = false;

                }
        return Positive;

}

        void resize(vector<int> &vect, int size)
{
           vect.resize(size);
}

void fillWith(vector<int> scores, int z)
{
        for(int x = 0; x < scores.size(); x++)
        {
                
               
                        scores[x] = z;
                
        }


}
void printVector(vector<int> Scores)
{
        for(int x = 0; x < Scores.size(); x++)
        {
               
                        cout<< Scores[x] << " ";
                
             
        }



}
//function definitions
