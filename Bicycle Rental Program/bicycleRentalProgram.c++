


#include <iostream>

bool validateInput(int startTime, int endTime) {
    if (startTime < 0 || startTime > 23 || endTime < 1 || endTime > 24 || startTime >= endTime) {
        std::cout << "Invalid input! Please enter valid starting and ending times." << std::endl;
        return false;
    }
    return true;
}

int calculateRentalCost(int startTime, int endTime) {
    int totalHours = endTime - startTime;
    int ratePerHour;

    if ((startTime >= 0 && startTime <= 7) || (startTime >= 21 && startTime <= 23)) {
        ratePerHour = 500;
    } else if ((startTime >= 7 && startTime <= 14) || (startTime >= 19 && startTime <= 21)) {
        ratePerHour = 1000;
    } else if (startTime >= 14 && startTime <= 19) {
        ratePerHour = 1500;
    } else {
        std::cout << "Invalid input!" << std::endl;
        return 0;
    }

    int totalCost = totalHours * ratePerHour;
    return totalCost;
}

int main() {
    int startTime, endTime;
    std::cout << "Enter the starting time (hour): ";
    std::cin >> startTime;
    std::cout << "Enter the ending time (hour): ";
    std::cin >> endTime;

    if (validateInput(startTime, endTime)) {
        int rentalCost = calculateRentalCost(startTime, endTime);
        std::cout << "The rental cost is: " << rentalCost << " RWF" << std::endl;
    }

    return 0;
}
















#include <iostream>
int main()
{
int starting_time, ending_time, total_Payment;
std::cout<<"Enter the starting time of the rent between 0 - 23: \t";
std::cin>>starting_time;
std::cout<<"Enter the ending time of the rent  between 1 - 24: \t";
std::cin>>ending_time;
if (starting_time >= 0 && starting_time < 24 && ending_time > 0 && ending_time <= 24){

if (starting_time >= 0 && ending_time <= 7) {
	total_Payment = (ending_time - starting_time) * 500;
	std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
} else if (starting_time >= 21 && ending_time <= 24) {
	total_Payment = (ending_time - starting_time) * 500;
	std::cout<<"Amount to pay for the rent: \nt"<<total_Payment<<"RWF";
} else if (starting_time >= 7 && ending_time <= 14) {
	total_Payment = (ending_time - starting_time) * 1000;
	std::cout<<"Amount to pay for the rent: \nt"<<total_Payment<<"RWF";
} else if (starting_time >= 19 && ending_time <= 21) {
	total_Payment = (ending_time - starting_time) * 1000;
	std::cout<<"Amount to pay for the rent: \nt"<<total_Payment<<"RWF";
} else if (starting_time >= 14 && ending_time <= 19) {
	total_Payment = (ending_time - starting_time) *1500;
	std::cout<<"Amount to pay for the rent: \nt"<<total_Payment<<"RWF";
}

else if (starting_time >= 0) {
	if(ending_time<=14){
		total_Payment = ((7-starting_time)*500) + ((ending_time-7) * 1000);
		std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
	} else if (ending_time<=19) {
	total_Payment = ((7-starting_time)*500) + (7*1000) +((ending_time-14) * 1500);
	std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
}else if (ending_time<=21) {
	total_Payment = ((7-starting_time)*500) + (7*1000) +(5 * 1500)+((ending_time-19) * 1000);
	std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
}else if (ending_time<=24) {
	total_Payment = ((7-starting_time)*500) + (7*1000) +(5 * 1500)+(3 * 1000)+((ending_time-21) * 500);
	std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
}
	
}

else if (starting_time >= 7) {
	if(ending_time<=19){
		total_Payment = ((14-starting_time)*1000) + ((ending_time - 14) * 1500);
		std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
	} else if (ending_time<=21) {
	total_Payment = ((14-starting_time)*1000) + (5*1500) +((ending_time - 19) * 1000);
	std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
}else if (ending_time<=24) {
	total_Payment = ((14-starting_time)*1000) + (5*1500) +(3 * 1000)+((ending_time-21) * 500);
	std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";

}
}

else if (starting_time >= 14) {
	if(ending_time<=21){
		total_Payment = ((19-starting_time)*1500) + ((ending_time - 19) * 1000);
		std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
	} else if (ending_time<=24) {
	total_Payment = ((19 - starting_time)*1500) + (3*1000) +((ending_time - 21) * 500);
	std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
}
}


else if (starting_time >= 14) {
	if(ending_time<=21){
		total_Payment = ((19-starting_time)*1500) + ((ending_time - 19) * 1500);
		std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
	} else if (ending_time<=24) {
	total_Payment = ((19-starting_time)*1500) + (3*1000) +((ending_time - 21) * 500);
	std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
}
}

else if (starting_time >= 19) {
	if(ending_time<=24){
		total_Payment = ((21-starting_time)*1000) + ((ending_time - 21) * 500);
		std::cout<<"Amount to pay for the rent: \t"<<total_Payment<<"RWF";
	}
}
} else {
	std::cout<<" You have entered wrong inputs, Try again!!! \t";
}
return 0;
}