//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Localytics/LLSiloBase.h>

#import <Localytics/LLManifestConfigDelegate-Protocol.h>

@class LLIntervalUploader, LLProfileLogging, LLProfilesUploader, LLWeakDelegates, NSDateFormatter, NSString;
@protocol LLProfilesStorageProtocol;

@interface LLProfilesSilo : LLSiloBase <LLManifestConfigDelegate>
{
    _Bool _scopeProfilesToOrg;
    id <LLProfilesStorageProtocol> _storage;
    LLProfilesUploader *_networkHandler;
    LLProfileLogging *_logger;
    LLWeakDelegates *_delegates;
    LLIntervalUploader *_uploader;
    NSString *_appKey;
    NSString *_installId;
    NSDateFormatter *_profileDateFormatter;
}

+ (id)normalizeProfileValue:(id)arg1;
+ (_Bool)isValidProfileValueType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *profileDateFormatter; // @synthesize profileDateFormatter=_profileDateFormatter;
@property(readonly, copy, nonatomic) NSString *installId; // @synthesize installId=_installId;
@property(readonly, copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) LLIntervalUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) LLWeakDelegates *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) LLProfileLogging *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) LLProfilesUploader *networkHandler; // @synthesize networkHandler=_networkHandler;
@property(retain, nonatomic) id <LLProfilesStorageProtocol> storage; // @synthesize storage=_storage;
- (void)handleConfig:(id)arg1;
- (void)didDownloadManifestConfig:(id)arg1;
- (void)pauseDataUploading:(_Bool)arg1;
- (void)uploadWithCustomerIdFuture:(id)arg1;
- (id)sortAndStringify:(id)arg1;
- (_Bool)cacheProfileOperationIfValidForKey:(id)arg1 value:(id)arg2 andScope:(id)arg3;
- (void)test_clearProfileCacheForCustomerId:(id)arg1 withExistingCustomerId:(id)arg2;
- (void)clearProfileCacheForCustomerId:(id)arg1 withExistingCustomerId:(id)arg2;
- (void)setPrivacyOptedOut:(_Bool)arg1 withPreviousValue:(id)arg2;
- (void)clearProfileCache;
- (void)addProfileChange:(id)arg1 value:(id)arg2 forAttribute:(id)arg3 withScope:(long long)arg4 customerIdFuture:(id)arg5;
- (void)addProfileChange:(id)arg1 value:(id)arg2 forAttribute:(id)arg3 withScope:(long long)arg4 andOptInStatus:(id)arg5;
- (void)cancelCriticalTasks;
- (void)deleteProfileAttribute:(id)arg1 withScope:(long long)arg2;
- (void)incrementValueBy:(long long)arg1 forProfileAttribute:(id)arg2 withScope:(long long)arg3;
- (void)removeValues:(id)arg1 fromSetForProfileAttribute:(id)arg2 withScope:(long long)arg3;
- (void)addValues:(id)arg1 toSetForProfileAttribute:(id)arg2 withScope:(long long)arg3;
- (void)setValue:(id)arg1 forProfileAttribute:(id)arg2 withScope:(long long)arg3;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)prepare:(id)arg1 pauseUploading:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) _Bool scopeProfilesToOrg; // @synthesize scopeProfilesToOrg=_scopeProfilesToOrg;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

