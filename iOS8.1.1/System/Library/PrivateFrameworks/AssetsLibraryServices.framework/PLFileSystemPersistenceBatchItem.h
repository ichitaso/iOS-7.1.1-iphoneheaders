/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface PLFileSystemPersistenceBatchItem : NSObject {

	NSURL* fileURL;
	NSMutableDictionary* attributes;

}

@property (nonatomic,retain) NSURL * fileURL; 
@property (nonatomic,retain) NSMutableDictionary * attributes; 
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)persist;
-(void)setUUIDString:(id)arg1 forKey:(id)arg2 ;
-(void)setUInt16:(unsigned short)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
@end

