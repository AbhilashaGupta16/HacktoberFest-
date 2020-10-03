CREATE TABLE EmployeePosition (
  	EmpID int(2),
  	EmpPosition	varchar (20),
  	DateOfjoining varchar(10),
  	Salary int (6)
  );

insert into EmployeePosition Values(1,'Manager', '01/05/2019', 500000);
insert into EmployeePosition Values(2,'Executive', '02/05/2019', 75000);
insert into EmployeePosition Values(3,'Manager', '01/05/2019', 90000);
insert into EmployeePosition Values(2,'Lead', '02/05/2019', 85000);
insert into EmployeePosition Values(1,'Executive', '01/05/2019', 300000);

SELECT salary FROM 
( SELECT DISTINCT salary FROM EmployeePosition ORDER BY salary DESC limit 3) 
ORDER BY salary limit 1;

select salary from
( select salary, dense_rank() over(order by salary desc)r from EmployeePosition) 
where r=3;