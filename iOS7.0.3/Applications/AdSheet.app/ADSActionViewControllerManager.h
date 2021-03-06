/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ADSActionViewControllerManager : NSObject {

	NSMutableDictionary* _pendingAdSpaceControllers;

}

@property (nonatomic,retain) NSMutableDictionary * pendingAdSpaceControllers;              //@synthesize pendingAdSpaceControllers=_pendingAdSpaceControllers - In the implementation block
+(id)sharedManager;
-(id)pendingAdSpaceControllers;
-(void)_checkForTimedOutRequests;
-(void)_requestActionViewControllerForAdSpaceController:(id)arg1 ;
-(void)_actionViewController:(id)arg1 readyForControllerIdentifier:(id)arg2 ;
-(void)_cancelRequestForActionViewControllerForAdSpaceController:(id)arg1 ;
-(void)setPendingAdSpaceControllers:(id)arg1 ;
-(id)init;
@end

