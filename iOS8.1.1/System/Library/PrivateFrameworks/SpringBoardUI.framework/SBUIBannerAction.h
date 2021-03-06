/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBUIBannerAction : NSObject {

	/*^block*/id _actionBlock;
	NSString* _remoteViewControllerClassName;
	NSString* _remoteServiceBundleIdentifier;

}

@property (nonatomic,copy) id actionBlock;                                        //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,copy) NSString * remoteViewControllerClassName;              //@synthesize remoteViewControllerClassName=_remoteViewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * remoteServiceBundleIdentifier;              //@synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier - In the implementation block
+(id)actionWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSString *)remoteServiceBundleIdentifier;
-(NSString *)remoteViewControllerClassName;
-(void)setRemoteViewControllerClassName:(NSString *)arg1 ;
-(void)setRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(id)initWithActionBlock:(/*^block*/id)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
@end

