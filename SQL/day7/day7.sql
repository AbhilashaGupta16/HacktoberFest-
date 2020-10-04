CREATE TABLE ProductsPresent (
  	ProductName varchar (20),
  	UnitPrice int (2),
  	UnitsInStock int(2)
  );

insert into ProductsPresent Values('Bottle', 85, 12);
insert into ProductsPresent Values('Tiffin', 70, 17);
insert into ProductsPresent Values('Bat', 90, 16);
insert into ProductsPresent Values('Football', 55, 16);

SELECT ProductName, UnitsInStock from ProductsPresent where UnitPrice>60;