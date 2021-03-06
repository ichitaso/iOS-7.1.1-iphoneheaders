/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PHStarkTelephonyStateMonitorDelegate;
@interface PHStarkTelephonyStateMonitor : NSObject {

	<PHStarkTelephonyStateMonitorDelegate>* _delegate;
	int _state;

}

@property (assign) <PHStarkTelephonyStateMonitorDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int state;                                            //@synthesize state=_state - In the implementation block
-(void)stopMonitoringTelephonyState;
-(void)_phoneApplicationDisplayedCallsChangedNotification:(id)arg1 ;
-(void)startMonitoringTelephonyState;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)currentState;
@end

