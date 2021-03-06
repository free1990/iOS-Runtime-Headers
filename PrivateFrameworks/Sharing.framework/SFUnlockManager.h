/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSObject<OS_dispatch_queue>;

@interface SFUnlockManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)sharedUnlockManager;

- (void)dealloc;
- (void)disableUnlockWithDevice:(id)arg1;
- (void)enableUnlockWithDevice:(id)arg1 fromKey:(BOOL)arg2 withPasscode:(id)arg3 completionHandler:(id)arg4;
- (void)establishStashBagWithCompletionHandler:(id)arg1;
- (id)init;
- (void)unlockEnabledWithDevice:(id)arg1 completionHandler:(id)arg2;
- (void)unlockStateForDevice:(id)arg1 completionHandler:(id)arg2;

@end
