//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBitmojiSelfieServices, SCServicesExposer, SCUserSessionScope;

@interface SCSnapcodeServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCServicesExposer *_snapcodeServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *snapcodeServicesExposer; // @synthesize snapcodeServicesExposer=_snapcodeServicesExposer;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_snapcodeImageProvider;
- (void)begin;

@end

