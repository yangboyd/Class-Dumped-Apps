//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VASVerizonSSPWaterfallItemMediation.h>

@class NSArray, NSString, VASVerizonSSPSuperAuctionBidder, VASVerizonSSPSuperAuctionDemandSource, VASVerizonSSPWaterfall;

@interface VASVerizonSSPWaterfallItemSuperAuction : VASVerizonSSPWaterfallItemMediation
{
    _Bool _superAuctionTimedOut;
    VASVerizonSSPWaterfall *_waterfall;
    VASVerizonSSPSuperAuctionBidder *_winningBidder;
    NSArray *_demandSources;
    VASVerizonSSPSuperAuctionDemandSource *_selectedDemandSource;
    NSArray *_bidders;
    NSString *_bidPrice;
    NSString *_winUrl;
}

+ (id)logger;
+ (void)load;
- (void).cxx_destruct;
@property _Bool superAuctionTimedOut; // @synthesize superAuctionTimedOut=_superAuctionTimedOut;
@property(retain, nonatomic) NSString *winUrl; // @synthesize winUrl=_winUrl;
@property(retain, nonatomic) NSString *bidPrice; // @synthesize bidPrice=_bidPrice;
@property(copy, nonatomic) NSArray *bidders; // @synthesize bidders=_bidders;
@property(retain, nonatomic) VASVerizonSSPSuperAuctionDemandSource *selectedDemandSource; // @synthesize selectedDemandSource=_selectedDemandSource;
@property(copy, nonatomic) NSArray *demandSources; // @synthesize demandSources=_demandSources;
@property(retain, nonatomic) VASVerizonSSPSuperAuctionBidder *winningBidder; // @synthesize winningBidder=_winningBidder;
@property(nonatomic) __weak VASVerizonSSPWaterfall *waterfall; // @synthesize waterfall=_waterfall;
- (id)description;
- (id)superAuctionWinningBid:(id)arg1;
- (id)createBid:(id)arg1;
- (id)fetchAdContentUsingAdSession:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1 waterfall:(id)arg2 vasAds:(id)arg3 HTTPURLResponse:(id)arg4;
- (id)initWithItemId:(id)arg1 networkId:(id)arg2 placementId:(id)arg3 siteId:(id)arg4 spaceId:(id)arg5 bidders:(id)arg6 demandSources:(id)arg7 waterfall:(id)arg8 enhancedAdControl:(_Bool)arg9 adSize:(id)arg10;

@end

