/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@class NSDate, EKPersistentCalendarItem;

@interface EKPersistentExceptionDate : EKPersistentObject {

	NSDate* _date;

}

@property (nonatomic,readonly) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
+(id)relations;
+(id)exceptionDateWithDate:(id)arg1 ;
-(id)initWithExceptionDate:(id)arg1 ;
-(int)entityType;
-(unsigned long long)hash;
-(id)description;
-(id)date;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end

