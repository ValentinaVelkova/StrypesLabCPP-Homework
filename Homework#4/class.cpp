#include <iostream>
#include <bitset>
#include <climits>

void printMenu(){
    std::cout << "\nPlease choose one of the options:\n"
              << "1. Mark student present\n"
              << "2. Mark student absent\n"
              << "3. Change student status\n"
              << "4. List present students\n"
              << "5. List absent students\n"
              << "6. Exit\n";
}

// Set student as present
void setAttendance(uint64_t& attendance, int student_id){
    attendance |= (1ULL << (student_id -1));
}

// Set student as absent
void clearAttendance(uint64_t& attendance, int student_id){
    attendance &= ~(1ULL << (student_id -1));
}

// Change student status
void changeAttendance(uint64_t& attendance, int student_id){
    attendance ^= (1ULL << (student_id -1));
}

// List all present students
void listPresent(uint64_t& attendance){
    std::cout << "\nPresent students:\n";
    for(int i = 0; i < 64; i++){
        if(attendance & (1ULL << i)){
            std::cout << "Student with ID: " << (i + 1) << " " << std::endl;
        }
    }
} 

// List all absent students
void listAbsent(uint64_t& attendance){
    std::cout << "\nAbsent students:\n";
    for(int i = 0; i < 64; i++){
        if(!(attendance & (1ULL << i))){
            std::cout << "Student with ID: " << (i + 1) << " " << std::endl;
        }
    }
}

int main() {

    uint64_t attendance = 0;
    int option, student_id;

    while(true) {
        printMenu();
        std::cout << std::endl;
        std::cin >> option;

        if((std::cin.fail()) || (option < 1) || (option > 6)){
            std::cerr << "\nInvalid option!\n";
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            continue;
        }

        switch(option){
            case 1:
                std::cout << "\nEnter student ID to mark present (1-64): ";
                std::cin >> student_id;

                // Check if the input is integer and between 1 and 64
                if(!(std::cin.good()) || (student_id < 1) || (student_id > 64)){
                    std::cerr << "\nInvalid student ID!\n";
                    std::cin.clear();
                    std::cin.ignore(INT_MAX, '\n');
                    continue;
                } else {
                    setAttendance(attendance, student_id);
                }
                break;
            case 2:
                std::cout << "\nEnter student ID to mark absent (1-64): ";
                std::cin >> student_id;

                if(!(std::cin.good()) || (student_id < 1) || (student_id > 64)){
                    std::cerr << "\nInvalid student ID!\n";
                    std::cin.clear();
                    std::cin.ignore(INT_MAX, '\n');
                    continue;
                } else {
                    clearAttendance(attendance, student_id);
                }
                break;
            case 3:
                std::cout << "\nEnter student ID to change status (1-64): ";
                std::cin >> student_id;

                if(!(std::cin.good()) || (student_id < 1) || (student_id > 64)){
                    std::cerr << "\nInvalid student ID!\n";
                    std::cin.clear();
                    std::cin.ignore(INT_MAX, '\n');
                    continue;
                } else {
                    changeAttendance(attendance, student_id);
                }
                break;
            case 4:
                listPresent(attendance);
                break;
            case 5:
                listAbsent(attendance);
                break;
            case 6:
                std::cout << "Thank you for using our Student Manager!" << std::endl;
                return 0;
        }
    }
    return 0;
}