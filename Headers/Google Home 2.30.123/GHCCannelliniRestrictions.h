//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCCommunicationsFilter, GHCMusicFilter, GHCSearchFilter, GHCThirdPartyAppsFilter, GHCVideoFilter;

@interface GHCCannelliniRestrictions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool canEditCannellini; // @dynamic canEditCannellini;
@property(retain, nonatomic) GHCCommunicationsFilter *communicationsFilter; // @dynamic communicationsFilter;
@property(nonatomic) _Bool hasCommunicationsFilter; // @dynamic hasCommunicationsFilter;
@property(nonatomic) _Bool hasMusicFilter; // @dynamic hasMusicFilter;
@property(nonatomic) _Bool hasSearchFilter; // @dynamic hasSearchFilter;
@property(nonatomic) _Bool hasThirdPartyAppsFilter; // @dynamic hasThirdPartyAppsFilter;
@property(nonatomic) _Bool hasVideoFilter; // @dynamic hasVideoFilter;
@property(retain, nonatomic) GHCMusicFilter *musicFilter; // @dynamic musicFilter;
@property(retain, nonatomic) GHCSearchFilter *searchFilter; // @dynamic searchFilter;
@property(retain, nonatomic) GHCThirdPartyAppsFilter *thirdPartyAppsFilter; // @dynamic thirdPartyAppsFilter;
@property(retain, nonatomic) GHCVideoFilter *videoFilter; // @dynamic videoFilter;

@end

