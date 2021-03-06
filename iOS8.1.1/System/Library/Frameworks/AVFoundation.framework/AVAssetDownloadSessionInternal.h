/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject, NSError, NSURL, NSNumber;

@interface AVAssetDownloadSessionInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef player;
	OpaqueFigPlaybackItemRef playbackItem;
	OpaqueFigAssetRef asset;
	NSObject*<OS_dispatch_queue> readWriteQueue;
	long long status;
	NSError* error;
	long long priority;
	NSURL* URL;
	NSURL* destinationURL;
	unsigned long long downloadToken;
	NSNumber* cachePrimingDownloadTokenNum;

}
@end

