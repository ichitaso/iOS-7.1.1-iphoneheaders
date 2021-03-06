/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUReportingTrackPlaybackEvent.h>

@class NSData;

@interface MPUReportingTimedMetadataEvent : MPUReportingTrackPlaybackEvent {

	double _timestamp;
	NSData* _timedMetadata;

}

@property (assign,nonatomic) double timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSData * timedMetadata;              //@synthesize timedMetadata=_timedMetadata - In the implementation block
-(NSData *)timedMetadata;
-(double)timestamp;
-(BOOL)isValid;
-(void)setTimestamp:(double)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
@end

