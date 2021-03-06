/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountSettings/AppleAccountSettings-Structs.h>
#import <AccountsUI/ACUIDataclassConfigurationViewController.h>
#import <AppleAccountSettings/AAUpdateAccountViewControllerDelegate.h>
#import <AppleAccountSettings/AAGenericTermsRemoteUIDelegate.h>
#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>

@protocol OS_dispatch_queue;
@class PSSpecifier, UIView, AAAutoAccountVerifier, NSMutableArray, UINavigationController, RUILoader, NSLock, NSOperationQueue, AAGenericTermsRemoteUI, AADeviceLocatorService, NSObject;

@interface AADataclassConfigurationViewController : ACUIDataclassConfigurationViewController <AAUpdateAccountViewControllerDelegate, AAGenericTermsRemoteUIDelegate, RUIObjectModelDelegate> {

	PSSpecifier* _findMyiPhoneExplanationSpecifier;
	PSSpecifier* _findMyiPhoneSwitchSpecifier;
	PSSpecifier* _documentsAndDataSwitchSpecifier;
	PSSpecifier* _storageAndBackupSpecifier;
	PSSpecifier* _keychainSyncSpecifier;
	UIView* _accountDowngradeConfirmation;
	AAAutoAccountVerifier* _accountVerifier;
	PSSpecifier* _checkMailSpecifier;
	NSMutableArray* _headerSpecifiers;
	UINavigationController* _addEmailNavController;
	RUILoader* _addEmailLoader;
	NSMutableArray* _addEmailObjectModels;
	PSSpecifier* _mailDataclassSpecifier;
	int _keychainStatus;
	int _keychainSyncNotificationToken;
	int _iCloudRestoreToken;
	BOOL _presentedUpdate;
	BOOL _shouldAuthenticateAfterUpdate;
	BOOL _loadedViaURL;
	BOOL _monitoringReachability;
	BOOL _allowAccountRevalidation;
	BOOL _performedUpdate;
	BOOL _performingUpdate;
	BOOL _appearedBefore;
	BOOL _shouldRemoveParent;
	BOOL _topLevelSettings;
	BOOL _shouldPresentLocationWarning;
	BOOL _accountWasPromoted;
	BOOL _shouldAttemptToEnableDataclasses;
	BOOL _userCanceledLastUpdate;
	BOOL _didShowDeletionConfirmation;
	BOOL _isTogglingDeviceLocator;
	struct {
		unsigned didAddAccount : 1;
		unsigned hasSyncedData : 1;
	}  _flags;
	NSLock* _accountValidationLock;
	NSOperationQueue* _networkActivityQueue;
	AAGenericTermsRemoteUI* _genericTermsRemoteUI;
	AADeviceLocatorService* _deviceLocatorService;
	/*^block*/ id _deviceLocatorOperationCompletionHandler;
	id _restrictionChangeNotificationObserver;
	NSObject<OS_dispatch_queue>* _accountRefreshQueue;

}
-(void)_accountStoreChanged:(id)arg1 ;
-(BOOL)_dataclassBoundToSingleAccountAndOnAlready:(id)arg1 ;
-(BOOL)_isDataclassSycningOnlyUsingExchange:(id)arg1 ;
-(BOOL)_localCalendarStoreHasReadOnlyCalendars;
-(void)_restoreFromiCloudStatusChange;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)updateAccountViewController:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)_presentValidationErrorAlert:(id)arg1 account:(id)arg2 ;
-(void)_handleAccountRevalidationCompletionWithValidatedAccount:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_autoVerifyAccount;
-(id)_accountAutoVerifier;
-(void)_handleAccountAutoVerificationCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)_isRunningInMail;
-(void)_confirmAccountDeletion;
-(void)_handleAccountDeletionConfirmed;
-(void)_showGenericTermsUI;
-(BOOL)_isAnotherAccountSyncingDataclass:(id)arg1 ;
-(void)_cleanupFromNetworkActivity;
-(void)_deviceLocatorStateDidChange:(id)arg1 ;
-(BOOL)_shouldEnableFMIPSpecifier;
-(void)_keychainSyncStateDidChange;
-(void)_refreshKeychainState;
-(BOOL)_isAccountInGrayMode;
-(void)_promptForEmailAccountConfiguration;
-(void)_promptUserToEnableFindMyiPhoneIfPossible;
-(void)_presentFirstAlertIfNecessary;
-(void)_checkNetworkReachabilityAndValidateAccount;
-(void)_enableAllProvisionedDataclasses;
-(id)_specifiersForUnverifiedAccountHeader;
-(id)_specifiersForServiceUnavailableHeader;
-(id)_specifiersForGrayModeHeader;
-(void)_addFMiPFooterTextIfNecessary;
-(id)_deviceSpecificLocalizedStringKey:(id)arg1 ;
-(id)_specifiersForStorageAndBackup;
-(id)_specifiersForServerProvidedFooter;
-(void)_footerButtonTapped:(id)arg1 ;
-(void)_checkMailButtonTapped:(id)arg1 ;
-(void)_openServiceUnavailableInfoLink;
-(void)_showTermsAndConditionsButtonTapped:(id)arg1 ;
-(id)_specifierForShoebox;
-(id)_specifierForDocumentsAndData;
-(id)_specifierForPhotoStream;
-(id)_specifierForFindMyiPhone;
-(id)_specifierForKeychainSync;
-(id)_keychainSyncStateForSpecifier:(id)arg1 ;
-(void)_shoeboxStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isShoeboxEnabledForSpecifier:(id)arg1 ;
-(id)_isPhotoStreamEnabled:(id)arg1 ;
-(id)_areDocumentsAndDataEnabled:(id)arg1 ;
-(BOOL)_carrierBundleSaysHideFindMyiPhone;
-(void)_setFindMyiPhoneEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_isFindMyiPhoneEnabledForSpecifier:(id)arg1 ;
-(BOOL)_locationServicesDisabledByRestrictions;
-(void)_disableFindMyiPhone;
-(void)_enableFindMyiPhone;
-(void)_configureEmailAccount;
-(void)_presentCreateFreeEmailPromptWithCompletion:(/*^block*/ id)arg1 isForNotes:(BOOL)arg2 ;
-(void)_performNetworkValidation;
-(void)_registerAccount;
-(void)_revalidateAccount;
-(BOOL)_setupForNetworkActivity;
-(void)_handleAccountRegistrationCompletionWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_updateAccountInformation;
-(void)_removeHeaderSpecifiers;
-(void)setShouldRemoveParent:(BOOL)arg1 ;
-(void)setShouldAttemptToEnableDataclasses:(BOOL)arg1 ;
-(void)setAccountWasPromoted:(BOOL)arg1 ;
-(void)_beginObservingiCloudRestoreStatus;
-(void)_startObservingAccountStoreChanges;
-(void)_startObservingDeviceLocatorStateChanges;
-(void)_registerForKeychainSyncStatusChangeNotification;
-(BOOL)_isRestoringFromiCloud;
-(void)_endObservingiCloudRestoreStatus;
-(void)_stopObservingAccountStoreChanges;
-(void)_stopObservingDeviceLocatorStateChanges;
-(void)_stopListeningForKeychainSyncStatusChangeNotification;
-(void)setSpecifier:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(unsigned)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2 ;
-(id)otherSpecifiers;
-(void)deleteButtonTapped:(id)arg1 ;
-(Class)accountInfoControllerClass;
-(BOOL)shouldEnableAccountSummaryCell;
-(BOOL)shouldShowSpecifierForDataclass:(id)arg1 ;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(void)reloadDynamicSpecifiersWithAnimation:(BOOL)arg1 ;
-(id)_titleForError:(id)arg1 account:(id)arg2 ;
-(id)_messageForError:(id)arg1 account:(id)arg2 ;
-(void)_cleanupLoader;
-(void)_startMonitoringReachability;
-(void)_stopMonitoringReachability;
-(void)_reachabilityChanged:(id)arg1 ;
-(id)specifiers;
-(void)willBecomeActive;
-(void).cxx_destruct;
@end

