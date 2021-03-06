/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdog.h>

@interface FBApplicationWatchdog : BSWatchdog {

	int _type;

}

@property (nonatomic,readonly) int type;              //@synthesize type=_type - In the implementation block
+(id)stringForType:(int)arg1 ;
-(id)description;
-(int)type;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithType:(int)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

