#!/bin/sh

#Start httpd
sudo systemctl enable httpd
sudo systemctl restart httpd
#start mysql
sudo systemctl enable mysqld
sudo systemctl start mysqld
