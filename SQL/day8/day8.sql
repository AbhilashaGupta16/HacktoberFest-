CREATE TABLE Bill (
  	ItemNo int (2),
  	ItemName varchar (20),
  	Quantity int (1),
  	Price int(7,4)
  );

insert into Bill Values(1,'Gel Pen',5, 25.25);
insert into Bill Values(2,'Pendrive 16GB',1, 550.25);
insert into Bill Values(3,'Raymond Shirt Red',2, 750);
insert into Bill Values(4,'Baby Top',3, 162.5625);
insert into Bill Values(5,'Shampoo',2, 187.5);
insert into Bill Values(6,'Toiletries',3, 150);
insert into Bill Values(7,'Fabric Softner',2, 200);
insert into Bill Values(8,'Dishwasher Salt',1, 25);
insert into Bill Values(9,'Whole Wheat Bread',2, 30);
insert into Bill Values(10,'Cereal(High Fibre)',1, 20.225);
insert into Bill Values(11,'Olive Oil',3, 20.6);
insert into Bill Values(12,'Coconut Oil',2, 60.38);

Alter table bill add Total_Price int(10,5);
UPDATE Bill SET Total_Price = Quantity*Price;

Select * from bill;