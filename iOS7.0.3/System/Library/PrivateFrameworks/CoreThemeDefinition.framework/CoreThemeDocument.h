/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDPersistentDocument.h>

@protocol TDAssetManagementDelegate;
@class NSMutableDictionary, TDHistorian, TDThreadMOCOrganizer, NSManagedObjectModel, NSString, NSURL;

@interface CoreThemeDocument : TDPersistentDocument {

	NSMutableDictionary* constantArrayControllers;
	NSMutableDictionary* cachedConstantArrays;
	int cachedMaxIdentifierInUse;
	TDHistorian* m_historian;
	TDThreadMOCOrganizer* m_mocOrganizer;
	NSManagedObjectModel* m_managedObjectModel;
	NSString* pathToRepresentedDocument;
	NSString* _relativePathToProductionData;
	NSString* _targetPlatform;
	BOOL m_didMigrate;
	int _updateVersionMetadataState;
	<TDAssetManagementDelegate>* _assetManagementDelegate;

}

@property (copy) NSString * pathToRepresentedDocument; 
@property (assign,nonatomic) <TDAssetManagementDelegate> * assetManagementDelegate;              //@synthesize assetManagementDelegate=_assetManagementDelegate - In the implementation block
@property (nonatomic,readonly) NSURL * themeBitSourceURL; 
+(int)targetPlatformForMOC:(id)arg1 ;
+(id)dataModelNameForVersion:(int)arg1 ;
+(id)_sharedDocumentList;
+(int)defaultTargetPlatform;
+(id)persistentStringForPlatform:(int)arg1 ;
+(int)dataModelVersionFromMetadata:(id)arg1 ;
+(int)dataModelVersion;
+(void)presentMigrationProgress;
+(void)closeMigrationProgress;
+(id)defaultThemeBitSourceURLForDocumentURL:(id)arg1 ;
+(id)_imageAssetURLsByCopyingFileURLs:(id)arg1 toManagedLocationAtURL:(id)arg2 error:(id*)arg3 ;
+(int)platformForPersistentString:(id)arg1 ;
+(unsigned)standardColorSpaceID;
+(int)shouldConvertColorsFromColorSpaceWithIdentifier:(unsigned)arg1 toIdentifier:(unsigned)arg2 error:(id*)arg3 ;
+(void)doneWithColorConversion;
+(void)_addThemeDocument:(id)arg1 ;
+(id)createConfiguredDocumentAtURL:(id)arg1 error:(id*)arg2 ;
+(id)migrateDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)artworkFormat;
-(void)setArtworkFormat:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)managedObjectModel;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(id)stateWithIdentifier:(int)arg1 ;
-(id)rootPathForProductionData;
-(id)valueWithIdentifier:(int)arg1 ;
-(id)presentationStateWithIdentifier:(int)arg1 ;
-(id)drawingLayerWithIdentifier:(int)arg1 ;
-(void)deleteObjects:(id)arg1 ;
-(id)assetManagementDelegate;
-(id)elementWithIdentifier:(int)arg1 ;
-(id)partWithIdentifier:(int)arg1 ;
-(id)sizeWithIdentifier:(int)arg1 ;
-(id)directionWithIdentifier:(int)arg1 ;
-(id)historian;
-(id)metadatumForKey:(id)arg1 ;
-(BOOL)isCustomLook;
-(id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)primeArrayControllers;
-(void)changedObjectsNotification:(id)arg1 ;
-(id)initWithType:(id)arg1 error:(id*)arg2 ;
-(void)buildModel;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)_configureAfterFirstSave;
-(id)customizedSchemaElementDefinitions;
-(void)deleteProductions:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
-(id)schemaDefinitionWithElementID:(int)arg1 ;
-(id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(id*)arg5 ;
-(id)_namedTextEffectPartDefinition;
-(id)_namedImageEffectPartDefinition;
-(id)createEffectStyleProductionForPartDefinition:(id)arg1 withNameIdentifier:(id)arg2 ;
-(id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 ;
-(id)_cachedConstantsForEntity:(id)arg1 ;
-(id)themeConstant:(id)arg1 withIdentifier:(int)arg2 ;
-(id)newObjectForEntity:(id)arg1 ;
-(id)effectTypeWithIdentifier:(unsigned)arg1 ;
-(id)effectParameterValueWithType:(unsigned)arg1 inComponent:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(unsigned)countForEntity:(id)arg1 withPredicate:(id)arg2 ;
-(id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 error:(id*)arg3 ;
-(id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4 ;
-(id)mocOrganizer;
-(void)deleteProduction:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
-(id)minimalDisplayNameForThemeConstant:(id)arg1 ;
-(id)defaultBaseFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 ;
-(id)folderNameFromRenditionKey:(id)arg1 forPartDefinition:(id)arg2 ;
-(int)targetPlatform;
-(id)defaultPNGFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 ;
-(id)handCraftedAssetURLForFileName:(id)arg1 ;
-(BOOL)shouldGeneratePSDAssetFromArtFile:(id)arg1 ;
-(id)artworkDraftTypeWithIdentifier:(int)arg1 ;
-(id)renditionTypeWithIdentifier:(int)arg1 ;
-(id)defaultPathComponentsForPartDefinition:(id)arg1 ;
-(id)_themeBitSource:(id*)arg1 ;
-(id)createReferencePNGForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 atLocation:(id)arg3 error:(id*)arg4 ;
-(void)_normalizeRenditionKeySpec:(id)arg1 forSchemaRendition:(id)arg2 ;
-(BOOL)createPSDReferenceArtworkForRenditionGroup:(id)arg1 atDestination:(id)arg2 error:(id*)arg3 ;
-(id)renditionSubtypeWithIdentifier:(unsigned)arg1 ;
-(id)iterationTypeWithIdentifier:(int)arg1 ;
-(id)mappingForPhotoshopLayerIndex:(int)arg1 themeDrawingLayerIdentifier:(int)arg2 ;
-(id)namedEffectProductionWithName:(id)arg1 ;
-(id)_createNamedElementWithNextAvailableIdentifier;
-(id)_createNamedElementWithIdentifier:(int)arg1 ;
-(id)_namedImagePartDefinition;
-(id)idiomWithIdentifier:(int)arg1 ;
-(id)_themeBitSourceForReferencedFilesAtURLs:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5 ;
-(id)createNamedArtworkProductionsForAssets:(id)arg1 customInfos:(id)arg2 error:(id*)arg3 ;
-(void)importNamedAssetsWithImportInfos:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)_addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5 sortedCustomInfos:(id*)arg6 ;
-(id)_createPhotoshopElementProductionWithAsset:(id)arg1 ;
-(id)createAssetWithName:(id)arg1 scaleFactor:(unsigned)arg2 inCategory:(id)arg3 forThemeBitSource:(id)arg4 ;
-(id)createAssetWithName:(id)arg1 fileType:(id)arg2 scaleFactor:(unsigned)arg3 inCategory:(id)arg4 forThemeBitSource:(id)arg5 ;
-(id)assetAtFileURL:(id)arg1 ;
-(void)_getFilename:(id*)arg1 scaleFactor:(unsigned*)arg2 category:(id*)arg3 bitSource:(id*)arg4 forFileURL:(id)arg5 ;
-(id)createElementProductionWithAsset:(id)arg1 ;
-(id)pathToRepresentedDocument;
-(id)relativePathToProductionData;
-(void)setMetadatum:(id)arg1 forKey:(id)arg2 ;
-(id)_predicateForRenditionKeySpec:(id)arg1 ;
-(void)resetThemeConstants;
-(id)lookWithIdentifier:(int)arg1 ;
-(id)schemaCategoryWithIdentifier:(int)arg1 ;
-(int)renditionKeySemantics;
-(id)_customizedSchemaDefinitionsForEntity:(id)arg1 ;
-(BOOL)customizationExistsForSchemaDefinition:(id)arg1 ;
-(BOOL)customizeSchemaPartDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(id*)arg4 ;
-(id)createEffectStyleProductionForPartDefinition:(id)arg1 ;
-(id)updatedVersionsMetadataFromMetadata:(id)arg1 ;
-(BOOL)checkCompatibilityOfDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)convertColorsFromColorSpaceWithIdentifier:(unsigned)arg1 toIdentifier:(unsigned)arg2 ;
-(void)setTargetPlatform:(int)arg1 ;
-(void)setRelativePathToProductionData:(id)arg1 ;
-(void)addThemeBitSourceAtPath:(id)arg1 createProductions:(BOOL)arg2 ;
-(id)initWithType:(id)arg1 targetPlatform:(int)arg2 error:(id*)arg3 ;
-(void)checkVersionsAndUpdateIfNecessary;
-(id)migrateFromWindowFormat14ToWindowFormat15:(id*)arg1 ;
-(id)updateToSchemaVersion3AndReturnAlertString:(id*)arg1 ;
-(id)updateToSchemaVersion4AndReturnAlertString:(id*)arg1 ;
-(id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(id*)arg1 ;
-(void)recacheThemeConstant:(id)arg1 ;
-(id)effectParameterTypeWithIdentifier:(unsigned)arg1 ;
-(id)effectComponentWithType:(unsigned)arg1 inRendition:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(id)constantWithName:(id)arg1 forIdentifier:(int)arg2 ;
-(id)psdImageRefForAsset:(id)arg1 ;
-(id)zeroCodeArtworkInfoWithIdentifier:(int)arg1 ;
-(id)createNamedEffectProductionWithName:(id)arg1 isText:(BOOL)arg2 ;
-(id)namedArtworkProductionWithName:(id)arg1 ;
-(void)importNamedAssetsFromFileURLs:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)importNamedAssetsWithImportInfos:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)deleteNamedAssets:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)_genericPartDefinition;
-(id)createAssetWithName:(id)arg1 inCategory:(id)arg2 forThemeBitSource:(id)arg3 ;
-(id)assetAtPath:(id)arg1 ;
-(id)addAssetsAtFileURLs:(id)arg1 ;
-(id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 ;
-(id)pathToAsset:(id)arg1 ;
-(id)renditionsMatchingRenditionKeySpec:(id)arg1 ;
-(unsigned)countOfRenditionsMatchingRenditionKeySpec:(id)arg1 ;
-(unsigned)countOfRenditionsMatchingRenditionKeySpecs:(id)arg1 ;
-(BOOL)didMigrate;
-(int)renditionKeySpecAttributeCount;
-(id)customizedSchemaEffectDefinitions;
-(void)removeCustomizationForSchemaDefinition:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
-(BOOL)customizeSchemaElementDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)customizeSchemaEffectDefinition:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(id*)arg3 ;
-(id)schemaPartDefinitionWithElementID:(int)arg1 partID:(int)arg2 ;
-(id)namedArtworkProductions;
-(id)namedEffectProductions;
-(void)exportColorsToURL:(id)arg1 ;
-(void)importColorsFromURL:(id)arg1 valuesOnly:(BOOL)arg2 getUnusedColorNames:(id*)arg3 ;
-(void)exportCursorsToURL:(id)arg1 ;
-(void)importCursorsFromURL:(id)arg1 getUnusedImportedCursors:(id*)arg2 getUnupdatedCursors:(id*)arg3 ;
-(id)themeBitSourceURL;
-(void)addThemeBitSourceAtPath:(id)arg1 ;
-(void)setPathToRepresentedDocument:(id)arg1 ;
-(void)setAssetManagementDelegate:(id)arg1 ;
-(unsigned)colorSpaceID;
-(BOOL)usesCUISystemThemeRenditionKey;
-(const renditionkeyfmt*)renditionKeyFormat;
-(unsigned)checksum;
-(void)deleteObject:(id)arg1 ;
-(id)uuid;
-(void)setUuid:(id)arg1 ;
@end

