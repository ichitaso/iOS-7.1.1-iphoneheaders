/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Nike/Nike-Structs.h>
#import <Nike/STRootViewController.h>

@class STTableView, UIView;

@interface STListController : STRootViewController {

	STTableView* _tableView;
	UIView* _tableFooterView;
	struct {
		unsigned registeredForOnScreenNotifications : 1;
	}  _listFlagsBitfields;

}
+(Class)tableViewCellClass;
-(void)_unregisterForOnScreenNotificationsIfNecessary;
-(void)registerForOnScreenNotifications;
-(void)unregisterForOnScreenNotifications;
-(void)_registerForOnScreenNotificationsIfNecessary;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

