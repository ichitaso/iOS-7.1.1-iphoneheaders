/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IDSRemoteCredential : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _retries;
	BOOL _wantsRetries;

}

@property (assign,nonatomic) BOOL wantsRetries;              //@synthesize wantsRetries=_wantsRetries - In the implementation block
-(BOOL)_disconnect;
-(void)dealloc;
-(BOOL)_connect;
-(void)fetchRemotePasswordForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)requestRemotePasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)fetchRemoteAuthTokenForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)requestRemoteAuthTokenForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 outRequestID:(id*)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(BOOL)arg3 allowQuery:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)wantsRetries;
-(void)setWantsRetries:(BOOL)arg1 ;
-(void)_disconnected;
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

