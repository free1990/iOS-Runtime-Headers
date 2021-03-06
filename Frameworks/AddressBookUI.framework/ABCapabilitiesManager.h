/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableDictionary, NSString;

@interface ABCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate> {
    NSMutableDictionary *_destinationStatus;
    BOOL _isListeningToIDSQueryController;
    BOOL _isListeningToIDSServiceAvailability;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (void)_setDefaultCapabilitiesManager:(id)arg1;
+ (id)defaultCapabilitiesManager;

- (BOOL)_isAppAvailable:(id)arg1;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2;
- (id)conferenceURLForDestinationID:(id)arg1;
- (id)conferenceURLForPhoneNumber:(id)arg1;
- (void)dealloc;
- (BOOL)hasAdditionalTextTones;
- (BOOL)hasCameraCapability;
- (BOOL)hasCellularDataCapability;
- (BOOL)hasCellularTelephonyCapability;
- (BOOL)hasCellularTelephonyHardwareCapability;
- (BOOL)hasPreviouslyConferencedWithID:(id)arg1;
- (BOOL)hasSMSCapability;
- (BOOL)hasSiriCapability;
- (BOOL)hasTelephonyCapability;
- (BOOL)hasVibratorCapability;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (BOOL)isConferencingAvailable;
- (BOOL)isConferencingEverGonnaBeAvailable;
- (BOOL)isEmailConfigured;
- (BOOL)isFaceTimeAppAvailable;
- (BOOL)isFaceTimeAudioAvailable;
- (BOOL)isMMSConfigured;
- (BOOL)isMadridConfigured;
- (BOOL)isMailAppAvailable;
- (BOOL)isMessagesAppAvailable;
- (BOOL)isPhoneAppAvailable;
- (BOOL)isSensitiveUIAllowed;
- (BOOL)isTwitterServiceAvailable;
- (BOOL)isWeiboServiceAvailable;
- (void)removeIDSServiceAvailabilityListener:(id)arg1;

@end
