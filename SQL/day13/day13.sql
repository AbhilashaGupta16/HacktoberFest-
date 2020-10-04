Create table A(
  id int(1),
  first_name varchar(10),
  last_name varchar(10)
  );
  
Create table B(
  id2 int(1),
  age int(2),
  place varchar(10)
  );

insert into A values(1,'Arun','Prasanth');
insert into A values(2,'Ann','Antony');
insert into A values(3,'Shruti','ABC');
insert into A values(6,'New','ABC');
insert into B values(1,24,'Kerala');
insert into B values(2,24,'USA');
insert into B values(3,25,'EKM');
insert into B values(6,24,'Chennai');

select * from A;
select * from B;

SELECT * FROM A INNER JOIN B ON A.id = B.id2; /*innerjoin*/

insert into A values(5,'Ananya','Gupta'); 
sELECT * FROM A LEFT JOIN B ON A.id = B.id2;	/*leftjoin*