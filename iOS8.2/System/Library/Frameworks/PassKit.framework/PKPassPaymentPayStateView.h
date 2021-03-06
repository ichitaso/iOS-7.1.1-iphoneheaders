/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>
#import <PassKit/PKGlyphViewDelegate.h>

@protocol PKPassPaymentPayStateViewDelegate;
@class PKGlyphView, UILabel, NSString;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate> {

	int _state;
	PKGlyphView* _glyph;
	UILabel* _label;
	float _labelAlpha;
	id<PKPassPaymentPayStateViewDelegate> _delegate;

}

@property (assign,nonatomic) int state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) PKGlyphView * glyph;                                       //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) float labelAlpha;                                            //@synthesize labelAlpha=_labelAlpha - In the implementation block
@property (assign,nonatomic) id<PKPassPaymentPayStateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)glyphView:(id)arg1 revealingCheckmark:(char)arg2 ;
-(void)_applyStateWithTextOverride:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setState:(int)arg1 textOverride:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_labelForState:(int)arg1 textOverride:(id)arg2 ;
-(void)emphasizeStateIfPossible:(int)arg1 withTextOverride:(id)arg2 ;
-(char)_canEmphasizeState:(int)arg1 ;
-(PKGlyphView *)glyph;
-(float)labelAlpha;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PKPassPaymentPayStateViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PKPassPaymentPayStateViewDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(UILabel *)label;
-(void)setLabelAlpha:(float)arg1 ;
@end

