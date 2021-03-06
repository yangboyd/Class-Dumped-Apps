//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJ2WifiScanResult.h"

#import "NSCopying-Protocol.h"

@class NSString, WJ2WifiConfiguration;

@interface WJ2AvailableNetwork : WJ2WifiScanResult <NSCopying>
{
    _Bool _hasConfiguration;
    _Bool _isHiddenNetwork;
    _Bool _isPreferredNetwork;
    int _networkPriority;
    NSString *_wepKey;
    NSString *_psk;
    WJ2WifiConfiguration *_wifiConfiguration;
    WJ2WifiScanResult *_wifiScanResult;
}

@property(retain, nonatomic) WJ2WifiScanResult *wifiScanResult; // @synthesize wifiScanResult=_wifiScanResult;
@property(retain, nonatomic) WJ2WifiConfiguration *wifiConfiguration; // @synthesize wifiConfiguration=_wifiConfiguration;
@property(retain, nonatomic) NSString *psk; // @synthesize psk=_psk;
@property(retain, nonatomic) NSString *wepKey; // @synthesize wepKey=_wepKey;
@property(nonatomic) _Bool isPreferredNetwork; // @synthesize isPreferredNetwork=_isPreferredNetwork;
@property(nonatomic) _Bool isHiddenNetwork; // @synthesize isHiddenNetwork=_isHiddenNetwork;
@property(nonatomic) int networkPriority; // @synthesize networkPriority=_networkPriority;
@property(nonatomic) _Bool hasConfiguration; // @synthesize hasConfiguration=_hasConfiguration;
- (void).cxx_destruct;
- (id)getConfiguration;
@property(nonatomic) long long wifiKeyManagement; // @dynamic wifiKeyManagement;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) int signalStrength; // @dynamic signalStrength;
@property(nonatomic) int frequencyBand; // @dynamic frequencyBand;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScanResult:(id)arg1 andWifiConfiguration:(id)arg2;

@end

