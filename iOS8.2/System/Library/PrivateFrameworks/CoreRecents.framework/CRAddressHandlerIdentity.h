/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet;

@interface CRAddressHandlerIdentity : NSObject {

	NSString* _className;
	NSSet* _supportedAddressKinds;

}

@property (nonatomic,copy) NSSet * supportedAddressKinds;              //@synthesize supportedAddressKinds=_supportedAddressKinds - In the implementation block
+(id)identityForAddressHandler:(id)arg1 ;
-(NSSet *)supportedAddressKinds;
-(id)initForAddressHandler:(id)arg1 ;
-(void)setSupportedAddressKinds:(NSSet *)arg1 ;
-(void)dealloc;
-(id)description;
@end

