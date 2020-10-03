create table Grades(
  RollNo int(3),
  Name varchar(10),
  Section int(1),
  Grade varchar(1)
  );
  
insert into Grades VALUES(101, 'Thomas',3,'A');
insert into Grades values(121, 'Valerie',6,'D');
insert into Grades values(234, 'Phoebe',2,'C');
insert into Grades values(676, 'Chandler',5,'A');
insert into Grades values(333, 'Joey',3,'B');
insert into Grades values(123, 'Rachel',2,'F');
insert into Grades values(777, 'Monica',1,'A');
insert into Grades values(898, 'Ross',4,'F');

select * from Grades;
select * from Grades WHERE Grade not in ('F');
