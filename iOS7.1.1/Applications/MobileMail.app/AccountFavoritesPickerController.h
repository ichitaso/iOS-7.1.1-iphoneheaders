/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MailboxListViewControllerBase.h>
#import <MobileMail/MailboxUtilsClient.h>

@protocol AccountFavoritesPickerControllerDelegate;
@interface AccountFavoritesPickerController : MailboxListViewControllerBase <MailboxUtilsClient> {

	<AccountFavoritesPickerControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <AccountFavoritesPickerControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(int)tableViewStyle;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(BOOL)shouldHideInbox;
-(BOOL)shouldHideNotesForAccount:(id)arg1 ;
-(id)mailboxForIndexPath:(id)arg1 ;
-(id)_ntsMailboxesForAccount:(id)arg1 ;
-(id)indexPathForMailbox:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
@end
