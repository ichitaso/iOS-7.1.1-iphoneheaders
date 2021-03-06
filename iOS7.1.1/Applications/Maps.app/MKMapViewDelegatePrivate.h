/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKMapViewDelegatePrivate
@optional
-(void)mapView:(id)arg1 willChangeRotation:(double)arg2;
-(BOOL)mapViewShouldScrollToUserLocation:(id)arg1;
-(void)mapView:(id)arg1 didChangeMapType:(unsigned)arg2;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3 fromTrackingButton:(BOOL)arg4;
-(BOOL)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
-(BOOL)mapView:(id)arg1 shouldReceiveTouch:(id)arg2;
-(double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4;
-(void)mapViewDidStartUserInteraction:(id)arg1;
-(void)mapViewDidStopUserInteraction:(id)arg1;
-(id)mapViewCurrentRouteMatch:(id)arg1;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(int)arg2 animated:(BOOL)arg3;
-(void)mapView:(id)arg1 didStopRespondingToGesture:(int)arg2 zoomDirection:(int)arg3 didDecelerate:(BOOL)arg4;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)mapView:(id)arg1 canZoomInDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
-(void)mapViewDidFinishCalloutExpansion:(id)arg1;
-(void)mapViewWillAnimateInAnnotationViews:(id)arg1;
-(void)mapViewDidAnimateInAnnotationViews:(id)arg1;
-(void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
@end

