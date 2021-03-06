/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSURL;

@interface QLThumbnail : NSObject {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)sharedQueue;
+(id)defaultDescriptors;
-(id)thumbnailCreationOperationForUseMode:(unsigned)arg1 descriptor:(id)arg2 ;
-(char)provideImages:(/*^block*/id)arg1 error:(id*)arg2 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)imageForUseMode:(unsigned)arg1 descriptor:(id)arg2 generateIfNeeded:(char)arg3 contentRect:(CGRect*)arg4 error:(id*)arg5 ;
@end

