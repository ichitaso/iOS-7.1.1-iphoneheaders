/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:07:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel, SiriUIStarsView, UIImageView, MKMapItem, SALocalSearchReviewList;

@interface SiriRestaurantsListItemCell : SiriUIContentCollectionViewCell {

	char _showTableTimes;
	UILabel* _nameLabel;
	UILabel* _addressLabel;
	UILabel* _distanceLabel;
	UILabel* _categoriesAndPriceLabel;
	UILabel* _tableTimesLabel;
	SiriUIStarsView* _starsView;
	UILabel* _reviewsLabel;
	UIImageView* _chevronView;
	MKMapItem* _mapItem;
	SALocalSearchReviewList* _reviewList;

}
+(float)heightForTableTimesCell;
+(float)heightForDefaultCell;
-(void)_setReviewInfo:(id)arg1 ;
-(void)_setTableTimes:(id)arg1 ;
-(void)_setAddress:(id)arg1 ;
-(void)_layoutView:(id)arg1 withX:(float)arg2 Y:(float)arg3 maxWidth:(float)arg4 ;
-(void)_mapItemDidFetchAttribution:(id)arg1 ;
-(void)configureWithRestaurant:(id)arg1 showTableTimes:(char)arg2 ;
-(void)_setCategoriesAndPriceWithRestaurant:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setDistance:(id)arg1 ;
@end

