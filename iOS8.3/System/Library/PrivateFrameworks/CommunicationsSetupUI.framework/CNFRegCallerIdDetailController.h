/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:07:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class CNFRegController;

@interface CNFRegCallerIdDetailController : PSListItemsController {

	CNFRegController* _regController;

}

@property (nonatomic,retain,readonly) CNFRegController * regController;              //@synthesize regController=_regController - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(CNFRegController *)regController;
-(id)initWithRegController:(id)arg1 ;
-(void)_setupAccountHandlers;
-(void)reloadCallerIdValues;
@end

