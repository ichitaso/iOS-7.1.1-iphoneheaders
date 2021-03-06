/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeperClient/StoreBookkeeperClient-Structs.h>
#import <StoreBookkeeperClient/NSCopying.h>
#import <StoreBookkeeperClient/NSSecureCoding.h>

@class SBCPlaybackPositionDomain, NSString;

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding> {

	char _hasBeenPlayed;
	SBCPlaybackPositionDomain* _playbackPositionDomain;
	NSString* _ubiquitousIdentifier;
	unsigned _userPlayCount;
	long long _foreignDatabaseEntityID;
	double _bookmarkTimestamp;
	double _bookmarkTime;

}

@property (nonatomic,readonly) SBCPlaybackPositionDomain * playbackPositionDomain;              //@synthesize playbackPositionDomain=_playbackPositionDomain - In the implementation block
@property (nonatomic,readonly) NSString * ubiquitousIdentifier;                                 //@synthesize ubiquitousIdentifier=_ubiquitousIdentifier - In the implementation block
@property (nonatomic,readonly) long long foreignDatabaseEntityID;                               //@synthesize foreignDatabaseEntityID=_foreignDatabaseEntityID - In the implementation block
@property (assign,nonatomic) double bookmarkTimestamp;                                          //@synthesize bookmarkTimestamp=_bookmarkTimestamp - In the implementation block
@property (assign,nonatomic) double bookmarkTime;                                               //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign,nonatomic) unsigned userPlayCount;                                            //@synthesize userPlayCount=_userPlayCount - In the implementation block
@property (assign,nonatomic) char hasBeenPlayed;                                                //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
+(char)supportsSecureCoding;
+(id)ubiquitousIdentifierWithUniqueStoreID:(long long)arg1 ;
+(id)ubiquitousIdentifierWithItemTitle:(id)arg1 albumName:(id)arg2 itemArtistName:(id)arg3 ;
+(id)ubiquitousIdentifierWithPodcastFeedURL:(id)arg1 feedGUID:(id)arg2 ;
+(id)ubiquitousIdentifierWithiTunesUFeedURL:(id)arg1 feedGUID:(id)arg2 ;
-(double)bookmarkTime;
-(char)hasBeenPlayed;
-(void)setHasBeenPlayed:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(SBCPlaybackPositionDomain *)playbackPositionDomain;
-(id)initWithPlaybackPositionDomain:(id)arg1 ubiquitousIdentifier:(id)arg2 foreignDatabaseEntityID:(long long)arg3 ;
-(void)setBookmarkTimestamp:(double)arg1 ;
-(void)setUserPlayCount:(unsigned)arg1 ;
-(double)bookmarkTimestamp;
-(unsigned)userPlayCount;
-(NSString *)ubiquitousIdentifier;
-(id)SBKUniversalPlaybackPositionMetadata;
-(id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)arg1 ;
-(long long)foreignDatabaseEntityID;
@end

