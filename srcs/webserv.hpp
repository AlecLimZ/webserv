/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   webserv.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:41:34 by steh              #+#    #+#             */
/*   Updated: 2023/03/12 15:30:59 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEB_SERVER_HPP
# define WEB_SERVER_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <vector>

using namespace std;
#define buffer_size 300000

#include "config.hpp"
#include "socket.hpp"
#include "server.hpp"
#include "logger.hpp"


#endif