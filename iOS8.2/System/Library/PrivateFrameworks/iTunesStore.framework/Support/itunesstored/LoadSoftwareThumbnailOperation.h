/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSURL;

@interface LoadSoftwareThumbnailOperation : ISOperation {

	NSString* _bundleID;
	long long _downloadID;
	char _storeDownload;
	NSURL* _thumbnailURL;

}

@property (getter=isStoreDownload) char storeDownload; 
-(char)isStoreDownload;
-(id)initWithBundleIdentifier:(id)arg1 downloadIdentifier:(long long)arg2 thumbnailURL:(id)arg3 ;
-(id)_artworkDataWithError:(id*)arg1 ;
-(void)setStoreDownload:(char)arg1 ;
-(void)run;
@end

