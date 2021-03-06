/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSDictionary, HSCloudItemIDList;

@interface SagaUpdatePlaylistOperation : CloudLibraryOperation {

	unsigned long long _playlistPersistentID;
	NSDictionary* _properties;
	HSCloudItemIDList* _trackList;

}
-(id)initWithPlaylistPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPersistent;
-(void)main;
@end

