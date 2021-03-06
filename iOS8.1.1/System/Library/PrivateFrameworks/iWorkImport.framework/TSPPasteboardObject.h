/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSArray, TSPObject;

@interface TSPPasteboardObject : TSPObject {

	BOOL _isCrossAppPaste;
	BOOL _isCrossDocumentPaste;
	BOOL _isTextPrimary;
	BOOL _isSmartCopyPaste;
	NSArray* _drawables;
	NSArray* _styles;
	TSPObject* _stylesheet;
	TSPObject* _theme;
	TSPObject* _wpStorage;
	TSPObject* _guideStorage;
	TSPObject* _appNativeObject;

}

@property (nonatomic,copy) NSArray * drawables;                        //@synthesize drawables=_drawables - In the implementation block
@property (nonatomic,copy) NSArray * styles;                           //@synthesize styles=_styles - In the implementation block
@property (nonatomic,retain) TSPObject * stylesheet;                   //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,retain) TSPObject * theme;                        //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) TSPObject * wpStorage;                    //@synthesize wpStorage=_wpStorage - In the implementation block
@property (nonatomic,retain) TSPObject * guideStorage;                 //@synthesize guideStorage=_guideStorage - In the implementation block
@property (nonatomic,retain) TSPObject * appNativeObject;              //@synthesize appNativeObject=_appNativeObject - In the implementation block
@property (nonatomic,readonly) BOOL isCrossAppPaste;                   //@synthesize isCrossAppPaste=_isCrossAppPaste - In the implementation block
@property (nonatomic,readonly) BOOL isCrossDocumentPaste;              //@synthesize isCrossDocumentPaste=_isCrossDocumentPaste - In the implementation block
@property (assign,nonatomic) BOOL isTextPrimary;                       //@synthesize isTextPrimary=_isTextPrimary - In the implementation block
@property (assign,nonatomic) BOOL isSmartCopyPaste;                    //@synthesize isSmartCopyPaste=_isSmartCopyPaste - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(long long)tsp_identifier;
-(BOOL)isCrossAppPaste;
-(BOOL)isCrossDocumentPaste;
-(void)setDrawables:(NSArray *)arg1 ;
-(TSPObject *)wpStorage;
-(void)setWpStorage:(TSPObject *)arg1 ;
-(TSPObject *)guideStorage;
-(void)setGuideStorage:(TSPObject *)arg1 ;
-(TSPObject *)appNativeObject;
-(void)setAppNativeObject:(TSPObject *)arg1 ;
-(BOOL)isTextPrimary;
-(void)setIsTextPrimary:(BOOL)arg1 ;
-(BOOL)isSmartCopyPaste;
-(void)setIsSmartCopyPaste:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(TSPObject *)theme;
-(NSArray *)drawables;
-(void)setTheme:(TSPObject *)arg1 ;
-(void)setStyles:(NSArray *)arg1 ;
-(NSArray *)styles;
-(TSPObject *)stylesheet;
-(void)setStylesheet:(TSPObject *)arg1 ;
@end

