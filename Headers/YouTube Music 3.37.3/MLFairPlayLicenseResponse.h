//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLLicenseResponse-Protocol.h"

@class NSData, NSString;

@interface MLFairPlayLicenseResponse : NSObject <MLLicenseResponse>
{
    NSData *_keyData;
    NSData *_nextFairPlayKeyID;
}

@property(readonly, nonatomic) NSData *nextFairPlayKeyID; // @synthesize nextFairPlayKeyID=_nextFairPlayKeyID;
@property(readonly, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
- (void).cxx_destruct;
- (id)initWithKeyData:(id)arg1 nextKeyID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

