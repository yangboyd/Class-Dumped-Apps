//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSString, YTIDataSyncIdToken;

@interface YTIGaiaAuthenticatedIdentity : GPBMessage
{
}

+ (id)descriptor;
- (void)enumerateRegisteredGaiaServicesWithBlock:(CDUnknownBlockType)arg1;
- (id)yt_identityID;
- (id)yt_pageID;
- (_Bool)yt_isMadison;
- (_Bool)yt_isPersona;
- (_Bool)yt_isUnicornOver13InEu;
- (_Bool)yt_isUnicornChild;
- (_Bool)yt_isUnicornUnder13;

// Remaining properties
@property(copy, nonatomic) NSString *androidDeviceUserId; // @dynamic androidDeviceUserId;
@property(copy, nonatomic) NSString *clientIdentityId; // @dynamic clientIdentityId;
@property(retain, nonatomic) YTIDataSyncIdToken *datasyncIdToken; // @dynamic datasyncIdToken;
@property(copy, nonatomic) NSString *effectiveObfuscatedGaiaId; // @dynamic effectiveObfuscatedGaiaId;
@property(nonatomic) int gaiaDelegationType; // @dynamic gaiaDelegationType;
@property(nonatomic) _Bool hasAndroidDeviceUserId; // @dynamic hasAndroidDeviceUserId;
@property(nonatomic) _Bool hasClientIdentityId; // @dynamic hasClientIdentityId;
@property(nonatomic) _Bool hasDatasyncIdToken; // @dynamic hasDatasyncIdToken;
@property(nonatomic) _Bool hasEffectiveObfuscatedGaiaId; // @dynamic hasEffectiveObfuscatedGaiaId;
@property(nonatomic) _Bool hasGaiaDelegationType; // @dynamic hasGaiaDelegationType;
@property(nonatomic) _Bool hasOwnerObfuscatedGaiaId; // @dynamic hasOwnerObfuscatedGaiaId;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasVisitorData; // @dynamic hasVisitorData;
@property(copy, nonatomic) NSString *ownerObfuscatedGaiaId; // @dynamic ownerObfuscatedGaiaId;
@property(retain, nonatomic) GPBEnumArray *registeredGaiaServicesArray; // @dynamic registeredGaiaServicesArray;
@property(readonly, nonatomic) unsigned long long registeredGaiaServicesArray_Count; // @dynamic registeredGaiaServicesArray_Count;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *visitorData; // @dynamic visitorData;

@end

