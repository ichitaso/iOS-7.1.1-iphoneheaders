/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDBonjourResolverDelegate.h>

@protocol SDRemoteDiscDelegate;
@class NSURL, NSTimer, NSMutableData, SDBonjourResolver, NSNumber, NSString;

@interface SDRemoteDisc : NSObject <SDBonjourResolverDelegate> {

	NSURL* _url;
	NSTimer* _pollingTimer;
	CFReadStreamRef _readStream;
	NSMutableData* _responseData;
	SDBonjourResolver* _resolver;
	NSNumber* _askID;
	NSString* _askToken;
	NSString* _askStatus;
	NSString* _askDevice;
	NSString* _hostName;
	NSNumber* _portNumber;
	<SDRemoteDiscDelegate>* _delegate;

}

@property (copy) NSNumber * askID;                                 //@synthesize askID=_askID - In the implementation block
@property (copy) NSString * askToken;                              //@synthesize askToken=_askToken - In the implementation block
@property (copy) NSString * askStatus;                             //@synthesize askStatus=_askStatus - In the implementation block
@property (copy) NSString * askDevice;                             //@synthesize askDevice=_askDevice - In the implementation block
@property (copy) NSString * hostName;                              //@synthesize hostName=_hostName - In the implementation block
@property (copy) NSNumber * portNumber;                            //@synthesize portNumber=_portNumber - In the implementation block
@property (__weak) <SDRemoteDiscDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)notifyClient;
-(void)bonjourResolverDidChange:(id)arg1 ;
-(void)cancelReadStream;
-(void)pollingTimerCallBack:(id)arg1 ;
-(void)processResponse:(id)arg1 ;
-(void)cancelAndDecline;
-(void)setAskStatus:(id)arg1 ;
-(void)cancelResolve;
-(void)setAskID:(id)arg1 ;
-(void)startPolling;
-(void)setAskToken:(id)arg1 ;
-(void)cancelPollingTimer;
-(id)initWithURL:(id)arg1 device:(id)arg2 ;
-(void)appendData:(const char*)arg1 withLength:(long)arg2 ;
-(void)askServer;
-(void)countChanged;
-(id)askID;
-(id)askToken;
-(id)askStatus;
-(id)askDevice;
-(void)setAskDevice:(id)arg1 ;
-(id)hostName;
-(void)setHostName:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cancel;
-(void).cxx_destruct;
-(void)stop;
-(id)requestBody;
-(void)sendRequest:(id)arg1 ;
-(void)handleResponse:(CFReadStreamRef)arg1 ;
-(id)portNumber;
-(void)setPortNumber:(id)arg1 ;
@end

