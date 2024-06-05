create database BCA_7;
use BCA_7;
-- Table to store information about patients
CREATE TABLE Patients (
    patient_id INT PRIMARY KEY,
    name VARCHAR(100),
    dob DATE,
    gender CHAR(1),
    address VARCHAR(255),
    phone VARCHAR(20)
);

-- Table to store information about doctors
CREATE TABLE Doctors (
    doctor_id INT PRIMARY KEY,
    name VARCHAR(100),
    specialization VARCHAR(100),
    phone VARCHAR(20)
);

-- Table to store appointments
CREATE TABLE Appointments (
    appointment_id INT PRIMARY KEY,
    patient_id INT,
    doctor_id INT,
    appointment_date DATE,
    appointment_time TIME,
    FOREIGN KEY (patient_id) REFERENCES Patients(patient_id),
    FOREIGN KEY (doctor_id) REFERENCES Doctors(doctor_id)
);
-- Insert some sample patients
INSERT INTO Patients (patient_id, name, dob, gender, address, phone) 
VALUES 
(1, 'John Doe', '1990-05-15', 'M', '123 Main St, Anytown, USA', '555-1234'),
(2, 'Jane Smith', '1985-10-20', 'F', '456 Elm St, Anytown, USA', '555-5678');

-- Insert some sample doctors
INSERT INTO Doctors (doctor_id, name, specialization, phone) 
VALUES 
(1, 'Dr. Smith', 'Cardiologist', '555-4321'),
(2, 'Dr. Johnson', 'Pediatrician', '555-8765');

-- Insert some sample appointments
INSERT INTO Appointments (appointment_id, patient_id, doctor_id, appointment_date, appointment_time) 
VALUES 
(1, 1, 1, '2024-06-10', '10:00:00'),
(2, 2, 2, '2024-06-12', '11:00:00');

select * from Patients;
