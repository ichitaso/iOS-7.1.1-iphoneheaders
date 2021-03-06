/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MNGuidanceManeuverView, MNSignStyle, UIImage;

@interface MNSimpleSignView : UIView {

	UIImageView* _backgroundView;
	MNGuidanceManeuverView* _maneuverView;
	UIEdgeInsets _maneuverViewEdgeInsets;
	UIImageView* _shieldView;
	MNSignStyle* _style;

}

@property (assign,nonatomic) UIEdgeInsets maneuverViewEdgeInsets;                  //@synthesize maneuverViewEdgeInsets=_maneuverViewEdgeInsets - In the implementation block
@property (nonatomic,readonly) MNGuidanceManeuverView * maneuverView; 
@property (nonatomic,retain) UIImage * shieldImage; 
@property (nonatomic,retain) MNSignStyle * style;                                  //@synthesize style=_style - In the implementation block
-(MNGuidanceManeuverView *)maneuverView;
-(UIImage *)shieldImage;
-(void)setManeuverViewEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setShieldImage:(UIImage *)arg1 ;
-(void)updateStyleForTheme;
-(id)shieldImageView;
-(UIEdgeInsets)maneuverViewEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNSignStyle *)style;
-(void)setStyle:(MNSignStyle *)arg1 ;
@end

