/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSData, NSString;

@interface INFamilyPushDetailsResponse : AAResponse {

	NSDictionary* _responseParameters;
	NSData* _responseData;

}

@property (nonatomic,readonly) BOOL showMessage; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * inviteCode; 
@property (nonatomic,readonly) NSString * organizerFirstName; 
@property (nonatomic,readonly) NSString * organizerLastName; 
@property (nonatomic,readonly) NSString * organizerEmail; 
@property (nonatomic,readonly) NSString * childFirstName; 
@property (nonatomic,readonly) NSString * childLastName; 
-(BOOL)showMessage;
-(id)description;
-(NSString *)title;
-(NSString *)message;
-(NSString *)organizerFirstName;
-(NSString *)organizerLastName;
-(NSString *)childFirstName;
-(NSString *)childLastName;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)inviteCode;
-(NSString *)organizerEmail;
@end

