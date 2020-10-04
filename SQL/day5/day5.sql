CREATE TABLE Employee (
    EmployeeId varchar(10),
    Name varchar(15)
  );

insert into Employee Values('101-A', 'Sheldon');
insert into Employee Values('102-A', 'Leonard');
insert into Employee Values('103-A', 'Lian');
insert into Employee Values('104-A', 'Ian');
insert into Employee Values('105-A', 'Paul');
insert into Employee Values('106-A', 'Lucifer');

Select * from Employee where name like 'L%';
select * from Employee where name like '____';