/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject {

	CIBurstImageSetInternal* _priv;

}
+(id)defaultVersionString;
+(id)burstImageSet;
+(id)burstImageSetWithOptions:(id)arg1 ;
-(id)burstId;
-(id)bestImageIdentifiers;
-(void)addImageFromIOSurface:(IOSurfaceRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(BOOL)isPortrait;
-(BOOL)isAction;
-(id)allImageIdentifiers;
-(double)secondsSinceStart;
-(id)statsForImageWithIdentifier:(id)arg1 ;
-(id)coverImageIdentifier;
-(unsigned long long)imageClusterCount;
-(id)imageClusterForIndex:(unsigned long long)arg1 ;
-(void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)initWithOptions:(id)arg1 ;
@end

