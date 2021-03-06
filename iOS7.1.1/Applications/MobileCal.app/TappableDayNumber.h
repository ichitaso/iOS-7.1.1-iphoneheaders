/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, DayCircleView, UIColor, NSString;

@interface TappableDayNumber : UIControl {

	UILabel* _number;
	UILabel* _numberCircled;
	DayCircleView* _circle;
	DayCircleView* _pressCircle;
	BOOL _useLargeCircle;
	BOOL _isToday;
	BOOL _isWeekend;
	BOOL _circled;
	BOOL _pressed;
	UIColor* _weekendColor;

}

@property (assign,nonatomic) CGRect textFrame; 
@property (assign,nonatomic) BOOL useLargeCircle;                 //@synthesize useLargeCircle=_useLargeCircle - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIColor * weekendColor;              //@synthesize weekendColor=_weekendColor - In the implementation block
@property (assign,nonatomic) BOOL isToday;                        //@synthesize isToday=_isToday - In the implementation block
@property (assign,nonatomic) BOOL isWeekend;                      //@synthesize isWeekend=_isWeekend - In the implementation block
@property (assign,nonatomic) BOOL circled;                        //@synthesize circled=_circled - In the implementation block
@property (assign,nonatomic) BOOL pressed;                        //@synthesize pressed=_pressed - In the implementation block
+(id)normalFont;
-(void)setCircled:(BOOL)arg1 ;
-(void)setIsToday:(BOOL)arg1 ;
-(void)setIsWeekend:(BOOL)arg1 ;
-(BOOL)isToday;
-(BOOL)isWeekend;
-(void)_updateTextColor;
-(void)setWeekendColor:(id)arg1 ;
-(id)weekendColor;
-(void)setCircled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)circled;
-(void)setUseLargeCircle:(BOOL)arg1 ;
-(BOOL)useLargeCircle;
-(void)setTextFrame:(CGRect)arg1 ;
-(void)_updateCircleColor;
-(void)_loadCircledNumberIfNeeded;
-(id)_pressColor;
-(void)_loadCircleIfNeeded;
-(void)_updateSubviewAlpha;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_loadPressIfNeeded;
-(void)_createSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setBackgroundColor:(id)arg1 ;
-(id)_textColor;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)pressed;
-(id)titleLabel;
-(void).cxx_destruct;
-(CGRect)textFrame;
@end

