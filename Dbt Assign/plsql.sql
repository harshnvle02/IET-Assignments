/*drop procedure if exists pro1;
delimiter $
create procedure pro1()
begin 
	select 'Hello World' R1;
end $

delimiter ;


drop procedure if exists pro1;
delimiter $
create procedure pro1()
begin
     
   declare x int default 10;
   set @z := 10;
   select x, @z;
end $

delimiter ;


drop procedure if exists pro1;
delimiter $
create procedure pro1(in x int, in y int, out z int)
begin
    
	set z :=  x + y;
	
end $

delimiter ;


drop procedure if exists pro1;
delimiter $
create procedure pro1(in x int)
begin
   if x < 100
     then
     select "good";
   else
     select "Not Good";
   end if;
end $

delimiter ;


drop procedure if exists pro1;
delimiter $
create procedure pro1(in x int)
begin
   if x < 100
     then
     select "good";
   else
     select "Not Good";
   end if;
end $

delimiter ;

/*Write a block to accept values for NUM1 and NUM2 at run time. 
Store the remainder of NUM1 divided by NUM2 in a Sql variable 
called RESULT. Check the contents of RESULT variable for correctness.

drop procedure if exists pro1;
delimeter $
create procedure pro1(in x int)
begin
   declare flag bool default false;
   select true into flag from emp where deptno = x;
   
   if flag = true THEN
     select ename, deptno from emp where deptno = x;
   else 
     select "not found";
   end if;
end $
delimiter ;


   
drop procedure if exists pro1;
delimiter $
create procedure pro1(in x int)
begin 
	declare flag bool default false;
	select distinct true into flag from emp where deptno = x;
	
	
	if flag = true THEN
		select ename, job, deptno from emp where deptno=x;
	ELSE
		select 'Not found';
	end if;
end $
delimiter ;


drop procedure if exists pro1;
delimiter $
create procedure pro1()
begin 
    declare z int default 0;
	
	select count(*)-5 into z from emp;
	
	select empno,ename,job,deptno from emp limit z,5;
end $
delimiter ;


drop procedure if exists pro1;
delimiter $
create procedure pro1()
begin 
       declare exit handler for 1062 select "check deptno" exception;
	   insert into dept(deptno,dept_name) values(51,51);
end $
delimiter ;


drop procedure if exists pro1;
delimiter $
create procedure pro1()
begin 
    
	  create table qq(c1 int , c2 varchar(40));
	 
end $
delimiter ;
*/
drop procedure if exists pro1;
delimiter $
create procedure pro1()
begin 
	
	prepare x from 'select ename, job from emp';
	execute x;

end $
delimiter ;
