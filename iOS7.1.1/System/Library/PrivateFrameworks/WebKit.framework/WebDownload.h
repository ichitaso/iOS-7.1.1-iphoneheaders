/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSURLDownload.h>

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload {

	WebDownloadInternal* _webInternal;

}
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)_setRealDelegate:(id)arg1 ;
-(void)connection:(id)arg1 willStopBufferingData:(id)arg2 ;
@end
