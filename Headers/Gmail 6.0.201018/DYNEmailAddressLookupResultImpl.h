//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNEmailAddressLookupResult-Protocol.h"

@class NSDictionary, NSSet;

@interface DYNEmailAddressLookupResultImpl : NSObject <DYNEmailAddressLookupResult>
{
    NSDictionary *_resolvedUsersByEmailAddress;
    NSSet *_emailAddressesNotFound;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSSet *emailAddressesNotFound;
@property(readonly, nonatomic) NSDictionary *resolvedUsersByEmailAddress;
- (id)initWithResolvedUsers:(id)arg1 emailAddressesNotFound:(id)arg2;

@end

