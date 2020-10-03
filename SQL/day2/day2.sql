CREATE TABLE STORE (
    SNo varchar(3),
    SName varchar(30),
    Area varchar(20),
    Distance Int(2)
  );

insert into STORE values('S01', 'ABC Computronics', 'GK II',50);
insert into STORE values('S02', 'All Infotech Media', 'CP',40);
insert into STORE values('S03', 'Tech Shoppe', 'Nehru Place',35);
insert into STORE values('S04', 'Geeks Techno Soft', 'Nehru Place',25);
insert into STORE values('S05', 'Hitech Tech Store', 'CP',30);
insert into STORE values('S06', 'Gaffar Market', 'Karol Bagh',20);
insert into STORE values('S07', 'Technovolt Store', 'CP',10);


Select SNo,SName, min(Distance) as Distance from STORE where Area='CP'; 