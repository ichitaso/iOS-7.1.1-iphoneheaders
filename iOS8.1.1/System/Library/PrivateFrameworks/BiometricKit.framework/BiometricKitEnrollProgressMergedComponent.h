/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject {

	long long _componentID;
	BiometricKitEnrollProgressCoordinates* _transformationCoordinates;

}

@property (assign,nonatomic) long long componentID;                                                          //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) BiometricKitEnrollProgressCoordinates * transformationCoordinates;              //@synthesize transformationCoordinates=_transformationCoordinates - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setTransformationCoordinates:(BiometricKitEnrollProgressCoordinates *)arg1 ;
-(long long)componentID;
-(void)setComponentID:(long long)arg1 ;
-(BiometricKitEnrollProgressCoordinates *)transformationCoordinates;
@end

