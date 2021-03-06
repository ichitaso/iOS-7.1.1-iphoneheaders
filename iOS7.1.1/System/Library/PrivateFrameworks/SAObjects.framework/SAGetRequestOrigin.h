/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (nonatomic,copy) NSNumber * maxAge; 
@property (nonatomic,copy) NSNumber * searchTimeout; 
+(id)getRequestOrigin;
+(id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)desiredAccuracy;
-(id)groupIdentifier;
-(id)searchTimeout;
-(void)setDesiredAccuracy:(id)arg1 ;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)maxAge;
-(void)setMaxAge:(id)arg1 ;
-(void)setSearchTimeout:(id)arg1 ;
@end

