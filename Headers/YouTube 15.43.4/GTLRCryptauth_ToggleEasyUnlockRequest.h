//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GTLRObject.h>

@class GTLRCryptauth_DeviceClassifier, NSNumber, NSString;

@interface GTLRCryptauth_ToggleEasyUnlockRequest : GTLRObject
{
}


// Remaining properties
@property(retain, nonatomic) NSNumber *applyToAll; // @dynamic applyToAll;
@property(retain, nonatomic) GTLRCryptauth_DeviceClassifier *deviceClassifier; // @dynamic deviceClassifier;
@property(retain, nonatomic) NSNumber *enable; // @dynamic enable;
@property(copy, nonatomic) NSString *feature; // @dynamic feature;
@property(retain, nonatomic) NSNumber *isExclusive; // @dynamic isExclusive;
@property(copy, nonatomic) NSString *publicKey; // @dynamic publicKey;
@end

