/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying> {

	unsigned long long _savedHash;
	SEL _selector;
	NSArray* _arguments;

}
+(id)requestIdentifierForInvocation:(id)arg1 ;
-(id)_argumentsForInvocation:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithInvocation:(id)arg1 ;
@end

