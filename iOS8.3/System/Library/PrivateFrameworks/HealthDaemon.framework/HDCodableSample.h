/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:57:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HealthDaemon/NSCopying.h>

@class HDCodableObject;

@interface HDCodableSample : PBCodable <NSCopying> {

	long long _dataType;
	double _endDate;
	double _startDate;
	HDCodableObject* _object;
	SCD_Struct_HD8 _has;

}

@property (nonatomic,readonly) char hasObject; 
@property (nonatomic,retain) HDCodableObject * object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) char hasDataType; 
@property (assign,nonatomic) long long dataType;                    //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) char hasStartDate; 
@property (assign,nonatomic) double startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) char hasEndDate; 
@property (assign,nonatomic) double endDate;                        //@synthesize endDate=_endDate - In the implementation block
-(long long)dataType;
-(void)setDataType:(long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableObject *)object;
-(void)setObject:(HDCodableObject *)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasObject;
-(void)setHasDataType:(char)arg1 ;
-(char)hasDataType;
-(void)setHasStartDate:(char)arg1 ;
-(char)hasStartDate;
-(void)setHasEndDate:(char)arg1 ;
-(char)hasEndDate;
-(id)decodedStartDate;
-(id)decodedEndDate;
-(id)decodedCategoryType;
-(id)decodedQuantityType;
-(id)decodedWorkoutType;
-(id)decodedCorrelationType;
-(id)_decodedObjectTypeOfClass:(Class)arg1 ;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)startDate;
-(double)endDate;
@end

