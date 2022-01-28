#include "Header.h"

int getTotalPolution(vector<int> A)
{
    int nSumPolution = 0;
    for (int i = 0; i < (int)A.size(); i++)
    {
        nSumPolution += A[i];
    }
    return nSumPolution;
}

int numOfFiltersFactory(vector<int>& A)
{
    double dblTotalPolution = 0, dblCurrentPolution = 0;
    double dblTemp = 0, dblTargetPolution = 0;
    double dblAverage = 0;
    vector<double> vdbl;
    int nCounter = 0;

    dblTotalPolution = (double)getTotalPolution(A);
    dblTargetPolution = dblTotalPolution / 2;

    //Create a double container so that we could also chekc included decimal points to have accurate results;
    //Good to sort it first from Maximum to lowest
    sort(A.begin(), A.end());
    for (size_t i = A.size() - 1; i >= 0; i--)
    {
        vdbl.push_back((double)A[i]);
    }

    dblCurrentPolution = dblTotalPolution;
    while ((dblCurrentPolution > dblTargetPolution))
    {
        //We need to get the Average polution for this will be our guage where to focus putting in the company filters.
        //the current average polution is greater than the specific company's polutions, then we need to do something(add filters)

        dblAverage = (dblCurrentPolution / (double)vdbl.size());

        //if current company polution is less than the average,break the loop. We don't need to place filters on them.
        //if current polution is lesser or equal the target polution, break the loop
        for (int i = 0; (i < (int)vdbl.size()) && (dblCurrentPolution > dblTargetPolution) && (dblAverage <= vdbl[i]); i++)
        {
            //we need to decrease the polution by half
            //everytime there is added filter, we need to decrease the current polution emmitted until 
            //we reach the target Polution

            dblTemp = vdbl[i] / 2;
            vdbl[i] = dblTemp;
            nCounter++;
            dblCurrentPolution -= dblTemp;
        }
    }
    return nCounter;
}