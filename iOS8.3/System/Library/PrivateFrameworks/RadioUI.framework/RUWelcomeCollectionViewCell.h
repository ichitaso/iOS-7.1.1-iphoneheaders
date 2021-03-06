/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <RadioUI/MPUStackViewDataSource.h>

@class MPUBorderConfiguration, MPUStackView, UIImage, MPUBorderDrawingCache, UIView, NSString;

@interface RUWelcomeCollectionViewCell : UICollectionViewCell <MPUStackViewDataSource> {

	MPUBorderConfiguration* _stackItemBorderConfiguration;
	MPUStackView* _stackView;
	UIImage* _artworkImage;
	MPUBorderDrawingCache* _stackItemBorderDrawingCache;
	CGSize _artworkSize;

}

@property (nonatomic,retain) UIImage * artworkImage;                                           //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) CGSize artworkSize;                                               //@synthesize artworkSize=_artworkSize - In the implementation block
@property (nonatomic,retain) UIView * perspectiveTargetView; 
@property (assign,nonatomic) CGPoint vanishingPoint; 
@property (nonatomic,retain) MPUBorderDrawingCache * stackItemBorderDrawingCache;              //@synthesize stackItemBorderDrawingCache=_stackItemBorderDrawingCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)artworkSizeForOrientation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MPUBorderDrawingCache *)stackItemBorderDrawingCache;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(void)setArtworkSize:(CGSize)arg1 ;
-(void)setStackItemBorderDrawingCache:(MPUBorderDrawingCache *)arg1 ;
-(void)setPerspectiveTargetView:(UIView *)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(UIView *)perspectiveTargetView;
-(CGPoint)vanishingPoint;
-(int)numberOfItemsInStackView:(id)arg1 ;
-(void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(int)arg3 ;
-(void)stackView:(id)arg1 didCreateItem:(id)arg2 ;
-(CGSize)artworkSize;
@end

