//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GHCHomeUiSuggestionsService;

@interface HMESuggestionsNetworkService : NSObject
{
    id <GHCHomeUiSuggestionsService> _ghcNetworkService;
}

@property(readonly, nonatomic) id <GHCHomeUiSuggestionsService> ghcNetworkService; // @synthesize ghcNetworkService=_ghcNetworkService;
- (void).cxx_destruct;
- (void)fetchSmartHomeSuggestionsForStructureID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithGHCNetworkService:(id)arg1;

@end

