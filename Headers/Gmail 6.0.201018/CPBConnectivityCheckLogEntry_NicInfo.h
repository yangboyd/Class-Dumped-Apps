//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface CPBConnectivityCheckLogEntry_NicInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *HTTPArray; // @dynamic HTTPArray;
@property(readonly, nonatomic) unsigned long long HTTPArray_Count; // @dynamic HTTPArray_Count;
@property(retain, nonatomic) NSMutableArray *HTTPSArray; // @dynamic HTTPSArray;
@property(readonly, nonatomic) unsigned long long HTTPSArray_Count; // @dynamic HTTPSArray_Count;
@property(copy, nonatomic) NSString *externalIp; // @dynamic externalIp;
@property(nonatomic) _Bool hasExternalIp; // @dynamic hasExternalIp;
@property(nonatomic) _Bool hasLocalIp; // @dynamic hasLocalIp;
@property(nonatomic) _Bool hasMediaServerIp; // @dynamic hasMediaServerIp;
@property(nonatomic) _Bool hasProxyAuth; // @dynamic hasProxyAuth;
@property(nonatomic) _Bool hasProxyIp; // @dynamic hasProxyIp;
@property(nonatomic) _Bool hasProxyType; // @dynamic hasProxyType;
@property(nonatomic) _Bool hasStunServerIp; // @dynamic hasStunServerIp;
@property(copy, nonatomic) NSString *localIp; // @dynamic localIp;
@property(copy, nonatomic) NSString *mediaServerIp; // @dynamic mediaServerIp;
@property(nonatomic) int proxyAuth; // @dynamic proxyAuth;
@property(copy, nonatomic) NSString *proxyIp; // @dynamic proxyIp;
@property(nonatomic) int proxyType; // @dynamic proxyType;
@property(retain, nonatomic) NSMutableArray *ssltcpArray; // @dynamic ssltcpArray;
@property(readonly, nonatomic) unsigned long long ssltcpArray_Count; // @dynamic ssltcpArray_Count;
@property(retain, nonatomic) NSMutableArray *stunArray; // @dynamic stunArray;
@property(readonly, nonatomic) unsigned long long stunArray_Count; // @dynamic stunArray_Count;
@property(copy, nonatomic) NSString *stunServerIp; // @dynamic stunServerIp;
@property(retain, nonatomic) NSMutableArray *tcpArray; // @dynamic tcpArray;
@property(readonly, nonatomic) unsigned long long tcpArray_Count; // @dynamic tcpArray_Count;
@property(retain, nonatomic) NSMutableArray *udpArray; // @dynamic udpArray;
@property(readonly, nonatomic) unsigned long long udpArray_Count; // @dynamic udpArray_Count;

@end

