/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class BRCDatabaseManager, NSObject;

@interface BRCStagePersistedState : NSObject <NSSecureCoding> {

	long _latestGCStartTime;
	BRCDatabaseManager* _dbManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(char)supportsSecureCoding;
+(id)loadFromClientStateInDBManager:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)timeSinceLatestGCStartTime;
-(void)setLatestGCStartTime:(long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

