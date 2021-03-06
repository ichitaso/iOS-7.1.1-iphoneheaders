/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying> {

	SCD_Struct_GE66* _muids;
	int _resultProviderId;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                         //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (nonatomic,readonly) unsigned long long muidsCount; 
@property (nonatomic,readonly) unsigned long long* muids; 
-(id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(int)resultProviderId;
-(unsigned long long)muidsCount;
-(void)clearMuids;
-(unsigned long long)muidAtIndex:(unsigned long long)arg1 ;
-(void)addMuid:(unsigned long long)arg1 ;
-(unsigned long long*)muids;
-(void)setMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

