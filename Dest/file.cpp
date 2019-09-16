# This is for smaple git code
Version php/fpm:1.0
Maintainer Abhinash
Hosts :All
 tasks:
   - name : install nginx latest version
     apt : get install
	 
  service:
     state : No restart
  Ports :
     "8080 : 80"
	 