/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>
#import <Maps/ExtendedTableViewDelegate.h>
#import <Maps/StarkTableViewDelegate.h>

@class UIView, NSString;

@interface StarkTableViewController : UITableViewController <ExtendedTableViewDelegate, StarkTableViewDelegate> {

	char _hasIdiom;
	int _idiom;
	UIView* _lastDisplayedNoContentView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)insetsToAvoidStatusBarOnStarkScreenForTable:(id)arg1 ;
-(void)extendedTableViewDataSourceContentDidChange:(id)arg1 ;
-(void)updateNoContentViewVisibility;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)noContentView;
@end

