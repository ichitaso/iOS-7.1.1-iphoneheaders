/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ML3ArtistData : NSObject {

	unsigned char _section;
	unsigned char _seriesSection;
	NSString* _sortArtist;
	NSString* _sortSeries;
	long long _artistPID;
	long long _storeID;
	long long _order;
	long long _seriesOrder;

}

@property (assign,nonatomic) long long artistPID;                      //@synthesize artistPID=_artistPID - In the implementation block
@property (nonatomic,retain) NSString * sortArtist;                    //@synthesize sortArtist=_sortArtist - In the implementation block
@property (nonatomic,retain) NSString * sortSeries;                    //@synthesize sortSeries=_sortSeries - In the implementation block
@property (assign,nonatomic) long long storeID;                        //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic) long long order;                          //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) unsigned char section;                    //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) long long seriesOrder;                    //@synthesize seriesOrder=_seriesOrder - In the implementation block
@property (assign,nonatomic) unsigned char seriesSection;              //@synthesize seriesSection=_seriesSection - In the implementation block
-(unsigned char)section;
-(void)setOrder:(long long)arg1 ;
-(long long)order;
-(void)setSection:(unsigned char)arg1 ;
-(long long)artistPID;
-(long long)seriesOrder;
-(unsigned char)seriesSection;
-(long long)storeID;
-(void)setStoreID:(long long)arg1 ;
-(id)initWithArtistPID:(long long)arg1 sortArtist:(id)arg2 sortSeries:(id)arg3 storeID:(long long)arg4 order:(long long)arg5 section:(unsigned char)arg6 seriesOrder:(long long)arg7 seriesSection:(unsigned char)arg8 ;
-(void)setArtistPID:(long long)arg1 ;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
-(NSString *)sortSeries;
-(void)setSortSeries:(NSString *)arg1 ;
-(void)setSeriesOrder:(long long)arg1 ;
-(void)setSeriesSection:(unsigned char)arg1 ;
@end

