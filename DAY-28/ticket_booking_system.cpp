#include <iostream>
#include <string>
using namespace std;

// Structure to store movie details
struct Movie
{
    string name;
    string showTime;
    int availableSeats;
};

// Structure to store booking details
struct Booking
{
    string customerName;
    string movieName;
    int seatsBooked;
    bool active;
};

//-------------------- Function Declarations --------------------//

void displayMovies(Movie movies[], int size);
void bookTicket(Movie movies[], int size, Booking bookings[], int &bookingCount);
void viewBookings(Booking bookings[], int bookingCount);
void cancelBooking(Movie movies[], int movieSize, Booking bookings[], int bookingCount);

//--------------------------- Main Function ---------------------------//

int main()
{
    // List of available movies
    Movie movies[3] = {
        {"Avengers: Endgame", "10:00 AM", 50},
        {"Spider-Man: No Way Home", "2:00 PM", 40},
        {"The Batman", "6:00 PM", 30}
    };

    // Booking records
    Booking bookings[100];

    // Initialize all bookings as inactive
    for (int i = 0; i < 100; i++)
    {
        bookings[i].active = false;
    }

    int bookingCount = 0;
    int choice;

    do
    {
        cout << "\n========== Movie Ticket Booking System ==========\n";
        cout << "1. View Movies\n";
        cout << "2. Book Ticket\n";
        cout << "3. View Bookings\n";
        cout << "4. Cancel Booking\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            displayMovies(movies, 3);
            break;

        case 2:
            bookTicket(movies, 3, bookings, bookingCount);
            break;

        case 3:
            viewBookings(bookings, bookingCount);
            break;

        case 4:
            cancelBooking(movies, 3, bookings, bookingCount);
            break;

        case 5:
            cout << "Thank you for using the Movie Ticket Booking System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}

//-------------------- Function Definitions --------------------//

// Function to display all movies
void displayMovies(Movie movies[], int size)
{
    cout << "\nAvailable Movies\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ". " << movies[i].name << endl;
        cout << "   Showtime : " << movies[i].showTime << endl;
        cout << "   Available Seats : " << movies[i].availableSeats << endl;
        cout << endl;
    }
}

// Function to book tickets
void bookTicket(Movie movies[], int size, Booking bookings[], int &bookingCount)
{
    int movieChoice;
    int seats;

    displayMovies(movies, size);

    cout << "Enter movie number: ";
    cin >> movieChoice;

    // Validate movie number
    if (movieChoice < 1 || movieChoice > size)
    {
        cout << "Invalid movie selection.\n";
        return;
    }

    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, bookings[bookingCount].customerName);

    cout << "Enter Number of Seats: ";
    cin >> seats;

    // Check seat availability
    if (seats <= movies[movieChoice - 1].availableSeats)
    {
        movies[movieChoice - 1].availableSeats -= seats;

        bookings[bookingCount].movieName = movies[movieChoice - 1].name;
        bookings[bookingCount].seatsBooked = seats;
        bookings[bookingCount].active = true;

        bookingCount++;

        cout << "\nTicket Booked Successfully!\n";
    }
    else
    {
        cout << "Sorry! Required seats are not available.\n";
    }
}

// Function to display all bookings
void viewBookings(Booking bookings[], int bookingCount)
{
    bool found = false;

    cout << "\n========== Booking Details ==========\n";

    for (int i = 0; i < bookingCount; i++)
    {
        if (bookings[i].active)
        {
            found = true;

            cout << "Booking ID : " << i + 1 << endl;
            cout << "Customer Name : " << bookings[i].customerName << endl;
            cout << "Movie : " << bookings[i].movieName << endl;
            cout << "Seats Booked : " << bookings[i].seatsBooked << endl;
            cout << "-------------------------------\n";
        }
    }

    if (!found)
    {
        cout << "No Bookings Found.\n";
    }
}

// Function to cancel a booking
void cancelBooking(Movie movies[], int movieSize, Booking bookings[], int bookingCount)
{
    int id;

    cout << "Enter Booking ID to Cancel: ";
    cin >> id;

    // Validate booking ID
    if (id < 1 || id > bookingCount || !bookings[id - 1].active)
    {
        cout << "Invalid Booking ID.\n";
        return;
    }

    // Restore seats back to the movie
    for (int i = 0; i < movieSize; i++)
    {
        if (movies[i].name == bookings[id - 1].movieName)
        {
            movies[i].availableSeats += bookings[id - 1].seatsBooked;
            break;
        }
    }

    bookings[id - 1].active = false;

    cout << "Booking Cancelled Successfully!\n";
}