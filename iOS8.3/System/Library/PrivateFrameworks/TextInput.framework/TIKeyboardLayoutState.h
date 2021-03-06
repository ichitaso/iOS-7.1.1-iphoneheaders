/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:49:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/NSCopying.h>
#import <TextInput/NSSecureCoding.h>

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {

	char _hasCandidateKey;
	char _hasAccentKey;
	char _canMultitap;
	char _isAlphabeticPlane;
	char _interfaceIdiomIsPad;
	NSString* _inputMode;
	NSString* _layoutTag;

}

@property (nonatomic,copy) NSString * inputMode;                    //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic) char hasCandidateKey;                  //@synthesize hasCandidateKey=_hasCandidateKey - In the implementation block
@property (assign,nonatomic) char hasAccentKey;                     //@synthesize hasAccentKey=_hasAccentKey - In the implementation block
@property (assign,nonatomic) char canMultitap;                      //@synthesize canMultitap=_canMultitap - In the implementation block
@property (assign,nonatomic) char isAlphabeticPlane;                //@synthesize isAlphabeticPlane=_isAlphabeticPlane - In the implementation block
@property (nonatomic,copy) NSString * layoutTag;                    //@synthesize layoutTag=_layoutTag - In the implementation block
@property (assign,nonatomic) char interfaceIdiomIsPad;              //@synthesize interfaceIdiomIsPad=_interfaceIdiomIsPad - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInputMode:(NSString *)arg1 ;
-(void)setHasCandidateKey:(char)arg1 ;
-(char)hasAccentKey;
-(void)setHasAccentKey:(char)arg1 ;
-(char)canMultitap;
-(void)setCanMultitap:(char)arg1 ;
-(char)isAlphabeticPlane;
-(void)setIsAlphabeticPlane:(char)arg1 ;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(void)setInterfaceIdiomIsPad:(char)arg1 ;
-(NSString *)inputMode;
-(char)hasCandidateKey;
-(char)interfaceIdiomIsPad;
@end

