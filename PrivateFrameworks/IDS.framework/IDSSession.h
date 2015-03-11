/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class _IDSSession;

@interface IDSSession : NSObject {
    _IDSSession *_internal;
}

@property long long invitationTimeOut;
@property bool isAudioEnabled;
@property bool isMuted;
@property(readonly) unsigned int sessionEndedReason;
@property(readonly) int socket;

- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;
- (id)_internal;
- (void)acceptInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)cancelInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (void)endSession;
- (void)endSessionWithData:(id)arg1;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3;
- (long long)invitationTimeOut;
- (bool)isAudioEnabled;
- (bool)isMuted;
- (bool)sendData:(id)arg1 error:(id*)arg2;
- (void)sendInvitation;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(bool)arg2;
- (void)sendInvitationWithData:(id)arg1;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (unsigned int)sessionEndedReason;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setInvitationTimeOut:(long long)arg1;
- (void)setIsAudioEnabled:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (int)socket;
- (unsigned int)state;

@end