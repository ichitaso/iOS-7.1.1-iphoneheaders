/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet {

	PKImage* _placeHolderImage;
	CGRect _logoRect;

}

@property (nonatomic,retain) PKImage * placeHolderImage;              //@synthesize placeHolderImage=_placeHolderImage - In the implementation block
@property (assign,nonatomic) CGRect logoRect;                         //@synthesize logoRect=_logoRect - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)imageSetType;
+(id)archiveName;
+(long long)currentVersion;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)preheatImages;
-(PKImage *)placeHolderImage;
-(CGRect)logoRect;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)setLogoRect:(CGRect)arg1 ;
-(void)setPlaceHolderImage:(PKImage *)arg1 ;
@end

