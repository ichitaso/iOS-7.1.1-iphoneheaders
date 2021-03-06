/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCExtendedGamepad.h>

@class NSData;

@interface GCExtendedGamepadSnapshot : GCExtendedGamepad {

	NSData* snapshotData;

}

@property (copy) NSData * snapshotData; 
+(id)allocWithZone:(NSZone)arg1 ;
-(void)setSnapshotData:(id)arg1 ;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(id)snapshotData;
-(id)initWithSnapshotData:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end

