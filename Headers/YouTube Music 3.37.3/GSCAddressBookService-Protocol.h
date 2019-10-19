//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise;

@protocol GSCAddressBookService <NSObject>
@property(readonly, nonatomic) unsigned long long personCount;
@property(readonly, nonatomic, getter=isAuthorized) _Bool authorized;
@property(readonly, nonatomic) unsigned long long authorizationStatus;
- (void)cleanupContactsCache;
- (GPCPromise *)promiseToRequestAddressBookAccess;
- (GPCPromise *)promiseToRequestContacts;
- (unsigned long long)sortOrder;

@optional
- (GPCPromise *)promiseToRequestContactsNeedsAffinityScore:(_Bool)arg1;
@end

