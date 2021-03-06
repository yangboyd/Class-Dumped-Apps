//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WASignalKeyStore;
@protocol WASignalCoordinatorDelegate;

@interface WASignalCoordinator : NSObject
{
    struct signal_context *_signal_global_context;
    struct signal_protocol_store_context *_signal_store_context;
    WASignalKeyStore *_keyStore;
    struct __WESContext *_wesContext;
    id <WASignalCoordinatorDelegate> _delegate;
}

+ (struct signal_context *)createGlobalContext;
+ (id)rawKeyDataFromSerializedSignalKeyData:(id)arg1;
+ (id)rawKeyDataFromSerializedSignalKeyBuffer:(struct signal_buffer *)arg1;
+ (_Bool)validateSignatureForKeyBundle:(id)arg1;
+ (int)signalPublicKey:(out struct ec_public_key **)arg1 fromKeyData:(id)arg2 withKeyType:(unsigned char)arg3 context:(struct signal_context *)arg4;
+ (unsigned int)generateSignedPreKeyID;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WASignalCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWithCurrentDeviceJID:(id)arg1;
- (void)performSignalKeyStoreCheckpointWithDispatchGroup:(id)arg1 timeout:(double)arg2 force:(_Bool)arg3;
- (struct signal_protocol_store_context *)createAndSetupStoreContextFromGlobalContext:(struct signal_context *)arg1 withKeyStore:(id)arg2;
- (id)signDataWithIdentityPrivateKey:(id)arg1;
- (int)fetchSignedPrekeyId:(out unsigned int *)arg1 keyData:(out id *)arg2 signatureData:(out id *)arg3;
- (id)fetchIdentityPublicKey;
- (id)fetchLocalKeyBundle;
- (void)dealloc;
- (struct __WESContext *)wesContext;
- (id)keyStore;
- (struct signal_protocol_store_context *)signal_store_context;
- (struct signal_context *)signal_global_context;
@property(readonly, nonatomic) _Bool localKeysAvailable;
- (id)initWithKeyStore:(id)arg1;
- (id)wamsysPublicIdentityKeyFromPrekeyCipherTextMessage:(id)arg1;
- (id)publicIdentityKeyFromPrekeyCipherTextMessage:(id)arg1;
- (_Bool)processPreKeyBundleUsingWES:(id)arg1 forSignalAddress:(id)arg2 error:(out id *)arg3;
- (_Bool)storeIdentityPublicKey:(id)arg1 forDeviceJID:(id)arg2;
- (_Bool)wamsysStoreIdentityPublicKey:(id)arg1 forDeviceJID:(id)arg2;
- (_Bool)processPreKeyBundle:(id)arg1 forSignalAddress:(id)arg2 error:(out id *)arg3;
- (_Bool)wamsysProcessSenderKeyDistributionMessageData:(id)arg1 forSignalAddress:(id)arg2 error:(out id *)arg3;
- (_Bool)processSenderKeyDistributionMessageData:(id)arg1 forSignalAddress:(id)arg2 error:(out id *)arg3;
- (_Bool)wamsysDecryptCiphertextData:(id)arg1 withCiphertextType:(unsigned long long)arg2 forSignalAddress:(id)arg3 unpadPkcs7:(unsigned char)arg4 plaintextData:(out id *)arg5 error:(out id *)arg6;
- (int)decryptSenderKeyCiphertextData:(id)arg1 forSignalAddress:(id)arg2 plaintextData:(out id *)arg3;
- (int)decryptRegularCiphertextData:(id)arg1 forSignalAddress:(id)arg2 plaintextData:(out id *)arg3;
- (int)decryptPreKeyCiphertextData:(id)arg1 forSignalAddress:(id)arg2 plaintextData:(out id *)arg3;
- (_Bool)decryptCiphertextData:(id)arg1 withCiphertextType:(unsigned long long)arg2 forSignalAddress:(id)arg3 unpadPkcs7:(_Bool)arg4 plaintextData:(out id *)arg5 error:(out id *)arg6;
- (_Bool)wamsysEncryptPlaintextData:(id)arg1 forSignalAddress:(id)arg2 fastRatchet:(_Bool)arg3 ciphertextData:(out id *)arg4 ciphertextType:(out unsigned long long *)arg5 error:(out id *)arg6;
- (int)encryptForIndividualAddress:(id)arg1 plaintextData:(id)arg2 ciphertextData:(out id *)arg3 ciphertextType:(out unsigned long long *)arg4;
- (int)encryptForGroupAddress:(id)arg1 plaintextData:(id)arg2 ciphertextData:(out id *)arg3 ciphertextType:(out unsigned long long *)arg4;
- (_Bool)encryptPlaintextData:(id)arg1 forSignalAddress:(id)arg2 fastRatchet:(_Bool)arg3 maxPkcs7PaddingLength:(unsigned char)arg4 ciphertextData:(out id *)arg5 ciphertextType:(out unsigned long long *)arg6 error:(out id *)arg7;
- (_Bool)wamsysGetSenderKeyDistributionMessageData:(out id *)arg1 forSignalAddress:(id)arg2 didCreateNewSenderKey:(out _Bool *)arg3 error:(out id *)arg4;
- (_Bool)senderKeyDistributionMessageData:(out id *)arg1 forSignalAddress:(id)arg2 didCreateNewSenderKey:(out _Bool *)arg3 error:(out id *)arg4;
- (_Bool)hasOutgoingSenderKeyStateForSignalAddress:(id)arg1;
- (_Bool)wamsysGetFastRatchetSenderKeyDistributionMessageData:(out id *)arg1 forSignalAddress:(id)arg2 didCreateNewSenderKey:(out _Bool *)arg3 error:(out id *)arg4;
- (_Bool)wamsysFastRatchetProcessSenderKeyDistributionMessageData:(id)arg1 forSignalAddress:(id)arg2 error:(out id *)arg3;
- (_Bool)hasOutgoingFastRatchetSenderKeyStateForSignalAddress:(id)arg1;
- (_Bool)fastRatchetProcessSenderKeyDistributionMessageData:(id)arg1 forSignalAddress:(id)arg2 error:(out id *)arg3;
- (_Bool)fastRatchetSenderKeyDistributionMessageData:(out id *)arg1 forSignalAddress:(id)arg2 didCreateNewSenderKey:(out _Bool *)arg3 error:(out id *)arg4;
- (int)fastRatchetEncryptForGroupAddress:(id)arg1 plaintextData:(id)arg2 ciphertextData:(out id *)arg3 ciphertextType:(out unsigned long long *)arg4;
- (int)fastRatchetDecryptSenderKeyCiphertextData:(id)arg1 forSignalAddress:(id)arg2 plaintextData:(out id *)arg3;
- (_Bool)generateFingerprintWithLocalCompanionIdentityKeys:(id)arg1 serializedRemoteIdentityKeys:(id)arg2 localStableIdentifier:(id)arg3 remoteStableIdentifier:(id)arg4 signalFingerprint:(out id *)arg5 error:(out id *)arg6;
- (_Bool)generateFingerprintWithLocalCompanionIdentityKeysWaMsys:(id)arg1 serializedRemoteIdentityKeys:(id)arg2 localStableIdentifier:(id)arg3 remoteStableIdentifier:(id)arg4 signalFingerprint:(out id *)arg5 error:(out id *)arg6;
- (const struct MCFArrayRef_WESCurvePublicKey *)bridgeIdentityKeysForWaMsys:(id)arg1 isSerialized:(_Bool)arg2;
- (_Bool)generateFingerprintWithLocalCompanionIdentityKeysOriginal:(id)arg1 serializedRemoteIdentityKeys:(id)arg2 localStableIdentifier:(id)arg3 remoteStableIdentifier:(id)arg4 signalFingerprint:(out id *)arg5 error:(out id *)arg6;
- (id)prekeyForSerializedRecord:(id)arg1;
- (_Bool)setIdentityKeyPair:(struct ratchet_identity_key_pair *)arg1 signedPreKey:(struct session_signed_pre_key *)arg2 registrationID:(unsigned int)arg3;
- (_Bool)createAndSaveIdentity;
- (struct _NSRange)createAndStorePreKeysWithIdRange:(struct _NSRange)arg1;
- (_Bool)wamsysRegenerateKeyStore;
- (_Bool)wamsysTrickleGenerate:(unsigned long long)arg1;
- (id)wamsysFetchUnsentPrekeys:(unsigned long long)arg1;
- (_Bool)trickleGeneratePrekeysIfNecessaryWithDesiredCount:(unsigned long long)arg1;
- (id)fetchUnsentPrekeys:(unsigned long long)arg1;
- (_Bool)digestCheckForPrekeyIds:(id)arg1 againstHash:(id)arg2 withLocalKeyBundleForHashInit:(id)arg3;
- (_Bool)regenerateKeyStore;
- (_Bool)fetchRegistrationId:(out id *)arg1 forDeviceJID:(id)arg2 error:(out id *)arg3;
- (_Bool)fetchSessionBaseKeyData:(out id *)arg1 forDeviceJID:(id)arg2 error:(out id *)arg3;
- (void)removeSessionForDeviceJID:(id)arg1 shouldClearIdentity:(_Bool)arg2;
- (_Bool)wamsysSaveSerializedSignedPrekey:(id)arg1 error:(out id *)arg2;
- (_Bool)wamsysCreateNewSignedPrekey:(out id *)arg1 signature:(out id *)arg2 serializedSignedPrekey:(out id *)arg3 error:(out id *)arg4;
- (_Bool)saveSerializedSignedPrekey:(id)arg1 error:(out id *)arg2;
- (_Bool)createNewSignedPrekey:(out id *)arg1 signature:(out id *)arg2 serializedSignedPrekey:(out id *)arg3 error:(out id *)arg4;

@end

