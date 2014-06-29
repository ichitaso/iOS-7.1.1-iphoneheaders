/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapCameraController.h>
#import <VectorKit/VKCameraControllerDelegate.h>

@protocol VKMotionProvider;
@class VKGlobeAnnotationTrackingCameraController, VKAnimation;

@interface VKGlobeCameraController : VKMapCameraController <VKCameraControllerDelegate> {

	GlobeView* _globeView;
	VKGlobeAnnotationTrackingCameraController* _globeAnnotationTrackingCameraController;
	<VKMotionProvider>* _motionProvider;
	bool _motionActive;
	VKAnimation* _wiggleAnimation;
	VKAnimation* _positionAnimation;
	VKAnimation* _motionAnimation;
	VKAnimation* _decelerationAnimation;
	VKAnimation* _regionAnimation;
	CameraManager* _cameraManager;
	double _currentDoublePanPitch;
	bool _isPitching;
	bool _isRotating;

}

@property (assign,nonatomic) GlobeView* globeView;                                   //@synthesize globeView=_globeView - In the implementation block
@property (nonatomic,readonly) double pitchThreshold; 
@property (getter=isMotionActive,nonatomic,readonly) bool motionActive; 
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(long long)tileSize;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(void).cxx_destruct;
-(void)setGesturing:(bool)arg1 ;
-(bool)currentZoomLevelAllowsRotation;
-(void)setAnnotationTrackingZoomStyle:(long long)arg1 ;
-(id)trackingAnnotation;
-(bool)isTrackingHeading;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3 ;
-(bool)canEnter3DMode;
-(double)presentationYaw;
-(id)mapRegion;
-(id)mapRegionOfInterest;
-(void)runAnimation:(id)arg1 ;
-(void)setYaw:(double)arg1 animated:(bool)arg2 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(bool)arg4 completion:(/*^block*/ id)arg5 ;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/ id)arg5 ;
-(double)durationToAnimateToMapRegion:(id)arg1 ;
-(void)stopPlaceCardAnimation;
-(void)enter3DMode;
-(void)exit3DMode;
-(bool)isPitched;
-(bool)isFullyPitched;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(bool)isAnimatingToTrackAnnotation;
-(bool)restoreViewportFromInfo:(id)arg1 ;
-(void)willAnimateInAnnotationMarkers:(id)arg1 ;
-(void)didAnimateInAnnotationMarkers:(id)arg1 ;
-(CGPoint)_centerScreenPoint;
-(void)cameraControllerDidChangeCameraState:(id)arg1 ;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(bool)arg2 ;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(bool)arg2 ;
-(void)cameraController:(id)arg1 didBecomePitched:(bool)arg2 ;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(bool)arg2 ;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)cameraController:(id)arg1 canZoomInDidChange:(bool)arg2 ;
-(void)cameraController:(id)arg1 canZoomOutDidChange:(bool)arg2 ;
-(void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2 ;
-(void)snapMapIfNecessary:(const VKPoint*)arg1 animated:(bool)arg2 ;
-(void)startPanning:(CGPoint)arg1 ;
-(void)stopPanning:(CGPoint)arg1 ;
-(void)tapZoom:(CGPoint)arg1 levels:(double)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)startPinching:(CGPoint)arg1 ;
-(void)pinch:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)stopPinching:(CGPoint)arg1 ;
-(void)pan:(CGPoint)arg1 ;
-(void)startRotating:(CGPoint)arg1 ;
-(void)rotate:(double)arg1 atScreenPoint:(CGPoint)arg2 ;
-(void)stopRotating:(CGPoint)arg1 ;
-(void)startPitching:(CGPoint)arg1 ;
-(void)pitch:(CGPoint)arg1 translation:(double)arg2 ;
-(void)stopPitching:(CGPoint)arg1 ;
-(long long)maximumNormalizedZoomLevel;
-(long long)minimumNormalizedZoomLevel;
-(GlobeView*)globeView;
-(void)setGlobeView:(GlobeView*)arg1 ;
-(double)pitchThreshold;
-(void)startWithMotionProvider:(id)arg1 ;
-(void)stopMotion;
-(bool)isMotionActive;
-(void)moveTo:(CGPoint)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(/*^block*/ id)arg6 completion:(/*^block*/ id)arg7 ;
-(double)zoomForMapRegion:(id)arg1 ;
-(void)showSearchResultAnimationAtCoordinate:(CGPoint)arg1 withZoom:(double)arg2 ;
-(void)showPlaceCardAnimationAtCoordinate:(CGPoint)arg1 andDistance:(double)arg2 ;
-(void)stopSearchResultAnimation;
-(void)stopGlobeAnimations;
-(void)updateCameraManager;
-(void)updateGlobeFromCamera;
-(Vector2i)_cursorFromScreenPoint:(CGPoint)arg1 ;
-(void)tiltTo:(double)arg1 animated:(bool)arg2 exaggerate:(bool)arg3 ;
-(void)rotateTo:(double)arg1 animated:(bool)arg2 ;
-(void)_rotateAroundTargetWithDuration:(double)arg1 rotations:(double)arg2 ;
-(void)_animateToStartPosition;
-(void)_stopAnimations;
-(void)_performMotionAnimation;
-(double)pitch;
-(double)yaw;
@end
