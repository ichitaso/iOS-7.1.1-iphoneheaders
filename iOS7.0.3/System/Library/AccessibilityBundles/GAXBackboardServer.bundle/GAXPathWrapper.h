/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
#import <CoreFoundation/NSCoding.h>

@interface GAXPathWrapper : NSObject <NSCoding> {

	CGPathRef _path;

}

@property (assign,nonatomic) CGPathRef path;              //@synthesize path=_path - In the implementation block
+(id)currentSharedInstance;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)arg1 ;
@end

