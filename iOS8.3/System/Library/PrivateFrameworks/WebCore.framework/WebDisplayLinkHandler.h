/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:18:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {

	DisplayRefreshMonitorIOS* m_monitor;
	CADisplayLink* m_displayLink;

}
-(void)dealloc;
-(void)invalidate;
-(void)handleDisplayLink:(id)arg1 ;
-(id)initWithMonitor:(DisplayRefreshMonitorIOS*)arg1 ;
@end

