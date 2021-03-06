/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <MapKit/MKCalloutSource.h>

@class UIView, NSString;

@interface VKLabelMarker : NSObject <MKCalloutSource> {

	shared_ptr<vk::LabelManager>* _manager;
	shared_ptr<vk::InfoLabel>* _label;
	float _contentScale;

}

@property (nonatomic,retain) UIView * leftCalloutAccessoryView; 
@property (nonatomic,retain) UIView * rightCalloutAccessoryView; 
@property (nonatomic,retain) UIView * detailCalloutAccessoryView; 
@property (nonatomic,readonly) NSString * subtitle; 
-(void)setLeftCalloutAccessoryView:(id)arg1 ;
-(id)leftCalloutAccessoryView;
-(id)rightCalloutAccessoryView;
-(void)setDetailCalloutAccessoryView:(id)arg1 ;
-(id)detailCalloutAccessoryView;
-(void)setRightCalloutAccessoryView:(id)arg1 ;
-(void)dealloc;
-(VKEdgeInsets)bounds;
-(id)title;
-(id)subtitle;
-(id).cxx_construct;
-(void).cxx_destruct;
-(bool)isSelectable;
-(CGPoint)coordinate;
-(id)iconName;
-(CGPoint)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(bool)arg3 ;
-(CGPoint)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 ;
-(id)debugAnchorPointString;
-(id)initWithManager:(const shared_ptr<vk::LabelManager>*)arg1 infoLabel:(const shared_ptr<vk::InfoLabel>*)arg2 contentScale:(float)arg3 ;
-(shared_ptr<vk::InfoLabel>*)infoLabel;
-(CGRect)calloutAnchorRect;
-(bool)isOneWayArrow;
-(bool)isTrafficIncident;
-(bool)hasBusinessID;
-(unsigned long long)businessID;
-(id)incident;
-(id)featureHandles;
-(void)setLabelSelected:(bool)arg1 ;
@end

