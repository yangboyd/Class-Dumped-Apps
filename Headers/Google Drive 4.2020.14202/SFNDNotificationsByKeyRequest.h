//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GUNSRenderContext, GUNSSAppRegistrationPayload, NSMutableArray, NSString;

@interface SFNDNotificationsByKeyRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GUNSSAppRegistrationPayload *appRegistrationPayload; // @dynamic appRegistrationPayload;
@property(nonatomic) _Bool hasAppRegistrationPayload; // @dynamic hasAppRegistrationPayload;
@property(nonatomic) _Bool hasRenderContext; // @dynamic hasRenderContext;
@property(nonatomic) _Bool hasView; // @dynamic hasView;
@property(retain, nonatomic) NSMutableArray *keyArray; // @dynamic keyArray;
@property(readonly, nonatomic) unsigned long long keyArray_Count; // @dynamic keyArray_Count;
@property(retain, nonatomic) GUNSRenderContext *renderContext; // @dynamic renderContext;
@property(copy, nonatomic) NSString *view; // @dynamic view;

@end

