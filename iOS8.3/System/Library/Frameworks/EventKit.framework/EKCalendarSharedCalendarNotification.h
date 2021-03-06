/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:28 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {

	int _sharingInvitationResponse;
	unsigned _allowedEntityTypes;

}

@property (assign,nonatomic) int sharingInvitationResponse;              //@synthesize sharingInvitationResponse=_sharingInvitationResponse - In the implementation block
@property (assign,nonatomic) unsigned allowedEntityTypes;                //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(unsigned)allowedEntityTypes;
-(id)calendarFromEventStore:(id)arg1 ;
-(void)setAllowedEntityTypes:(unsigned)arg1 ;
-(void)setSharingInvitationResponse:(int)arg1 ;
-(int)sharingInvitationResponse;
-(id)initWithType:(int)arg1 ;
@end

