//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveMTAudienceModel, NSArray, NSNumber, NSString;

@interface IESLiveMTAudienceListModel : MTLModel <MTLJSONSerializing>
{
    _Bool _hasMore;
    _Bool _isAnchorMENAT;
    _Bool _showBottomBar;
    NSArray *_audiences;
    NSArray *_bestAudiences;
    IESLiveMTAudienceModel *_selfInfo;
    NSString *_thisRoomWave;
    NSNumber *_totalWave;
    NSString *_currency;
    NSNumber *_isRich;
    long long _theRichCount;
    long long _theAudienceCount;
}

+ (id)selfInfoJSONTransformer;
+ (id)bestAudiencesJSONTransformer;
+ (id)audiencesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool showBottomBar; // @synthesize showBottomBar=_showBottomBar;
@property(nonatomic) _Bool isAnchorMENAT; // @synthesize isAnchorMENAT=_isAnchorMENAT;
@property(nonatomic) long long theAudienceCount; // @synthesize theAudienceCount=_theAudienceCount;
@property(nonatomic) long long theRichCount; // @synthesize theRichCount=_theRichCount;
@property(readonly, nonatomic) NSNumber *isRich; // @synthesize isRich=_isRich;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, nonatomic) NSNumber *totalWave; // @synthesize totalWave=_totalWave;
@property(readonly, copy, nonatomic) NSString *thisRoomWave; // @synthesize thisRoomWave=_thisRoomWave;
@property(readonly, nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(readonly, nonatomic) IESLiveMTAudienceModel *selfInfo; // @synthesize selfInfo=_selfInfo;
@property(retain, nonatomic) NSArray *bestAudiences; // @synthesize bestAudiences=_bestAudiences;
@property(retain, nonatomic) NSArray *audiences; // @synthesize audiences=_audiences;
- (void)calculateTheRich;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

