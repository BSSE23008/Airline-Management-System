# Airline Management System (AMS)

A comprehensive C++ application for managing airline operations, including flight scheduling, employee management, customer bookings, airplane maintenance, and cargo delivery services.

---

## 📋 Table of Contents

- [Project Overview](#project-overview)
- [System Architecture](#system-architecture)
- [Module Documentation](#module-documentation)
- [Prerequisites](#prerequisites)
- [Building & Running](#building--running)
- [Output Files & Placeholders](#output-files--placeholders)
- [Usage Guide](#usage-guide)

---

## 🎯 Project Overview

The Airline Management System (AMS) is an object-oriented C++ application designed to manage all aspects of an airline's operations. It provides:

- **Flight Management**: Schedule flights, manage seat availability, and process ticket bookings
- **Employee Management**: Manage pilots, flight attendants, technicians, medics, and inspection managers
- **Customer Services**: Maintain customer information and track bookings
- **Airplane Management**: Track airplane components (engines, wings, fuselage, landing gear, etc.)
- **Financial Tracking**: Account management and revenue tracking for different departments
- **Attendance & Salary**: Employee attendance tracking and salary management
- **Cargo Services**: Manage cargo deliveries and courier services
- **Maintenance Operations**: Track airplane maintenance schedules and costs

---

## 🏗️ System Architecture

The project follows **Object-Oriented Design Principles** with the following key patterns:

- **Singleton Pattern**: Airlines class manages the entire airline system
- **Composition & Aggregation**: Components are composed into larger systems
- **Inheritance**: Employee hierarchy with specialized roles
- **JSON Serialization**: Data persistence using JSON files

---

## 📦 Module Documentation

### 1. **Airlines Module** (`Airlines.h`, `Airlines.cpp`)
**Primary System Coordinator**
- Singleton class that manages the entire airline system
- Aggregates customers, employees, and airplanes
- Coordinates between departments
- Functions:
  - Customer management (add, update, remove)
  - Employee management
  - Flight coordination
  - Financial tracking

### 2. **Employees Module** (`Employees/`)
**Workforce Management System**

Manages various employee types:
- **Employee** (Base class): Abstract base for all employees
- **Pilot** (`pilot.h`, `pilot.cpp`): Flight operations
- **FlightAttendant** (`FlightAttendant.h`, `FlightAttendant.cpp`): Passenger services
- **Technician** (`Technician.h`, `Technician.cpp`): Aircraft maintenance
- **Medic** (`Medic.h`, `Medic.cpp`): In-flight medical services
- **InspectionManager** (`InspectionManager.h`, `InspectionManager.cpp`): Quality assurance
- **Admin** (`Admin.h`, `Admin.cpp`): Administrative tasks

**Key Features:**
- Attendance tracking
- Salary management
- Department assignment
- Account linkage

### 3. **Flight Management Module** (`Flight/`)
**Flight Operations & Ticketing**

Sub-components:
- **Flight** (`Flight.h`, `Flight.cpp`): Flight information and management
- **Ticket** (`Ticket.h`, `Ticket.cpp`): Individual ticket information
- **BookedTickets** (`BookedTickets.h`, `BookedTickets.cpp`): Booking records
- **Crew** (`Flight/Crew/`): Flight crew composition

**Functionality:**
- Create and schedule flights
- Manage seat availability
- Process ticket bookings
- Track booked tickets and pricing

### 4. **Airplane Module** (`Airplane/`)
**Aircraft Component Management**

Hierarchical aircraft structure:
- **Airplane** (Main class): Aircraft identity and composition
- **Engine** (`Engine/`): Propulsion systems
- **Wing** (`Wing/`): Lift generation components
- **Empennage** (`Empennage/`): Tail assembly
- **Landing Gear** (`Landing_Gear/`):
  - Tyre specifications
  - Strut information
- **Fuselage** (`Fuselage/`):
  - **PassengerFuselage**: Passenger compartments with seats, windows, overhead bins
  - **CargoFuselage**: Cargo compartments
  - **PlaneSeat** types:
    - StandardSeat
    - LegRoomSeat
    - PremiumSeat
    - PreferredSeat
- **Items** (`Item/`): Cargo and inventory items

### 5. **Departments Module** (`Departments/`)
**Organizational Structure**

- **Department** (Base class): Generic department structure
- **FlightDepartment** (`FlightDepartment.h`, `FlightDepartment.cpp`): 
  - Manages flight operations
  - Coordinates with flight crews
  - Tracks scheduled flights
- **AirplaneMaintenance** (`AirplaneMaintenance.h`, `AirplaneMaintenance.cpp`):
  - Maintenance scheduling
  - Maintenance records
  - Cost tracking
  - Equipment management

### 6. **Customer Management Module** (`Customers/`)
**Passenger Information**

- **Customer** (`Customer.h`, `Customer.cpp`): Customer profiles and booking history
- Track customer information
- Maintain booking records
- Process ticket purchases

### 7. **Accounts & Financial Module** (`Accounts/`)
**Financial Management**

- **Account** (`Account.h`, `Account.cpp`): Base account structure
- **AirlinesAccount** (`AirlinesAccount.h`, `AirlinesAccount.cpp`): Company financial accounts
- **AccountsManagement** (`AccountsManagement.h`, `AccountsManagement.cpp`): Account operations
- Features:
  - Balance tracking
  - Revenue management
  - Department-wise accounting
  - Transaction records

### 8. **Salary Module** (`Salary/`)
**Employee Compensation**

- **Salary** (`Salary.h`, `Salary.cpp`): Salary calculation and management
- Track employee compensation
- Manage salary adjustments
- Process payroll

### 9. **Attendance Module** (`Attendance/`)
**Work Schedule Tracking**

- **Attendance** (`Attendance.h`, `Attendance.cpp`): Daily attendance records
- Mark attendance
- Generate attendance reports
- Track absences and presents

### 10. **Cargo & Courier Module** (`cargoCompany/`)
**Cargo & Delivery Services**

- **Courier** (`Courier.h`, `Courier.cpp`): Main courier management (Singleton)
- **Delivery** (`delivery.h`, `delivery.cpp`): Delivery information
- **Sender** (`Sender.h`, `Sender.cpp`): Package sender information
- **Receiver** (`Receiver.h`, `Receiver.cpp`): Package receiver information
- **Items** (`Items.h`, `Items.cpp`): Cargo item specifications
- **Address** (`Address.h`, `Address.cpp`): Location information
- **Person** (`Person.h`, `Person.cpp`): Base class for sender/receiver

### 11. **User & Authentication Module** (`Users/`)
**User Access Control**

- **User** (`User.h`, `User.cpp`): Base user class with authentication
- Login functionality
- Access control

### 12. **Error Handling Module** (`ErrorHandler/`)
**Exception Management**

- **ErrorHandler** (`ErrorHandler.h`, `ErrorHandler.cpp`): Centralized error logging
- Exception handling
- Error reporting

### 13. **Company Module** (`Company/`)
**Organization Management**

- **Company** (`Company.h`, `Company.cpp`): Overall company management
- Airplane fleet management
- Organizational data

### 14. **Menu Module** (`Menu.h`, `Menu.cpp`)
**User Interface**

- Interactive menu system
- User navigation
- Feature access

---

## 📂 Output Files & Placeholders

The system generates and uses the following JSON data files for persistence:

### Employee Records
```
Employees/
├── pilots.json                    # Pilot employee records
├── flightAttendants.json          # Flight attendant records
├── technicians.json               # Technician records
├── medics.json                    # Medical personnel records
├── inspectionManagers.json        # Inspection manager records
└── admin.json                     # Administrator records
```

### Flight & Booking Data
```
Flight/
├── tickets.json                   # Available tickets
├── Bookedtickets.json             # Booked ticket records
├── flights.json                   # Scheduled flights
└── Crew/                          # Crew assignment files
```

### Customer Information
```
Customers/
├── customers.json                 # Customer profiles
└── Customertickets.json           # Customer ticket bookings
```

### Financial Records
```
Accounts/
├── revenue.json                   # Department revenue tracking
├── airlinesAccount.json           # Company account information
└── airlineTransaction.txt         # Transaction logs
```

### Airplane Management
```
Company/
├── AirplanesFile.json             # Fleet information
├── cargoPlane.json                # Cargo aircraft details
└── AirTaxi_*.json                 # Individual aircraft records

LandedPlanes/
└── LandedPlanes.json              # Landing records

Maintenance/
├── PlaneCosts.json                # Maintenance cost tracking
└── AirTaxi_*_maintenance_record.json  # Individual plane maintenance
```

### Cargo & Delivery
```
cargoCompany/
├── courier.json                   # Courier employee records
└── CargoDepartment.json           # Cargo department information
```

### Attendance & Operations
```
Attendance/
├── *.json                         # Daily attendance per employee
└── isAttendanceMarked.json        # Attendance status tracking

FlightStatus/
└── FlightStatus.json              # Current flight statuses

Records/
├── *_booking_record.json          # Flight booking records
└── *_maintenance_record.json      # Maintenance operation records
```

---

## ⚙️ Prerequisites

- **C++ Compiler**: GCC 7.0 or higher (supports C++17)
- **Operating System**: Linux/Unix (Windows requires WSL or MinGW)
- **Build Tools**: Make utility
- **Libraries**: 
  - Standard C++ Library (STL)
  - POSIX compliance (for file operations)
  - JSON library (nlohmann/json.hpp - included in project)

### System Requirements
- **Minimum RAM**: 512 MB
- **Disk Space**: ~50 MB for compilation and data files
- **Processor**: Any modern processor

---

## 🚀 Building & Running

### Prerequisites Setup

Ensure you have a C++ compiler installed:

```bash
# For Linux (Ubuntu/Debian)
sudo apt-get install build-essential g++ make

# For macOS
xcode-select --install

# For Windows (using WSL)
sudo apt-get install build-essential g++ make
```

### Compilation & Execution

#### 1. **Standard Run** (Full System)
Compiles all modules including airplane components and cargo services:

```bash
make run
```

**Output:**
```
[Compilation Output]
========================================
     AIRLINE MANAGEMENT SYSTEM
========================================
[Interactive Menu Interface]
```

#### 2. **Test Run** (Limited System)
Compiles and runs with basic functionality (excludes full airplane structure):

```bash
make test
```

**Output:**
```
[Compilation Output]
[Test Output]
```

#### 3. **Manual Compilation Only**
Compile for production:

```bash
make compRun
# Produces: r.out
./r.out
```

Compile for testing:

```bash
make compTest
# Produces: a.out
./a.out
```

#### 4. **Clean Build**
Remove all compiled objects and executables:

```bash
make clean
```

---

## 📊 Output & Placeholders

### Console Output

When running the application, you will see:

```
========================================
     AIRLINE MANAGEMENT SYSTEM
========================================

--- MAIN MENU ---
1. Employee Management
2. Customer Services
3. Flight Operations
4. Airplane Management
5. Financial Tracking
6. Cargo Services
7. Attendance & Payroll
8. Exit

Please select an option: _
```

### File Output Placeholders

#### Example: `Employees/pilots.json`
```json
{
  "employees": [
    {
      "id": "P001",
      "firstName": "John",
      "lastName": "Doe",
      "department": "Flight Operations",
      "designation": "Pilot",
      "licenseNumber": "LIC-12345",
      "flightHours": 5000,
      "account": "ACC-001",
      "salary": 150000
    }
  ]
}
```

#### Example: `Flight/tickets.json`
```json
{
  "flights": [
    {
      "flightNumber": "AA101",
      "departure": "New York",
      "destination": "Los Angeles",
      "departureTime": "2024-06-15T08:00:00Z",
      "arrivalTime": "2024-06-15T11:00:00Z",
      "availableSeats": 145,
      "totalSeats": 180
    }
  ],
  "tickets": [
    {
      "ticketID": "T001",
      "flightNumber": "AA101",
      "seatNumber": "12A",
      "seatType": "Standard",
      "price": 299.99,
      "customerID": "C001"
    }
  ]
}
```

#### Example: `Accounts/revenue.json`
```json
{
  "departments": [
    {
      "name": "Flight Operations",
      "accountNumber": "ACC-001",
      "balance": 5000000.00,
      "transactions": [
        {
          "date": "2024-06-13",
          "type": "ticket_sales",
          "amount": 50000.00
        }
      ]
    }
  ],
  "totalRevenue": 5000000.00
}
```

#### Example: `Customers/customers.json`
```json
{
  "customers": [
    {
      "customerID": "C001",
      "firstName": "Jane",
      "lastName": "Smith",
      "email": "jane.smith@email.com",
      "phone": "+1-555-0123",
      "bookingHistory": ["T001", "T002"]
    }
  ]
}
```

---

## 💻 Usage Guide

### Starting the Application

```bash
make run
```

### Navigation

1. **Main Menu**: Select from numbered options (1-8)
2. **Submenus**: Follow on-screen prompts for specific operations
3. **Input Validation**: System validates all user inputs
4. **Error Handling**: Clear error messages for invalid operations

### Common Operations

#### Adding an Employee
```
[Menu] → Employee Management → Add Employee
→ Enter details (ID, Name, Department, etc.)
→ Employee added to employees.json
```

#### Booking a Ticket
```
[Menu] → Customer Services → Book Ticket
→ Select Flight → Choose Seat → Confirm Booking
→ Ticket saved to tickets.json
```

#### Scheduling Maintenance
```
[Menu] → Airplane Management → Schedule Maintenance
→ Select Aircraft → Enter maintenance details
→ Record saved to maintenance_record.json
```

#### Tracking Revenue
```
[Menu] → Financial Tracking → View Revenue
→ Select Department → View transactions
→ Revenue displayed from revenue.json
```

### Data Persistence

All data is automatically saved to JSON files in their respective directories:
- Employee data persists between sessions
- Flight bookings are permanently recorded
- Financial transactions are logged
- Maintenance records are maintained

---

## 🔧 Project Structure Summary

```
.
├── Employees/              # Employee types and management
├── Flight/                 # Flight and ticketing system
├── Airplane/               # Aircraft components
├── Departments/            # Organizational departments
├── Customers/              # Customer management
├── Accounts/               # Financial management
├── Attendance/             # Attendance tracking
├── Salary/                 # Salary management
├── cargoCompany/           # Cargo and courier services
├── Users/                  # User authentication
├── ErrorHandler/           # Error handling
├── Company/                # Company organization
├── Records/                # Transaction records
├── FlightStatus/           # Flight status tracking
├── LandedPlanes/           # Landing records
├── Airlines.h/.cpp         # Main coordinator
├── Menu.h/.cpp             # User interface
├── main.cpp                # Application entry point
└── Makefile                # Build configuration
```

---

## 📝 Notes

- The system uses **JSON** for all data persistence
- All compiled executables are named `r.out` (production) or `a.out` (test)
- The project follows **C++17** standards
- All paths in Account.h should be updated to your local system path
- The system is designed for educational purposes demonstrating OOP principles

---

## 👥 Contributors

This project is part of the 2024 Spring SE102TB Object-Oriented Programming Course (Group E)

---

## 📄 License

This is an academic project. Usage is restricted to educational purposes.

---

## 🆘 Troubleshooting

### Compilation Errors
```bash
# If you get "file not found" errors:
make clean
make run

# If g++ is not found:
sudo apt-get install g++
```

### File Path Errors
- Update file paths in `Accounts/Account.h` to match your system
- Ensure JSON files exist in their respective directories

### Permission Errors
```bash
# Grant execute permission
chmod +x r.out a.out
./r.out
```

---

**Last Updated**: June 2024
**Version**: 1.0
