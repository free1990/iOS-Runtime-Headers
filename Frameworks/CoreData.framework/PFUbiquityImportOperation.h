/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSObject, NSLock;

@interface PFUbiquityImportOperation : NSOperation  {
    NSLock *_delegateLock;
    BOOL _lockedDelegateLock;
    NSObject *_delegate;
}

@property NSObject * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)unlockDelegateLock;
- (void)lockDelegateLock;
- (id)retainedDelegate;

@end