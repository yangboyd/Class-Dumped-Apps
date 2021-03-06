//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNFAssetResourceLoadingRequest, FNFDashFetchRange, FNFDashSelectionMetadata;

@interface FNFDashInflightMetadata : NSObject
{
    int _incompleteDataFinishCount;
    FNFDashFetchRange *_fetchRange;
    FNFAssetResourceLoadingRequest *_currentResourceLoaderRequest;
    FNFDashSelectionMetadata *_selectionMetadata;
    long long _receiveOffset;
}

- (void).cxx_destruct;
@property(nonatomic) long long receiveOffset; // @synthesize receiveOffset=_receiveOffset;
@property(nonatomic) int incompleteDataFinishCount; // @synthesize incompleteDataFinishCount=_incompleteDataFinishCount;
@property(readonly, nonatomic) FNFDashSelectionMetadata *selectionMetadata; // @synthesize selectionMetadata=_selectionMetadata;
@property(readonly, nonatomic) FNFAssetResourceLoadingRequest *currentResourceLoaderRequest; // @synthesize currentResourceLoaderRequest=_currentResourceLoaderRequest;
@property(readonly, nonatomic) FNFDashFetchRange *fetchRange; // @synthesize fetchRange=_fetchRange;
- (id)initWithFetchRange:(id)arg1 currentResourceLoaderRequest:(id)arg2 inflightSelection:(id)arg3;

@end

