#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

char *p = (char*)malloc(1024 * 1024 * 500);
char *curr_p = p;

struct mat_table {
    char* start_add;
    int size_in_bytes;  
    char* end_add;
};

vector<mat_table> allocation_table;

class my_mat {
public:
    void mymalloc(int z);
    void myfree();
};

void my_mat::mymalloc(int z) {
    if (z > 50) {
        cout << "Error: Requested memory exceeds the 50-byte limit." << endl;
        return;
    }
    if (curr_p + z > p + (1024 * 1024 * 500) / sizeof(char)) {
        cout << "Error: Not enough memory available." << endl;
        return;
    }
    mat_table entry;
    entry.start_add = curr_p;
    entry.size_in_bytes = z;
    entry.end_add = curr_p + z;
    allocation_table.push_back(entry);
    curr_p += z;
    cout << "Memory allocated at: " << (void*)entry.start_add << " of size " << z << " bytes." << endl;
}

void my_mat::myfree() {
    if (!allocation_table.empty()) {
        mat_table last_entry = allocation_table.back();
        cout << "Deallocating memory at: " << (void*)last_entry.start_add << " of size " << last_entry.size_in_bytes << " bytes." << endl;
        curr_p = last_entry.start_add;
        allocation_table.pop_back();
    } else {
        cout << "No allocations to deallocate." << endl;
    }
}

void display_table() {
    cout << "Memory Allocation Table:" << endl;
    for (const auto &entry : allocation_table) {
        cout << "Start Address: " << (void*)entry.start_add
             << ", Size: " << entry.size_in_bytes
             << ", End Address: " << (void*)entry.end_add << endl;
    }
}

int main() {
    my_mat mat_manager;
    cout << "Base address: " << (void*)p << endl;
    cout << "Next address after base: " << (void*)(p + 1) << endl;
    
    int choice;
    while (true) {
        cout << "\nEnter the choice:" << endl;
        cout << "1. Allocate memory" << endl;
        cout << "2. Deallocate the last allocated memory" << endl;
        cout << "3. View Memory Allocation Table" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            int mymemory;
            cout << "Enter how many bytes you want to allocate (it should be less than 50 bytes): ";
            cin >> mymemory;
            mat_manager.mymalloc(mymemory);
        }
        else if (choice == 2) {
            mat_manager.myfree();
        }
        else if (choice == 3) {
            display_table();
        }
        else if (choice == 4) {
            cout << "Exiting the program." << endl;
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    free(p);
    return 0;
}
