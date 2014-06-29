/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface NSScanner : NSObject <NSCopying>
+(id)localizedScannerWithString:(id)arg1 ;
+(id)allocWithZone:(NSZone)arg1 ;
+(id)scannerWithString:(id)arg1 ;
-(bool)mf_scanUpToRegularExpression:(id)arg1 ;
-(NSRange)_rangeOfFirstMatchWithRegularExpression:(id)arg1 ;
-(id)mf_remainingString;
-(bool)mf_scanUpAndOverString:(id)arg1 ;
-(id)mf_nextTokenWithPunctuation:(CFCharacterSetRef)arg1 ;
-(bool)scanDecimal:(SCD_Struct_NS47*)arg1 ;
-(id)_remainingString;
-(bool)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2 ;
-(id)charactersToBeSkipped;
-(bool)caseSensitive;
-(void)setCaseSensitive:(bool)arg1 ;
-(bool)scanUnsignedLongLong:(unsigned long long*)arg1 ;
-(bool)scanHexLongLong:(unsigned long long*)arg1 ;
-(id)_invertedSkipSet;
-(bool)scanDouble:(double*)arg1 ;
-(bool)scanFloat:(float*)arg1 ;
-(bool)scanHexDouble:(double*)arg1 ;
-(bool)scanHexFloat:(float*)arg1 ;
-(bool)scanUnsignedInteger:(unsigned long long*)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(bool)scanString:(id)arg1 intoString:(id*)arg2 ;
-(bool)scanInteger:(long long*)arg1 ;
-(bool)isAtEnd;
-(bool)scanUpToString:(id)arg1 intoString:(id*)arg2 ;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(id)locale;
-(bool)scanInt:(int*)arg1 ;
-(unsigned long long)scanLocation;
-(bool)scanHexInt:(unsigned*)arg1 ;
-(bool)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(void)setCharactersToBeSkipped:(id)arg1 ;
-(bool)scanLongLong:(long long*)arg1 ;
-(bool)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
@end
