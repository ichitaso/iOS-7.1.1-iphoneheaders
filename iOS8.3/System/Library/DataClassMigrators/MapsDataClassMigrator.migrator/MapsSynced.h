/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:26:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSData;


@protocol MapsSynced <NSObject>
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@optional
-(void)setPosition:(double)arg1;
-(double)position;

@required
-(void)setSyncIdentifier:(id)arg1;
-(char)updateFromSyncData:(id)arg1;
-(NSString *)syncIdentifier;
-(NSData *)syncData;

@end

