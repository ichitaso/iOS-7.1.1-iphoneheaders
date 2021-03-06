/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanoappregistryd/NARWorkspaceService.h>

@class NADApplicationStore, NSString;

@interface NADWorkspaceConnection : NSObject <NARWorkspaceService> {

	NADApplicationStore* _applicationStore;

}

@property (nonatomic,readonly) NADApplicationStore * applicationStore;              //@synthesize applicationStore=_applicationStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NADApplicationStore *)applicationStore;
-(id)initWithApplicationStore:(id)arg1 ;
-(oneway void)getWorkspaceInfoWithCompletion:(/*^block*/id)arg1 ;
@end

