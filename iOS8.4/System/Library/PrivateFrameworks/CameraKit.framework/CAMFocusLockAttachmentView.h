/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CAMFocusAttachmentView.h>

@interface CAMFocusLockAttachmentView : CAMFocusAttachmentView {

	BOOL _locked;

}

@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(void)_updateText;
@end

