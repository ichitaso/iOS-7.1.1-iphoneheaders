/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>
#import <Podcasts/AEHighlightedTextLabelTextViewDelegate.h>

@class AEHighlightedTextLabelTextView, AEAnnotation, UIFont, IMTheme, AEHighlightRenderingController, NSString;

@interface AEHighlightedTextLabel : UIView <AEHighlightedTextLabelTextViewDelegate> {

	AEHighlightedTextLabelTextView* _textView;
	AEAnnotation* _annotation;
	int _numberOfLines;
	float _fullLineWidth;
	UIFont* _font;
	IMTheme* _theme;
	char _generateHighlightAsynchronously;
	char _useOldUnderlineMetrics;
	AEHighlightRenderingController* _renderingController;

}

@property (nonatomic,retain) AEAnnotation * annotation;                                         //@synthesize annotation=_annotation - In the implementation block
@property (assign,nonatomic) int numberOfLines;                                                 //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) float fullLineWidth;                                               //@synthesize fullLineWidth=_fullLineWidth - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                     //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) IMTheme * theme;                                                   //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic) char useOldUnderlineMetrics;                                       //@synthesize useOldUnderlineMetrics=_useOldUnderlineMetrics - In the implementation block
@property (nonatomic,retain) AEHighlightRenderingController * renderingController;              //@synthesize renderingController=_renderingController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForAnnotation:(id)arg1 font:(id)arg2 width:(float)arg3 numberOfLines:(unsigned)arg4 ;
+(unsigned)possibleLineLengthForAnnotation:(id)arg1 size:(CGSize)arg2 ;
+(void)collapseNewlinesForMutableAttributedString:(id)arg1 ;
-(void)drawLabelInRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 generateHighlightAsynchronously:(char)arg2 ;
-(AEHighlightRenderingController *)renderingController;
-(char)useOldUnderlineMetrics;
-(void)clearHighlights;
-(float)fullLineWidth;
-(void)setFullLineWidth:(float)arg1 ;
-(void)setUseOldUnderlineMetrics:(char)arg1 ;
-(void)setRenderingController:(AEHighlightRenderingController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfLines:(int)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(id)textColor;
-(int)numberOfLines;
-(AEAnnotation *)annotation;
-(void)setAnnotation:(AEAnnotation *)arg1 ;
-(IMTheme *)theme;
-(void)setTheme:(IMTheme *)arg1 ;
@end

