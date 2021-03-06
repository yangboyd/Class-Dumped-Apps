//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAStorage-Protocol.h"

@class MSAKeychainStorage, NSString;

@interface MSASmartStorageManager : NSObject <MSAStorage>
{
    MSAKeychainStorage *_sharedAccessGroupStorage;
    MSAKeychainStorage *_privateAccessGroupStorage;
}

- (void).cxx_destruct;
- (void)setPrivateAccessGroupStorage:(id)arg1;
- (id)privateAccessGroupStorage;
- (void)setSharedAccessGroupStorage:(id)arg1;
- (id)sharedAccessGroupStorage;
- (_Bool)readAllItemsForStorage:(out id *)arg1 error:(out id *)arg2;
- (_Bool)deleteItemAtKey:(id)arg1 error:(out id *)arg2;
- (_Bool)readItemAtKey:(id)arg1 item:(out id *)arg2 error:(out id *)arg3;
- (_Bool)addOrUpdateItemAtKey:(id)arg1 item:(id)arg2 error:(out id *)arg3;
- (id)initWithLabel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

