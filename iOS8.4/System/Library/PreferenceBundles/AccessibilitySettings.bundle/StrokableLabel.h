/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UILabel.h>

@interface StrokableLabel : UILabel {

	BOOL _stroke;
	BOOL _nonAlphaShadow;

}

@property (assign,nonatomic) BOOL stroke;                      //@synthesize stroke=_stroke - In the implementation block
@property (assign,nonatomic) BOOL nonAlphaShadow;              //@synthesize nonAlphaShadow=_nonAlphaShadow - In the implementation block
-(void)setNonAlphaShadow:(BOOL)arg1 ;
-(BOOL)nonAlphaShadow;
-(BOOL)stroke;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setStroke:(BOOL)arg1 ;
@end

