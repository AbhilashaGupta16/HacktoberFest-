create table Stationery(
  S_Id int(4),
  SName varchar(15),
  Company varchar(3),
  Price int(2)
  );
  
insert into Stationery values(1091,'Dot Pen','ABC',12);
insert into Stationery values(7654,'Pencil','XYZ',8);
insert into Stationery values(8769,'Eraser','CDM',9);
insert into Stationery values(2313,'Pencil','CAM',10);
insert into Stationery values(8933,'Gel Pen','XYZ',17);

select * from Stationery;
UPDATE Stationery SET Price = Price + 5;
select * from Stationery;