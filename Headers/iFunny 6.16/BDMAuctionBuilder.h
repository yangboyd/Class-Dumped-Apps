//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDMPublisherInfo, BDMRequest, BDMUserRestrictions, GPBMessage, NSString;
@protocol BDMAuctionSettings, BDMPlacementRequestBuilder;

@interface BDMAuctionBuilder : NSObject
{
    _Bool _testMode;
    NSString *_sellerID;
    BDMRequest *_request;
    BDMPublisherInfo *_publisherInfo;
    BDMUserRestrictions *_restrictions;
    id <BDMAuctionSettings> _auctionSettings;
    id <BDMPlacementRequestBuilder> _placementBuilder;
}

@property(retain, nonatomic) id <BDMPlacementRequestBuilder> placementBuilder; // @synthesize placementBuilder=_placementBuilder;
@property(retain, nonatomic) id <BDMAuctionSettings> auctionSettings; // @synthesize auctionSettings=_auctionSettings;
@property(retain, nonatomic) BDMUserRestrictions *restrictions; // @synthesize restrictions=_restrictions;
@property(retain, nonatomic) BDMPublisherInfo *publisherInfo; // @synthesize publisherInfo=_publisherInfo;
@property(retain, nonatomic) BDMRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
@property(copy, nonatomic) NSString *sellerID; // @synthesize sellerID=_sellerID;
- (void).cxx_destruct;
- (id)adcomContextAppPublisherMessage;
- (id)adcomContextRegsMessage;
- (id)adcomContextUserMessage;
- (id)adcomContextDeviceMessage;
- (id)adcomContextAppMessage;
- (id)adcomContextMessage;
- (id)adcomPlacementMessage;
- (id)requestItemsMessage;
- (id)requestExtensionsMessage;
- (id)restrictOpenRtbMessage:(id)arg1 gdpr:(_Bool)arg2 coppa:(_Bool)arg3;
@property(readonly, nonatomic) GPBMessage *message;
- (CDUnknownBlockType)appendPublisherInfo;
- (CDUnknownBlockType)appendRestrictions;
- (CDUnknownBlockType)appendTestMode;
- (CDUnknownBlockType)appendPlacementBuilder;
- (CDUnknownBlockType)appendAuctionSettings;
- (CDUnknownBlockType)appendSellerID;
- (CDUnknownBlockType)appendRequest;

@end

