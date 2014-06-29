/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSAttributedString;

@interface SCROBrailleFormatter : NSObject <NSCopying> {

	CFArrayRef _chunkArray;
	CFDictionaryRef _chunkDictionary;
	CFDictionaryRef _tokenDictionary;
	long long _firstToken;
	long long _lastToken;
	int _contractionMode;
	bool _showEightDot;
	int _displayMode;
	id _appToken;
	NSAttributedString* _statusText;
	bool _currentUnread;
	bool _anyUnread;
	bool _showDotsSevenAndEight;
	int _lineFocus;

}

@property (assign,nonatomic) int lineFocus;              //@synthesize lineFocus=_lineFocus - In the implementation block
-(id)statusText;
-(void)setStatusText:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)deepCopyWithZone:(NSZone)arg1 ;
-(bool)anyUnread;
-(bool)currentUnread;
-(void)addText:(id)arg1 selection:(NSRange*)arg2 token:(long long)arg3 focused:(bool)arg4 ;
-(int)contractionMode;
-(bool)showEightDot;
-(id)appToken;
-(long long)firstToken;
-(long long)lastToken;
-(id)initWithContractionMode:(int)arg1 showEightDot:(bool)arg2 showDotsSevenAndEight:(bool)arg3 ;
-(void)setLineFocus:(int)arg1 ;
-(void)setCurrentUnread:(bool)arg1 ;
-(void)setAnyUnread:(bool)arg1 ;
-(void)setDisplayMode:(int)arg1 ;
-(void)addText:(id)arg1 selection:(NSRange*)arg2 token:(long long)arg3 focused:(bool)arg4 technical:(bool)arg5 ;
-(void)setAppToken:(id)arg1 ;
-(void)addText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(long long)arg4 focused:(bool)arg5 technical:(bool)arg6 ;
-(int)displayMode;
-(bool)showDotsSevenAndEight;
-(int)lineFocus;
-(void)addText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(long long)arg4 focused:(bool)arg5 ;
-(CFArrayRef)chunkArray;
-(CFDictionaryRef)chunkDictionary;
-(void)translate;
@end
