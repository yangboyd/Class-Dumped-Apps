//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TINKKeysetHandle : NSObject
{
    unique_ptr_41b3093e _ccKeysetHandle;
}

+ (id)publicKeysetHandleWithHandle:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteFromKeychainWithName:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setCcKeysetHandle:(unique_ptr_41b3093e)arg1;
-     // Error parsing type: ^{KeysetHandle={Keyset=^^?{InternalMetadataWithArenaLite=^v}{RepeatedPtrField<google::crypto::tink::Keyset_Key>=^{Arena}ii^{Rep}}I{CachedSize={atomic<int>=Ai}}}}16@0:8, name: ccKeysetHandle
- (id)initWithKeyTemplate:(id)arg1 error:(id *)arg2;
- (_Bool)writeToKeychainWithName:(id)arg1 overwrite:(_Bool)arg2 error:(id *)arg3;
- (id)initFromKeychainWithName:(id)arg1 error:(id *)arg2;
- (id)initWithKeysetReader:(id)arg1 andKey:(id)arg2 error:(id *)arg3;
- (id)initWithNoSecretKeyset:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithCCKeysetHandle:(unique_ptr_41b3093e)arg1;

@end

