#Save the whoami command in the search variable 
search=`whoami`
#perform an ldap search (use -x to use simple auth instead of SASL), use grep to narrow down the return results to dn, then cut the dn: name key out of the results. This should return only the value of the designated name. 
ldapsearch -x "(uid=$search)" dn | grep '^dn:' | cut -c5-999
