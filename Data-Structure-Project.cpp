
#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{
    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubscriptionQueue("B0",5);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\nPay Bills Queue Info:\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();

    PayBillsQueue.PrintAllTickets();
    

    PayBillsQueue.ServeNextClient();

    cout << "\nPay Bills Queue After Serving on One client\n";
    PayBillsQueue.PrintInfo();

    cout << "\nPay Bills Queue Info:\n";

    SubscriptionQueue.IssueTicket();
    SubscriptionQueue.IssueTicket();
    SubscriptionQueue.IssueTicket();


    SubscriptionQueue.PrintInfo();

    SubscriptionQueue.PrintTicketsLineRTL();
    SubscriptionQueue.PrintTicketsLineLTR();

    SubscriptionQueue.PrintAllTickets();

    SubscriptionQueue.ServeNextClient();
    cout << "\nSubscriptions Queue After Serving One client\n";
    SubscriptionQueue.PrintInfo();
    
    


    system("pause>0");
}