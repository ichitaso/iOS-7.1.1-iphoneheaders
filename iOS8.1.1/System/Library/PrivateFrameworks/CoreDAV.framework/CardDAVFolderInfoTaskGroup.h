/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@class NSSet;

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {

	NSSet* _directoryGatewayURLs;

}
-(void)dealloc;
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 directoryGatewayURLs:(id)arg3 taskManager:(id)arg4 ;
-(int)containerInfoDepthForURL:(id)arg1 ;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(id)_copyContainerParserMappings;
@end

