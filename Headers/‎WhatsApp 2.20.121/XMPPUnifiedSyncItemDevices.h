//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPUnifiedSyncItemBase.h"

@class NSNumber, NSString;

@interface XMPPUnifiedSyncItemDevices : XMPPUnifiedSyncItemBase
{
    NSString *_deviceJIDListHash;
    NSNumber *_timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *deviceJIDListHash; // @synthesize deviceJIDListHash=_deviceJIDListHash;
- (id)serialize;
- (id)initWithDeviceList:(id)arg1;

@end

