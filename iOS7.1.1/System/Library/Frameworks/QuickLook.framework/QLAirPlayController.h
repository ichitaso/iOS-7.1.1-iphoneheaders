/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScreen, _UIHostedWindow, UISnapshotView, QLPreviewViewController, NSTimer;

@interface QLAirPlayController : NSObject {

	int _mode;
	UIScreen* _screen;
	_UIHostedWindow* _airPlayWindow;
	UISnapshotView* _snapshotView;
	QLPreviewViewController* _previewViewController;
	NSTimer* _refreshTimer;

}

@property (retain) QLPreviewViewController * previewViewController; 
@property (retain) UIScreen * screen; 
@property (assign) int mode; 
-(void)updateGeometryForPreviewViewController:(id)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(id)previewViewController;
-(void)setPreviewViewController:(id)arg1 ;
-(void)refreshSnapshot;
-(void)_stopUsingPreviewController;
-(void)_startUsingPreviewController;
-(void)_updateWindowSize;
-(void)_createAirPlayWindowIfNeeded;
-(void)_removeAirPlayWindow;
-(double)_screenAspectRatioForPreviewViewController:(id)arg1 ;
-(double)_screenScaleFactorForPreviewViewController:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)screen;
-(void)setScreen:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)update;
@end

