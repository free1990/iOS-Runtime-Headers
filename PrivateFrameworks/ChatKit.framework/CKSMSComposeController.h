/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;

@interface CKSMSComposeController : CKTranscriptController {
    BOOL _alreadySetUp;
    id _delegate;
    NSInteger _entryViewInvisible;
    BOOL _mimeType;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
}

@property id delegate;
@property BOOL mimeType;

+ (id)_newMediaObjectForFilename:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
+ (BOOL)acceptsMIMEType:(id)arg1;
+ (BOOL)canSendPhotos:(NSInteger)arg1 videos:(NSInteger)arg2 audioClips:(NSInteger)arg3;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;

- (void)_addPart:(id)arg1;
- (BOOL)_insertMediaObject:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (id)delegate;
- (BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (BOOL)mimeType;
- (void)send:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMimeType:(BOOL)arg1;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)transitionFromNewMessageToConversation;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end