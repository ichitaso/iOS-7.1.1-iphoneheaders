/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class PSListController, PSSpecifier, NSMutableArray, NSArray;

@interface PSExpandableListGroupController : NSObject {

	PSListController* _listController;
	PSSpecifier* _groupSpecifier;
	int _collaspeAfterCount;
	NSMutableArray* _specifiers;
	BOOL _showAll;
	PSSpecifier* _showAllSpecifier;
	PSSpecifier* _spinnerSpecifier;

}

@property (readonly) NSArray * specifiers; 
-(void)dealloc;
-(void)reloadSpecifier:(id)arg1 ;
-(id)specifiers;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 collapseAfterCount:(int)arg3 ;
-(int)_groupIndex;
-(id)showAllSpecifier;
-(id)spinnerSpecifier;
-(void)showAll;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)addSpecifiers:(id)arg1 ;
-(void)removeAllSpecifiers;
@end

