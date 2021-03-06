/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCoding.h>

@class NSString;

@interface CAValueFunction : NSObject <NSCoding> {

	NSString* _string;
	void* _impl;

}

@property (readonly) NSString * name; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)functionWithName:(id)arg1 ;
-(id)_initWithName:(int)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(unsigned long long)outputCount;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)inputCount;
@end

