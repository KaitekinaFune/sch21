FROM debian:buster

# Updating Software Packages
RUN apt-get update
RUN apt-get upgrade -y

# Installing wget
RUN apt-get -y install wget

# Installing nginx
RUN apt-get -y install nginx
RUN rm -f /etc/nginx/sites-enabled/default

COPY ./srcs/nginx-conf /etc/nginx/sites-enabled/default

# MariaDB/MySQL
RUN apt-get -y install mariadb-server

# php
RUN apt-get -y install php7.3 php-mysql php-fpm php-pdo php-gd php-cli php-mbstring

# Installing phpMyAdmin via wget
WORKDIR /var/www/html/
RUN wget https://files.phpmyadmin.net/phpMyAdmin/5.0.1/phpMyAdmin-5.0.1-english.tar.gz
RUN tar -xf phpMyAdmin-5.0.1-english.tar.gz && rm -rf phpMyAdmin-5.0.1-english.tar.gz
RUN mv phpMyAdmin-5.0.1-english phpmyadmin

# copying config file to workdir
COPY ./srcs/config.inc.php phpmyadmin

# Installing WordPress
RUN wget https://wordpress.org/latest.tar.gz
RUN tar -xvzf latest.tar.gz && rm -rf latest.tar.gz

# -
COPY ./srcs/wp-config.php /var/www/html

RUN openssl req -x509 -nodes -days 365 -subj "/C=RU/ST=Russia/L=Kazan/OU=21kazan/CN=lflint" -newkey rsa:2048 -keyout /etc/ssl/nginx-selfsigned.key -out /etc/ssl/nginx-selfsigned.crt;

RUN chown -R www-data:www-data *
RUN chmod -R 755 /var/www/*
COPY ./srcs/init.sh ./
CMD bash init.sh