/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray;

@interface SiriMoviesMovieCreditsView : UIView {

	UILabel* _directorLabel;
	NSMutableArray* _directorNameLabelsArray;
	UILabel* _starringLabel;
	NSMutableArray* _starNameLabelsArray;
	int _style;

}

@property (assign,nonatomic) int style;              //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 movieDetailSnippet:(id)arg2 ;
-(double)creditsViewWidth;
-(CGSize)_calculateLayoutForSize:(CGSize)arg1 setFrame:(BOOL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
@end

