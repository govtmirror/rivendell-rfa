// cae_socket.h
//
// The Core Audio Engine component of Rivendell
//
//   (C) Copyright 2002 Fred Gleason <fredg@paravelsystems.com>
//
//      $Id: cae_socket.h,v 1.5 2007/09/14 14:06:23 fredg Exp $
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public
//   License along with this program; if not, write to the Free Software
//   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#ifndef SOCKET_H
#define SOCKET_H

#include <qobject.h>
#include <qstring.h>
#include <qserversocket.h>
#include <qhostaddress.h>


class CaeSocket : public QServerSocket
{
  Q_OBJECT
  public:
   CaeSocket(Q_UINT16 port,int backlog=0,QObject *parent=0,
	     const char *name=0);
   CaeSocket(const QHostAddress &address,Q_UINT16 port,int backlog=0,
	     QObject *parent=0,const char *name=0);
   void newConnection(int socket);

  signals:
   void connection(int);

  private:
   QServerSocket *socket;
};


#endif 
