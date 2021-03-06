/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3D2DDataBuffer.h>

@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer {

	vector<unsigned char, std::__1::allocator<unsigned char> > mContainer;

}

@property (nonatomic,readonly) vector<unsigned char* container; 
-(unsigned long long)componentByteSize;
-(void)fillCapacity;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 ;
-(void)resizeFillDimension:(const DataBuffer2DDimension*)arg1 ;
-(unsigned long long)count;
-(const void*)data;
-(vector<unsigned char*)container;
-(int)componentType;
-(void*)mutableData;
@end

