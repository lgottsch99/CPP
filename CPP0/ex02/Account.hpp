// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {

//info about SINGLE account
/*
static vars in CLASSES are SHARED BETWEEN ALL OBJECTS of the class!
*/
public:

	typedef Account		t;

	static int	getNbAccounts( void ); //OK
	static int	getTotalAmount( void );//OK
	static int	getNbDeposits( void );//OK
	static int	getNbWithdrawals( void );//OK
	static void	displayAccountsInfos( void ); //OK

	Account( int initial_deposit ); //OK
	~Account( void );

	void	makeDeposit( int deposit ); //OK
	bool	makeWithdrawal( int withdrawal ); //OK
	int		checkAmount( void ) const; //OK
	void	displayStatus( void ) const; //OK


private:

	static int	_nbAccounts; //OK
	static int	_totalAmount; //OK
	static int	_totalNbDeposits; //OK
	static int	_totalNbWithdrawals; //OK

	static void	_displayTimestamp( void ); //OK

	int				_accountIndex; //OK
	int				_amount; //OK
	int				_nbDeposits; //OK
	int				_nbWithdrawals; //OK

	Account( void ); //disabling public use of constructor WITHOUT amount value

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
