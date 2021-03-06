/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class NSError;

@interface SBSoftwareUpdateUnableToInstallAlertItem : SBBaseSoftwareUpdateAlertItem {

	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)buildUnavailableSheet;
-(void)buildDefaultSheetWithBody:(id)arg1 isLocked:(char)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(char)undimsScreen;
-(char)reappearsAfterLock;
@end

