//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class BTLChangeStatusInfo;

@interface BTLSyncHealth : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) BTLChangeStatusInfo *changeStatusInfo; // @dynamic changeStatusInfo;
@property(nonatomic) _Bool hasChangeStatusInfo; // @dynamic hasChangeStatusInfo;
@property(nonatomic) _Bool hasStatusCode; // @dynamic hasStatusCode;
@property(nonatomic) int statusCode; // @dynamic statusCode;

@end

