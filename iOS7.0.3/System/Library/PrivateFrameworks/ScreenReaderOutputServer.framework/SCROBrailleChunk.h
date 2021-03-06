/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableAttributedString;

@interface SCROBrailleChunk : NSObject <NSCopying> {

	NSString* _text;
	NSString* _language;
	int _contractionMode;
	BOOL _showEightDot;
	BOOL _isFocused;
	BOOL _isTechnical;
	BOOL _hasTextSelection;
	NSRange _textSelection;
	int _token;
	BOOL _showDotsSevenAndEight;
	NSMutableAttributedString* _brailleString;
	NSRange _brailleSelection;

}

@property (nonatomic,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
+(void)initialize;
-(BOOL)focused;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)hasSelection;
-(id)language;
-(int)token;
-(id)initWithText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(int)arg4 focused:(BOOL)arg5 contractionMode:(int)arg6 showEightDot:(BOOL)arg7 showDotsSevenAndEight:(BOOL)arg8 technical:(BOOL)arg9 ;
-(id)_tableIdentifierForLanguage:(id)arg1 ;
-(void)_translateAsTechnicalTextWithPrimaryTable:(BOOL)arg1 ;
-(void)_translateAsLiteraryTextWithPrimaryTable:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(int)arg4 focused:(BOOL)arg5 contractionMode:(int)arg6 showEightDot:(BOOL)arg7 showDotsSevenAndEight:(BOOL)arg8 ;
-(BOOL)isFocusedOrSelected;
-(int)locationForIndex:(int)arg1 ;
-(id)brailleWithIBeamLocation:(int*)arg1 selection:(NSRange*)arg2 ;
-(void)translate;
@end

