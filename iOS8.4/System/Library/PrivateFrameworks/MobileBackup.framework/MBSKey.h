/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface MBSKey : PBCodable {

	NSData* _keyData;
	unsigned _keyID;
	SCD_Struct_MB4 _has;

}

@property (assign,nonatomic) BOOL hasKeyID; 
@property (assign,nonatomic) unsigned keyID;                 //@synthesize keyID=_keyID - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyData; 
@property (nonatomic,retain) NSData * keyData;               //@synthesize keyData=_keyData - In the implementation block
-(BOOL)hasKeyID;
-(void)setHasKeyID:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setKeyData:(NSData *)arg1 ;
-(BOOL)hasKeyData;
-(NSData *)keyData;
-(unsigned)keyID;
-(void)setKeyID:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

