/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface WMListLevelTextToken : NSObject {

	NSString* m_string;
	int m_level;

}
+(id)tokenWithString:(id)arg1 andLevel:(int)arg2 ;
-(void)dealloc;
-(id)string;
-(int)level;
-(id)stringForIndex:(int)arg1 withFormat:(int)arg2 initialNumber:(int)arg3 ;
-(id)initWithString:(id)arg1 andLevel:(int)arg2 ;
@end

