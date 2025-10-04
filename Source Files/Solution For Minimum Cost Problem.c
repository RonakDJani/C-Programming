#include <stdio.h>

/*
 * Program to find the value of parameter 'p' (0 to 10, in steps of 0.1) 
 * that minimizes the total cost function:
 * Total Cost = C1 + C2
 * C1 = 30 - 8p
 * C2 = 10 + p^2
 * Total Cost = 40 - 8p + p^2
 *
 * This uses a numerical search approach and exploits the property that
 * the cost decreases until the minimum is reached, and then starts increasing.
 */

int main()
{
    float p, cost, p1, cost1;

    // Loop through p from 0.0 to 10.0, incrementing by 0.1
    for (p = 0; p <= 10; p = p + 0.1)
    {
        
        // Calculate the total cost for the current value of p
        cost = 40 - 8 * p + p * p;

        // Base case: Initialize the first cost (at p=0) as the minimum
        if (p == 0)
        {
            cost1 = cost;
            continue;
        }
        
        // Check for the minimum point:
        // If the current cost is greater than or equal to the previously recorded minimum,
        // it means we have passed the minimum point in the function's curve.
        if (cost >= cost1)
        {
            break; // Exit the loop
        }
        
        // If the cost is still decreasing, update the minimum cost (cost1) 
        // and the corresponding parameter (p1).
        cost1 = cost;
        p1 = p;
    }
    
    // Refine the value of p by averaging the last decreasing p (p1) 
    // and the first increasing p (p). This provides a more accurate value.
    p = (p + p1) / 2.0;
    
    // Calculate the final minimum cost using the refined p value
    cost = 40 - 8 * p + p * p;
    
    // Output the result formatted to the required accuracy
    printf("\nMINIMUM COST = %.2f AT p = %.1f\n", cost, p);

    return 0;
}