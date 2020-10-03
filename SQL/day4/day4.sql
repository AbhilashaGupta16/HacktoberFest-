CREATE TABLE Pincode (
    Village varchar(20),
    Pincode int(6),
    Population Int(4)
  );

insert into Pincode Values('Ghazipur', 110089, 200);
insert into Pincode Values('Aligarh', 138066, 400);
insert into Pincode Values('Mirzapur', 139976, 300);
insert into Pincode Values('Rehmabad', 198754, 450);
insert into Pincode Values('Seemapur', 135654, 1025);
insert into Pincode Values('Muzaffarbad', 138909, 925);
insert into Pincode Values('Tunapur', 163772, 1300);
insert into Pincode Values('Hoshabad', 153772, 300);
insert into Pincode Values('Dinabad', 114076, 900);

select * from Pincode where pincode like '13%' and population<=1000;