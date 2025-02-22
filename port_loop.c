# include <stdio.h> //Standard input output
# include <stdlib.h> //Standard library

int main() {
    char ip[20]; //Store the IP adress
    int start_port = 1, end_port = 100; //Defined the port range

//In cybersecurity, ports tell us what services are running on a machine.
//If a port is open, it means the system is accepting connections on that port.
//If it’s closed, it’s either blocked or not in use.
//Hackers often scan for open ports to find vulnerabilities, so businesses must monitor and secure them.
   
    //Get IP from user
    printf("Enter an IP adress: ");
    scanf("%19s", ip);
    printf("Scanning %s for open ports...\n", ip);

    //Loop thorugh the ports (1-100)
   for (int port = start_port; port <= end_port; port++) {
       printf("Checking port %d...\n", port);
   } 
   
   printf("Scan Complete!\n"); //192.168.1.1    
   return 0;
}

//What It Does:
//It takes user input for an IP.
//It loops through ports 1-100, pretending to "check" them.
//Right now, it doesn’t actually connect to check if they’re open
