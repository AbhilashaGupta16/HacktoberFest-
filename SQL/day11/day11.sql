create table users(
  id int(3),
  name varchar(20),
  age int(2)
  );

insert into users values(101,'John', 24);
insert into users values(102,'Alex', 35);
insert into users values(103,'Justin',18);

ALTER TABLE users ADD PRIMARY KEY(id);
ALTER TABLE Persons AUTO_INCREMENT=100;


create table users5
(
  id integer,
  name varchar2(20),
  age integer
);

insert into users5 values(101,'John', 24);
insert into users5 values(102,'Alex', 35);
insert into users5 values(103,'Justin',18);

select *
from users5;

alter table users5 add primary key(id);

Create sequence id start with= 104;