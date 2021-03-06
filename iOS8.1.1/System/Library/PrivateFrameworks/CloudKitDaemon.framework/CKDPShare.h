/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, NSString, NSMutableArray, CKDPShareIdentifier;

@interface CKDPShare : PBCodable <NSCopying> {

	NSData* _keyData;
	NSString* _keyVersion;
	NSMutableArray* _participants;
	NSData* _resource;
	NSString* _resourceProvider;
	int _resourceState;
	CKDPShareIdentifier* _shareId;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;              //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) BOOL hasResourceProvider; 
@property (nonatomic,retain) NSString * resourceProvider;                //@synthesize resourceProvider=_resourceProvider - In the implementation block
@property (nonatomic,readonly) BOOL hasResource; 
@property (nonatomic,retain) NSData * resource;                          //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) BOOL hasResourceState; 
@property (assign,nonatomic) int resourceState;                          //@synthesize resourceState=_resourceState - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyVersion; 
@property (nonatomic,retain) NSString * keyVersion;                      //@synthesize keyVersion=_keyVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyData; 
@property (nonatomic,retain) NSData * keyData;                           //@synthesize keyData=_keyData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addParticipant:(id)arg1 ;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(unsigned long long)participantsCount;
-(void)clearParticipants;
-(id)participantAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(NSMutableArray *)participants;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(void)setKeyData:(NSData *)arg1 ;
-(BOOL)hasKeyData;
-(NSData *)keyData;
-(void)setResourceProvider:(NSString *)arg1 ;
-(void)setKeyVersion:(NSString *)arg1 ;
-(BOOL)hasResourceProvider;
-(BOOL)hasResource;
-(void)setResourceState:(int)arg1 ;
-(void)setHasResourceState:(BOOL)arg1 ;
-(BOOL)hasResourceState;
-(BOOL)hasKeyVersion;
-(NSString *)resourceProvider;
-(int)resourceState;
-(NSString *)keyVersion;
-(NSData *)resource;
-(void)setResource:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

