//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class UVSPClientContext, UVSPProductContext, UVSPSensitiveClientContext;

@interface UVSPEvent_SurveyAccepted : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) UVSPClientContext *clientContext; // @dynamic clientContext;
@property(nonatomic) _Bool hasClientContext; // @dynamic hasClientContext;
@property(nonatomic) _Bool hasProductContext; // @dynamic hasProductContext;
@property(nonatomic) _Bool hasSensitiveClientContext; // @dynamic hasSensitiveClientContext;
@property(retain, nonatomic) UVSPProductContext *productContext; // @dynamic productContext;
@property(retain, nonatomic) UVSPSensitiveClientContext *sensitiveClientContext; // @dynamic sensitiveClientContext;

@end

