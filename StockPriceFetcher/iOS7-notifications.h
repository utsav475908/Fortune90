// Developer/Library/Frameworks/SenTestingKit.framework/Headers/SenTestCaseRun.h
SENTEST_EXPORT NSString * const SenTestCaseDidStartNotification;
SENTEST_EXPORT NSString * const SenTestCaseDidStopNotification;
SENTEST_EXPORT NSString * const SenTestCaseDidFailNotification;

// Developer/Library/Frameworks/SenTestingKit.framework/Headers/SenTestDistributedNotifier.h
SENTEST_EXPORT NSString * const SenTestNotificationIdentifierKey;

// Developer/Library/Frameworks/SenTestingKit.framework/Headers/SenTestSuiteRun.h
SENTEST_EXPORT NSString * const SenTestSuiteDidStartNotification;
SENTEST_EXPORT NSString * const SenTestSuiteDidStopNotification;

// System/Library/Frameworks/Accounts.framework/Headers/ACAccountStore.h
ACCOUNTS_EXTERN NSString * const ACAccountStoreDidChangeNotification NS_AVAILABLE(NA, 5_0);

// System/Library/Frameworks/AssetsLibrary.framework/Headers/ALAssetsLibrary.h
extern NSString *const ALAssetsLibraryChangedNotification __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_4_0);

// System/Library/Frameworks/AVFoundation.framework/Headers/AVAudioSession.h
AVF_EXPORT NSString *const AVAudioSessionInterruptionNotification NS_AVAILABLE_IOS(6_0);
AVF_EXPORT NSString *const AVAudioSessionRouteChangeNotification NS_AVAILABLE_IOS(6_0);
AVF_EXPORT NSString *const AVAudioSessionMediaServicesWereLostNotification NS_AVAILABLE_IOS(7_0);
AVF_EXPORT NSString *const AVAudioSessionMediaServicesWereResetNotification NS_AVAILABLE_IOS(6_0);
AVF_EXPORT NSString *const AVCaptureDeviceWasConnectedNotification NS_AVAILABLE(10_7, 4_0);

// System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureDevice.h
AVF_EXPORT NSString *const AVCaptureDeviceWasDisconnectedNotification NS_AVAILABLE(10_7, 4_0);
AVF_EXPORT NSString *const AVCaptureDeviceSubjectAreaDidChangeNotification NS_AVAILABLE_IOS(5_0);

// System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureInput.h
AVF_EXPORT NSString *const AVCaptureInputPortFormatDescriptionDidChangeNotification NS_AVAILABLE(10_7, 4_0);

// System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureSession.h
AVF_EXPORT NSString *const AVCaptureSessionRuntimeErrorNotification NS_AVAILABLE(10_7, 4_0);
AVF_EXPORT NSString *const AVCaptureSessionDidStartRunningNotification NS_AVAILABLE(10_7, 4_0);
AVF_EXPORT NSString *const AVCaptureSessionDidStopRunningNotification NS_AVAILABLE(10_7, 4_0);
AVF_EXPORT NSString *const AVCaptureSessionWasInterruptedNotification NS_AVAILABLE_IOS(4_0);
AVF_EXPORT NSString *const AVCaptureSessionInterruptionEndedNotification NS_AVAILABLE_IOS(4_0);

// System/Library/Frameworks/AVFoundation.framework/Headers/AVPlayerItem.h
AVF_EXPORT NSString *const AVPlayerItemTimeJumpedNotification			 NS_AVAILABLE(10_7, 5_0);	// the item's current time has changed discontinuously
AVF_EXPORT NSString *const AVPlayerItemDidPlayToEndTimeNotification      NS_AVAILABLE(10_7, 4_0);   // item has played to its end time
AVF_EXPORT NSString *const AVPlayerItemFailedToPlayToEndTimeNotification NS_AVAILABLE(10_7, 4_3);   // item has failed to play to its end time
AVF_EXPORT NSString *const AVPlayerItemPlaybackStalledNotification       NS_AVAILABLE(10_9, 6_0);    // media did not arrive in time to continue playback
AVF_EXPORT NSString *const AVPlayerItemNewAccessLogEntryNotification	 NS_AVAILABLE(10_9, 6_0);	// a new access log entry has been added
AVF_EXPORT NSString *const AVPlayerItemNewErrorLogEntryNotification		 NS_AVAILABLE(10_9, 6_0);	// a new error log entry has been added

// System/Library/Frameworks/CoreBluetooth.framework/Headers/CBCentralManagerConstants.h
CB_EXTERN NSString * const CBConnectPeripheralOptionNotifyOnNotificationKey NS_AVAILABLE(NA, 6_0);

// System/Library/Frameworks/CoreData.framework/Headers/NSManagedObjectContext.h
COREDATA_EXTERN NSString * const NSManagedObjectContextWillSaveNotification NS_AVAILABLE(10_5, 3_0);
COREDATA_EXTERN NSString * const NSManagedObjectContextDidSaveNotification NS_AVAILABLE(10_4, 3_0);
COREDATA_EXTERN NSString * const NSManagedObjectContextObjectsDidChangeNotification NS_AVAILABLE(10_4, 3_0);    

// System/Library/Frameworks/CoreData.framework/Headers/NSPersistentStoreCoordinator.h
COREDATA_EXTERN NSString * const NSPersistentStoreCoordinatorStoresWillChangeNotification NS_AVAILABLE(10_9, 7_0);
COREDATA_EXTERN NSString * const NSPersistentStoreCoordinatorStoresDidChangeNotification NS_AVAILABLE(10_4, 3_0);    
COREDATA_EXTERN NSString * const NSPersistentStoreCoordinatorWillRemoveStoreNotification NS_AVAILABLE(10_5, 3_0);    
COREDATA_EXTERN NSString * const NSPersistentStoreDidImportUbiquitousContentChangesNotification NS_AVAILABLE(10_7, 5_0);
MIDI_EXPORT extern NSString *const MIDINetworkNotificationContactsDidChange __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_4_2);

// System/Library/Frameworks/CoreMIDI.framework/Headers/MIDINetworkSession.h
MIDI_EXPORT extern NSString *const MIDINetworkNotificationSessionDidChange __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_4_2);

// System/Library/Frameworks/CoreTelephony.framework/Headers/CTTelephonyNetworkInfo.h
CORETELEPHONY_EXTERN NSString * const CTRadioAccessTechnologyDidChangeNotification __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_7_0);

// System/Library/Frameworks/EventKit.framework/Headers/EKEventStore.h
EVENTKIT_EXTERN NSString *const EKEventStoreChangedNotification __OSX_AVAILABLE_STARTING(__MAC_10_8,__IPHONE_4_0);

// System/Library/Frameworks/ExternalAccessory.framework/Headers/EAAccessoryManager.h
EA_EXTERN NSString *const EAAccessoryDidConnectNotification __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_3_0);
EA_EXTERN NSString *const EAAccessoryDidDisconnectNotification __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_3_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSBundle.h
FOUNDATION_EXPORT NSString * const NSBundleDidLoadNotification;

// System/Library/Frameworks/Foundation.framework/Headers/NSCalendar.h
FOUNDATION_EXPORT NSString * const NSCalendarDayChangedNotification NS_AVAILABLE(10_9, __NSCALENDAR_COND_IOS_7_0);
FOUNDATION_EXPORT NSString * const NSSystemClockDidChangeNotification NS_AVAILABLE(10_6, 4_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSFileHandle.h
FOUNDATION_EXPORT NSString * const NSFileHandleReadCompletionNotification;
FOUNDATION_EXPORT NSString * const NSFileHandleReadToEndOfFileCompletionNotification;
FOUNDATION_EXPORT NSString * const NSFileHandleConnectionAcceptedNotification;
FOUNDATION_EXPORT NSString * const NSFileHandleDataAvailableNotification;
FOUNDATION_EXPORT NSString * const NSFileHandleNotificationDataItem;
FOUNDATION_EXPORT NSString * const NSFileHandleNotificationFileHandleItem;
FOUNDATION_EXPORT NSString * const NSFileHandleNotificationMonitorModes NS_DEPRECATED(10_0, 10_7, 2_0, 5_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSFileManager.h
extern NSString * const NSUbiquityIdentityDidChangeNotification NS_AVAILABLE(10_8, 6_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSHTTPCookieStorage.h
FOUNDATION_EXPORT NSString * const NSHTTPCookieManagerAcceptPolicyChangedNotification;
FOUNDATION_EXPORT NSString * const NSHTTPCookieManagerCookiesChangedNotification;

// System/Library/Frameworks/Foundation.framework/Headers/NSKeyValueObserving.h
FOUNDATION_EXPORT NSString *const NSKeyValueChangeNotificationIsPriorKey NS_AVAILABLE(10_5, 2_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSLocale.h
FOUNDATION_EXPORT NSString * const NSCurrentLocaleDidChangeNotification NS_AVAILABLE(10_5, 2_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSMetadata.h
FOUNDATION_EXPORT NSString * const NSMetadataQueryDidStartGatheringNotification NS_AVAILABLE(10_4, 5_0);
FOUNDATION_EXPORT NSString * const NSMetadataQueryGatheringProgressNotification NS_AVAILABLE(10_4, 5_0);
FOUNDATION_EXPORT NSString * const NSMetadataQueryDidFinishGatheringNotification NS_AVAILABLE(10_4, 5_0);
FOUNDATION_EXPORT NSString * const NSMetadataQueryDidUpdateNotification NS_AVAILABLE(10_4, 5_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSPort.h
FOUNDATION_EXPORT NSString * const NSPortDidBecomeInvalidNotification;

// System/Library/Frameworks/Foundation.framework/Headers/NSThread.h
FOUNDATION_EXPORT NSString * const NSWillBecomeMultiThreadedNotification;
FOUNDATION_EXPORT NSString * const NSDidBecomeSingleThreadedNotification;
FOUNDATION_EXPORT NSString * const NSThreadWillExitNotification;

// System/Library/Frameworks/Foundation.framework/Headers/NSTimeZone.h
FOUNDATION_EXPORT NSString * const NSSystemTimeZoneDidChangeNotification NS_AVAILABLE(10_5, 2_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSUbiquitousKeyValueStore.h
FOUNDATION_EXPORT NSString * const NSUbiquitousKeyValueStoreDidChangeExternallyNotification NS_AVAILABLE(10_7, 5_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSUndoManager.h
FOUNDATION_EXPORT NSString * const NSUndoManagerCheckpointNotification NS_AVAILABLE(10_0, 3_0);
FOUNDATION_EXPORT NSString * const NSUndoManagerWillUndoChangeNotification NS_AVAILABLE(10_0, 3_0);
FOUNDATION_EXPORT NSString * const NSUndoManagerWillRedoChangeNotification NS_AVAILABLE(10_0, 3_0);
FOUNDATION_EXPORT NSString * const NSUndoManagerDidUndoChangeNotification NS_AVAILABLE(10_0, 3_0);
FOUNDATION_EXPORT NSString * const NSUndoManagerDidRedoChangeNotification NS_AVAILABLE(10_0, 3_0);
FOUNDATION_EXPORT NSString * const NSUndoManagerDidOpenUndoGroupNotification NS_AVAILABLE(10_0, 3_0);
FOUNDATION_EXPORT NSString * const NSUndoManagerWillCloseUndoGroupNotification NS_AVAILABLE(10_0, 3_0);
FOUNDATION_EXPORT NSString * const NSUndoManagerDidCloseUndoGroupNotification NS_AVAILABLE(10_7, 5_0);

// System/Library/Frameworks/Foundation.framework/Headers/NSURLCredentialStorage.h
FOUNDATION_EXPORT NSString *const NSURLCredentialStorageChangedNotification;

// System/Library/Frameworks/Foundation.framework/Headers/NSUserDefaults.h
FOUNDATION_EXPORT NSString * const NSUserDefaultsDidChangeNotification;

// System/Library/Frameworks/GameController.framework/Headers/GCController.h
GAMECONTROLLER_EXTERN NSString *const GCControllerDidConnectNotification;
GAMECONTROLLER_EXTERN NSString *const GCControllerDidDisconnectNotification;

// System/Library/Frameworks/GameKit.framework/Headers/GKLocalPlayer.h
GK_EXTERN NSString *GKPlayerAuthenticationDidChangeNotificationName __OSX_AVAILABLE_STARTING(__MAC_10_8,__IPHONE_4_1);
// System/Library/Frameworks/GameKit.framework/Headers/GKPlayer.h
GK_EXTERN_WEAK NSString *GKPlayerDidChangeNotificationName;
// System/Library/Frameworks/MapKit.framework/Headers/MKAnnotationView.h
MK_EXTERN NSString * const MKAnnotationCalloutInfoDidChangeNotification;

// System/Library/Frameworks/MediaPlayer.framework/Headers/MPMediaLibrary.h:
MP_EXTERN NSString *const MPMediaLibraryDidChangeNotification;

// System/Library/Frameworks/MediaPlayer.framework/Headers/MPMediaPlayback.h
MP_EXTERN NSString *const MPMediaPlaybackIsPreparedToPlayDidChangeNotification NS_AVAILABLE_IOS(3_2);

// System/Library/Frameworks/MediaPlayer.framework/Headers/MPMoviePlayerController.h
MP_EXTERN NSString *const MPMoviePlayerScalingModeDidChangeNotification;
MP_EXTERN NSString *const MPMoviePlayerPlaybackDidFinishNotification;
MP_EXTERN NSString *const MPMoviePlayerPlaybackStateDidChangeNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMoviePlayerLoadStateDidChangeNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMoviePlayerNowPlayingMovieDidChangeNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMoviePlayerWillEnterFullscreenNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMoviePlayerDidEnterFullscreenNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMoviePlayerWillExitFullscreenNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMoviePlayerDidExitFullscreenNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification NS_AVAILABLE_IOS(5_0);
MP_EXTERN NSString *const MPMoviePlayerReadyForDisplayDidChangeNotification NS_AVAILABLE_IOS(6_0);
MP_EXTERN NSString *const MPMovieMediaTypesAvailableNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMovieSourceTypeAvailableNotification NS_AVAILABLE_IOS(3_2); // Posted if the movieSourceType is MPMovieSourceTypeUnknown when preparing for playback.
MP_EXTERN NSString *const MPMovieDurationAvailableNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMovieNaturalSizeAvailableNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMoviePlayerThumbnailImageRequestDidFinishNotification NS_AVAILABLE_IOS(3_2);
MP_EXTERN NSString *const MPMoviePlayerTimedMetadataUpdatedNotification NS_AVAILABLE_IOS(4_0);
MP_EXTERN NSString *const MPMoviePlayerContentPreloadDidFinishNotification NS_DEPRECATED_IOS(2_0, 3_2);
MP_EXTERN NSString *const MPMusicPlayerControllerPlaybackStateDidChangeNotification;
MP_EXTERN NSString *const MPMusicPlayerControllerNowPlayingItemDidChangeNotification;
MP_EXTERN NSString *const MPMusicPlayerControllerVolumeDidChangeNotification;

// System/Library/Frameworks/MediaPlayer.framework/Headers/MPVolumeView.h
MP_EXTERN NSString *const MPVolumeViewWirelessRoutesAvailableDidChangeNotification NS_AVAILABLE_IOS(7_0);
MP_EXTERN NSString *const MPVolumeViewWirelessRouteActiveDidChangeNotification NS_AVAILABLE_IOS(7_0);

// System/Library/Frameworks/MessageUI.framework/Headers/MFMessageComposeViewController.h
extern NSString *const MFMessageComposeViewControllerTextMessageAvailabilityDidChangeNotification __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_5_0);

// System/Library/Frameworks/NewsstandKit.framework/Headers/NKIssue.h
extern NSString *const NKIssueDownloadCompletedNotification;

// System/Library/Frameworks/PassKit.framework/Headers/PKPassLibrary.h
extern NSString *const PKPassLibraryDidChangeNotification NS_AVAILABLE_IOS(6_0);

// System/Library/Frameworks/UIKit.framework/Headers/NSTextStorage.h
UIKIT_EXTERN NSString * const NSTextStorageWillProcessEditingNotification NS_AVAILABLE_IOS(7_0);
UIKIT_EXTERN NSString * const NSTextStorageDidProcessEditingNotification NS_AVAILABLE_IOS(7_0);

// System/Library/Frameworks/UIKit.framework/Headers/UIAccessibility.h
UIKIT_EXTERN NSString *const UIAccessibilityMonoAudioStatusDidChangeNotification NS_AVAILABLE_IOS(5_0);
UIKIT_EXTERN NSString *const UIAccessibilityClosedCaptioningStatusDidChangeNotification NS_AVAILABLE_IOS(5_0);
UIKIT_EXTERN NSString *const UIAccessibilityInvertColorsStatusDidChangeNotification NS_AVAILABLE_IOS(6_0);
UIKIT_EXTERN NSString *const UIAccessibilityGuidedAccessStatusDidChangeNotification NS_AVAILABLE_IOS(6_0);

// System/Library/Frameworks/UIKit.framework/Headers/UIAccessibilityConstants.h
UIKIT_EXTERN NSString *const UIAccessibilityAnnouncementDidFinishNotification NS_AVAILABLE_IOS(6_0);

// System/Library/Frameworks/UIKit.framework/Headers/UIApplication.h
UIKIT_EXTERN NSString *const UIApplicationDidEnterBackgroundNotification       NS_AVAILABLE_IOS(4_0);
UIKIT_EXTERN NSString *const UIApplicationWillEnterForegroundNotification      NS_AVAILABLE_IOS(4_0);
UIKIT_EXTERN NSString *const UIApplicationDidFinishLaunchingNotification;
UIKIT_EXTERN NSString *const UIApplicationDidBecomeActiveNotification;
UIKIT_EXTERN NSString *const UIApplicationWillResignActiveNotification;
UIKIT_EXTERN NSString *const UIApplicationDidReceiveMemoryWarningNotification;
UIKIT_EXTERN NSString *const UIApplicationWillTerminateNotification;
UIKIT_EXTERN NSString *const UIApplicationSignificantTimeChangeNotification;
UIKIT_EXTERN NSString *const UIApplicationWillChangeStatusBarOrientationNotification; // userInfo contains NSNumber with new orientation
UIKIT_EXTERN NSString *const UIApplicationDidChangeStatusBarOrientationNotification;  // userInfo contains NSNumber with old orientation
UIKIT_EXTERN NSString *const UIApplicationWillChangeStatusBarFrameNotification;       // userInfo contains NSValue with new frame
UIKIT_EXTERN NSString *const UIApplicationDidChangeStatusBarFrameNotification;        // userInfo contains NSValue with old frame
UIKIT_EXTERN NSString *const UIApplicationBackgroundRefreshStatusDidChangeNotification NS_AVAILABLE_IOS(7_0);
UIKIT_EXTERN NSString *const UIApplicationLaunchOptionsRemoteNotificationKey    NS_AVAILABLE_IOS(3_0); // userInfo contains NSDictionary with payload
UIKIT_EXTERN NSString *const UIApplicationLaunchOptionsLocalNotificationKey     NS_AVAILABLE_IOS(4_0); // userInfo contains a UILocalNotification
UIKIT_EXTERN NSString *const UIContentSizeCategoryDidChangeNotification NS_AVAILABLE_IOS(7_0); // userInfo dictionary will contain new value for UIContentSizeCategoryNewValueKey
UIKIT_EXTERN NSString *const UIApplicationUserDidTakeScreenshotNotification NS_AVAILABLE_IOS(7_0);

// System/Library/Frameworks/UIKit.framework/Headers/UIDevice.h
UIKIT_EXTERN NSString *const UIDeviceOrientationDidChangeNotification;
UIKIT_EXTERN NSString *const UIDeviceBatteryStateDidChangeNotification   NS_AVAILABLE_IOS(3_0);
UIKIT_EXTERN NSString *const UIDeviceBatteryLevelDidChangeNotification   NS_AVAILABLE_IOS(3_0);
UIKIT_EXTERN NSString *const UIDeviceProximityStateDidChangeNotification NS_AVAILABLE_IOS(3_0);

// System/Library/Frameworks/UIKit.framework/Headers/UIDocument.h
UIKIT_EXTERN NSString *const UIDocumentStateChangedNotification NS_AVAILABLE_IOS(5_0);

// System/Library/Frameworks/UIKit.framework/Headers/UILocalNotification.h
UIKIT_EXTERN NSString *const UILocalNotificationDefaultSoundName NS_AVAILABLE_IOS(4_0);

// System/Library/Frameworks/UIKit.framework/Headers/UIMenuController.h
UIKIT_EXTERN NSString *const UIMenuControllerWillShowMenuNotification;
UIKIT_EXTERN NSString *const UIMenuControllerDidShowMenuNotification;
UIKIT_EXTERN NSString *const UIMenuControllerWillHideMenuNotification;
UIKIT_EXTERN NSString *const UIMenuControllerDidHideMenuNotification;
UIKIT_EXTERN NSString *const UIMenuControllerMenuFrameDidChangeNotification;

// System/Library/Frameworks/UIKit.framework/Headers/UIPasteboard.h
UIKIT_EXTERN NSString *const UIPasteboardChangedNotification;
UIKIT_EXTERN NSString *const UIPasteboardRemovedNotification;

// System/Library/Frameworks/UIKit.framework/Headers/UIScreen.h
UIKIT_EXTERN NSString *const UIScreenDidConnectNotification NS_AVAILABLE_IOS(3_2);
UIKIT_EXTERN NSString *const UIScreenDidDisconnectNotification NS_AVAILABLE_IOS(3_2);
UIKIT_EXTERN NSString *const UIScreenModeDidChangeNotification NS_AVAILABLE_IOS(3_2);
UIKIT_EXTERN NSString *const UIScreenBrightnessDidChangeNotification NS_AVAILABLE_IOS(5_0);

// System/Library/Frameworks/UIKit.framework/Headers/UITableView.h
UIKIT_EXTERN NSString *const UITableViewSelectionDidChangeNotification;

// System/Library/Frameworks/UIKit.framework/Headers/UITextField.h
UIKIT_EXTERN NSString *const UITextFieldTextDidBeginEditingNotification;
UIKIT_EXTERN NSString *const UITextFieldTextDidEndEditingNotification;
UIKIT_EXTERN NSString *const UITextFieldTextDidChangeNotification;

// System/Library/Frameworks/UIKit.framework/Headers/UITextInput.h
UIKIT_EXTERN NSString *const UITextInputCurrentInputModeDidChangeNotification NS_AVAILABLE_IOS(4_2);

// System/Library/Frameworks/UIKit.framework/Headers/UITextView.h
UIKIT_EXTERN NSString * const UITextViewTextDidBeginEditingNotification;
UIKIT_EXTERN NSString * const UITextViewTextDidChangeNotification;
UIKIT_EXTERN NSString * const UITextViewTextDidEndEditingNotification;

// System/Library/Frameworks/UIKit.framework/Headers/UIWindow.h
UIKIT_EXTERN NSString *const UIWindowDidBecomeVisibleNotification; // nil
UIKIT_EXTERN NSString *const UIWindowDidBecomeHiddenNotification;  // nil
UIKIT_EXTERN NSString *const UIWindowDidBecomeKeyNotification;     // nil
UIKIT_EXTERN NSString *const UIWindowDidResignKeyNotification;     // nil
UIKIT_EXTERN NSString *const UIKeyboardWillShowNotification;
UIKIT_EXTERN NSString *const UIKeyboardDidShowNotification; 
UIKIT_EXTERN NSString *const UIKeyboardWillHideNotification; 
UIKIT_EXTERN NSString *const UIKeyboardDidHideNotification;
UIKIT_EXTERN NSString *const UIKeyboardWillChangeFrameNotification  NS_AVAILABLE_IOS(5_0);