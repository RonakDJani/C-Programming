#include <stdio.h>

#define MAX_LOAN 50000

int main()
{
    long int loan1, loan2, loan3, sum23, sanctioned_loan;

    printf("Enter amoumnt of previous two loans: ");
    scanf("%ld %ld", &loan1, &loan2);

    printf("Enter amount of new loan requested: ");
    scanf("%ld", &loan3);

    sum23 = loan2 + loan3;

    sanctioned_loan = (loan1 > 0) ? 0 : ((sum23 > MAX_LOAN) ? MAX_LOAN - loan2 : loan3);

    printf("Previous two pending loan amount: %ld and %ld\n", loan1, loan2);
    printf("Requested loan amount: %ld\n", loan3);
    printf("Sanctioned loan amount: %ld\n", sanctioned_loan);

    return 0;
}