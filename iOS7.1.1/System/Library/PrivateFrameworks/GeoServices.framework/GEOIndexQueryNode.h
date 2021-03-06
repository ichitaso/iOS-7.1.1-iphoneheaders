/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOIndexQueryNode : PBCodable <NSCopying> {

	NSString* _field;
	NSMutableArray* _operands;
	int _type;
	NSString* _value;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) bool hasField; 
@property (nonatomic,retain) NSString * field;                       //@synthesize field=_field - In the implementation block
@property (nonatomic,readonly) bool hasValue; 
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * operands;              //@synthesize operands=_operands - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)dictionaryRepresentation;
-(void)setField:(id)arg1 ;
-(bool)hasField;
-(id)field;
-(void)setOperands:(id)arg1 ;
-(void)addOperands:(id)arg1 ;
-(unsigned long long)operandsCount;
-(void)clearOperands;
-(id)operandsAtIndex:(unsigned long long)arg1 ;
-(id)operands;
-(bool)readFrom:(id)arg1 ;
-(bool)hasValue;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

