/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface WDFont : NSObject <NSCopying> {

	NSString* mName;
	NSString* mSecondName;
	int mFontFamily;
	int mCharacterSet;
	int mPitch;

}
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(void)setSecondName:(id)arg1 ;
-(void)setCharacterSet:(int)arg1 ;
-(id)secondName;
-(int)fontFamily;
-(void)setFontFamily:(int)arg1 ;
-(int)pitch;
-(void)setPitch:(int)arg1 ;
-(int)characterSet;
@end

