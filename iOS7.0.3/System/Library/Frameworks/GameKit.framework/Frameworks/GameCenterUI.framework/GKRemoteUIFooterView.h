/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <RemoteUI/RemoteUITableFooter.h>

@class GKLabel;

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter> {

	BOOL _shouldApplyGameCenterTheme;
	GKLabel* _textLabel;
	float _leftMargin;
	float _rightMargin;
	float _bottomMargin;
	float _paragraphMargin;
	int _layoutStyle;

}

@property (nonatomic,retain) GKLabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) float leftMargin;                             //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) float rightMargin;                            //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) float bottomMargin;                           //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (assign,nonatomic) float paragraphMargin;                        //@synthesize paragraphMargin=_paragraphMargin - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyGameCenterTheme;              //@synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme - In the implementation block
@property (assign,nonatomic) int layoutStyle;                              //@synthesize layoutStyle=_layoutStyle - In the implementation block
-(int)layoutStyle;
-(BOOL)shouldApplyGameCenterTheme;
-(void)setShouldApplyGameCenterTheme:(BOOL)arg1 ;
-(void)setLayoutStyle:(int)arg1 ;
-(id)attributedStringForString:(id)arg1 withStyle:(id)arg2 ;
-(float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
-(void)setTextLabel:(id)arg1 ;
-(float)paragraphMargin;
-(void)setParagraphMargin:(float)arg1 ;
-(void)dealloc;
-(void)setRightMargin:(float)arg1 ;
-(id)textLabel;
-(float)leftMargin;
-(float)rightMargin;
-(float)bottomMargin;
-(void)setLeftMargin:(float)arg1 ;
-(void)setBottomMargin:(float)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
@end

