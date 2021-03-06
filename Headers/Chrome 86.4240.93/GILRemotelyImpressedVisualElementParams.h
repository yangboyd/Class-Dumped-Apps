//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GILBaseVisualElementParams.h>

#import <ChromeInternal/GILRemoteImpressionParams-Protocol.h>
#import <ChromeInternal/GILRootParams-Protocol.h>
#import <ChromeInternal/GILVisualElementParams-Protocol.h>

@class LOGClickTrackingCGI, NSArray, NSDictionary, NSString;
@protocol GIPAccountID;

@interface GILRemotelyImpressedVisualElementParams : GILBaseVisualElementParams <GILVisualElementParams, GILRemoteImpressionParams, GILRootParams>
{
    id <GIPAccountID> _accountID;
    LOGClickTrackingCGI *_impressionIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) LOGClickTrackingCGI *impressionIdentifier; // @synthesize impressionIdentifier=_impressionIdentifier;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) int visualElementID;
@property(nonatomic) unsigned long long elementIndex;
- (void)addMetadata:(id)arg1;
- (id)initWithRemoteImpressionIdentifier:(id)arg1 accountID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *metadata;
@property(readonly, copy, nonatomic) NSDictionary *sideChannels;
@property(readonly) Class superclass;

@end

