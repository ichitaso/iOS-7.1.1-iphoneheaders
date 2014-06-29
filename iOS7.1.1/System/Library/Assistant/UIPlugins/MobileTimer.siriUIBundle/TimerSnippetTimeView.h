/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface TimerSnippetTimeView : UIView {

	bool _running;
	double _remainingTime;
	double _fireTime;
	CFDateFormatterRef _formatter;
	bool _formatShowingHours;
	CFStringRef _hmsFormat;
	CFStringRef _msFormat;
	UILabel* _timeLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setupWithDuration:(double)arg1 ;
-(void)setRemainingTime:(double)arg1 ;
-(void)setFireTime:(double)arg1 withTime:(double)arg2 ;
-(bool)updateDisplayWithTime:(double)arg1 ;
-(void)markStaleWithTime:(double)arg1 ;
@end
