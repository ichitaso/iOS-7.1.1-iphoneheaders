/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSURL, SALocation, NSString;

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (nonatomic,copy) NSURL * contactIdentifier; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * timing; 
+(id)locationTrigger;
+(id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(id)encodedClassName;
-(NSURL *)contactIdentifier;
-(void)setContactIdentifier:(NSURL *)arg1 ;
-(NSString *)timing;
-(void)setTiming:(NSString *)arg1 ;
@end

