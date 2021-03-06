/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface OADOle : NSObject {

	bool mIconic;
	NSString* mCLSID;
	NSString* mAnsiUserType;
	NSString* mAnsiClipboardFormatName;
	unsigned mWinClipboardFormat;
	NSString* mMacClipboardFormat;
	NSString* mAnsiProgID;
	NSString* mUnicodeUserType;
	NSString* mUnicodeClipboardFormatName;
	NSString* mUnicodeProgID;
	id mObject;

}
+(bool)isProgIDSupported:(id)arg1 ;
+(bool)isCLSIDSupported:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)CLSID;
-(void)setCLSID:(id)arg1 ;
-(void)setAnsiUserType:(id)arg1 ;
-(void)setWinClipboardFormat:(unsigned)arg1 ;
-(void)setMacClipboardFormat:(id)arg1 ;
-(void)setAnsiClipboardFormatName:(id)arg1 ;
-(void)setAnsiProgID:(id)arg1 ;
-(void)setUnicodeUserType:(id)arg1 ;
-(void)setUnicodeClipboardFormatName:(id)arg1 ;
-(void)setUnicodeProgID:(id)arg1 ;
-(bool)iconic;
-(void)setIconic:(bool)arg1 ;
-(id)ansiUserType;
-(id)ansiClipboardFormatName;
-(unsigned)winClipboardFormat;
-(id)macClipboardFormat;
-(id)ansiProgID;
-(id)unicodeUserType;
-(id)unicodeClipboardFormatName;
-(id)unicodeProgID;
@end

