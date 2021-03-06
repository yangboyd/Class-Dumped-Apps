//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSNumber;

@interface XMPPDeviceList : NSObject
{
    NSArray *_devices;
    NSNumber *_timestamp;
    NSData *_signedKeyIndexListData;
}

+ (id)fromDevicesElement:(id)arg1 userJID:(id)arg2;
+ (id)fromDeviceListChild:(id)arg1 userJID:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *signedKeyIndexListData; // @synthesize signedKeyIndexListData=_signedKeyIndexListData;
@property(readonly, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (id)initWithDevices:(id)arg1 timestamp:(id)arg2 signedKeyIndexListData:(id)arg3;

@end

