//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AsyncOperation, NSString, WiFiNetwork;

@protocol _TtP47googlemac_iPhone_Home_Wifi_System_WifiInterface13WifiInterface_
- (AsyncOperation *)makeConnectToWifiNetworkOperationWithWifiNetwork:(WiFiNetwork *)arg1 joinOnce:(_Bool)arg2;
- (_Bool)isConnectedToSSID:(NSString *)arg1;
- (NSString *)currentBSSID;
- (NSString *)currentSSID;
@end

