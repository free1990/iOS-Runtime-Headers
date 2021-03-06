/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSObject<OS_xpc_object>, NSString;

@interface SSVShowDialogRequest : SSRequest <SSXPCCoding> {
    NSObject<OS_xpc_object> *_dialog;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSObject<OS_xpc_object> * encodedDialog;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)encodedDialog;
- (id)initWithEncodedDialog:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithDialogResponseBlock:(id)arg1;

@end
