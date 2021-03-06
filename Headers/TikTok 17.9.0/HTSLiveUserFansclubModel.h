//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class HTSLiveUserFansclubDataModel, HTSLiveUserFansclubPreferDataModel, NSString;

@interface HTSLiveUserFansclubModel : MTLModel <MTLJSONSerializing>
{
    HTSLiveUserFansclubPreferDataModel *_preferential;
    HTSLiveUserFansclubDataModel *_data;
}

+ (id)preferentialJSONTransformer;
+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) HTSLiveUserFansclubDataModel *data; // @synthesize data=_data;
@property(retain, nonatomic) HTSLiveUserFansclubPreferDataModel *preferential; // @synthesize preferential=_preferential;
- (id)mapToPbModel;
- (id)currentRoomData;
- (id)preferData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

