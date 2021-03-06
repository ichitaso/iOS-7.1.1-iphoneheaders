/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface ACSportsMatchupLineScoreView : UIView {

	UILabel* _periodNameLabel;
	UILabel* _firstScoreLabel;
	UILabel* _secondScoreLabel;

}

@property (nonatomic,readonly) UILabel * periodNameLabel;               //@synthesize periodNameLabel=_periodNameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * firstScoreLabel;               //@synthesize firstScoreLabel=_firstScoreLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondScoreLabel;              //@synthesize secondScoreLabel=_secondScoreLabel - In the implementation block
-(id)_newAddedScoreLabelIsTotal:(char)arg1 isCondensed:(char)arg2 isPeriod:(char)arg3 ;
-(float)lineScoreRowHeight;
-(float)_legendBaselineAdjust;
-(id)initWithFrame:(CGRect)arg1 isTotal:(char)arg2 isCondensed:(char)arg3 ;
-(float)lineScoreColumnWidthWithNumberOfColumns:(unsigned)arg1 ;
-(void)setPeriodName:(id)arg1 firstScore:(id)arg2 secondScore:(id)arg3 winningEntity:(id)arg4 homeIsFirst:(char)arg5 ;
-(float)legendHeight;
-(float)_rowBaselineAdjust;
-(UILabel *)periodNameLabel;
-(UILabel *)firstScoreLabel;
-(UILabel *)secondScoreLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

