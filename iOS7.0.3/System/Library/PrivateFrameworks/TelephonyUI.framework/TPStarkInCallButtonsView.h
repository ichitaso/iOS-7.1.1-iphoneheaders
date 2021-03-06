/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@protocol TPStarkInCallButtonsViewDelegate;
@class NSMutableDictionary, NSArray, NSMutableArray;

@interface TPStarkInCallButtonsView : UIView {

	int _highlightedControlIndex;
	int _buttonsMode;
	<TPStarkInCallButtonsViewDelegate>* _delegate;
	float _buttonDistributionScalingFactor;
	NSMutableDictionary* _buttonsDictionary;
	NSArray* _buttonsArray;
	NSMutableArray* _buttonDividerViews;

}

@property (assign) int buttonsMode;                                            //@synthesize buttonsMode=_buttonsMode - In the implementation block
@property (assign) <TPStarkInCallButtonsViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int highlightedControlIndex; 
@property (readonly) int numberOfControls; 
@property (assign) float buttonDistributionScalingFactor;                      //@synthesize buttonDistributionScalingFactor=_buttonDistributionScalingFactor - In the implementation block
@property (retain) NSMutableDictionary * buttonsDictionary;                    //@synthesize buttonsDictionary=_buttonsDictionary - In the implementation block
@property (retain) NSArray * buttonsArray;                                     //@synthesize buttonsArray=_buttonsArray - In the implementation block
@property (retain) NSMutableArray * buttonDividerViews;                        //@synthesize buttonDividerViews=_buttonDividerViews - In the implementation block
-(void)setMuted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setButtonsMode:(int)arg1 animated:(BOOL)arg2 ;
-(int)highlightedControlIndex;
-(int)nextHighlightableControlFromIndex:(int)arg1 ascending:(BOOL)arg2 ;
-(int)numberOfControls;
-(void)setHighlightedControlIndex:(int)arg1 ;
-(void)performActionForHighlightedControl;
-(void)setButtonDistributionScalingFactor:(float)arg1 ;
-(void)setButtonsDictionary:(id)arg1 ;
-(void)setButtonDividerViews:(id)arg1 ;
-(void)callCenterModelStateChangedNotification:(id)arg1 ;
-(void)phoneCallStatusChangedNotification:(id)arg1 ;
-(id)buttonsArray;
-(void)buttonWasTapped:(id)arg1 ;
-(id)buttonForButtonType:(int)arg1 createIfNecessary:(BOOL)arg2 createWithHorizontalPositionFraction:(float)arg3 ;
-(void)setButtonsArray:(id)arg1 ;
-(id)buttonDividerViews;
-(id)existingButtonsNotInArray:(id)arg1 ;
-(void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forButton:(id)arg2 ;
-(void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forDividerView:(id)arg2 ;
-(void)removeButtons:(id)arg1 ;
-(void)updateButtonsForCallModelState;
-(id)buttonsDictionary;
-(float)distributedFractionForUndistributedFraction:(float)arg1 ;
-(float)buttonDistributionScalingFactor;
-(id)keyForButtonType:(int)arg1 ;
-(int)buttonsMode;
-(void)setButtonsMode:(int)arg1 ;
@end

