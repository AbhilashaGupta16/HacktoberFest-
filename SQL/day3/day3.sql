CREATE TABLE Student (
    Rollno int(3),
    Name varchar(10),
    Marks int(3),
    Stream varchar(20),
    Dateofbirth date
  );

insert into Student values('101', 'ABC', 98, 'science',"2002-05-09");
insert into Student values('102', 'DEF', 97, 'Commerce',"2001-07-10");
insert into Student values('103', 'GHI', 96, 'humanities',"2000-08-01");

select min(dateofbirth) as eldest from Student; 
select max(dateofbirth)as youngest from Student;