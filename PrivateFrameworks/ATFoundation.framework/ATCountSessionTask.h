/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class NSObject<OS_dispatch_source>;

@interface ATCountSessionTask : ATSessionTask {
    unsigned int _count;
    unsigned int _maxCount;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (id)initWithMaximumCount:(unsigned int)arg1;
- (void)start;

@end
