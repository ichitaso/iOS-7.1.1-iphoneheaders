/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSArray, CIFilter, SKTextureCache;

@interface SKTexture : NSObject <NSCopying, NSCoding> {

	bool _shouldGenerateMipmaps;
	bool _didGenerateMipmaps;
	bool _isPath;
	bool _isData;
	NSString* _imgName;
	NSArray* _searchPaths;
	CGRect _textRect;
	CGRect _textCoords;
	bool _disableAlpha;
	bool _isRotated;
	CGPoint _cropScale;
	CGPoint _cropOffset;
	int _alignment;
	int _rowLength;
	bool _isCompressed;
	int _compressedSize;
	unsigned _compressedFormat;
	CIFilter* _filter;
	SKTexture* _originalTexture;
	unsigned _textureTarget;
	NSString* _originalAtlasName;
	NSString* _subTextureName;
	SKTextureCache* _textureCache;
	unsigned* _alphaMap;
	CGSize _alphaMapSize;

}

@property (nonatomic,readonly) NSString * imageNameOrPath; 
@property (assign,nonatomic) long long filteringMode; 
@property (assign,nonatomic) bool usesMipmaps; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (assign,nonatomic) unsigned textureTarget;                    //@synthesize textureTarget=_textureTarget - In the implementation block
@property (assign,nonatomic) bool isRotated;                            //@synthesize isRotated=_isRotated - In the implementation block
@property (nonatomic,readonly) bool useAlpha; 
@property (nonatomic,readonly) bool hasAlpha; 
@property (assign,nonatomic) bool disableAlpha; 
@property (nonatomic,readonly) bool isRepeatable; 
@property (assign,nonatomic) CGPoint cropScale;                         //@synthesize cropScale=_cropScale - In the implementation block
@property (assign,nonatomic) CGPoint cropOffset;                        //@synthesize cropOffset=_cropOffset - In the implementation block
@property (nonatomic,copy) NSString * originalAtlasName;                //@synthesize originalAtlasName=_originalAtlasName - In the implementation block
@property (nonatomic,copy) NSString * subTextureName;                   //@synthesize subTextureName=_subTextureName - In the implementation block
@property (assign,nonatomic) int wrapMode; 
@property (nonatomic,readonly) unsigned* alphaMap;                      //@synthesize alphaMap=_alphaMap - In the implementation block
@property (nonatomic,readonly) CGSize alphaMapSize;                     //@synthesize alphaMapSize=_alphaMapSize - In the implementation block
+(id)compressedTextureWithData:(id)arg1 ;
+(id)compressedTextureWithData:(id)arg1 size:(CGSize)arg2 bitsPerPixel:(unsigned)arg3 hasAlpha:(bool)arg4 ;
+(id)textureWithImagePath:(id)arg1 ;
+(id)_textureByTransferingData:(char*)arg1 size:(CGSize)arg2 ;
+(id)_textureByTransferingData:(char*)arg1 size:(CGSize)arg2 rowLength:(unsigned)arg3 alignment:(unsigned)arg4 ;
+(id)_textureWithGLTextureId:(unsigned)arg1 size:(CGSize)arg2 ;
+(id)_textureWithImageNamed:(id)arg1 ;
+(id)textureWithImageNamed:(id)arg1 ;
+(id)textureWithRect:(CGRect)arg1 inTexture:(id)arg2 ;
+(void)registerTextureCache:(id)arg1 forName:(id)arg2 ;
+(void)preloadTextures:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(id)lookupTextureCacheForName:(id)arg1 ;
+(id)textureWithCGImage:(CGImageRef)arg1 ;
+(void)addTextureToPreloadlist:(id)arg1 ;
+(id)textureWithImageNamed:(id)arg1 rect:(CGRect)arg2 ;
+(id)textureWithImage:(id)arg1 ;
+(id)textureWithData:(id)arg1 size:(CGSize)arg2 ;
+(id)textureWithData:(id)arg1 size:(CGSize)arg2 rowLength:(unsigned)arg3 alignment:(unsigned)arg4 ;
+(void)deleteUnusedTextures;
+(void)preloadTextures;
+(void)updateTextures;
-(CGImageRef)_newTextureFromGLCache;
-(id)imageNameOrPath;
-(void)_savePngFromGLCache:(id)arg1 ;
-(id)imgName;
-(void)unload;
-(void)setFilteringMode:(long long)arg1 ;
-(bool)hasAlpha;
-(unsigned*)alphaMap;
-(CGSize)alphaMapSize;
-(long long)filteringMode;
-(int)wrapMode;
-(void)_ensureImageData;
-(bool)loadImageDataFromPVRData:(id)arg1 ;
-(void)loadImageData;
-(bool)loadImageDataFromPVRGZData:(id)arg1 ;
-(void)loadImageDataFromCGImage:(CGImageRef)arg1 pointsSize:(CGSize)arg2 ;
-(void)initTextureCacheWithImageData;
-(id)initWithImageNamed:(id)arg1 ;
-(CGPoint)cropScale;
-(void)generateAlphaMapOfSize:(CGSize)arg1 fromImage:(CGImageRef)arg2 ;
-(bool)alphaTestX:(double)arg1 y:(double)arg2 ;
-(CGImageRef)alphaMask;
-(void)setTextureDimension:(const CGSize*)arg1 withPixelSize:(const CGSize*)arg2 ;
-(void)preloadWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithImagePath:(id)arg1 ;
-(bool)useAlpha;
-(void)setDisableAlpha:(bool)arg1 ;
-(bool)disableAlpha;
-(bool)isInMemory;
-(id)textureByApplyingCIFilter:(id)arg1 ;
-(bool)usesMipmaps;
-(void)setUsesMipmaps:(bool)arg1 ;
-(void)_loadOnTextureQueue;
-(bool)isRepeatable;
-(void)preload;
-(int)glTextureId;
-(void)setCropScale:(CGPoint)arg1 ;
-(void)setIsRotated:(bool)arg1 ;
-(CGPoint)cropOffset;
-(void)setCropOffset:(CGPoint)arg1 ;
-(unsigned)textureTarget;
-(void)setTextureTarget:(unsigned)arg1 ;
-(id)originalAtlasName;
-(void)setOriginalAtlasName:(id)arg1 ;
-(id)subTextureName;
-(void)setSubTextureName:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isRotated;
-(id).cxx_construct;
-(void)load;
-(void).cxx_destruct;
-(void)commonInit;
-(void)setWrapMode:(int)arg1 ;
-(CGSize)pixelSize;
-(CGRect)textureRect;
@end
