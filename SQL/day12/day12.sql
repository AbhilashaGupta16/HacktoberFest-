CREATE TABLE Fees (
  	AdmNo int(3),
  	Name varchar (20),
  	Class int(2),
  	Fees varchar(10)
  );

insert into Fees Values(101, 'Hemant', 4, 'Paid');
insert into Fees Values(432, 'Mahira', 5, 'Paid');
insert into Fees Values(342, 'Rashmita', 1, 'Not Paid');
insert into Fees Values(561, 'Sonalika', 1, 'Paid');
insert into Fees Values(100, 'Aishwarya', 5, 'Paid');
insert into Fees Values(677, 'Bharat', 7, 'Not Paid');
insert into Fees Values(980, 'Daksh', 7, 'Paid');
insert into Fees Values(8, 'Priyanka', 5, 'Paid');
insert into Fees Values(866, 'Anushree', 9, 'Paid');
insert into Fees Values(343, 'Chandrika', 3, 'Paid');
insert into Fees Values(775, 'Debonika', 2, 'Not Paid');

select * from Fees where Fees='Paid' order by Name ASC;
